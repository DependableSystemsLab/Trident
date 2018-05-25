//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the Mips target
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

// *** NOTE: This file is #included into the middle of the target
// *** instruction selector class.  These functions are really methods.

// The main instruction selector code.
SDNode *SelectCode(SDNode *N) {
  // Some target values are emitted as 2 bytes, TARGET_VAL handles
  // this.
  #define TARGET_VAL(X) X & 255, unsigned(X) >> 8
  static const unsigned char MatcherTable[] = {
/*0*/     OPC_SwitchOpcode /*53 cases */, 12|128,1/*140*/,  TARGET_VAL(ISD::STORE),// ->145
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 26, /*->35*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $dst
/*15*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*17*/        OPC_CheckPredicate, 1, // Predicate_store
/*19*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$dst #2 #3
/*22*/        OPC_EmitMergeInputChains1_0,
/*23*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*26*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
              // Src: (st 0:i32, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
              // Dst: (SW ZERO:i32, addr:i32:$dst)
/*35*/      /*Scope*/ 108, /*->144*/
/*36*/        OPC_RecordChild1, // #1 = $dst
/*37*/        OPC_Scope, 60, /*->99*/ // 3 children in Scope
/*39*/          OPC_CheckChild1Type, MVT::i32,
/*41*/          OPC_RecordChild2, // #2 = $addr
/*42*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*44*/          OPC_Scope, 36, /*->82*/ // 2 children in Scope
/*46*/            OPC_CheckPredicate, 2, // Predicate_truncstore
/*48*/            OPC_Scope, 15, /*->65*/ // 2 children in Scope
/*50*/              OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*52*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*55*/              OPC_EmitMergeInputChains1_0,
/*56*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$dst, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SB CPURegs:i32:$dst, addr:i32:$addr)
/*65*/            /*Scope*/ 15, /*->81*/
/*66*/              OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*68*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*71*/              OPC_EmitMergeInputChains1_0,
/*72*/              OPC_MorphNodeTo, TARGET_VAL(Mips::SH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st CPURegs:i32:$dst, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SH CPURegs:i32:$dst, addr:i32:$addr)
/*81*/            0, /*End of Scope*/
/*82*/          /*Scope*/ 15, /*->98*/
/*83*/            OPC_CheckPredicate, 1, // Predicate_store
/*85*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*88*/            OPC_EmitMergeInputChains1_0,
/*89*/            OPC_MorphNodeTo, TARGET_VAL(Mips::SW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st CPURegs:i32:$dst, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SW CPURegs:i32:$dst, addr:i32:$addr)
/*98*/          0, /*End of Scope*/
/*99*/        /*Scope*/ 22, /*->122*/
/*100*/         OPC_CheckChild1Type, MVT::f64,
/*102*/         OPC_RecordChild2, // #2 = $addr
/*103*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*105*/         OPC_CheckPredicate, 1, // Predicate_store
/*107*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isSingleFloat()) && (!Subtarget.isMips1())
/*109*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*112*/         OPC_EmitMergeInputChains1_0,
/*113*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SDC1), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st AFGR64:f64:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SDC1 AFGR64:f64:$ft, addr:i32:$addr)
/*122*/       /*Scope*/ 20, /*->143*/
/*123*/         OPC_CheckChild1Type, MVT::f32,
/*125*/         OPC_RecordChild2, // #2 = $addr
/*126*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*128*/         OPC_CheckPredicate, 1, // Predicate_store
/*130*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$addr #3 #4
/*133*/         OPC_EmitMergeInputChains1_0,
/*134*/         OPC_MorphNodeTo, TARGET_VAL(Mips::SWC1), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st FGR32:f32:$ft, addr:iPTR:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (SWC1 FGR32:f32:$ft, addr:i32:$addr)
/*143*/       0, /*End of Scope*/
/*144*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,1/*197*/,  TARGET_VAL(ISD::LOAD),// ->346
/*149*/     OPC_RecordMemRef,
/*150*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*151*/     OPC_RecordChild1, // #1 = $addr
/*152*/     OPC_CheckPredicate, 5, // Predicate_unindexedload
/*154*/     OPC_Scope, 19, /*->175*/ // 7 children in Scope
/*156*/       OPC_CheckPredicate, 6, // Predicate_sextload
/*158*/       OPC_CheckPredicate, 7, // Predicate_sextloadi8
/*160*/       OPC_CheckType, MVT::i32,
/*162*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*165*/       OPC_EmitMergeInputChains1_0,
/*166*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LB), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 13
              // Dst: (LB:i32 addr:i32:$addr)
/*175*/     /*Scope*/ 19, /*->195*/
/*176*/       OPC_CheckPredicate, 8, // Predicate_zextload
/*178*/       OPC_CheckPredicate, 9, // Predicate_zextloadi8
/*180*/       OPC_CheckType, MVT::i32,
/*182*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*185*/       OPC_EmitMergeInputChains1_0,
/*186*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBu:i32 addr:i32:$addr)
/*195*/     /*Scope*/ 19, /*->215*/
/*196*/       OPC_CheckPredicate, 6, // Predicate_sextload
/*198*/       OPC_CheckPredicate, 10, // Predicate_sextloadi16
/*200*/       OPC_CheckType, MVT::i32,
/*202*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*205*/       OPC_EmitMergeInputChains1_0,
/*206*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LH), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LH:i32 addr:i32:$addr)
/*215*/     /*Scope*/ 19, /*->235*/
/*216*/       OPC_CheckPredicate, 8, // Predicate_zextload
/*218*/       OPC_CheckPredicate, 11, // Predicate_zextloadi16
/*220*/       OPC_CheckType, MVT::i32,
/*222*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*225*/       OPC_EmitMergeInputChains1_0,
/*226*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHu:i32 addr:i32:$addr)
/*235*/     /*Scope*/ 17, /*->253*/
/*236*/       OPC_CheckPredicate, 12, // Predicate_load
/*238*/       OPC_CheckType, MVT::i32,
/*240*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*243*/       OPC_EmitMergeInputChains1_0,
/*244*/       OPC_MorphNodeTo, TARGET_VAL(Mips::LW), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LW:i32 addr:i32:$addr)
/*253*/     /*Scope*/ 54, /*->308*/
/*254*/       OPC_CheckPredicate, 13, // Predicate_extload
/*256*/       OPC_CheckType, MVT::i32,
/*258*/       OPC_Scope, 15, /*->275*/ // 3 children in Scope
/*260*/         OPC_CheckPredicate, 14, // Predicate_extloadi1
/*262*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*265*/         OPC_EmitMergeInputChains1_0,
/*266*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                // Dst: (LBu:i32 addr:i32:$src)
/*275*/       /*Scope*/ 15, /*->291*/
/*276*/         OPC_CheckPredicate, 15, // Predicate_extloadi8
/*278*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*281*/         OPC_EmitMergeInputChains1_0,
/*282*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LBu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                // Dst: (LBu:i32 addr:i32:$src)
/*291*/       /*Scope*/ 15, /*->307*/
/*292*/         OPC_CheckPredicate, 16, // Predicate_extloadi16
/*294*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*297*/         OPC_EmitMergeInputChains1_0,
/*298*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LHu), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                // Dst: (LHu:i32 addr:i32:$src)
/*307*/       0, /*End of Scope*/
/*308*/     /*Scope*/ 36, /*->345*/
/*309*/       OPC_CheckPredicate, 12, // Predicate_load
/*311*/       OPC_SwitchType /*2 cases */, 15,  MVT::f64,// ->329
/*314*/         OPC_CheckPatternPredicate, 0, // (!Subtarget.isSingleFloat()) && (!Subtarget.isMips1())
/*316*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*319*/         OPC_EmitMergeInputChains1_0,
/*320*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LDC1), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f64 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDC1:f64 addr:i32:$addr)
              /*SwitchType*/ 13,  MVT::f32,// ->344
/*331*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$addr #2 #3
/*334*/         OPC_EmitMergeInputChains1_0,
/*335*/         OPC_MorphNodeTo, TARGET_VAL(Mips::LWC1), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 addr:iPTR:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWC1:f32 addr:i32:$addr)
              0, // EndSwitchType
/*345*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::XOR),// ->451
/*349*/     OPC_Scope, 31, /*->382*/ // 2 children in Scope
/*351*/       OPC_MoveChild, 0,
/*353*/       OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*356*/       OPC_RecordChild0, // #0 = $b
/*357*/       OPC_RecordChild1, // #1 = $c
/*358*/       OPC_MoveParent,
/*359*/       OPC_MoveChild, 1,
/*361*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*372*/       OPC_MoveParent,
/*373*/       OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 (or:i32 CPURegs:i32:$b, CPURegs:i32:$c), -1:i32) - Complexity = 11
              // Dst: (NOR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*382*/     /*Scope*/ 67, /*->450*/
/*383*/       OPC_RecordChild0, // #0 = $in
/*384*/       OPC_Scope, 26, /*->412*/ // 2 children in Scope
/*386*/         OPC_MoveChild, 1,
/*388*/         OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*399*/         OPC_MoveParent,
/*400*/         OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*403*/         OPC_MorphNodeTo, TARGET_VAL(Mips::NOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 CPURegs:i32:$in, -1:i32) - Complexity = 8
                // Dst: (NOR:i32 CPURegs:i32:$in, ZERO:i32)
/*412*/       /*Scope*/ 36, /*->449*/
/*413*/         OPC_RecordChild1, // #1 = $c
/*414*/         OPC_Scope, 22, /*->438*/ // 2 children in Scope
/*416*/           OPC_MoveChild, 1,
/*418*/           OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*421*/           OPC_CheckPredicate, 17, // Predicate_immZExt16
/*423*/           OPC_MoveParent,
/*424*/           OPC_EmitConvertToTarget, 1,
/*426*/           OPC_EmitNodeXForm, 0, 2, // LO16
/*429*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (xor:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c) - Complexity = 7
                  // Dst: (XORi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
/*438*/         /*Scope*/ 9, /*->448*/
/*439*/           OPC_MorphNodeTo, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
                  // Dst: (XOR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*448*/         0, /*End of Scope*/
/*449*/       0, /*End of Scope*/
/*450*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 71|128,3/*455*/,  TARGET_VAL(ISD::BRCOND),// ->910
/*455*/     OPC_RecordNode,   // #0 = 'brcond' chained node
/*456*/     OPC_Scope, 44|128,3/*428*/, /*->887*/ // 2 children in Scope
/*459*/       OPC_MoveChild, 1,
/*461*/       OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*464*/       OPC_RecordChild0, // #1 = $src
/*465*/       OPC_Scope, 15|128,1/*143*/, /*->611*/ // 3 children in Scope
/*468*/         OPC_MoveChild, 1,
/*470*/         OPC_CheckInteger, 0, 
/*472*/         OPC_MoveParent,
/*473*/         OPC_MoveChild, 2,
/*475*/         OPC_Scope, 20, /*->497*/ // 6 children in Scope
/*477*/           OPC_CheckCondCode, ISD::SETGE,
/*479*/           OPC_MoveParent,
/*480*/           OPC_MoveParent,
/*481*/           OPC_RecordChild2, // #2 = $offset
/*482*/           OPC_MoveChild, 2,
/*484*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*487*/           OPC_MoveParent,
/*488*/           OPC_EmitMergeInputChains1_0,
/*489*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGEZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETGE:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BGEZ CPURegs:i32:$src, (bb:Other):$offset)
/*497*/         /*Scope*/ 20, /*->518*/
/*498*/           OPC_CheckCondCode, ISD::SETGT,
/*500*/           OPC_MoveParent,
/*501*/           OPC_MoveParent,
/*502*/           OPC_RecordChild2, // #2 = $offset
/*503*/           OPC_MoveChild, 2,
/*505*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*508*/           OPC_MoveParent,
/*509*/           OPC_EmitMergeInputChains1_0,
/*510*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BGTZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETGT:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BGTZ CPURegs:i32:$src, (bb:Other):$offset)
/*518*/         /*Scope*/ 20, /*->539*/
/*519*/           OPC_CheckCondCode, ISD::SETLE,
/*521*/           OPC_MoveParent,
/*522*/           OPC_MoveParent,
/*523*/           OPC_RecordChild2, // #2 = $offset
/*524*/           OPC_MoveChild, 2,
/*526*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*529*/           OPC_MoveParent,
/*530*/           OPC_EmitMergeInputChains1_0,
/*531*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLEZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETLE:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BLEZ CPURegs:i32:$src, (bb:Other):$offset)
/*539*/         /*Scope*/ 20, /*->560*/
/*540*/           OPC_CheckCondCode, ISD::SETLT,
/*542*/           OPC_MoveParent,
/*543*/           OPC_MoveParent,
/*544*/           OPC_RecordChild2, // #2 = $offset
/*545*/           OPC_MoveChild, 2,
/*547*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*550*/           OPC_MoveParent,
/*551*/           OPC_EmitMergeInputChains1_0,
/*552*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BLTZ), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$src, 0:i32, SETLT:Other), (bb:Other):$offset) - Complexity = 11
                  // Dst: (BLTZ CPURegs:i32:$src, (bb:Other):$offset)
/*560*/         /*Scope*/ 24, /*->585*/
/*561*/           OPC_CheckCondCode, ISD::SETNE,
/*563*/           OPC_MoveParent,
/*564*/           OPC_MoveParent,
/*565*/           OPC_RecordChild2, // #2 = $dst
/*566*/           OPC_MoveChild, 2,
/*568*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*571*/           OPC_MoveParent,
/*572*/           OPC_EmitMergeInputChains1_0,
/*573*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*576*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BNE CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*585*/         /*Scope*/ 24, /*->610*/
/*586*/           OPC_CheckCondCode, ISD::SETEQ,
/*588*/           OPC_MoveParent,
/*589*/           OPC_MoveParent,
/*590*/           OPC_RecordChild2, // #2 = $dst
/*591*/           OPC_MoveChild, 2,
/*593*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*596*/           OPC_MoveParent,
/*597*/           OPC_EmitMergeInputChains1_0,
/*598*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*601*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BEQ CPURegs:i32:$lhs, ZERO:i32, (bb:Other):$dst)
/*610*/         0, /*End of Scope*/
/*611*/       /*Scope*/ 85, /*->697*/
/*612*/         OPC_RecordChild1, // #2 = $rhs
/*613*/         OPC_MoveChild, 1,
/*615*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*618*/         OPC_CheckPredicate, 18, // Predicate_immSExt16
/*620*/         OPC_MoveParent,
/*621*/         OPC_MoveChild, 2,
/*623*/         OPC_Scope, 35, /*->660*/ // 2 children in Scope
/*625*/           OPC_CheckCondCode, ISD::SETGE,
/*627*/           OPC_MoveParent,
/*628*/           OPC_MoveParent,
/*629*/           OPC_RecordChild2, // #3 = $dst
/*630*/           OPC_MoveChild, 2,
/*632*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*635*/           OPC_MoveParent,
/*636*/           OPC_EmitMergeInputChains1_0,
/*637*/           OPC_EmitConvertToTarget, 2,
/*639*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*648*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*651*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 10
                  // Dst: (BEQ (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*660*/         /*Scope*/ 35, /*->696*/
/*661*/           OPC_CheckCondCode, ISD::SETUGE,
/*663*/           OPC_MoveParent,
/*664*/           OPC_MoveParent,
/*665*/           OPC_RecordChild2, // #3 = $dst
/*666*/           OPC_MoveChild, 2,
/*668*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*671*/           OPC_MoveParent,
/*672*/           OPC_EmitMergeInputChains1_0,
/*673*/           OPC_EmitConvertToTarget, 2,
/*675*/           OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*684*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*687*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 5, 6, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 10
                  // Dst: (BEQ (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), ZERO:i32, (bb:Other):$dst)
/*696*/         0, /*End of Scope*/
/*697*/       /*Scope*/ 59|128,1/*187*/, /*->886*/
/*699*/         OPC_CheckChild0Type, MVT::i32,
/*701*/         OPC_RecordChild1, // #2 = $b
/*702*/         OPC_MoveChild, 2,
/*704*/         OPC_Scope, 21, /*->727*/ // 6 children in Scope
/*706*/           OPC_CheckCondCode, ISD::SETEQ,
/*708*/           OPC_MoveParent,
/*709*/           OPC_MoveParent,
/*710*/           OPC_RecordChild2, // #3 = $offset
/*711*/           OPC_MoveChild, 2,
/*713*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*716*/           OPC_MoveParent,
/*717*/           OPC_EmitMergeInputChains1_0,
/*718*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$a, CPURegs:i32:$b, SETEQ:Other), (bb:Other):$offset) - Complexity = 6
                  // Dst: (BEQ CPURegs:i32:$a, CPURegs:i32:$b, (bb:Other):$offset)
/*727*/         /*Scope*/ 21, /*->749*/
/*728*/           OPC_CheckCondCode, ISD::SETNE,
/*730*/           OPC_MoveParent,
/*731*/           OPC_MoveParent,
/*732*/           OPC_RecordChild2, // #3 = $offset
/*733*/           OPC_MoveChild, 2,
/*735*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*738*/           OPC_MoveParent,
/*739*/           OPC_EmitMergeInputChains1_0,
/*740*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$a, CPURegs:i32:$b, SETNE:Other), (bb:Other):$offset) - Complexity = 6
                  // Dst: (BNE CPURegs:i32:$a, CPURegs:i32:$b, (bb:Other):$offset)
/*749*/         /*Scope*/ 33, /*->783*/
/*750*/           OPC_CheckCondCode, ISD::SETGE,
/*752*/           OPC_MoveParent,
/*753*/           OPC_MoveParent,
/*754*/           OPC_RecordChild2, // #3 = $dst
/*755*/           OPC_MoveChild, 2,
/*757*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*760*/           OPC_MoveParent,
/*761*/           OPC_EmitMergeInputChains1_0,
/*762*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*771*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*774*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*783*/         /*Scope*/ 33, /*->817*/
/*784*/           OPC_CheckCondCode, ISD::SETUGE,
/*786*/           OPC_MoveParent,
/*787*/           OPC_MoveParent,
/*788*/           OPC_RecordChild2, // #3 = $dst
/*789*/           OPC_MoveChild, 2,
/*791*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*794*/           OPC_MoveParent,
/*795*/           OPC_EmitMergeInputChains1_0,
/*796*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*805*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*808*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), ZERO:i32, (bb:Other):$dst)
/*817*/         /*Scope*/ 33, /*->851*/
/*818*/           OPC_CheckCondCode, ISD::SETLE,
/*820*/           OPC_MoveParent,
/*821*/           OPC_MoveParent,
/*822*/           OPC_RecordChild2, // #3 = $dst
/*823*/           OPC_MoveChild, 2,
/*825*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*828*/           OPC_MoveParent,
/*829*/           OPC_EmitMergeInputChains1_0,
/*830*/           OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*839*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*842*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*851*/         /*Scope*/ 33, /*->885*/
/*852*/           OPC_CheckCondCode, ISD::SETULE,
/*854*/           OPC_MoveParent,
/*855*/           OPC_MoveParent,
/*856*/           OPC_RecordChild2, // #3 = $dst
/*857*/           OPC_MoveChild, 2,
/*859*/           OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*862*/           OPC_MoveParent,
/*863*/           OPC_EmitMergeInputChains1_0,
/*864*/           OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*873*/           OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*876*/           OPC_MorphNodeTo, TARGET_VAL(Mips::BEQ), 0|OPFL_Chain,
                      0/*#VTs*/, 3/*#Ops*/, 4, 5, 3, 
                  // Src: (brcond (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BEQ (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), ZERO:i32, (bb:Other):$dst)
/*885*/         0, /*End of Scope*/
/*886*/       0, /*End of Scope*/
/*887*/     /*Scope*/ 21, /*->909*/
/*888*/       OPC_RecordChild1, // #1 = $cond
/*889*/       OPC_RecordChild2, // #2 = $dst
/*890*/       OPC_MoveChild, 2,
/*892*/       OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*895*/       OPC_MoveParent,
/*896*/       OPC_EmitMergeInputChains1_0,
/*897*/       OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*900*/       OPC_MorphNodeTo, TARGET_VAL(Mips::BNE), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
              // Src: (brcond CPURegs:i32:$cond, (bb:Other):$dst) - Complexity = 3
              // Dst: (BNE CPURegs:i32:$cond, ZERO:i32, (bb:Other):$dst)
/*909*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 46,  TARGET_VAL(ISD::CTLZ),// ->959
/*913*/     OPC_Scope, 31, /*->946*/ // 2 children in Scope
/*915*/       OPC_MoveChild, 0,
/*917*/       OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*920*/       OPC_RecordChild0, // #0 = $src
/*921*/       OPC_MoveChild, 1,
/*923*/       OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*934*/       OPC_MoveParent,
/*935*/       OPC_MoveParent,
/*936*/       OPC_CheckPatternPredicate, 1, // (Subtarget.hasBitCount())
/*938*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CLO), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 (xor:i32 CPURegs:i32:$src, -1:i32)) - Complexity = 11
              // Dst: (CLO:i32 CPURegs:i32:$src)
/*946*/     /*Scope*/ 11, /*->958*/
/*947*/       OPC_RecordChild0, // #0 = $src
/*948*/       OPC_CheckPatternPredicate, 1, // (Subtarget.hasBitCount())
/*950*/       OPC_MorphNodeTo, TARGET_VAL(Mips::CLZ), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 CPURegs:i32:$src) - Complexity = 3
              // Dst: (CLZ:i32 CPURegs:i32:$src)
/*958*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 69|128,2/*325*/,  TARGET_VAL(ISD::SELECT),// ->1288
/*963*/     OPC_Scope, 49|128,2/*305*/, /*->1271*/ // 2 children in Scope
/*966*/       OPC_MoveChild, 0,
/*968*/       OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*971*/       OPC_RecordChild0, // #0 = $lhs
/*972*/       OPC_Scope, 73, /*->1047*/ // 2 children in Scope
/*974*/         OPC_RecordChild1, // #1 = $rhs
/*975*/         OPC_MoveChild, 1,
/*977*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*980*/         OPC_CheckPredicate, 18, // Predicate_immSExt16
/*982*/         OPC_MoveParent,
/*983*/         OPC_MoveChild, 2,
/*985*/         OPC_Scope, 29, /*->1016*/ // 2 children in Scope
/*987*/           OPC_CheckCondCode, ISD::SETGE,
/*989*/           OPC_MoveParent,
/*990*/           OPC_MoveParent,
/*991*/           OPC_RecordChild1, // #2 = $T
/*992*/           OPC_RecordChild2, // #3 = $F
/*993*/           OPC_CheckType, MVT::i32,
/*995*/           OPC_EmitConvertToTarget, 1,
/*997*/           OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1006*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 5, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                  // Dst: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs))
/*1016*/        /*Scope*/ 29, /*->1046*/
/*1017*/          OPC_CheckCondCode, ISD::SETUGE,
/*1019*/          OPC_MoveParent,
/*1020*/          OPC_MoveParent,
/*1021*/          OPC_RecordChild1, // #2 = $T
/*1022*/          OPC_RecordChild2, // #3 = $F
/*1023*/          OPC_CheckType, MVT::i32,
/*1025*/          OPC_EmitConvertToTarget, 1,
/*1027*/          OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*1036*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 5, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 10
                  // Dst: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTiu:i32 CPURegs:i32:$lh, (imm:i32)<<P:Predicate_immSExt16>>:$rh))
/*1046*/        0, /*End of Scope*/
/*1047*/      /*Scope*/ 93|128,1/*221*/, /*->1270*/
/*1049*/        OPC_CheckChild0Type, MVT::i32,
/*1051*/        OPC_RecordChild1, // #1 = $rhs
/*1052*/        OPC_MoveChild, 2,
/*1054*/        OPC_Scope, 45, /*->1101*/ // 7 children in Scope
/*1056*/          OPC_CheckCondCode, ISD::SETNE,
/*1058*/          OPC_MoveParent,
/*1059*/          OPC_MoveParent,
/*1060*/          OPC_RecordChild1, // #2 = $T
/*1061*/          OPC_MoveChild, 1,
/*1063*/          OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*1066*/          OPC_MoveParent,
/*1067*/          OPC_RecordChild2, // #3 = $F
/*1068*/          OPC_CheckType, MVT::i32,
/*1070*/          OPC_EmitRegister, MVT::i32, Mips::GP,
/*1073*/          OPC_EmitNode, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 2,  // Results = #5 
/*1082*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #6 
/*1091*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 5, 6, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), (tglobaladdr:i32):$T, CPURegs:i32:$F) - Complexity = 9
                  // Dst: (MOVN:i32 CPURegs:i32:$F, (ADDiu:i32 GP:i32, (tglobaladdr:i32):$T), (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*1101*/        /*Scope*/ 27, /*->1129*/
/*1102*/          OPC_CheckCondCode, ISD::SETGE,
/*1104*/          OPC_MoveParent,
/*1105*/          OPC_MoveParent,
/*1106*/          OPC_RecordChild1, // #2 = $T
/*1107*/          OPC_RecordChild2, // #3 = $F
/*1108*/          OPC_CheckType, MVT::i32,
/*1110*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1119*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*1129*/        /*Scope*/ 27, /*->1157*/
/*1130*/          OPC_CheckCondCode, ISD::SETUGE,
/*1132*/          OPC_MoveParent,
/*1133*/          OPC_MoveParent,
/*1134*/          OPC_RecordChild1, // #2 = $T
/*1135*/          OPC_RecordChild2, // #3 = $F
/*1136*/          OPC_CheckType, MVT::i32,
/*1138*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1147*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*1157*/        /*Scope*/ 27, /*->1185*/
/*1158*/          OPC_CheckCondCode, ISD::SETLE,
/*1160*/          OPC_MoveParent,
/*1161*/          OPC_MoveParent,
/*1162*/          OPC_RecordChild1, // #2 = $T
/*1163*/          OPC_RecordChild2, // #3 = $F
/*1164*/          OPC_CheckType, MVT::i32,
/*1166*/          OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1175*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs))
/*1185*/        /*Scope*/ 27, /*->1213*/
/*1186*/          OPC_CheckCondCode, ISD::SETULE,
/*1188*/          OPC_MoveParent,
/*1189*/          OPC_MoveParent,
/*1190*/          OPC_RecordChild1, // #2 = $T
/*1191*/          OPC_RecordChild2, // #3 = $F
/*1192*/          OPC_CheckType, MVT::i32,
/*1194*/          OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*1203*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs))
/*1213*/        /*Scope*/ 27, /*->1241*/
/*1214*/          OPC_CheckCondCode, ISD::SETEQ,
/*1216*/          OPC_MoveParent,
/*1217*/          OPC_MoveParent,
/*1218*/          OPC_RecordChild1, // #2 = $T
/*1219*/          OPC_RecordChild2, // #3 = $F
/*1220*/          OPC_CheckType, MVT::i32,
/*1222*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1231*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVZ), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVZ:i32 CPURegs:i32:$F, CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*1241*/        /*Scope*/ 27, /*->1269*/
/*1242*/          OPC_CheckCondCode, ISD::SETNE,
/*1244*/          OPC_MoveParent,
/*1245*/          OPC_MoveParent,
/*1246*/          OPC_RecordChild1, // #2 = $T
/*1247*/          OPC_RecordChild2, // #3 = $F
/*1248*/          OPC_CheckType, MVT::i32,
/*1250*/          OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*1259*/          OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 2, 4, 
                  // Src: (select:i32 (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other), CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 6
                  // Dst: (MOVN:i32 CPURegs:i32:$F, CPURegs:i32:$T, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*1269*/        0, /*End of Scope*/
/*1270*/      0, /*End of Scope*/
/*1271*/    /*Scope*/ 15, /*->1287*/
/*1272*/      OPC_RecordChild0, // #0 = $cond
/*1273*/      OPC_RecordChild1, // #1 = $T
/*1274*/      OPC_RecordChild2, // #2 = $F
/*1275*/      OPC_CheckType, MVT::i32,
/*1277*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MOVN), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 1, 0, 
              // Src: (select:i32 CPURegs:i32:$cond, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
              // Dst: (MOVN:i32 CPURegs:i32:$F, CPURegs:i32:$T, CPURegs:i32:$cond)
/*1287*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->1317
/*1291*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*1292*/    OPC_CaptureGlueInput,
/*1293*/    OPC_RecordChild1, // #1 = $amt1
/*1294*/    OPC_MoveChild, 1,
/*1296*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1299*/    OPC_MoveParent,
/*1300*/    OPC_RecordChild2, // #2 = $amt2
/*1301*/    OPC_MoveChild, 2,
/*1303*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*1306*/    OPC_MoveParent,
/*1307*/    OPC_EmitMergeInputChains1_0,
/*1308*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->1335
/*1320*/    OPC_RecordNode,   // #0 = $addr
/*1321*/    OPC_CheckType, MVT::i32,
/*1323*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddr:$addr #1 #2
/*1326*/    OPC_MorphNodeTo, TARGET_VAL(Mips::LEA_ADDiu), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: addr:i32:$addr - Complexity = 9
            // Dst: (LEA_ADDiu:i32 addr:i32:$addr)
          /*SwitchOpcode*/ 126|128,1/*254*/,  TARGET_VAL(ISD::ADD),// ->1593
/*1339*/    OPC_Scope, 105, /*->1446*/ // 3 children in Scope
/*1341*/      OPC_RecordChild0, // #0 = $hi
/*1342*/      OPC_MoveChild, 1,
/*1344*/      OPC_SwitchOpcode /*2 cases */, 61,  TARGET_VAL(MipsISD::Lo),// ->1409
/*1348*/        OPC_RecordChild0, // #1 = $lo
/*1349*/        OPC_MoveChild, 0,
/*1351*/        OPC_SwitchOpcode /*4 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1366
/*1355*/          OPC_MoveParent,
/*1356*/          OPC_MoveParent,
/*1357*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tglobaladdr:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->1380
/*1369*/          OPC_MoveParent,
/*1370*/          OPC_MoveParent,
/*1371*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tblockaddress:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetJumpTable),// ->1394
/*1383*/          OPC_MoveParent,
/*1384*/          OPC_MoveParent,
/*1385*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tjumptable:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->1408
/*1397*/          OPC_MoveParent,
/*1398*/          OPC_MoveParent,
/*1399*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$hi, (MipsLo:i32 (tconstpool:i32):$lo)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 33,  TARGET_VAL(MipsISD::GPRel),// ->1445
/*1412*/        OPC_RecordChild0, // #1 = $in
/*1413*/        OPC_MoveChild, 0,
/*1415*/        OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1430
/*1419*/          OPC_MoveParent,
/*1420*/          OPC_MoveParent,
/*1421*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tglobaladdr:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->1444
/*1433*/          OPC_MoveParent,
/*1434*/          OPC_MoveParent,
/*1435*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (add:i32 CPURegs:i32:$gp, (MipsGPRel:i32 (tconstpool:i32):$in)) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1446*/    /*Scope*/ 110, /*->1557*/
/*1447*/      OPC_MoveChild, 0,
/*1449*/      OPC_SwitchOpcode /*2 cases */, 65,  TARGET_VAL(MipsISD::Lo),// ->1518
/*1453*/        OPC_RecordChild0, // #0 = $lo
/*1454*/        OPC_MoveChild, 0,
/*1456*/        OPC_SwitchOpcode /*4 cases */, 12,  TARGET_VAL(ISD::TargetBlockAddress),// ->1472
/*1460*/          OPC_MoveParent,
/*1461*/          OPC_MoveParent,
/*1462*/          OPC_RecordChild1, // #1 = $hi
/*1463*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tblockaddress:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tblockaddress:i32):$lo)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetJumpTable),// ->1487
/*1475*/          OPC_MoveParent,
/*1476*/          OPC_MoveParent,
/*1477*/          OPC_RecordChild1, // #1 = $hi
/*1478*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tjumptable:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tjumptable:i32):$lo)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetConstantPool),// ->1502
/*1490*/          OPC_MoveParent,
/*1491*/          OPC_MoveParent,
/*1492*/          OPC_RecordChild1, // #1 = $hi
/*1493*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tconstpool:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tconstpool:i32):$lo)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1517
/*1505*/          OPC_MoveParent,
/*1506*/          OPC_MoveParent,
/*1507*/          OPC_RecordChild1, // #1 = $hi
/*1508*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsLo:i32 (tglobaladdr:i32):$lo), CPURegs:i32:$hi) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$hi, (tglobaladdr:i32):$lo)
                0, // EndSwitchOpcode
              /*SwitchOpcode*/ 35,  TARGET_VAL(MipsISD::GPRel),// ->1556
/*1521*/        OPC_RecordChild0, // #0 = $in
/*1522*/        OPC_MoveChild, 0,
/*1524*/        OPC_SwitchOpcode /*2 cases */, 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->1540
/*1528*/          OPC_MoveParent,
/*1529*/          OPC_MoveParent,
/*1530*/          OPC_RecordChild1, // #1 = $gp
/*1531*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tglobaladdr:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tglobaladdr:i32):$in)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetConstantPool),// ->1555
/*1543*/          OPC_MoveParent,
/*1544*/          OPC_MoveParent,
/*1545*/          OPC_RecordChild1, // #1 = $gp
/*1546*/          OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (add:i32 (MipsGPRel:i32 (tconstpool:i32):$in), CPURegs:i32:$gp) - Complexity = 9
                  // Dst: (ADDiu:i32 CPURegs:i32:$gp, (tconstpool:i32):$in)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1557*/    /*Scope*/ 34, /*->1592*/
/*1558*/      OPC_RecordChild0, // #0 = $b
/*1559*/      OPC_RecordChild1, // #1 = $c
/*1560*/      OPC_Scope, 19, /*->1581*/ // 2 children in Scope
/*1562*/        OPC_MoveChild, 1,
/*1564*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1567*/        OPC_CheckPredicate, 18, // Predicate_immSExt16
/*1569*/        OPC_MoveParent,
/*1570*/        OPC_EmitConvertToTarget, 1,
/*1572*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (add:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
                // Dst: (ADDiu:i32 CPURegs:i32:$b, (imm:i32):$c)
/*1581*/      /*Scope*/ 9, /*->1591*/
/*1582*/        OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
                // Dst: (ADDu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*1591*/      0, /*End of Scope*/
/*1592*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97,  TARGET_VAL(MipsISD::FPBrcond),// ->1693
/*1596*/    OPC_RecordNode,   // #0 = 'MipsFPBrcond' chained node
/*1597*/    OPC_MoveChild, 1,
/*1599*/    OPC_Scope, 22, /*->1623*/ // 4 children in Scope
/*1601*/      OPC_CheckInteger, 0, 
/*1603*/      OPC_MoveParent,
/*1604*/      OPC_RecordChild2, // #1 = $dst
/*1605*/      OPC_MoveChild, 2,
/*1607*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1610*/      OPC_MoveParent,
/*1611*/      OPC_RecordChild3, // #2 = physreg input FCR31
/*1612*/      OPC_EmitMergeInputChains1_0,
/*1613*/      OPC_EmitCopyToReg, 2, Mips::FCR31,
/*1616*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1F), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 0:i32, (bb:Other):$dst, FCR31:i32) - Complexity = 8
              // Dst: (BC1F (bb:Other):$dst)
/*1623*/    /*Scope*/ 22, /*->1646*/
/*1624*/      OPC_CheckInteger, 1, 
/*1626*/      OPC_MoveParent,
/*1627*/      OPC_RecordChild2, // #1 = $dst
/*1628*/      OPC_MoveChild, 2,
/*1630*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1633*/      OPC_MoveParent,
/*1634*/      OPC_RecordChild3, // #2 = physreg input FCR31
/*1635*/      OPC_EmitMergeInputChains1_0,
/*1636*/      OPC_EmitCopyToReg, 2, Mips::FCR31,
/*1639*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1T), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 1:i32, (bb:Other):$dst, FCR31:i32) - Complexity = 8
              // Dst: (BC1T (bb:Other):$dst)
/*1646*/    /*Scope*/ 22, /*->1669*/
/*1647*/      OPC_CheckInteger, 2, 
/*1649*/      OPC_MoveParent,
/*1650*/      OPC_RecordChild2, // #1 = $dst
/*1651*/      OPC_MoveChild, 2,
/*1653*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1656*/      OPC_MoveParent,
/*1657*/      OPC_RecordChild3, // #2 = physreg input FCR31
/*1658*/      OPC_EmitMergeInputChains1_0,
/*1659*/      OPC_EmitCopyToReg, 2, Mips::FCR31,
/*1662*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1FL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 2:i32, (bb:Other):$dst, FCR31:i32) - Complexity = 8
              // Dst: (BC1FL (bb:Other):$dst)
/*1669*/    /*Scope*/ 22, /*->1692*/
/*1670*/      OPC_CheckInteger, 3, 
/*1672*/      OPC_MoveParent,
/*1673*/      OPC_RecordChild2, // #1 = $dst
/*1674*/      OPC_MoveChild, 2,
/*1676*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1679*/      OPC_MoveParent,
/*1680*/      OPC_RecordChild3, // #2 = physreg input FCR31
/*1681*/      OPC_EmitMergeInputChains1_0,
/*1682*/      OPC_EmitCopyToReg, 2, Mips::FCR31,
/*1685*/      OPC_MorphNodeTo, TARGET_VAL(Mips::BC1TL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (MipsFPBrcond 3:i32, (bb:Other):$dst, FCR31:i32) - Complexity = 8
              // Dst: (BC1TL (bb:Other):$dst)
/*1692*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 56|128,2/*312*/,  TARGET_VAL(ISD::SETCC),// ->2009
/*1697*/    OPC_RecordChild0, // #0 = $b
/*1698*/    OPC_Scope, 97, /*->1797*/ // 2 children in Scope
/*1700*/      OPC_RecordChild1, // #1 = $c
/*1701*/      OPC_MoveChild, 1,
/*1703*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1706*/      OPC_CheckPredicate, 18, // Predicate_immSExt16
/*1708*/      OPC_MoveParent,
/*1709*/      OPC_MoveChild, 2,
/*1711*/      OPC_Scope, 14, /*->1727*/ // 4 children in Scope
/*1713*/        OPC_CheckCondCode, ISD::SETLT,
/*1715*/        OPC_MoveParent,
/*1716*/        OPC_EmitConvertToTarget, 1,
/*1718*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c, SETLT:Other) - Complexity = 7
                // Dst: (SLTi:i32 CPURegs:i32:$b, (imm:i32):$c)
/*1727*/      /*Scope*/ 14, /*->1742*/
/*1728*/        OPC_CheckCondCode, ISD::SETULT,
/*1730*/        OPC_MoveParent,
/*1731*/        OPC_EmitConvertToTarget, 1,
/*1733*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c, SETULT:Other) - Complexity = 7
                // Dst: (SLTiu:i32 CPURegs:i32:$b, (imm:i32):$c)
/*1742*/      /*Scope*/ 26, /*->1769*/
/*1743*/        OPC_CheckCondCode, ISD::SETGE,
/*1745*/        OPC_MoveParent,
/*1746*/        OPC_EmitConvertToTarget, 1,
/*1748*/        OPC_EmitNode, TARGET_VAL(Mips::SLTi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*1757*/        OPC_EmitInteger, MVT::i32, 1, 
/*1760*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETGE:Other) - Complexity = 7
                // Dst: (XORi:i32 (SLTi:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*1769*/      /*Scope*/ 26, /*->1796*/
/*1770*/        OPC_CheckCondCode, ISD::SETUGE,
/*1772*/        OPC_MoveParent,
/*1773*/        OPC_EmitConvertToTarget, 1,
/*1775*/        OPC_EmitNode, TARGET_VAL(Mips::SLTiu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*1784*/        OPC_EmitInteger, MVT::i32, 1, 
/*1787*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs, SETUGE:Other) - Complexity = 7
                // Dst: (XORi:i32 (SLTiu:i32 CPURegs:i32:$lhs, (imm:i32)<<P:Predicate_immSExt16>>:$rhs), 1:i32)
/*1796*/      0, /*End of Scope*/
/*1797*/    /*Scope*/ 81|128,1/*209*/, /*->2008*/
/*1799*/      OPC_CheckChild0Type, MVT::i32,
/*1801*/      OPC_RecordChild1, // #1 = $c
/*1802*/      OPC_MoveChild, 2,
/*1804*/      OPC_Scope, 12, /*->1818*/ // 10 children in Scope
/*1806*/        OPC_CheckCondCode, ISD::SETLT,
/*1808*/        OPC_MoveParent,
/*1809*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$b, CPURegs:i32:$c, SETLT:Other) - Complexity = 3
                // Dst: (SLT:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*1818*/      /*Scope*/ 12, /*->1831*/
/*1819*/        OPC_CheckCondCode, ISD::SETULT,
/*1821*/        OPC_MoveParent,
/*1822*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 CPURegs:i32:$b, CPURegs:i32:$c, SETULT:Other) - Complexity = 3
                // Dst: (SLTu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*1831*/      /*Scope*/ 12, /*->1844*/
/*1832*/        OPC_CheckCondCode, ISD::SETGT,
/*1834*/        OPC_MoveParent,
/*1835*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*1844*/      /*Scope*/ 12, /*->1857*/
/*1845*/        OPC_CheckCondCode, ISD::SETUGT,
/*1847*/        OPC_MoveParent,
/*1848*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs)
/*1857*/      /*Scope*/ 24, /*->1882*/
/*1858*/        OPC_CheckCondCode, ISD::SETEQ,
/*1860*/        OPC_MoveParent,
/*1861*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*1870*/        OPC_EmitInteger, MVT::i32, 1, 
/*1873*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (SLTu:i32 (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*1882*/      /*Scope*/ 24, /*->1907*/
/*1883*/        OPC_CheckCondCode, ISD::SETNE,
/*1885*/        OPC_MoveParent,
/*1886*/        OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*1889*/        OPC_EmitNode, TARGET_VAL(Mips::XOR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #3 
/*1898*/        OPC_MorphNodeTo, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (SLTu:i32 ZERO:i32, (XOR:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs))
/*1907*/      /*Scope*/ 24, /*->1932*/
/*1908*/        OPC_CheckCondCode, ISD::SETLE,
/*1910*/        OPC_MoveParent,
/*1911*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*1920*/        OPC_EmitInteger, MVT::i32, 1, 
/*1923*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*1932*/      /*Scope*/ 24, /*->1957*/
/*1933*/        OPC_CheckCondCode, ISD::SETULE,
/*1935*/        OPC_MoveParent,
/*1936*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*1945*/        OPC_EmitInteger, MVT::i32, 1, 
/*1948*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$rhs, CPURegs:i32:$lhs), 1:i32)
/*1957*/      /*Scope*/ 24, /*->1982*/
/*1958*/        OPC_CheckCondCode, ISD::SETGE,
/*1960*/        OPC_MoveParent,
/*1961*/        OPC_EmitNode, TARGET_VAL(Mips::SLT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*1970*/        OPC_EmitInteger, MVT::i32, 1, 
/*1973*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLT:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*1982*/      /*Scope*/ 24, /*->2007*/
/*1983*/        OPC_CheckCondCode, ISD::SETUGE,
/*1985*/        OPC_MoveParent,
/*1986*/        OPC_EmitNode, TARGET_VAL(Mips::SLTu), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*1995*/        OPC_EmitInteger, MVT::i32, 1, 
/*1998*/        OPC_MorphNodeTo, TARGET_VAL(Mips::XORi), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (XORi:i32 (SLTu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs), 1:i32)
/*2007*/      0, /*End of Scope*/
/*2008*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::AND),// ->2049
/*2012*/    OPC_RecordChild0, // #0 = $b
/*2013*/    OPC_RecordChild1, // #1 = $c
/*2014*/    OPC_Scope, 22, /*->2038*/ // 2 children in Scope
/*2016*/      OPC_MoveChild, 1,
/*2018*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2021*/      OPC_CheckPredicate, 17, // Predicate_immZExt16
/*2023*/      OPC_MoveParent,
/*2024*/      OPC_EmitConvertToTarget, 1,
/*2026*/      OPC_EmitNodeXForm, 0, 2, // LO16
/*2029*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ANDi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (and:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c) - Complexity = 7
              // Dst: (ANDi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
/*2038*/    /*Scope*/ 9, /*->2048*/
/*2039*/      OPC_MorphNodeTo, TARGET_VAL(Mips::AND), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (AND:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*2048*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::OR),// ->2089
/*2052*/    OPC_RecordChild0, // #0 = $b
/*2053*/    OPC_RecordChild1, // #1 = $c
/*2054*/    OPC_Scope, 22, /*->2078*/ // 2 children in Scope
/*2056*/      OPC_MoveChild, 1,
/*2058*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2061*/      OPC_CheckPredicate, 17, // Predicate_immZExt16
/*2063*/      OPC_MoveParent,
/*2064*/      OPC_EmitConvertToTarget, 1,
/*2066*/      OPC_EmitNodeXForm, 0, 2, // LO16
/*2069*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (or:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$c) - Complexity = 7
              // Dst: (ORi:i32 CPURegs:i32:$b, (LO16:i32 (imm:i32):$c))
/*2078*/    /*Scope*/ 9, /*->2088*/
/*2079*/      OPC_MorphNodeTo, TARGET_VAL(Mips::OR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (OR:i32 CPURegs:i32:$b, CPURegs:i32:$c)
/*2088*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->2126
/*2092*/    OPC_RecordChild0, // #0 = $b
/*2093*/    OPC_RecordChild1, // #1 = $c
/*2094*/    OPC_Scope, 19, /*->2115*/ // 2 children in Scope
/*2096*/      OPC_MoveChild, 1,
/*2098*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2101*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2103*/      OPC_MoveParent,
/*2104*/      OPC_EmitConvertToTarget, 1,
/*2106*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SLL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (SLL:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2115*/    /*Scope*/ 9, /*->2125*/
/*2116*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SLLV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (shl:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (SLLV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2125*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->2163
/*2129*/    OPC_RecordChild0, // #0 = $b
/*2130*/    OPC_RecordChild1, // #1 = $c
/*2131*/    OPC_Scope, 19, /*->2152*/ // 2 children in Scope
/*2133*/      OPC_MoveChild, 1,
/*2135*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2138*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2140*/      OPC_MoveParent,
/*2141*/      OPC_EmitConvertToTarget, 1,
/*2143*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (SRL:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2152*/    /*Scope*/ 9, /*->2162*/
/*2153*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRLV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (srl:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (SRLV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2162*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRA),// ->2200
/*2166*/    OPC_RecordChild0, // #0 = $b
/*2167*/    OPC_RecordChild1, // #1 = $c
/*2168*/    OPC_Scope, 19, /*->2189*/ // 2 children in Scope
/*2170*/      OPC_MoveChild, 1,
/*2172*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2175*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2177*/      OPC_MoveParent,
/*2178*/      OPC_EmitConvertToTarget, 1,
/*2180*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sra:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (SRA:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2189*/    /*Scope*/ 9, /*->2199*/
/*2190*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SRAV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (sra:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (SRAV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2199*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::ROTR),// ->2241
/*2203*/    OPC_RecordChild0, // #0 = $b
/*2204*/    OPC_RecordChild1, // #1 = $c
/*2205*/    OPC_Scope, 21, /*->2228*/ // 2 children in Scope
/*2207*/      OPC_MoveChild, 1,
/*2209*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2212*/      OPC_CheckPredicate, 19, // Predicate_immZExt5
/*2214*/      OPC_MoveParent,
/*2215*/      OPC_CheckPatternPredicate, 2, // (Subtarget.isMips32r2())
/*2217*/      OPC_EmitConvertToTarget, 1,
/*2219*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ROTR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (rotr:i32 CPURegs:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (ROTR:i32 CPURegs:i32:$b, (imm:i32):$c)
/*2228*/    /*Scope*/ 11, /*->2240*/
/*2229*/      OPC_CheckPatternPredicate, 2, // (Subtarget.isMips32r2())
/*2231*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ROTRV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (rotr:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
              // Dst: (ROTRV:i32 CPURegs:i32:$c, CPURegs:i32:$b)
/*2240*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::ADDC),// ->2278
/*2244*/    OPC_RecordChild0, // #0 = $src
/*2245*/    OPC_RecordChild1, // #1 = $imm
/*2246*/    OPC_Scope, 19, /*->2267*/ // 2 children in Scope
/*2248*/      OPC_MoveChild, 1,
/*2250*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2253*/      OPC_CheckPredicate, 18, // Predicate_immSExt16
/*2255*/      OPC_MoveParent,
/*2256*/      OPC_EmitConvertToTarget, 1,
/*2258*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 CPURegs:i32:$src, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (ADDiu:i32 CPURegs:i32:$src, (imm:i32):$imm)
/*2267*/    /*Scope*/ 9, /*->2277*/
/*2268*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDu), 0|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
              // Dst: (ADDu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
/*2277*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->2298
/*2281*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*2282*/    OPC_RecordChild1, // #1 = $amt
/*2283*/    OPC_MoveChild, 1,
/*2285*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2288*/    OPC_MoveParent,
/*2289*/    OPC_EmitMergeInputChains1_0,
/*2290*/    OPC_MorphNodeTo, TARGET_VAL(Mips::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 67,  TARGET_VAL(MipsISD::JmpLink),// ->2368
/*2301*/    OPC_RecordNode,   // #0 = 'MipsJmpLink' chained node
/*2302*/    OPC_CaptureGlueInput,
/*2303*/    OPC_RecordChild1, // #1 = $target
/*2304*/    OPC_Scope, 49, /*->2355*/ // 2 children in Scope
/*2306*/      OPC_MoveChild, 1,
/*2308*/      OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::Constant),// ->2324
/*2312*/        OPC_MoveParent,
/*2313*/        OPC_EmitMergeInputChains1_0,
/*2314*/        OPC_EmitConvertToTarget, 1,
/*2316*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (MipsJmpLink (imm:iPTR):$target) - Complexity = 6
                // Dst: (JAL:i32 (imm:i32):$target)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2339
/*2327*/        OPC_CheckType, MVT::i32,
/*2329*/        OPC_MoveParent,
/*2330*/        OPC_EmitMergeInputChains1_0,
/*2331*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (JAL:i32 (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->2354
/*2342*/        OPC_CheckType, MVT::i32,
/*2344*/        OPC_MoveParent,
/*2345*/        OPC_EmitMergeInputChains1_0,
/*2346*/        OPC_MorphNodeTo, TARGET_VAL(Mips::JAL), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (MipsJmpLink (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (JAL:i32 (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*2355*/    /*Scope*/ 11, /*->2367*/
/*2356*/      OPC_CheckChild1Type, MVT::i32,
/*2358*/      OPC_EmitMergeInputChains1_0,
/*2359*/      OPC_MorphNodeTo, TARGET_VAL(Mips::JALR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (MipsJmpLink CPURegs:i32:$rs) - Complexity = 3
              // Dst: (JALR:i32 CPURegs:i32:$rs)
/*2367*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(MipsISD::Hi),// ->2412
/*2371*/    OPC_RecordChild0, // #0 = $in
/*2372*/    OPC_MoveChild, 0,
/*2374*/    OPC_SwitchOpcode /*3 cases */, 9,  TARGET_VAL(ISD::TargetGlobalAddress),// ->2387
/*2378*/      OPC_MoveParent,
/*2379*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (MipsHi:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (LUi:i32 (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetJumpTable),// ->2399
/*2390*/      OPC_MoveParent,
/*2391*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (MipsHi:i32 (tjumptable:i32):$in) - Complexity = 6
              // Dst: (LUi:i32 (tjumptable:i32):$in)
            /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::TargetConstantPool),// ->2411
/*2402*/      OPC_MoveParent,
/*2403*/      OPC_MorphNodeTo, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (MipsHi:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (LUi:i32 (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 51,  TARGET_VAL(MipsISD::FPCmp),// ->2466
/*2415*/    OPC_RecordChild0, // #0 = $fs
/*2416*/    OPC_Scope, 22, /*->2440*/ // 2 children in Scope
/*2418*/      OPC_CheckChild0Type, MVT::f32,
/*2420*/      OPC_RecordChild1, // #1 = $ft
/*2421*/      OPC_RecordChild2, // #2 = $cc
/*2422*/      OPC_MoveChild, 2,
/*2424*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2427*/      OPC_MoveParent,
/*2428*/      OPC_EmitConvertToTarget, 2,
/*2430*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_S32), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc) - Complexity = 6
              // Dst: (FCMP_S32:i32 FGR32:f32:$fs, FGR32:f32:$ft, (imm:i32):$cc)
/*2440*/    /*Scope*/ 24, /*->2465*/
/*2441*/      OPC_CheckChild0Type, MVT::f64,
/*2443*/      OPC_RecordChild1, // #1 = $ft
/*2444*/      OPC_RecordChild2, // #2 = $cc
/*2445*/      OPC_MoveChild, 2,
/*2447*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2450*/      OPC_MoveParent,
/*2451*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*2453*/      OPC_EmitConvertToTarget, 2,
/*2455*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FCMP_D32), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MipsFPCmp:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc) - Complexity = 6
              // Dst: (FCMP_D32:i32 AFGR64:f64:$fs, AFGR64:f64:$ft, (imm:i32):$cc)
/*2465*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 59,  TARGET_VAL(MipsISD::FPSelectCC),// ->2528
/*2469*/    OPC_RecordChild0, // #0 = $CmpRes
/*2470*/    OPC_RecordChild1, // #1 = $T
/*2471*/    OPC_RecordChild2, // #2 = $F
/*2472*/    OPC_RecordChild3, // #3 = $cc
/*2473*/    OPC_MoveChild, 3,
/*2475*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2478*/    OPC_MoveParent,
/*2479*/    OPC_SwitchType /*3 cases */, 13,  MVT::i32,// ->2495
/*2482*/      OPC_EmitConvertToTarget, 3,
/*2484*/      OPC_MorphNodeTo, TARGET_VAL(Mips::Select_FCC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 4, 
              // Src: (MipsFPSelectCC:i32 CPURegs:i32:$CmpRes, CPURegs:i32:$T, CPURegs:i32:$F, (imm:i32):$cc) - Complexity = 6
              // Dst: (Select_FCC:i32 CPURegs:i32:$CmpRes, CPURegs:i32:$T, CPURegs:i32:$F, (imm:i32):$cc)
            /*SwitchType*/ 13,  MVT::f32,// ->2510
/*2497*/      OPC_EmitConvertToTarget, 3,
/*2499*/      OPC_MorphNodeTo, TARGET_VAL(Mips::Select_FCC_S32), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 1, 2, 4, 
              // Src: (MipsFPSelectCC:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F, (imm:i32):$cc) - Complexity = 6
              // Dst: (Select_FCC_S32:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F, (imm:i32):$cc)
            /*SwitchType*/ 15,  MVT::f64,// ->2527
/*2512*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*2514*/      OPC_EmitConvertToTarget, 3,
/*2516*/      OPC_MorphNodeTo, TARGET_VAL(Mips::Select_FCC_D32), 0,
                  1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 1, 2, 4, 
              // Src: (MipsFPSelectCC:f64 CPURegs:i32:$CmpRes, AFGR64:f64:$T, AFGR64:f64:$F, (imm:i32):$cc) - Complexity = 6
              // Dst: (Select_FCC_D32:f64 CPURegs:i32:$CmpRes, AFGR64:f64:$T, AFGR64:f64:$F, (imm:i32):$cc)
            0, // EndSwitchType
          /*SwitchOpcode*/ 65,  TARGET_VAL(ISD::Constant),// ->2596
/*2531*/    OPC_RecordNode,   // #0 = $in
/*2532*/    OPC_Scope, 16, /*->2550*/ // 3 children in Scope
/*2534*/      OPC_CheckPredicate, 18, // Predicate_immSExt16
/*2536*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2539*/      OPC_EmitConvertToTarget, 0,
/*2541*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ADDiu), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immSExt16>>:$in - Complexity = 4
              // Dst: (ADDiu:i32 ZERO:i32, (imm:i32):$in)
/*2550*/    /*Scope*/ 16, /*->2567*/
/*2551*/      OPC_CheckPredicate, 17, // Predicate_immZExt16
/*2553*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2556*/      OPC_EmitConvertToTarget, 0,
/*2558*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$in - Complexity = 4
              // Dst: (ORi:i32 ZERO:i32, (imm:i32):$in)
/*2567*/    /*Scope*/ 27, /*->2595*/
/*2568*/      OPC_EmitConvertToTarget, 0,
/*2570*/      OPC_EmitNodeXForm, 1, 1, // HI16
/*2573*/      OPC_EmitNode, TARGET_VAL(Mips::LUi), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*2581*/      OPC_EmitConvertToTarget, 0,
/*2583*/      OPC_EmitNodeXForm, 0, 4, // LO16
/*2586*/      OPC_MorphNodeTo, TARGET_VAL(Mips::ORi), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i32):$imm - Complexity = 3
              // Dst: (ORi:i32 (LUi:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*2595*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SUB),// ->2610
/*2599*/    OPC_RecordChild0, // #0 = $b
/*2600*/    OPC_RecordChild1, // #1 = $c
/*2601*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sub:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
            // Dst: (SUBu:i32 CPURegs:i32:$b, CPURegs:i32:$c)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->2629
/*2613*/    OPC_RecordNode,   // #0 = 'br' chained node
/*2614*/    OPC_RecordChild1, // #1 = $target
/*2615*/    OPC_MoveChild, 1,
/*2617*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2620*/    OPC_MoveParent,
/*2621*/    OPC_EmitMergeInputChains1_0,
/*2622*/    OPC_MorphNodeTo, TARGET_VAL(Mips::J), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$target) - Complexity = 3
            // Dst: (J (bb:Other):$target)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->2644
/*2632*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*2633*/    OPC_RecordChild1, // #1 = $target
/*2634*/    OPC_CheckChild1Type, MVT::i32,
/*2636*/    OPC_EmitMergeInputChains1_0,
/*2637*/    OPC_MorphNodeTo, TARGET_VAL(Mips::JR), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind CPURegs:i32:$target) - Complexity = 3
            // Dst: (JR CPURegs:i32:$target)
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::Ret),// ->2658
/*2647*/    OPC_RecordNode,   // #0 = 'MipsRet' chained node
/*2648*/    OPC_CaptureGlueInput,
/*2649*/    OPC_RecordChild1, // #1 = $target
/*2650*/    OPC_EmitMergeInputChains1_0,
/*2651*/    OPC_MorphNodeTo, TARGET_VAL(Mips::RET), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (MipsRet CPURegs:i32:$target) - Complexity = 3
            // Dst: (RET CPURegs:i32:$target)
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::DivRem),// ->2672
/*2661*/    OPC_RecordChild0, // #0 = $a
/*2662*/    OPC_RecordChild1, // #1 = $b
/*2663*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SDIV), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRem CPURegs:i32:$a, CPURegs:i32:$b) - Complexity = 3
            // Dst: (SDIV:i32 CPURegs:i32:$a, CPURegs:i32:$b)
          /*SwitchOpcode*/ 11,  TARGET_VAL(MipsISD::DivRemU),// ->2686
/*2675*/    OPC_RecordChild0, // #0 = $a
/*2676*/    OPC_RecordChild1, // #1 = $b
/*2677*/    OPC_MorphNodeTo, TARGET_VAL(Mips::UDIV), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsDivRemU CPURegs:i32:$a, CPURegs:i32:$b) - Complexity = 3
            // Dst: (UDIV:i32 CPURegs:i32:$a, CPURegs:i32:$b)
          /*SwitchOpcode*/ 33,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->2722
/*2689*/    OPC_RecordChild0, // #0 = $src
/*2690*/    OPC_MoveChild, 1,
/*2692*/    OPC_Scope, 13, /*->2707*/ // 2 children in Scope
/*2694*/      OPC_CheckValueType, MVT::i8,
/*2696*/      OPC_MoveParent,
/*2697*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasSEInReg())
/*2699*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SEB), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 CPURegs:i32:$src, i8:Other) - Complexity = 3
              // Dst: (SEB:i32 CPURegs:i32:$src)
/*2707*/    /*Scope*/ 13, /*->2721*/
/*2708*/      OPC_CheckValueType, MVT::i16,
/*2710*/      OPC_MoveParent,
/*2711*/      OPC_CheckPatternPredicate, 4, // (Subtarget.hasSEInReg())
/*2713*/      OPC_MorphNodeTo, TARGET_VAL(Mips::SEH), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 CPURegs:i32:$src, i16:Other) - Complexity = 3
              // Dst: (SEH:i32 CPURegs:i32:$src)
/*2721*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::BSWAP),// ->2736
/*2725*/    OPC_RecordChild0, // #0 = $src
/*2726*/    OPC_CheckPatternPredicate, 5, // (Subtarget.hasSwap())
/*2728*/    OPC_MorphNodeTo, TARGET_VAL(Mips::WSBW), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (bswap:i32 CPURegs:i32:$src) - Complexity = 3
            // Dst: (WSBW:i32 CPURegs:i32:$src)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MAdd),// ->2759
/*2739*/    OPC_CaptureGlueInput,
/*2740*/    OPC_RecordChild0, // #0 = $rs
/*2741*/    OPC_RecordChild1, // #1 = $rt
/*2742*/    OPC_RecordChild2, // #2 = physreg input LO
/*2743*/    OPC_RecordChild3, // #3 = physreg input HI
/*2744*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*2747*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*2750*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MADD), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAdd CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADD:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MAddu),// ->2782
/*2762*/    OPC_CaptureGlueInput,
/*2763*/    OPC_RecordChild0, // #0 = $rs
/*2764*/    OPC_RecordChild1, // #1 = $rt
/*2765*/    OPC_RecordChild2, // #2 = physreg input LO
/*2766*/    OPC_RecordChild3, // #3 = physreg input HI
/*2767*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*2770*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*2773*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MADDU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMAddu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MADDU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MSub),// ->2805
/*2785*/    OPC_CaptureGlueInput,
/*2786*/    OPC_RecordChild0, // #0 = $rs
/*2787*/    OPC_RecordChild1, // #1 = $rt
/*2788*/    OPC_RecordChild2, // #2 = physreg input LO
/*2789*/    OPC_RecordChild3, // #3 = physreg input HI
/*2790*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*2793*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*2796*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MSUB), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSub CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUB:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 20,  TARGET_VAL(MipsISD::MSubu),// ->2828
/*2808*/    OPC_CaptureGlueInput,
/*2809*/    OPC_RecordChild0, // #0 = $rs
/*2810*/    OPC_RecordChild1, // #1 = $rt
/*2811*/    OPC_RecordChild2, // #2 = physreg input LO
/*2812*/    OPC_RecordChild3, // #3 = physreg input HI
/*2813*/    OPC_EmitCopyToReg, 2, Mips::LO,
/*2816*/    OPC_EmitCopyToReg, 3, Mips::HI,
/*2819*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MSUBU), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (MipsMSubu CPURegs:i32:$rs, CPURegs:i32:$rt, LO:i32, HI:i32) - Complexity = 3
            // Dst: (MSUBU:i32 CPURegs:i32:$rs, CPURegs:i32:$rt)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MUL),// ->2844
/*2831*/    OPC_RecordChild0, // #0 = $b
/*2832*/    OPC_RecordChild1, // #1 = $c
/*2833*/    OPC_CheckPatternPredicate, 6, // (Subtarget.isMips32())
/*2835*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MUL), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mul:i32 CPURegs:i32:$b, CPURegs:i32:$c) - Complexity = 3
            // Dst: (MUL:i32 CPURegs:i32:$b, CPURegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SUBC),// ->2858
/*2847*/    OPC_RecordChild0, // #0 = $lhs
/*2848*/    OPC_RecordChild1, // #1 = $rhs
/*2849*/    OPC_MorphNodeTo, TARGET_VAL(Mips::SUBu), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (subc:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs) - Complexity = 3
            // Dst: (SUBu:i32 CPURegs:i32:$lhs, CPURegs:i32:$rhs)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->2888
/*2861*/    OPC_RecordChild0, // #0 = $src
/*2862*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->2875
/*2865*/      OPC_CheckChild0Type, MVT::f32,
/*2867*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i32 FGR32:f32:$src) - Complexity = 3
              // Dst: (MFC1:i32 FGR32:f32:$src)
            /*SwitchType*/ 10,  MVT::f32,// ->2887
/*2877*/      OPC_CheckChild0Type, MVT::i32,
/*2879*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f32 CPURegs:i32:$src) - Complexity = 3
              // Dst: (MTC1:f32 CPURegs:i32:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 19,  TARGET_VAL(ISD::FP_TO_SINT),// ->2910
/*2891*/    OPC_RecordChild0, // #0 = $src
/*2892*/    OPC_CheckChild0Type, MVT::f32,
/*2894*/    OPC_EmitNode, TARGET_VAL(Mips::TRUNC_W_S32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*2902*/    OPC_MorphNodeTo, TARGET_VAL(Mips::MFC1), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (fp_to_sint:i32 FGR32:f32:$src) - Complexity = 3
            // Dst: (MFC1:i32 (TRUNC_W_S32:f32 FGR32:f32:$src))
          /*SwitchOpcode*/ 43,  TARGET_VAL(MipsISD::SelectCC),// ->2956
/*2913*/    OPC_RecordChild0, // #0 = $CmpRes
/*2914*/    OPC_RecordChild1, // #1 = $T
/*2915*/    OPC_RecordChild2, // #2 = $F
/*2916*/    OPC_SwitchType /*3 cases */, 10,  MVT::i32,// ->2929
/*2919*/      OPC_MorphNodeTo, TARGET_VAL(Mips::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsSelectCC:i32 CPURegs:i32:$CmpRes, CPURegs:i32:$T, CPURegs:i32:$F) - Complexity = 3
              // Dst: (Select_CC:i32 CPURegs:i32:$CmpRes, CPURegs:i32:$T, CPURegs:i32:$F)
            /*SwitchType*/ 10,  MVT::f32,// ->2941
/*2931*/      OPC_MorphNodeTo, TARGET_VAL(Mips::Select_CC_S32), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsSelectCC:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F) - Complexity = 3
              // Dst: (Select_CC_S32:f32 CPURegs:i32:$CmpRes, FGR32:f32:$T, FGR32:f32:$F)
            /*SwitchType*/ 12,  MVT::f64,// ->2955
/*2943*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*2945*/      OPC_MorphNodeTo, TARGET_VAL(Mips::Select_CC_D32), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (MipsSelectCC:f64 CPURegs:i32:$CmpRes, AFGR64:f64:$T, AFGR64:f64:$F) - Complexity = 3
              // Dst: (Select_CC_D32:f64 CPURegs:i32:$CmpRes, AFGR64:f64:$T, AFGR64:f64:$F)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::ConstantFP),// ->2999
/*2959*/    OPC_CheckType, MVT::f32,
/*2961*/    OPC_Scope, 13, /*->2976*/ // 2 children in Scope
/*2963*/      OPC_CheckPredicate, 20, // Predicate_fpimm0
/*2965*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2968*/      OPC_MorphNodeTo, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
              // Dst: (MTC1:f32 ZERO:i32)
/*2976*/    /*Scope*/ 21, /*->2998*/
/*2977*/      OPC_CheckPredicate, 21, // Predicate_fpimm0neg
/*2979*/      OPC_EmitRegister, MVT::i32, Mips::ZERO,
/*2982*/      OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*2990*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (fpimm:f32)<<P:Predicate_fpimm0neg>> - Complexity = 4
              // Dst: (FNEG_S32:f32 (MTC1:f32 ZERO:i32))
/*2998*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FABS),// ->3027
/*3002*/    OPC_RecordChild0, // #0 = $fs
/*3003*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->3014
/*3006*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FABS_S32:f32 FGR32:f32:$fs)
            /*SwitchType*/ 10,  MVT::f64,// ->3026
/*3016*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3018*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FABS_D32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 AFGR64:f64:$fs) - Complexity = 3
              // Dst: (FABS_D32:f64 AFGR64:f64:$fs)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FNEG),// ->3055
/*3030*/    OPC_RecordChild0, // #0 = $fs
/*3031*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->3042
/*3034*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fneg:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FNEG_S32:f32 FGR32:f32:$fs)
            /*SwitchType*/ 10,  MVT::f64,// ->3054
/*3044*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3046*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FNEG_D32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fneg:f64 AFGR64:f64:$fs) - Complexity = 3
              // Dst: (FNEG_D32:f64 AFGR64:f64:$fs)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FSQRT),// ->3083
/*3058*/    OPC_RecordChild0, // #0 = $fs
/*3059*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->3070
/*3062*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_S32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 FGR32:f32:$fs) - Complexity = 3
              // Dst: (FSQRT_S32:f32 FGR32:f32:$fs)
            /*SwitchType*/ 10,  MVT::f64,// ->3082
/*3072*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3074*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSQRT_D32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 AFGR64:f64:$fs) - Complexity = 3
              // Dst: (FSQRT_D32:f64 AFGR64:f64:$fs)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FADD),// ->3114
/*3086*/    OPC_RecordChild0, // #0 = $fs
/*3087*/    OPC_RecordChild1, // #1 = $ft
/*3088*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->3100
/*3091*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FADD_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->3113
/*3102*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3104*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FADD_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fadd:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FADD_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FDIV),// ->3145
/*3117*/    OPC_RecordChild0, // #0 = $fs
/*3118*/    OPC_RecordChild1, // #1 = $ft
/*3119*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->3131
/*3122*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FDIV_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->3144
/*3133*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3135*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FDIV_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FDIV_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FMUL),// ->3176
/*3148*/    OPC_RecordChild0, // #0 = $fs
/*3149*/    OPC_RecordChild1, // #1 = $ft
/*3150*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->3162
/*3153*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FMUL_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->3175
/*3164*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3166*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FMUL_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FMUL_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::FSUB),// ->3207
/*3179*/    OPC_RecordChild0, // #0 = $fs
/*3180*/    OPC_RecordChild1, // #1 = $ft
/*3181*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->3193
/*3184*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_S32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f32 FGR32:f32:$fs, FGR32:f32:$ft) - Complexity = 3
              // Dst: (FSUB_S32:f32 FGR32:f32:$fs, FGR32:f32:$ft)
            /*SwitchType*/ 11,  MVT::f64,// ->3206
/*3195*/      OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3197*/      OPC_MorphNodeTo, TARGET_VAL(Mips::FSUB_D32), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:f64 AFGR64:f64:$fs, AFGR64:f64:$ft) - Complexity = 3
              // Dst: (FSUB_D32:f64 AFGR64:f64:$fs, AFGR64:f64:$ft)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FP_ROUND),// ->3221
/*3210*/    OPC_RecordChild0, // #0 = $src
/*3211*/    OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3213*/    OPC_MorphNodeTo, TARGET_VAL(Mips::CVTS_D32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 AFGR64:f64:$src) - Complexity = 3
            // Dst: (CVTS_D32:f32 AFGR64:f64:$src)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FP_EXTEND),// ->3235
/*3224*/    OPC_RecordChild0, // #0 = $src
/*3225*/    OPC_CheckPatternPredicate, 3, // (!Subtarget.isFP64bit())
/*3227*/    OPC_MorphNodeTo, TARGET_VAL(Mips::CVTD_S32), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (fextend:f64 FGR32:f32:$src) - Complexity = 3
            // Dst: (CVTD_S32:f64 FGR32:f32:$src)
          /*SwitchOpcode*/ 10,  TARGET_VAL(MipsISD::FPRound),// ->3248
/*3238*/    OPC_CaptureGlueInput,
/*3239*/    OPC_RecordChild0, // #0 = $src
/*3240*/    OPC_MorphNodeTo, TARGET_VAL(Mips::CVTW_D32), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (MipsFPRound:f32 AFGR64:f64:$src) - Complexity = 3
            // Dst: (CVTW_D32:f32 AFGR64:f64:$src)
          /*SwitchOpcode*/ 39,  TARGET_VAL(ISD::SINT_TO_FP),// ->3290
/*3251*/    OPC_RecordChild0, // #0 = $src
/*3252*/    OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->3271
/*3255*/      OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*3263*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CVTS_W32), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 1, 
              // Src: (sint_to_fp:f32 CPURegs:i32:$src) - Complexity = 3
              // Dst: (CVTS_W32:f32 (MTC1:f32 CPURegs:i32:$src))
            /*SwitchType*/ 16,  MVT::f64,// ->3289
/*3273*/      OPC_EmitNode, TARGET_VAL(Mips::MTC1), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0,  // Results = #1 
/*3281*/      OPC_MorphNodeTo, TARGET_VAL(Mips::CVTD_W32), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 1, 
              // Src: (sint_to_fp:f64 CPURegs:i32:$src) - Complexity = 3
              // Dst: (CVTD_W32:f64 (MTC1:f32 CPURegs:i32:$src))
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 3292 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 37
  // #OPC_RecordNode                     = 12
  // #OPC_RecordChild                    = 158
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 8
  // #OPC_MoveChild                      = 65
  // #OPC_MoveParent                     = 142
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 22
  // #OPC_CheckPredicate                 = 42
  // #OPC_CheckOpcode                    = 43
  // #OPC_SwitchOpcode                   = 9
  // #OPC_CheckType                      = 20
  // #OPC_SwitchType                     = 12
  // #OPC_CheckChildType                 = 13
  // #OPC_CheckInteger                   = 9
  // #OPC_CheckCondCode                  = 37
  // #OPC_CheckValueType                 = 2
  // #OPC_CheckComplexPat                = 17
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 7
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 17
  // #OPC_EmitConvertToTarget            = 27
  // #OPC_EmitMergeInputChains           = 44
  // #OPC_EmitCopyToReg                  = 12
  // #OPC_EmitNode                       = 29
  // #OPC_EmitNodeXForm                  = 5
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 153

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (!Subtarget.isSingleFloat()) && (!Subtarget.isMips1());
  case 1: return (Subtarget.hasBitCount());
  case 2: return (Subtarget.isMips32r2());
  case 3: return (!Subtarget.isFP64bit());
  case 4: return (Subtarget.hasSEInReg());
  case 5: return (Subtarget.hasSwap());
  case 6: return (Subtarget.isMips32());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 2: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 3: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 4: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 5: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 6: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 7: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 9: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 10: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 11: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 12: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 13: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 14: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 15: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 16: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 17: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  if (N->getValueType(0) == MVT::i32)
    return (uint32_t)N->getZExtValue() == (unsigned short)N->getZExtValue();
  else
    return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 18: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return isInt<16>(N->getSExtValue()); 
  }
  case 19: { // Predicate_immZExt5
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0x1f) ;

  }
  case 20: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 21: { // Predicate_fpimm0neg
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(-0.0);

  }
  }
}

bool CheckComplexPattern(SDNode *Root, SDNode *Parent, SDValue N,
                         unsigned PatternNo,
         SmallVectorImpl<std::pair<SDValue, SDNode*> > &Result) {
  unsigned NextRes = Result.size();
  switch (PatternNo) {
  default: assert(0 && "Invalid pattern # in table?");
  case 0:
    Result.resize(NextRes+2);
    return SelectAddr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getI32Imm((unsigned)N->getZExtValue() & 0xFFFF);

  }
  case 1: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  }
}

