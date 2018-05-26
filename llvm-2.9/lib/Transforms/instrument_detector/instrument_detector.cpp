#include "instrument_detector.h"

static cl::opt<string> cl_select_set_file_name("select_set_file", cl::desc("Specify the file of selected sets"), cl::value_desc("file name"));
static cl::opt<double> cl_dynamic_instruction_ratio("dyn_bound", cl::desc("Specify the dynamic instruction ratio bound"), cl::value_desc("ratio value"));
static cl::opt<bool> cl_debug_info("debug_info", cl::desc("Specify if we want debug information"), cl::value_desc("debug option"));
static cl::opt<bool> cl_change_call_conv("change_CallingCov", cl::desc("Just change the calling covention to Fast, nothing else"), cl::value_desc("option"));

using namespace llvm;

namespace InstrumentDetector_ns{
	bool InstrumentDetector::runOnModule(Module &M)
	{
		if(cl_change_call_conv == true)
		{
			dbgs()<<"change calling cov mode \n";
			Function* checker_handler = M.getFunction("checker_external");
			if(checker_handler == NULL)
			{
				errs()<<"checker_external() not found, do instrument first!\n";
				exit(1);
			}
			checker_handler->setCallingConv(CallingConv::Fast);
			return false;
		}
		else
		{
			//test required files and do initialization
			doInitialization(M);
	
			//Read the select set file
			if(cl_dynamic_instruction_ratio != 1.0)
			{
				readSelectSet();
			}
			else
			{
				addAllInst();
			}
	
			//get the map from inst_id to instruction
			getMaps();
	
			//instrument the selected instructions
			for(vector<int>::iterator VI = selected_insts.begin(); VI!=selected_insts.end(); VI++)
			{
				int inst_id = *VI;
				Instruction* inst = map_instID_to_inst[inst_id];
				errs()<<"Instrumenting\ninst_id:"<<inst_id<<"\n"<<*inst<<"\n";
				if(cl_debug_info == true)
					dbgs()<<"Instrumenting\ninst_id:"<<inst_id<<"\n"<<*inst<<"\n";

				//JUSTIN
				if(inst->getOpcode()<=7 || inst->getOpcode()==26 || inst->getOpcode()==28 || inst->getOpcode()>=45) continue;

				instrumentThisInstruction(inst);
			}

			connectFragments();
			connectFragments();
			//connectFragments();
			//connectFragments();

			//handle the unused duplicated insts
			handleNotUsedDuplicatedInsts();

			combineExtendedChecks();

			constructCheckerFunc();
			removeRedundentBitCast();
	
			//insert calls to check_flag
			for(Module::iterator FI = M.begin(); FI!=M.end(); FI++)
			{
				if(FI->getName() == "checker_internal")
					continue;
				for(inst_iterator II = inst_begin(&*FI); II != inst_end(&*FI); II++)
				{
					if(isa<TerminatorInst>(&*II))
					{
						//insertCalltoCheckFlag(&*II);
					}
					else if(isa<CallInst>(&*II))
					{
						CallInst* CI = dyn_cast<CallInst>(&*II);
						Function* called_f = CI->getCalledFunction();
						if(called_f != NULL && called_f->getName() == "exit")
						{
							//insertCalltoCheckFlag(&*II);
						}
						else if(called_f != NULL 
							&& called_f->getName() != "checker_external" 
							&& called_f->getName() != "check_flag" 
							&& called_f->getName() != "checker_internal")
						{
							//insertCalltoCheckFlag(&*II);
						}
					}
					else if(isa<StoreInst>(&*II))
					{
						//insertCalltoCheckFlag(&*II);
					}
					else if(isa<InvokeInst>(&*II))
					{
						//insertCalltoCheckFlag(&*II);
					}
				}
			}
			return false;
		}
		
	}

	void InstrumentDetector::doInitialization(Module &M)
	{
		this->app_module = &M;
		//test if it is indexed
		if(!M.getNamedMetadata("Indexed"))
		{
			errs()<<"\nERROR: Index flag not found! Do indexing first.\n";
			//exit(1);
		}
		if(cl_debug_info == true)
			dbgs()<<"Index testing passed\n";

		//test if selected set file exists
		if(!fopen(cl_select_set_file_name.c_str(), "r"))
		{
			errs()<<"\nERROR: " << cl_select_set_file_name.c_str() << " isn't found! Do profiling first.\n";
			exit(1);
		}
		if(cl_debug_info == true)
			dbgs()<<"Select set file found (test passed)\n";
	}

	void InstrumentDetector::addAllInst()
	{
		for(Module::iterator FI = app_module->begin(); FI!=app_module->end(); FI++)
		{
			for(inst_iterator II = inst_begin(&*FI); II != inst_end(&*FI); II++)
			{
				if(II->getMetadata("llfi_index") == NULL)
					continue;
				int inst_id = dyn_cast<ConstantInt>(II->getMetadata("llfi_index")->getOperand(0))->getSExtValue();
				selected_insts.push_back(inst_id);
			}
		}
		std::sort(selected_insts.begin(), selected_insts.end());
		if(cl_debug_info == true)
			dbgs()<<"\nStatic instructions selected: "<<selected_insts.size() <<"\n";
	}

	void InstrumentDetector::readSelectSet()
	{
		ifstream select_set_file;
		double ratio_bound = cl_dynamic_instruction_ratio;
		select_set_file.open(cl_select_set_file_name.c_str());
		if(!select_set_file.is_open())
		{
			errs()<<"\nERROR: can not open select_set_file!\n";
			exit(1);
		}

		while(select_set_file.good())
		{
			string line;
			getline(select_set_file, line);
			if(line.empty())	continue;
			else if((line.find("BOUND:") < line.length()))
			{
				//Found ratio bound line
				double this_bound = atof(line.substr(line.find("\t"), line.length()).c_str());
				if(this_bound == ratio_bound)
				{
					//Found the ratio section we want!
					if(cl_debug_info == true)
						dbgs()<<"FOUND BOUND:"<<this_bound<<"\n";
					getline(select_set_file, line);
					while(!(line.find("END") < line.length()))
					{
						int inst_id = atoi(line.c_str());
						selected_insts.push_back(inst_id);
						getline(select_set_file, line);
					}
					continue;
				}
				else
					continue;
			}
			else
				continue;
		}
		std::sort(selected_insts.begin(), selected_insts.end());
		if(cl_debug_info == true)
			dbgs()<<"\nStatic instructions selected: "<<selected_insts.size() <<"\n";
	}

	void InstrumentDetector::getMaps()
	{
		for(Module::iterator FI = app_module->begin(), FE = app_module->end();
			FI!=FE; FI++)
		{
			for(inst_iterator II = inst_begin(&*FI), IE = inst_end(&*FI);
				II!=IE; II++)
			{
				if(II->getMetadata("llfi_index") == NULL)
					continue;
				int inst_id = dyn_cast<ConstantInt>(II->getMetadata("llfi_index")->getOperand(0))->getSExtValue();
				map_instID_to_inst[inst_id] = &*II;
				map_inst_to_instID[&*II] = inst_id;
			}
		}
		if(cl_debug_info == true)
			dbgs()<<"Total static instructions: "<< map_inst_to_instID.size() <<"\n";
	}

	void InstrumentDetector::instrumentThisInstruction(Instruction* inst)
	{
		//Some types of instruction should not be duplicated!
		if(    unduplicatableCall(inst)
			|| isa<AllocaInst>(inst)
			|| hasUndefValue(inst)
			//|| isa<LoadInst>(inst)
			|| isa<InvokeInst>(inst)
			|| inst->getType()->isVoidTy()
			|| isa<StoreInst>(inst)
			//|| isa<CmpInst>(inst)
			)
		{
			if(cl_debug_info == true)
				dbgs()<<"Found one instruction should not be duplicated:\n" << *inst << "\n";
			return;
		}

		if(map_duplicated_insts.count(inst) != 0)
		{
			//this inst has already been duplicated
			if(cl_debug_info == true)
				dbgs()<<"Found one instruction has already been duplicated:\n" << *inst << "\n";
			return;
		}

		//LLVMContext& context = app_module->getContext();

		int inst_id = dyn_cast<ConstantInt>(inst->getMetadata("llfi_index")->getOperand(0))->getSExtValue();

		Instruction* duplicated_inst = inst->clone();
		for(unsigned int i = 0; i < duplicated_inst->getNumOperands(); i++)
		{
			if(//isa<Instruction>(duplicated_inst->getOperand(i)) && 
				map_duplicated_insts.count(dyn_cast<Instruction>(duplicated_inst->getOperand(i))) != 0)
			{
				duplicated_inst->setOperand(i, map_duplicated_insts[ dyn_cast<Instruction>(duplicated_inst->getOperand(i)) ]);
				//if(isa<PHINode>(duplicated_inst) != false)	errs()<<"FOUND PHINODE:"<<*duplicated_inst<<"\n";
			}
		}
		if(duplicated_inst->getMetadata("llfi_index") != NULL)
			duplicated_inst->setMetadata("llfi_index", NULL);
		map_duplicated_insts[inst] = duplicated_inst;

		BasicBlock::iterator i = inst;
		do
		{
			i++;
		}while(isa<PHINode>(i));
		Instruction* next_inst = NULL;
		if(isa<PHINode>(inst) || isa<LoadInst>(inst))
			next_inst = dyn_cast<Instruction>(i);
		else
			next_inst = dyn_cast<Instruction>(i);
		if(next_inst == NULL)
		{
			errs()<<"Can't find next instruction, current inst is actually the end inst in the BB\n";
			errs()<<*inst<<"\n";
			exit(1);
		}
		if(cl_debug_info == true)
		{
			dbgs()<<"next_inst (insert point): " << *next_inst << "\n";
		}
		char str[15];
		sprintf(str, "%d", inst_id);
		
		duplicated_inst->setName(name_prefix + string(str));
		duplicated_inst->insertBefore(next_inst);
		if(cl_debug_info == true)
			dbgs() << "Duplicate inst:" << *duplicated_inst << "\n";

		/*if(used_in_Store(inst) 
			|| used_in_Ret(inst) 
			//|| used_in_Load(inst) 
			//|| used_in_Br(inst)
			)
		{
			CmpInst* check_cmp = NULL;
			if(duplicated_inst->getType()->isFloatingPointTy())
			{
				// the instruction is float point type CmpInst::FCMP_OEQ
				check_cmp = CmpInst::Create(Instruction::FCmp, CmpInst::CmpInst::FCMP_UEQ, inst, duplicated_inst, "check_cmp", next_inst);
			}
			else
			{
				// the instruction is not float point type
				check_cmp = CmpInst::Create(Instruction::ICmp, CmpInst::ICMP_EQ, inst, duplicated_inst, "check_cmp", next_inst);
			}
			
			//We still need to cast the cmp result -_- because _Bool is actually a char...
			ZExtInst* extended_check_cmp = new ZExtInst::ZExtInst(check_cmp, Type::getInt32Ty(context), "extended_check_cmp", next_inst);
	
			//insert the function call
			Function* checker_handler = this->app_module->getFunction("checker_external");
			if(checker_handler == NULL)
			{
				//we need to declare it
				vector<const Type*> checker_arg_types(2);
				checker_arg_types[0] = Type::getInt32Ty(context);
				checker_arg_types[1] = Type::getInt32Ty(context);
				FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), checker_arg_types, false);
				Constant* checker_handler_c = app_module->getOrInsertFunction("checker_external", checker_type);
				checker_handler = dyn_cast<Function>(checker_handler_c);
			}
			
			vector<Value*> checker_args(2);
			if(cl_debug_info == true)
				dbgs()<<"extended_check_cmp:"<<*extended_check_cmp<<"\n";
			checker_args[0] = extended_check_cmp;
			checker_args[1] =  ConstantInt::get(Type::getInt32Ty(context),inst_id);
			if(cl_debug_info == true)
				dbgs()<<"checker_handler"<<checker_handler->getName()<<"\n";
			CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", next_inst);
			
		}*/
	}

	void InstrumentDetector::handleNotUsedDuplicatedInsts()
	{
		LLVMContext& context = app_module->getContext();
		for(map<Instruction*, Instruction*>::iterator MI = map_duplicated_insts.begin(); 
			MI != map_duplicated_insts.end(); MI++)
		{
			Instruction* original_inst = MI->first;
			Instruction* duplicated_inst = MI->second;
			if(//duplicated_inst->getNumUses() == 0 
				duplicated_inst->getNumUses() != original_inst->getNumUses()
				/*&&(used_in_Store(original_inst) 
				|| used_in_Ret(original_inst)
				|| used_in_Load(original_inst) 
				|| used_in_Br(original_inst))*/
				)
			{
				//we should insert checker here for the duplicated instruction
				BasicBlock::iterator i = duplicated_inst;
				do
				{
					i++;
				}while(isa<PHINode>(i));
				Instruction* next_inst = dyn_cast<Instruction>(i);

				if(cl_debug_info == true)
					dbgs()<<"check_cmp insertion point:"<<*next_inst<<"\n";
				//try if we can find a better place for inserting this check point
				// it seems like not a good idea
				next_inst = findPlaceforCheckPointStore(next_inst, original_inst);

				CmpInst* check_cmp = NULL;
				if(duplicated_inst->getType()->isFloatingPointTy())
				{
					// the instruction is float point type CmpInst::FCMP_OEQ
					check_cmp = CmpInst::Create(Instruction::FCmp, CmpInst::CmpInst::FCMP_UEQ, original_inst, duplicated_inst, "check_cmp", next_inst);
				}
				else
				{
					// the instruction is not float point type
					check_cmp = CmpInst::Create(Instruction::ICmp, CmpInst::ICMP_EQ, original_inst, duplicated_inst, "check_cmp", next_inst);
				}

				//We try if we can find a better place to insert the external checker
				//This is important for optimization!
				Instruction* check_cmp_inst = dyn_cast<Instruction>(check_cmp);
				next_inst = findPlaceforCheckPointCmp(next_inst, original_inst, &check_cmp_inst);

				if(cl_debug_info == true)
					dbgs()<<"extended_check_cmp insertion point:"<<*next_inst<<"\n";

				//We still need to cast the cmp result -_- because _Bool is actually a char...
				// BitCastInst* extended_check_cmp = new BitCastInst::BitCastInst(check_cmp_inst, Type::getInt1Ty(context), "extended_check_cmp", next_inst);
				new BitCastInst(check_cmp_inst, Type::getInt1Ty(context), "extended_check_cmp", next_inst);
		
				//We move the following part to another place
				//insert the function call
				// Function* checker_handler = this->app_module->getFunction("checker_external");
				// if(checker_handler == NULL)
				// {
				// 	//we need to declare it
				// 	vector<const Type*> checker_arg_types(2);
				// 	checker_arg_types[0] = Type::getInt32Ty(context);
				// 	checker_arg_types[1] = Type::getInt32Ty(context);
				// 	FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), checker_arg_types, false);
				// 	Constant* checker_handler_c = app_module->getOrInsertFunction("checker_external", checker_type);
				// 	checker_handler = dyn_cast<Function>(checker_handler_c);
				// }
				
				// vector<Value*> checker_args(2);
				// if(cl_debug_info == true)
				// 	dbgs()<<"extended_check_cmp:"<<*extended_check_cmp<<"\n";
				// checker_args[0] = extended_check_cmp;
				// int inst_id = map_inst_to_instID[original_inst];
				// checker_args[1] =  ConstantInt::get(Type::getInt32Ty(context),inst_id);
				// if(cl_debug_info == true)
				// 	dbgs()<<"checker_handler"<<checker_handler->getName()<<"\n";
				// CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", next_inst);
			}
		}
	}

	void InstrumentDetector::removeRedundentBitCast()
	{
		LLVMContext& context = app_module->getContext();
		list<BitCastInst*> extended_cmps;
		for(Module::iterator FI = app_module->begin(); FI!=app_module->end(); FI++)
		{
			for(Function::iterator BI = FI->begin(); BI!=FI->end(); BI++)
			{
				for(BasicBlock::iterator II = BI->begin(); II!=BI->end(); II++)
				{
					if(isa<BitCastInst>(&*II) &&
						string(II->getName()).find("extended_check_cmp") < string(II->getName()).length())
					{
						extended_cmps.push_back(dyn_cast<BitCastInst>(&*II));
					}
				}
			}
		}

		for(list<BitCastInst*>::iterator ZI = extended_cmps.begin(); ZI!=extended_cmps.end(); ZI++)
		{
			(*ZI)->replaceAllUsesWith((*ZI)->getOperand(0));
			(*ZI)->eraseFromParent();
		}
	}

	void InstrumentDetector::combineExtendedChecks()
	{
		//We combine the extended checks to make sure only least amount of external checker calls
		// are required
		LLVMContext& context = app_module->getContext();
		for(Module::iterator FI = app_module->begin(); FI!=app_module->end(); FI++)
		{
			for(Function::iterator BI = FI->begin(); BI!=FI->end(); BI++)
			{
				list<BitCastInst*> extended_cmps;
				for(BasicBlock::iterator II = BI->begin(); II!=BI->end(); II++)
				{
					if(isa<BitCastInst>(&*II) &&
						string(II->getName()).find("extended_check_cmp") < string(II->getName()).length())
					{
						//errs()<<"found extended_check_cmp\n"<<*II<<"\n";
						extended_cmps.push_back(dyn_cast<BitCastInst>(&*II));
					}
				}
				if(extended_cmps.empty() == true)
					continue;

				Instruction* term = BI->getTerminator();
				Instruction* current_zi = extended_cmps.front();
				extended_cmps.pop_front();
				for(list<BitCastInst*>::iterator ZI = extended_cmps.begin(); ZI!=extended_cmps.end(); ZI++)
				{
					current_zi = BinaryOperator::Create(Instruction::And, current_zi, *ZI, "combined_ext_cmp", term);
				}

				Function* checker_handler = this->app_module->getFunction("checker_internal");
				if(checker_handler == NULL)
				{
					//we need to declare it
					vector<const Type*> checker_arg_types(2);
					checker_arg_types[0] = Type::getInt1Ty(context);
					//checker_arg_types[0] = Type::getInt32Ty(context);
					checker_arg_types[1] = Type::getInt32Ty(context);
					FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), checker_arg_types, false);
					Constant* checker_handler_c = app_module->getOrInsertFunction("checker_internal", checker_type);
					checker_handler = dyn_cast<Function>(checker_handler_c);
				}
				
				vector<Value*> checker_args(2);
				checker_args[0] = current_zi;
				//int inst_id = map_inst_to_instID[original_inst];
				checker_args[1] =  ConstantInt::get(Type::getInt32Ty(context),0);
				if(cl_debug_info == true)
					dbgs()<<"checker_handler"<<checker_handler->getName()<<"\n";
				CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", term);
			}
		}
	}

	void InstrumentDetector::insertCalltoCheckFlag(Instruction* insert_pos)
	{
		LLVMContext& context = app_module->getContext();
		Function* checker_handler = this->app_module->getFunction("check_flag");
		if(checker_handler == NULL)
		{
			//we need to declare it
			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), false);
			Constant* checker_handler_c = app_module->getOrInsertFunction("check_flag", checker_type);
			checker_handler = dyn_cast<Function>(checker_handler_c);
		}
		CallInst::Create(checker_handler, "", insert_pos);
	}

	StoreInst* InstrumentDetector::used_in_Store(Instruction* inst)
	{
		for(Value::use_iterator UI = inst->use_begin(); UI != inst->use_end(); UI++)
		{			
			if(isa<StoreInst>(*UI))
				return dyn_cast<StoreInst>(*UI);
		}
		return NULL;
	}
	bool InstrumentDetector::used_in_Load(Instruction* inst)
	{
		for(Value::use_iterator UI = inst->use_begin(); UI != inst->use_end(); UI++)
		{			
			if(isa<LoadInst>(*UI))
				return true;
		}
		return false;
	}
	bool InstrumentDetector::used_in_Br(Instruction* inst)
	{
		for(Value::use_iterator UI = inst->use_begin(); UI != inst->use_end(); UI++)
		{			
			if(isa<BranchInst>(*UI))
				return true;
		}
		return false;
	}
	bool InstrumentDetector::used_in_Ret(Instruction* inst)
	{
		for(Value::use_iterator UI = inst->use_begin(); UI != inst->use_end(); UI++)
		{			
			if(isa<ReturnInst>(*UI))
				return true;
		}
		return false;
	}

	bool InstrumentDetector::hasUndefValue(Instruction* inst)
	{
		for(unsigned int i = 0; i < inst->getNumOperands(); i++)
		{
			if(isa<UndefValue>(inst->getOperand(i)))
				return true;
			else
				continue;
		}
		return false;
	}

	void InstrumentDetector::constructCheckerFunc()
	{
		if(cl_debug_info == true)
			dbgs()<<"#######In constructCheckerFunc##########\n";
		LLVMContext& context = app_module->getContext();
		Function* checker_f = app_module->getFunction("checker_internal");
		if(checker_f == NULL)
			return;
		BasicBlock* entryblock = BasicBlock::Create(context, "entry", checker_f);
		BasicBlock* flipblock = BasicBlock::Create(context, "flip", checker_f);
		BasicBlock* exitblock = BasicBlock::Create(context, "exit", checker_f);
		vector<Value*> args;
		for(Function::arg_iterator AI = checker_f->arg_begin(), AE = checker_f->arg_end(); AI!=AE; AI++)
		{
			args.push_back(&*AI);
		}
		if(cl_debug_info == true)
			dbgs()<<"arguments copied\n";
		BranchInst::Create(exitblock, flipblock, args[0], entryblock);
		//BranchInst* flip2exit_branch = BranchInst::Create(exitblock, flipblock);

		Function* checker_handler = this->app_module->getFunction("checker_external");
		if(checker_handler == NULL)
		{
			//we need to declare it
			vector<const Type*> checker_arg_types(2);
			//checker_arg_types[0] = Type::getInt1Ty(context);
			checker_arg_types[0] = Type::getInt32Ty(context);
			checker_arg_types[1] = Type::getInt32Ty(context);
			FunctionType* checker_type = FunctionType::get(Type::getVoidTy(context), checker_arg_types, false);
			Constant* checker_handler_c = app_module->getOrInsertFunction("checker_external", checker_type);
			checker_handler = dyn_cast<Function>(checker_handler_c);
		}
		vector<Value*> checker_args(2);
		checker_args[0] = ConstantInt::get(Type::getInt32Ty(context),0);
		//int inst_id = map_inst_to_instID[original_inst];
		checker_args[1] =  ConstantInt::get(Type::getInt32Ty(context),0);
		if(cl_debug_info == true)
			dbgs()<<"checker_handler"<<checker_handler->getName()<<"\n";
		CallInst::Create(checker_handler, checker_args.begin(), checker_args.end(), "", flipblock);
		ReturnInst::Create(context, 0, exitblock);
		ReturnInst::Create(context, NULL, flipblock);
	}

	void InstrumentDetector::connectFragments()
	{
		for(map<Instruction*, Instruction*>::iterator MI = map_duplicated_insts.begin(); 
			MI != map_duplicated_insts.end(); MI++)
		{
			set<Instruction*> mark_for_duplication;
			Instruction* original_inst = MI->first;
			Instruction* duplicated_inst = MI->second;
			if(duplicated_inst->getNumUses() != original_inst->getNumUses())
			{
				//find the not duplicated instructions
				for(Value::use_iterator UI = original_inst->use_begin(); UI != original_inst->use_end(); UI++)
				{
					if(!isa<Instruction>(*UI))
						continue;
					if(map_duplicated_insts.count(dyn_cast<Instruction>(*UI)) != 0)
						continue; //the user inst has already been duplicated before

					//Now, we have one unduplicated_inst
					//First check if it is used in a duplicated inst directly
					Instruction* unduplicated_inst = dyn_cast<Instruction>(*UI);
					for(Value::use_iterator direct_UI = unduplicated_inst->use_begin(); 
						direct_UI != unduplicated_inst->use_end(); direct_UI++)
					{
						if(map_duplicated_insts.count(dyn_cast<Instruction>(*direct_UI)) != 0)
						{
							//the unduplicated_inst is used directly by a duplicated inst
							//instrumentThisInstruction(unduplicated_inst);
							mark_for_duplication.insert(unduplicated_inst);
						}
						/*else
						{
							//the unduplicated_inst is not used directly by a duplicated inst
							Instruction* second_unduplicated_inst = dyn_cast<Instruction>(*direct_UI);
							if(second_unduplicated_inst == NULL)	return;
							for(Value::use_iterator second_level_UI = second_unduplicated_inst->use_begin();
								second_level_UI != second_unduplicated_inst->use_end();
								second_level_UI++)
							{
								if(map_duplicated_insts.count(dyn_cast<Instruction>(*second_level_UI)) != 0)
								{
									instrumentThisInstruction(unduplicated_inst);
									instrumentThisInstruction(second_unduplicated_inst);
									break;
								}
							}
						}*/
					}
				}
				bool all_should_be_duplicate = true;
				for(Value::use_iterator UI = original_inst->use_begin(); UI != original_inst->use_end(); UI++)
				{
					Instruction* user = dyn_cast<Instruction>(*UI);
					all_should_be_duplicate &= (map_duplicated_insts.count(user) != 0 || mark_for_duplication.count(user) != 0);
				}
				if(all_should_be_duplicate == true)
				{
					for(set<Instruction*>::iterator II = mark_for_duplication.begin(); II != mark_for_duplication.end(); II++)
					{
						instrumentThisInstruction(*II);
					}
				}
			}
		}

		//Above is not enough
		// when loop comes in, the header phinode 
		// won't use the latter duplicated instruction
		// this will cause the number of users of the
		// latter instruction differs from its 
		// duplicated shadow (previously duplicated 
		// inst doesn't know the latter one has been
		// duplicated and can be used)
		for(map<Instruction*, Instruction*>::iterator MI = map_duplicated_insts.begin(); 
			MI != map_duplicated_insts.end(); MI++)
		{
			Instruction* duplicated_inst = MI->second;
			for(unsigned int i = 0; i < duplicated_inst->getNumOperands(); i++)
			{
				if(isa<Instruction>(duplicated_inst->getOperand(i)) && 
					map_duplicated_insts.count(dyn_cast<Instruction>(duplicated_inst->getOperand(i))) != 0)
				{
					duplicated_inst->setOperand(i, map_duplicated_insts[ dyn_cast<Instruction>(duplicated_inst->getOperand(i)) ]);
					//if(isa<PHINode>(duplicated_inst) != false)	errs()<<"FOUND PHINODE:"<<*duplicated_inst<<"\n";
				}
			}
		}
	}

	Instruction* InstrumentDetector::findPlaceforCheckPointCmp(
		Instruction* original_place, Instruction* original_inst, Instruction** check_cmp_inst_ref)
	{
		//Prior trial based on PDT and DT, generally failed!
		// PostDominatorTree* PDT = &getAnalysis<PostDominatorTree>(*original_place->getParent()->getParent());
		// DominatorTree* DT = &getAnalysis<DominatorTree>(*original_place->getParent()->getParent());
		// Function* func = original_place->getParent()->getParent();
		// vector<BasicBlock*> post_dominates_original_bb;
		// for(Function::iterator BI = func->begin(), BE = func->end(); BI!=BE; BI++)
		// {
		// 	if(PDT->properlyDominates(&*BI, original_place->getParent())
		// 		&& DT->properlyDominates(original_place->getParent(), &*BI))
		// 	{
		// 		post_dominates_original_bb.push_back(&*BI);
		// 		//errs()<<"FOUND: "<<BI->getName()<<" for "<<*original_place<<"\n";
		// 	}
		// }
		// //If there is no candidates
		// if(post_dominates_original_bb.size() == 0)	return original_place;

		// LoopInfo* loopinfo = &getAnalysis<LoopInfo>(*original_place->getParent()->getParent());
		// unsigned int mininum_depth_bb_pos_in_vector = 0;
		// for(unsigned int i = 0; i < post_dominates_original_bb.size(); i++)
		// {
		// 	if(loopinfo->getLoopDepth(post_dominates_original_bb[i])
		// 		 < loopinfo->getLoopDepth(post_dominates_original_bb[mininum_depth_bb_pos_in_vector]))
		// 		mininum_depth_bb_pos_in_vector = i;
		// }
		// if(mininum_depth_bb_pos_in_vector < loopinfo->getLoopDepth(original_place->getParent()))
		// 	return post_dominates_original_bb[mininum_depth_bb_pos_in_vector]->getFirstNonPHI();
		// else
		// 	return original_place;

		//Trial based on loop outer/inner for ONLY CMP (or say the flag bit of branch operation)!
		LLVMContext& context = app_module->getContext();
		//PostDominatorTree* PDT = &getAnalysis<PostDominatorTree>(*original_place->getParent()->getParent());
		//DominatorTree* DT = &getAnalysis<DominatorTree>(*original_place->getParent()->getParent());
		LoopInfo* loopinfo = &getAnalysis<LoopInfo>(*original_place->getParent()->getParent());
		if(used_in_Br(original_inst))
		{
			//we should handle this instruction
			BranchInst* BI = NULL;
			for(Value::use_iterator UI = original_inst->use_begin(), UE = original_inst->use_end(); UI!=UE; UI++)
			{
				if(isa<BranchInst>(*UI))
					BI = dyn_cast<BranchInst>(*UI);
			}
			if(BI == NULL)
			{
				errs()<<"ERROR: findPlaceforCheckPoint()\n";
				exit(-1);
			}

			
			BasicBlock* successorBB_0 = BI->getSuccessor(0);
			BasicBlock* successorBB_1 = BI->getSuccessor(1);
			if(successorBB_1 == NULL || successorBB_0 == NULL)	return original_place;
			if(loopinfo->getLoopDepth(original_inst->getParent()) > loopinfo->getLoopDepth(successorBB_0)
				&& successorBB_1 == original_inst->getParent())
			{
				if(set_dest_bbs.count(successorBB_0) == 0)
				{
					//we need to create a new Phi and insert the BB
					PHINode* check_cmp_phi = PHINode::Create(Type::getInt1Ty(context), "check_cmp_phi", successorBB_0->begin());
					for(pred_iterator PI = pred_begin(successorBB_0), PE = pred_end(successorBB_0); PI!=PE; PI++)
					{
						check_cmp_phi->addIncoming(ConstantInt::get(Type::getInt1Ty(context), 1), *PI);
					}
					int index_in_phi = check_cmp_phi->getBasicBlockIndex(original_inst->getParent());
					check_cmp_phi->setIncomingValue(index_in_phi, *check_cmp_inst_ref);
					set_dest_bbs.insert(successorBB_0);

					BasicBlock::iterator i = check_cmp_phi;
					do
					{
						i++;
					}while(isa<PHINode>(i));
					*check_cmp_inst_ref = dyn_cast<PHINode>(successorBB_0->begin());
					return dyn_cast<Instruction>(i);
				}
				else
				{
					//we should use the previously created phi
					int index_in_phi = dyn_cast<PHINode>(successorBB_0->begin())->getBasicBlockIndex(original_inst->getParent());
					dyn_cast<PHINode>(successorBB_0->begin())->setIncomingValue(index_in_phi, *check_cmp_inst_ref);

					BasicBlock::iterator i = dyn_cast<PHINode>(successorBB_0->begin());
					do
					{
						i++;
					}while(isa<PHINode>(i));
					*check_cmp_inst_ref = dyn_cast<PHINode>(successorBB_0->begin());
					return dyn_cast<Instruction>(i);
				}
			}
			else if(loopinfo->getLoopDepth(original_inst->getParent()) > loopinfo->getLoopDepth(successorBB_1)
				&& successorBB_0 == original_inst->getParent())
			{
				if(set_dest_bbs.count(successorBB_1) == 0)
				{
					//we need to create a new Phi and insert the BB
					PHINode* check_cmp_phi = PHINode::Create(Type::getInt1Ty(context), "check_cmp_phi", successorBB_1->begin());
					for(pred_iterator PI = pred_begin(successorBB_1), PE = pred_end(successorBB_1); PI!=PE; PI++)
					{
						check_cmp_phi->addIncoming(ConstantInt::get(Type::getInt1Ty(context), 1), *PI);
					}
					int index_in_phi = check_cmp_phi->getBasicBlockIndex(original_inst->getParent());
					check_cmp_phi->setIncomingValue(index_in_phi, *check_cmp_inst_ref);
					set_dest_bbs.insert(successorBB_1);

					BasicBlock::iterator i = check_cmp_phi;
					do
					{
						i++;
					}while(isa<PHINode>(i));
					*check_cmp_inst_ref = check_cmp_phi;
					return dyn_cast<Instruction>(i);
				}
				else
				{
					//we should use the previously created phi
					int index_in_phi = dyn_cast<PHINode>(successorBB_1->begin())->getBasicBlockIndex(original_inst->getParent());
					dyn_cast<PHINode>(successorBB_1->begin())->setIncomingValue(index_in_phi, *check_cmp_inst_ref);

					BasicBlock::iterator i = dyn_cast<PHINode>(successorBB_1->begin());
					do
					{
						i++;
					}while(isa<PHINode>(i));
					*check_cmp_inst_ref = dyn_cast<PHINode>(successorBB_1->begin());
					return dyn_cast<Instruction>(i);
				}
			}
			else
				return original_place;
			
		}
		else
			return original_place;
	}

	Instruction* InstrumentDetector::findPlaceforCheckPointStore(Instruction* original_place, Instruction* original_inst)
	{
		if(used_in_Store(original_inst) != NULL)
		{
			StoreInst* SI = used_in_Store(original_inst);
			PostDominatorTree* PDT = &getAnalysis<PostDominatorTree>(*original_inst->getParent()->getParent());
			LoopInfo* loopinfo = &getAnalysis<LoopInfo>(*original_place->getParent()->getParent());
			if(PDT->properlyDominates(SI->getParent(), original_inst->getParent()))
				{
					if(loopinfo->getLoopDepth(original_inst->getParent()) > loopinfo->getLoopDepth(SI->getParent()))
						return SI;
					else
						return original_place;
				}
			else
				return original_place;
		}
		else
			return original_place;
	}

	bool InstrumentDetector::unduplicatableCall(Instruction* inst)
	{
		if(!isa<CallInst>(inst))
		{
			return false;
		}
		CallInst* CI = dyn_cast<CallInst>(inst);
		Function* Func = CI->getCalledFunction();
		if(Func != NULL)
		{
			const Type* returnType = Func->getReturnType();
			if(returnType->isVoidTy())
				return true;
			if(returnType->isPointerTy())
				return true;
			for(Function::arg_iterator ai = Func->arg_begin(), ae = Func->arg_end(); ai!=ae; ai++)
			{
				Value* val = &*ai;
				const Type* argtype = val->getType();
				if(argtype->isPointerTy())
					return true;
			}
			
			//errs()<<"unduplicatableCall():\n"<<*inst<<"\n";
			//errs()<<"number of arguments:"<<inst->getNumOperands()<<"\n";
			for(unsigned int i=0; i<inst->getNumOperands(); i++)
			{
				//errs()<<"operand: "<<*inst->getOperand(i)<<"\n";
				const Type* operand_type = inst->getOperand(i)->getType();
				if(operand_type->isPointerTy())
					return true;
			}
				

			if(string(Func->getName()).find("alloc") < string(Func->getName()).length()
				|| string(Func->getName()).find("mem") < string(Func->getName()).length()
				|| string(Func->getName()).find("cpy") < string(Func->getName()).length()
				|| string(Func->getName()).find("rand") < string(Func->getName()).length()
				|| string(Func->getName()).find("free") < string(Func->getName()).length()
				)
				return true;
			if(Func->isDeclaration() == false)
				return true;

			return false;
		}
		else if(isa<ConstantExpr>(dyn_cast<CallInst>(&*inst)->getCalledValue()))
		{
			ConstantExpr* const_expr = dyn_cast<ConstantExpr>(dyn_cast<CallInst>(&*inst)->getCalledValue());
			Function* func = dyn_cast<Function>(const_expr->getOperand(0));
			if(func == NULL)
				return true;
			const Type* returnType = func->getReturnType();
			if(returnType->isVoidTy())
				return true;
			if(returnType->isPointerTy())
				return true;
			for(Function::arg_iterator ai = func->arg_begin(), ae = func->arg_end(); ai!=ae; ai++)
			{
				Value* val = &*ai;
				const Type* argtype = val->getType();
				if(argtype->isPointerTy())
					return true;
			}

			if(string(func->getName()).find("alloc") < string(func->getName()).length()
				|| string(func->getName()).find("mem") < string(func->getName()).length()
				|| string(func->getName()).find("cpy") < string(func->getName()).length()
				|| string(Func->getName()).find("rand") < string(Func->getName()).length()
				|| string(Func->getName()).find("free") < string(Func->getName()).length()
				)
				return true;
			if(func->isDeclaration() == false)
				return true;

			return false;
		}
		else if(isa<Instruction>(dyn_cast<CallInst>(&*inst)->getCalledValue()))
			return true;
		else
			return false;
	}
}
