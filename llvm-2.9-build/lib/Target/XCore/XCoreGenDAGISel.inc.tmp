//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the XCore target
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
/*0*/     OPC_SwitchOpcode /*40 cases */, 122|128,1/*250*/,  TARGET_VAL(ISD::ADD),// ->255
/*5*/       OPC_Scope, 29, /*->36*/ // 5 children in Scope
/*7*/         OPC_MoveChild, 0,
/*9*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*12*/        OPC_MoveChild, 0,
/*14*/        OPC_CheckInteger, 1, 
/*16*/        OPC_MoveParent,
/*17*/        OPC_RecordChild1, // #0 = $size
/*18*/        OPC_MoveParent,
/*19*/        OPC_MoveChild, 1,
/*21*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,15/*4294967295*/, 
/*27*/        OPC_MoveParent,
/*28*/        OPC_MorphNodeTo, TARGET_VAL(XCore::MKMSK_2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (add:i32 (shl:i32 1:i32, GRRegs:i32:$size), 4294967295:i32) - Complexity = 16
              // Dst: (MKMSK_2r:i32 GRRegs:i32:$size)
/*36*/      /*Scope*/ 39, /*->76*/
/*37*/        OPC_RecordChild0, // #0 = $addr
/*38*/        OPC_MoveChild, 1,
/*40*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*43*/        OPC_RecordChild0, // #1 = $offset
/*44*/        OPC_MoveChild, 1,
/*46*/        OPC_Scope, 13, /*->61*/ // 2 children in Scope
/*48*/          OPC_CheckInteger, 2, 
/*50*/          OPC_MoveParent,
/*51*/          OPC_MoveParent,
/*52*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*61*/        /*Scope*/ 13, /*->75*/
/*62*/          OPC_CheckInteger, 1, 
/*64*/          OPC_MoveParent,
/*65*/          OPC_MoveParent,
/*66*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*75*/        0, /*End of Scope*/
/*76*/      /*Scope*/ 40, /*->117*/
/*77*/        OPC_MoveChild, 0,
/*79*/        OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*82*/        OPC_RecordChild0, // #0 = $offset
/*83*/        OPC_MoveChild, 1,
/*85*/        OPC_Scope, 14, /*->101*/ // 2 children in Scope
/*87*/          OPC_CheckInteger, 2, 
/*89*/          OPC_MoveParent,
/*90*/          OPC_MoveParent,
/*91*/          OPC_RecordChild1, // #1 = $addr
/*92*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*101*/       /*Scope*/ 14, /*->116*/
/*102*/         OPC_CheckInteger, 1, 
/*104*/         OPC_MoveParent,
/*105*/         OPC_MoveParent,
/*106*/         OPC_RecordChild1, // #1 = $addr
/*107*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr) - Complexity = 11
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*116*/       0, /*End of Scope*/
/*117*/     /*Scope*/ 44, /*->162*/
/*118*/       OPC_RecordNode, // #0 = $addr
/*119*/       OPC_CheckType, MVT::i32,
/*121*/       OPC_Scope, 12, /*->135*/ // 3 children in Scope
/*123*/         OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*126*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRspii:i32:$addr - Complexity = 9
                // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
/*135*/       /*Scope*/ 12, /*->148*/
/*136*/         OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRdpii:$a #1 #2
/*139*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRdpii:i32:$a - Complexity = 9
                // Dst: (LDAWDP_lru6:i32 ADDRdpii:i32:$a)
/*148*/       /*Scope*/ 12, /*->161*/
/*149*/         OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectADDRcpii:$a #1 #2
/*152*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: ADDRcpii:i32:$a - Complexity = 9
                // Dst: (LDAWCP_lu6:i32 ADDRcpii:i32:$a)
/*161*/       0, /*End of Scope*/
/*162*/     /*Scope*/ 91, /*->254*/
/*163*/       OPC_RecordChild0, // #0 = $b
/*164*/       OPC_RecordChild1, // #1 = $c
/*165*/       OPC_Scope, 76, /*->243*/ // 2 children in Scope
/*167*/         OPC_MoveChild, 1,
/*169*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*172*/         OPC_Scope, 14, /*->188*/ // 4 children in Scope
/*174*/           OPC_CheckPredicate, 0, // Predicate_immUs
/*176*/           OPC_MoveParent,
/*177*/           OPC_EmitConvertToTarget, 1,
/*179*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (ADD_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*188*/         /*Scope*/ 17, /*->206*/
/*189*/           OPC_CheckPredicate, 1, // Predicate_immUs4
/*191*/           OPC_MoveParent,
/*192*/           OPC_EmitConvertToTarget, 1,
/*194*/           OPC_EmitNodeXForm, 0, 2, // div4_xform
/*197*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWF_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*206*/         /*Scope*/ 17, /*->224*/
/*207*/           OPC_CheckPredicate, 2, // Predicate_immUsNeg
/*209*/           OPC_MoveParent,
/*210*/           OPC_EmitConvertToTarget, 1,
/*212*/           OPC_EmitNodeXForm, 1, 2, // neg_xform
/*215*/           OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUsNeg>>:$src2) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$src1, (neg_xform:i32 (imm:i32)<<P:Predicate_immUsNeg>>:$src2))
/*224*/         /*Scope*/ 17, /*->242*/
/*225*/           OPC_CheckPredicate, 3, // Predicate_immUs4Neg
/*227*/           OPC_MoveParent,
/*228*/           OPC_EmitConvertToTarget, 1,
/*230*/           OPC_EmitNodeXForm, 2, 2, // div4neg_xform
/*233*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GRRegs:i32:$src1, (imm:i32)<<P:Predicate_immUs4Neg>>:$src2) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$src1, (div4neg_xform:i32 (imm:i32)<<P:Predicate_immUs4Neg>>:$src2))
/*242*/         0, /*End of Scope*/
/*243*/       /*Scope*/ 9, /*->253*/
/*244*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ADD_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (ADD_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*253*/       0, /*End of Scope*/
/*254*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 45|128,3/*429*/,  TARGET_VAL(ISD::LOAD),// ->688
/*259*/     OPC_RecordMemRef,
/*260*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*261*/     OPC_Scope, 40|128,1/*168*/, /*->432*/ // 4 children in Scope
/*264*/       OPC_MoveChild, 1,
/*266*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*269*/       OPC_Scope, 79, /*->350*/ // 2 children in Scope
/*271*/         OPC_RecordChild0, // #1 = $addr
/*272*/         OPC_MoveChild, 1,
/*274*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*277*/         OPC_RecordChild0, // #2 = $offset
/*278*/         OPC_MoveChild, 1,
/*280*/         OPC_Scope, 43, /*->325*/ // 2 children in Scope
/*282*/           OPC_CheckInteger, 1, 
/*284*/           OPC_MoveParent,
/*285*/           OPC_MoveParent,
/*286*/           OPC_CheckType, MVT::i32,
/*288*/           OPC_MoveParent,
/*289*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*291*/           OPC_CheckType, MVT::i32,
/*293*/           OPC_Scope, 14, /*->309*/ // 2 children in Scope
/*295*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*297*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*299*/             OPC_EmitMergeInputChains1_0,
/*300*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*309*/           /*Scope*/ 14, /*->324*/
/*310*/             OPC_CheckPredicate, 7, // Predicate_extload
/*312*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*314*/             OPC_EmitMergeInputChains1_0,
/*315*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                    // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*324*/           0, /*End of Scope*/
/*325*/         /*Scope*/ 23, /*->349*/
/*326*/           OPC_CheckInteger, 2, 
/*328*/           OPC_MoveParent,
/*329*/           OPC_MoveParent,
/*330*/           OPC_CheckType, MVT::i32,
/*332*/           OPC_MoveParent,
/*333*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*335*/           OPC_CheckPredicate, 9, // Predicate_load
/*337*/           OPC_CheckType, MVT::i32,
/*339*/           OPC_EmitMergeInputChains1_0,
/*340*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*349*/         0, /*End of Scope*/
/*350*/       /*Scope*/ 80, /*->431*/
/*351*/         OPC_MoveChild, 0,
/*353*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*356*/         OPC_RecordChild0, // #1 = $offset
/*357*/         OPC_MoveChild, 1,
/*359*/         OPC_Scope, 44, /*->405*/ // 2 children in Scope
/*361*/           OPC_CheckInteger, 1, 
/*363*/           OPC_MoveParent,
/*364*/           OPC_MoveParent,
/*365*/           OPC_RecordChild1, // #2 = $addr
/*366*/           OPC_CheckType, MVT::i32,
/*368*/           OPC_MoveParent,
/*369*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*371*/           OPC_CheckType, MVT::i32,
/*373*/           OPC_Scope, 14, /*->389*/ // 2 children in Scope
/*375*/             OPC_CheckPredicate, 7, // Predicate_extload
/*377*/             OPC_CheckPredicate, 8, // Predicate_extloadi16
/*379*/             OPC_EmitMergeInputChains1_0,
/*380*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*389*/           /*Scope*/ 14, /*->404*/
/*390*/             OPC_CheckPredicate, 5, // Predicate_sextload
/*392*/             OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*394*/             OPC_EmitMergeInputChains1_0,
/*395*/             OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                    // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 15
                    // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*404*/           0, /*End of Scope*/
/*405*/         /*Scope*/ 24, /*->430*/
/*406*/           OPC_CheckInteger, 2, 
/*408*/           OPC_MoveParent,
/*409*/           OPC_MoveParent,
/*410*/           OPC_RecordChild1, // #2 = $addr
/*411*/           OPC_CheckType, MVT::i32,
/*413*/           OPC_MoveParent,
/*414*/           OPC_CheckPredicate, 4, // Predicate_unindexedload
/*416*/           OPC_CheckPredicate, 9, // Predicate_load
/*418*/           OPC_CheckType, MVT::i32,
/*420*/           OPC_EmitMergeInputChains1_0,
/*421*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
                  // Src: (ld:i32 (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 15
                  // Dst: (LDW_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*430*/         0, /*End of Scope*/
/*431*/       0, /*End of Scope*/
/*432*/     /*Scope*/ 39, /*->472*/
/*433*/       OPC_RecordChild1, // #1 = $addr
/*434*/       OPC_CheckChild1Type, MVT::i32,
/*436*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*438*/       OPC_CheckPredicate, 9, // Predicate_load
/*440*/       OPC_CheckType, MVT::i32,
/*442*/       OPC_Scope, 13, /*->457*/ // 2 children in Scope
/*444*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRspii:$addr #2 #3
/*447*/         OPC_EmitMergeInputChains1_0,
/*448*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRspii:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWFI:i32 ADDRspii:i32:$addr)
/*457*/       /*Scope*/ 13, /*->471*/
/*458*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRdpii:$a #2 #3
/*461*/         OPC_EmitMergeInputChains1_0,
/*462*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 ADDRdpii:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDWDP_lru6:i32 ADDRdpii:i32:$a)
/*471*/       0, /*End of Scope*/
/*472*/     /*Scope*/ 82, /*->555*/
/*473*/       OPC_MoveChild, 1,
/*475*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*478*/       OPC_RecordChild0, // #1 = $addr
/*479*/       OPC_RecordChild1, // #2 = $offset
/*480*/       OPC_Scope, 32, /*->514*/ // 2 children in Scope
/*482*/         OPC_MoveChild, 1,
/*484*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*487*/         OPC_CheckPredicate, 1, // Predicate_immUs4
/*489*/         OPC_MoveParent,
/*490*/         OPC_CheckType, MVT::i32,
/*492*/         OPC_MoveParent,
/*493*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*495*/         OPC_CheckPredicate, 9, // Predicate_load
/*497*/         OPC_CheckType, MVT::i32,
/*499*/         OPC_EmitMergeInputChains1_0,
/*500*/         OPC_EmitConvertToTarget, 2,
/*502*/         OPC_EmitNodeXForm, 0, 3, // div4_xform
/*505*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4, 
                // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 11
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*514*/       /*Scope*/ 39, /*->554*/
/*515*/         OPC_CheckType, MVT::i32,
/*517*/         OPC_MoveParent,
/*518*/         OPC_CheckPredicate, 4, // Predicate_unindexedload
/*520*/         OPC_CheckType, MVT::i32,
/*522*/         OPC_Scope, 14, /*->538*/ // 2 children in Scope
/*524*/           OPC_CheckPredicate, 10, // Predicate_zextload
/*526*/           OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*528*/           OPC_EmitMergeInputChains1_0,
/*529*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 7
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*538*/         /*Scope*/ 14, /*->553*/
/*539*/           OPC_CheckPredicate, 7, // Predicate_extload
/*541*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*543*/           OPC_EmitMergeInputChains1_0,
/*544*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                  // Src: (ld:i32 (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 7
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*553*/         0, /*End of Scope*/
/*554*/       0, /*End of Scope*/
/*555*/     /*Scope*/ 2|128,1/*130*/, /*->687*/
/*557*/       OPC_RecordChild1, // #1 = $addr
/*558*/       OPC_CheckChild1Type, MVT::i32,
/*560*/       OPC_CheckPredicate, 4, // Predicate_unindexedload
/*562*/       OPC_CheckType, MVT::i32,
/*564*/       OPC_Scope, 15, /*->581*/ // 4 children in Scope
/*566*/         OPC_CheckPredicate, 9, // Predicate_load
/*568*/         OPC_EmitMergeInputChains1_0,
/*569*/         OPC_EmitInteger, MVT::i32, 0, 
/*572*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LDW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 4
                // Dst: (LDW_2rus:i32 GRRegs:i32:$addr, 0:i32)
/*581*/       /*Scope*/ 25, /*->607*/
/*582*/         OPC_CheckPredicate, 10, // Predicate_zextload
/*584*/         OPC_CheckPredicate, 11, // Predicate_zextloadi8
/*586*/         OPC_EmitMergeInputChains1_0,
/*587*/         OPC_EmitInteger, MVT::i32, 0, 
/*590*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*598*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 4
                // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*607*/       /*Scope*/ 25, /*->633*/
/*608*/         OPC_CheckPredicate, 5, // Predicate_sextload
/*610*/         OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*612*/         OPC_EmitMergeInputChains1_0,
/*613*/         OPC_EmitInteger, MVT::i32, 0, 
/*616*/         OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*624*/         OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 4
                // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*633*/       /*Scope*/ 52, /*->686*/
/*634*/         OPC_CheckPredicate, 7, // Predicate_extload
/*636*/         OPC_Scope, 23, /*->661*/ // 2 children in Scope
/*638*/           OPC_CheckPredicate, 12, // Predicate_extloadi8
/*640*/           OPC_EmitMergeInputChains1_0,
/*641*/           OPC_EmitInteger, MVT::i32, 0, 
/*644*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*652*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD8U_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 4
                  // Dst: (LD8U_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*661*/         /*Scope*/ 23, /*->685*/
/*662*/           OPC_CheckPredicate, 8, // Predicate_extloadi16
/*664*/           OPC_EmitMergeInputChains1_0,
/*665*/           OPC_EmitInteger, MVT::i32, 0, 
/*668*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*676*/           OPC_MorphNodeTo, TARGET_VAL(XCore::LD16S_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                  // Src: (ld:i32 GRRegs:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 4
                  // Dst: (LD16S_3r:i32 GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*685*/         0, /*End of Scope*/
/*686*/       0, /*End of Scope*/
/*687*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::STORE),// ->1000
/*692*/     OPC_RecordMemRef,
/*693*/     OPC_RecordNode,   // #0 = 'st' chained node
/*694*/     OPC_RecordChild1, // #1 = $val
/*695*/     OPC_CheckChild1Type, MVT::i32,
/*697*/     OPC_Scope, 124, /*->823*/ // 4 children in Scope
/*699*/       OPC_MoveChild, 2,
/*701*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*704*/       OPC_Scope, 57, /*->763*/ // 2 children in Scope
/*706*/         OPC_RecordChild0, // #2 = $addr
/*707*/         OPC_MoveChild, 1,
/*709*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*712*/         OPC_RecordChild0, // #3 = $offset
/*713*/         OPC_MoveChild, 1,
/*715*/         OPC_Scope, 23, /*->740*/ // 2 children in Scope
/*717*/           OPC_CheckInteger, 1, 
/*719*/           OPC_MoveParent,
/*720*/           OPC_MoveParent,
/*721*/           OPC_CheckType, MVT::i32,
/*723*/           OPC_MoveParent,
/*724*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*726*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*728*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*730*/           OPC_EmitMergeInputChains1_0,
/*731*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*740*/         /*Scope*/ 21, /*->762*/
/*741*/           OPC_CheckInteger, 2, 
/*743*/           OPC_MoveParent,
/*744*/           OPC_MoveParent,
/*745*/           OPC_CheckType, MVT::i32,
/*747*/           OPC_MoveParent,
/*748*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*750*/           OPC_CheckPredicate, 16, // Predicate_store
/*752*/           OPC_EmitMergeInputChains1_0,
/*753*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                  // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*762*/         0, /*End of Scope*/
/*763*/       /*Scope*/ 58, /*->822*/
/*764*/         OPC_MoveChild, 0,
/*766*/         OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*769*/         OPC_RecordChild0, // #2 = $offset
/*770*/         OPC_MoveChild, 1,
/*772*/         OPC_Scope, 24, /*->798*/ // 2 children in Scope
/*774*/           OPC_CheckInteger, 1, 
/*776*/           OPC_MoveParent,
/*777*/           OPC_MoveParent,
/*778*/           OPC_RecordChild1, // #3 = $addr
/*779*/           OPC_CheckType, MVT::i32,
/*781*/           OPC_MoveParent,
/*782*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*784*/           OPC_CheckPredicate, 14, // Predicate_truncstore
/*786*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*788*/           OPC_EmitMergeInputChains1_0,
/*789*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 1:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 15
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*798*/         /*Scope*/ 22, /*->821*/
/*799*/           OPC_CheckInteger, 2, 
/*801*/           OPC_MoveParent,
/*802*/           OPC_MoveParent,
/*803*/           OPC_RecordChild1, // #3 = $addr
/*804*/           OPC_CheckType, MVT::i32,
/*806*/           OPC_MoveParent,
/*807*/           OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*809*/           OPC_CheckPredicate, 16, // Predicate_store
/*811*/           OPC_EmitMergeInputChains1_0,
/*812*/           OPC_MorphNodeTo, TARGET_VAL(XCore::STW_3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 2, 
                  // Src: (st GRRegs:i32:$val, (add:i32 (shl:i32 GRRegs:i32:$offset, 2:i32), GRRegs:i32:$addr))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 15
                  // Dst: (STW_3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*821*/         0, /*End of Scope*/
/*822*/       0, /*End of Scope*/
/*823*/     /*Scope*/ 37, /*->861*/
/*824*/       OPC_RecordChild2, // #2 = $addr
/*825*/       OPC_CheckChild2Type, MVT::i32,
/*827*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*829*/       OPC_CheckPredicate, 16, // Predicate_store
/*831*/       OPC_Scope, 13, /*->846*/ // 2 children in Scope
/*833*/         OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRspii:$addr #3 #4
/*836*/         OPC_EmitMergeInputChains1_0,
/*837*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:i32:$src, ADDRspii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWFI GRRegs:i32:$src, ADDRspii:i32:$addr)
/*846*/       /*Scope*/ 13, /*->860*/
/*847*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRdpii:$addr #3 #4
/*850*/         OPC_EmitMergeInputChains1_0,
/*851*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STWDP_lru6), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                // Src: (st GRRegs:i32:$val, ADDRdpii:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (STWDP_lru6 GRRegs:i32:$val, ADDRdpii:i32:$addr)
/*860*/       0, /*End of Scope*/
/*861*/     /*Scope*/ 60, /*->922*/
/*862*/       OPC_MoveChild, 2,
/*864*/       OPC_CheckOpcode, TARGET_VAL(ISD::ADD),
/*867*/       OPC_RecordChild0, // #2 = $addr
/*868*/       OPC_RecordChild1, // #3 = $offset
/*869*/       OPC_Scope, 30, /*->901*/ // 2 children in Scope
/*871*/         OPC_MoveChild, 1,
/*873*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*876*/         OPC_CheckPredicate, 1, // Predicate_immUs4
/*878*/         OPC_MoveParent,
/*879*/         OPC_CheckType, MVT::i32,
/*881*/         OPC_MoveParent,
/*882*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*884*/         OPC_CheckPredicate, 16, // Predicate_store
/*886*/         OPC_EmitMergeInputChains1_0,
/*887*/         OPC_EmitConvertToTarget, 3,
/*889*/         OPC_EmitNodeXForm, 0, 4, // div4_xform
/*892*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 5, 
                // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 11
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*901*/       /*Scope*/ 19, /*->921*/
/*902*/         OPC_CheckType, MVT::i32,
/*904*/         OPC_MoveParent,
/*905*/         OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*907*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*909*/         OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*911*/         OPC_EmitMergeInputChains1_0,
/*912*/         OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, (add:i32 GRRegs:i32:$addr, GRRegs:i32:$offset))<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 7
                // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, GRRegs:i32:$offset)
/*921*/       0, /*End of Scope*/
/*922*/     /*Scope*/ 76, /*->999*/
/*923*/       OPC_RecordChild2, // #2 = $addr
/*924*/       OPC_CheckChild2Type, MVT::i32,
/*926*/       OPC_CheckPredicate, 13, // Predicate_unindexedstore
/*928*/       OPC_Scope, 15, /*->945*/ // 2 children in Scope
/*930*/         OPC_CheckPredicate, 16, // Predicate_store
/*932*/         OPC_EmitMergeInputChains1_0,
/*933*/         OPC_EmitInteger, MVT::i32, 0, 
/*936*/         OPC_MorphNodeTo, TARGET_VAL(XCore::STW_2rus), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 1, 2, 3, 
                // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 4
                // Dst: (STW_2rus GRRegs:i32:$val, GRRegs:i32:$addr, 0:i32)
/*945*/       /*Scope*/ 52, /*->998*/
/*946*/         OPC_CheckPredicate, 14, // Predicate_truncstore
/*948*/         OPC_Scope, 23, /*->973*/ // 2 children in Scope
/*950*/           OPC_CheckPredicate, 17, // Predicate_truncstorei8
/*952*/           OPC_EmitMergeInputChains1_0,
/*953*/           OPC_EmitInteger, MVT::i32, 0, 
/*956*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4 
/*964*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST8_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 4
                  // Dst: (ST8_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*973*/         /*Scope*/ 23, /*->997*/
/*974*/           OPC_CheckPredicate, 15, // Predicate_truncstorei16
/*976*/           OPC_EmitMergeInputChains1_0,
/*977*/           OPC_EmitInteger, MVT::i32, 0, 
/*980*/           OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 3,  // Results = #4 
/*988*/           OPC_MorphNodeTo, TARGET_VAL(XCore::ST16_l3r), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 2, 4, 
                  // Src: (st GRRegs:i32:$val, GRRegs:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 4
                  // Dst: (ST16_l3r GRRegs:i32:$val, GRRegs:i32:$addr, (LDC_ru6:i32 0:i32))
/*997*/         0, /*End of Scope*/
/*998*/       0, /*End of Scope*/
/*999*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 94,  TARGET_VAL(ISD::SRA),// ->1097
/*1003*/    OPC_Scope, 35, /*->1040*/ // 2 children in Scope
/*1005*/      OPC_MoveChild, 0,
/*1007*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*1010*/      OPC_RecordChild0, // #0 = $src
/*1011*/      OPC_RecordChild1, // #1 = $imm
/*1012*/      OPC_MoveChild, 1,
/*1014*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1017*/      OPC_CheckPredicate, 18, // Predicate_immBpwSubBitp
/*1019*/      OPC_MoveParent,
/*1020*/      OPC_MoveParent,
/*1021*/      OPC_MoveChild, 1,
/*1023*/      OPC_CheckSame, 1,
/*1025*/      OPC_MoveParent,
/*1026*/      OPC_EmitConvertToTarget, 1,
/*1028*/      OPC_EmitNodeXForm, 3, 2, // bpwsub_xform
/*1031*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
              // Src: (sra:i32 (shl:i32 GRRegs:i32:$src, (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm), (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm) - Complexity = 14
              // Dst: (SEXT_rus:i32 GRRegs:i32:$src, (bpwsub_xform:i32 (imm:i32)<<P:Predicate_immBpwSubBitp>>:$imm))
/*1040*/    /*Scope*/ 55, /*->1096*/
/*1041*/      OPC_RecordChild0, // #0 = $src
/*1042*/      OPC_Scope, 17, /*->1061*/ // 2 children in Scope
/*1044*/        OPC_MoveChild, 1,
/*1046*/        OPC_CheckInteger, 31, 
/*1048*/        OPC_MoveParent,
/*1049*/        OPC_EmitInteger, MVT::i32, 32, 
/*1052*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GRRegs:i32:$src, 31:i32) - Complexity = 8
                // Dst: (ASHR_l2rus:i32 GRRegs:i32:$src, 32:i32)
/*1061*/      /*Scope*/ 33, /*->1095*/
/*1062*/        OPC_RecordChild1, // #1 = $c
/*1063*/        OPC_Scope, 19, /*->1084*/ // 2 children in Scope
/*1065*/          OPC_MoveChild, 1,
/*1067*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1070*/          OPC_CheckPredicate, 19, // Predicate_immBitp
/*1072*/          OPC_MoveParent,
/*1073*/          OPC_EmitConvertToTarget, 1,
/*1075*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sra:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
                  // Dst: (ASHR_l2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*1084*/        /*Scope*/ 9, /*->1094*/
/*1085*/          OPC_MorphNodeTo, TARGET_VAL(XCore::ASHR_l3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sra:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                  // Dst: (ASHR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1094*/        0, /*End of Scope*/
/*1095*/      0, /*End of Scope*/
/*1096*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 62|128,2/*318*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->1419
/*1101*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1102*/    OPC_MoveChild, 1,
/*1104*/    OPC_Scope, 58, /*->1164*/ // 13 children in Scope
/*1106*/      OPC_CheckInteger, 118|128,6/*886*/, 
/*1109*/      OPC_MoveParent,
/*1110*/      OPC_RecordChild2, // #1 = $r
/*1111*/      OPC_CheckChild2Type, MVT::i32,
/*1113*/      OPC_RecordChild3, // #2 = $val
/*1114*/      OPC_Scope, 37, /*->1153*/ // 2 children in Scope
/*1116*/        OPC_MoveChild, 3,
/*1118*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1121*/        OPC_Scope, 14, /*->1137*/ // 2 children in Scope
/*1123*/          OPC_CheckPredicate, 20, // Predicate_immU6
/*1125*/          OPC_MoveParent,
/*1126*/          OPC_EmitMergeInputChains1_0,
/*1127*/          OPC_EmitConvertToTarget, 2,
/*1129*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_ru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 886:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immU6>>:$val) - Complexity = 12
                  // Dst: (SETC_ru6 GRRegs:i32:$r, (imm:i32):$val)
/*1137*/        /*Scope*/ 14, /*->1152*/
/*1138*/          OPC_CheckPredicate, 21, // Predicate_immU16
/*1140*/          OPC_MoveParent,
/*1141*/          OPC_EmitMergeInputChains1_0,
/*1142*/          OPC_EmitConvertToTarget, 2,
/*1144*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (intrinsic_void 886:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immU16>>:$val) - Complexity = 12
                  // Dst: (SETC_lru6 GRRegs:i32:$r, (imm:i32):$val)
/*1152*/        0, /*End of Scope*/
/*1153*/      /*Scope*/ 9, /*->1163*/
/*1154*/        OPC_EmitMergeInputChains1_0,
/*1155*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SETC_l2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 886:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (SETC_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1163*/      0, /*End of Scope*/
/*1164*/    /*Scope*/ 40, /*->1205*/
/*1165*/      OPC_CheckInteger, 115|128,6/*883*/, 
/*1168*/      OPC_MoveParent,
/*1169*/      OPC_RecordChild2, // #1 = $r
/*1170*/      OPC_CheckChild2Type, MVT::i32,
/*1172*/      OPC_RecordChild3, // #2 = $val
/*1173*/      OPC_Scope, 19, /*->1194*/ // 2 children in Scope
/*1175*/        OPC_MoveChild, 3,
/*1177*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1180*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1182*/        OPC_MoveParent,
/*1183*/        OPC_EmitMergeInputChains1_0,
/*1184*/        OPC_EmitConvertToTarget, 2,
/*1186*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 883:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (OUTCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1194*/      /*Scope*/ 9, /*->1204*/
/*1195*/        OPC_EmitMergeInputChains1_0,
/*1196*/        OPC_MorphNodeTo, TARGET_VAL(XCore::OUTCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 883:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (OUTCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1204*/      0, /*End of Scope*/
/*1205*/    /*Scope*/ 40, /*->1246*/
/*1206*/      OPC_CheckInteger, 103|128,6/*871*/, 
/*1209*/      OPC_MoveParent,
/*1210*/      OPC_RecordChild2, // #1 = $r
/*1211*/      OPC_CheckChild2Type, MVT::i32,
/*1213*/      OPC_RecordChild3, // #2 = $val
/*1214*/      OPC_Scope, 19, /*->1235*/ // 2 children in Scope
/*1216*/        OPC_MoveChild, 3,
/*1218*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1221*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1223*/        OPC_MoveParent,
/*1224*/        OPC_EmitMergeInputChains1_0,
/*1225*/        OPC_EmitConvertToTarget, 2,
/*1227*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_rus), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 871:iPTR, GRRegs:i32:$r, (imm:i32)<<P:Predicate_immUs>>:$val) - Complexity = 12
                // Dst: (CHKCT_rus GRRegs:i32:$r, (imm:i32):$val)
/*1235*/      /*Scope*/ 9, /*->1245*/
/*1236*/        OPC_EmitMergeInputChains1_0,
/*1237*/        OPC_MorphNodeTo, TARGET_VAL(XCore::CHKCT_2r), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 871:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
                // Dst: (CHKCT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1245*/      0, /*End of Scope*/
/*1246*/    /*Scope*/ 17, /*->1264*/
/*1247*/      OPC_CheckInteger, 120|128,6/*888*/, 
/*1250*/      OPC_MoveParent,
/*1251*/      OPC_RecordChild2, // #1 = $r
/*1252*/      OPC_CheckChild2Type, MVT::i32,
/*1254*/      OPC_RecordChild3, // #2 = $val
/*1255*/      OPC_EmitMergeInputChains1_0,
/*1256*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETPT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 888:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETPT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1264*/    /*Scope*/ 17, /*->1282*/
/*1265*/      OPC_CheckInteger, 117|128,6/*885*/, 
/*1268*/      OPC_MoveParent,
/*1269*/      OPC_RecordChild2, // #1 = $r
/*1270*/      OPC_CheckChild2Type, MVT::i32,
/*1272*/      OPC_RecordChild3, // #2 = $val
/*1273*/      OPC_EmitMergeInputChains1_0,
/*1274*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 885:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUTT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1282*/    /*Scope*/ 17, /*->1300*/
/*1283*/      OPC_CheckInteger, 114|128,6/*882*/, 
/*1286*/      OPC_MoveParent,
/*1287*/      OPC_RecordChild2, // #1 = $r
/*1288*/      OPC_CheckChild2Type, MVT::i32,
/*1290*/      OPC_RecordChild3, // #2 = $val
/*1291*/      OPC_EmitMergeInputChains1_0,
/*1292*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUT_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 882:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (OUT_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1300*/    /*Scope*/ 17, /*->1318*/
/*1301*/      OPC_CheckInteger, 119|128,6/*887*/, 
/*1304*/      OPC_MoveParent,
/*1305*/      OPC_RecordChild2, // #1 = $r
/*1306*/      OPC_CheckChild2Type, MVT::i32,
/*1308*/      OPC_RecordChild3, // #2 = $val
/*1309*/      OPC_EmitMergeInputChains1_0,
/*1310*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETD_2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 887:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETD_2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1318*/    /*Scope*/ 17, /*->1336*/
/*1319*/      OPC_CheckInteger, 121|128,6/*889*/, 
/*1322*/      OPC_MoveParent,
/*1323*/      OPC_RecordChild2, // #1 = $r
/*1324*/      OPC_CheckChild2Type, MVT::i32,
/*1326*/      OPC_RecordChild3, // #2 = $val
/*1327*/      OPC_EmitMergeInputChains1_0,
/*1328*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETTW_l2r), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_void 889:iPTR, GRRegs:i32:$r, GRRegs:i32:$val) - Complexity = 8
              // Dst: (SETTW_l2r GRRegs:i32:$r, GRRegs:i32:$val)
/*1336*/    /*Scope*/ 15, /*->1352*/
/*1337*/      OPC_CheckInteger, 123|128,6/*891*/, 
/*1340*/      OPC_MoveParent,
/*1341*/      OPC_RecordChild2, // #1 = $r
/*1342*/      OPC_CheckChild2Type, MVT::i32,
/*1344*/      OPC_EmitMergeInputChains1_0,
/*1345*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SYNCR_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 891:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (SYNCR_1r GRRegs:i32:$r)
/*1352*/    /*Scope*/ 15, /*->1368*/
/*1353*/      OPC_CheckInteger, 106|128,6/*874*/, 
/*1356*/      OPC_MoveParent,
/*1357*/      OPC_RecordChild2, // #1 = $r
/*1358*/      OPC_CheckChild2Type, MVT::i32,
/*1360*/      OPC_EmitMergeInputChains1_0,
/*1361*/      OPC_MorphNodeTo, TARGET_VAL(XCore::FREER_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 874:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (FREER_1r GRRegs:i32:$r)
/*1368*/    /*Scope*/ 21, /*->1390*/
/*1369*/      OPC_CheckInteger, 122|128,6/*890*/, 
/*1372*/      OPC_MoveParent,
/*1373*/      OPC_RecordChild2, // #1 = $r
/*1374*/      OPC_CheckChild2Type, MVT::i32,
/*1376*/      OPC_RecordChild3, // #2 = physreg input R11
/*1377*/      OPC_CheckChild3Type, MVT::i32,
/*1379*/      OPC_EmitMergeInputChains1_0,
/*1380*/      OPC_EmitCopyToReg, 2, XCore::R11,
/*1383*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SETV_1r), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 890:iPTR, GRRegs:i32:$r, R11:i32) - Complexity = 8
              // Dst: (SETV_1r GRRegs:i32:$r)
/*1390*/    /*Scope*/ 15, /*->1406*/
/*1391*/      OPC_CheckInteger, 105|128,6/*873*/, 
/*1394*/      OPC_MoveParent,
/*1395*/      OPC_RecordChild2, // #1 = $r
/*1396*/      OPC_CheckChild2Type, MVT::i32,
/*1398*/      OPC_EmitMergeInputChains1_0,
/*1399*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EEU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 873:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (EEU_1r GRRegs:i32:$r)
/*1406*/    /*Scope*/ 11, /*->1418*/
/*1407*/      OPC_CheckInteger, 104|128,6/*872*/, 
/*1410*/      OPC_MoveParent,
/*1411*/      OPC_EmitMergeInputChains1_0,
/*1412*/      OPC_MorphNodeTo, TARGET_VAL(XCore::CLRE_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 872:iPTR) - Complexity = 8
              // Dst: (CLRE_0R)
/*1418*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 10|128,1/*138*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->1561
/*1423*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*1424*/    OPC_MoveChild, 1,
/*1426*/    OPC_Scope, 26, /*->1454*/ // 7 children in Scope
/*1428*/      OPC_CheckInteger, 108|128,6/*876*/, 
/*1431*/      OPC_MoveParent,
/*1432*/      OPC_RecordChild2, // #1 = $type
/*1433*/      OPC_MoveChild, 2,
/*1435*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1438*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*1440*/      OPC_MoveParent,
/*1441*/      OPC_CheckType, MVT::i32,
/*1443*/      OPC_EmitMergeInputChains1_0,
/*1444*/      OPC_EmitConvertToTarget, 1,
/*1446*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETR_rus), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (intrinsic_w_chain:i32 876:iPTR, (imm:i32)<<P:Predicate_immUs>>:$type) - Complexity = 12
              // Dst: (GETR_rus:i32 (imm:i32):$type)
/*1454*/    /*Scope*/ 16, /*->1471*/
/*1455*/      OPC_CheckInteger, 109|128,6/*877*/, 
/*1458*/      OPC_MoveParent,
/*1459*/      OPC_RecordChild2, // #1 = $r
/*1460*/      OPC_CheckChild2Type, MVT::i32,
/*1462*/      OPC_EmitMergeInputChains1_0,
/*1463*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETTS_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 877:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (GETTS_2r:i32 GRRegs:i32:$r)
/*1471*/    /*Scope*/ 18, /*->1490*/
/*1472*/      OPC_CheckInteger, 116|128,6/*884*/, 
/*1475*/      OPC_MoveParent,
/*1476*/      OPC_RecordChild2, // #1 = $r
/*1477*/      OPC_CheckChild2Type, MVT::i32,
/*1479*/      OPC_RecordChild3, // #2 = $src
/*1480*/      OPC_EmitMergeInputChains1_0,
/*1481*/      OPC_MorphNodeTo, TARGET_VAL(XCore::OUTSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 884:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (OUTSHR_2r:i32 GRRegs:i32:$r, GRRegs:i32:$src)
/*1490*/    /*Scope*/ 16, /*->1507*/
/*1491*/      OPC_CheckInteger, 111|128,6/*879*/, 
/*1494*/      OPC_MoveParent,
/*1495*/      OPC_RecordChild2, // #1 = $r
/*1496*/      OPC_CheckChild2Type, MVT::i32,
/*1498*/      OPC_EmitMergeInputChains1_0,
/*1499*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INCT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 879:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INCT_2r:i32 GRRegs:i32:$r)
/*1507*/    /*Scope*/ 16, /*->1524*/
/*1508*/      OPC_CheckInteger, 113|128,6/*881*/, 
/*1511*/      OPC_MoveParent,
/*1512*/      OPC_RecordChild2, // #1 = $r
/*1513*/      OPC_CheckChild2Type, MVT::i32,
/*1515*/      OPC_EmitMergeInputChains1_0,
/*1516*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INT_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 881:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (INT_2r:i32 GRRegs:i32:$r)
/*1524*/    /*Scope*/ 16, /*->1541*/
/*1525*/      OPC_CheckInteger, 110|128,6/*878*/, 
/*1528*/      OPC_MoveParent,
/*1529*/      OPC_RecordChild2, // #1 = $r
/*1530*/      OPC_CheckChild2Type, MVT::i32,
/*1532*/      OPC_EmitMergeInputChains1_0,
/*1533*/      OPC_MorphNodeTo, TARGET_VAL(XCore::IN_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (intrinsic_w_chain:i32 878:iPTR, GRRegs:i32:$r) - Complexity = 8
              // Dst: (IN_2r:i32 GRRegs:i32:$r)
/*1541*/    /*Scope*/ 18, /*->1560*/
/*1542*/      OPC_CheckInteger, 112|128,6/*880*/, 
/*1545*/      OPC_MoveParent,
/*1546*/      OPC_RecordChild2, // #1 = $r
/*1547*/      OPC_CheckChild2Type, MVT::i32,
/*1549*/      OPC_RecordChild3, // #2 = $src
/*1550*/      OPC_EmitMergeInputChains1_0,
/*1551*/      OPC_MorphNodeTo, TARGET_VAL(XCore::INSHR_2r), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_w_chain:i32 880:iPTR, GRRegs:i32:$r, GRRegs:i32:$src) - Complexity = 8
              // Dst: (INSHR_2r:i32 GRRegs:i32:$r, GRRegs:i32:$src)
/*1560*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::SUB),// ->1677
/*1564*/    OPC_Scope, 39, /*->1605*/ // 3 children in Scope
/*1566*/      OPC_RecordChild0, // #0 = $addr
/*1567*/      OPC_MoveChild, 1,
/*1569*/      OPC_CheckOpcode, TARGET_VAL(ISD::SHL),
/*1572*/      OPC_RecordChild0, // #1 = $offset
/*1573*/      OPC_MoveChild, 1,
/*1575*/      OPC_Scope, 13, /*->1590*/ // 2 children in Scope
/*1577*/        OPC_CheckInteger, 2, 
/*1579*/        OPC_MoveParent,
/*1580*/        OPC_MoveParent,
/*1581*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 2:i32)) - Complexity = 11
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*1590*/      /*Scope*/ 13, /*->1604*/
/*1591*/        OPC_CheckInteger, 1, 
/*1593*/        OPC_MoveParent,
/*1594*/        OPC_MoveParent,
/*1595*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16B_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$addr, (shl:i32 GRRegs:i32:$offset, 1:i32)) - Complexity = 11
                // Dst: (LDA16B_l3r:i32 GRRegs:i32:$addr, GRRegs:i32:$offset)
/*1604*/      0, /*End of Scope*/
/*1605*/    /*Scope*/ 14, /*->1620*/
/*1606*/      OPC_MoveChild, 0,
/*1608*/      OPC_CheckInteger, 0, 
/*1610*/      OPC_MoveParent,
/*1611*/      OPC_RecordChild1, // #0 = $b
/*1612*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NEG), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sub:i32 0:i32, GRRegs:i32:$b) - Complexity = 8
              // Dst: (NEG:i32 GRRegs:i32:$b)
/*1620*/    /*Scope*/ 55, /*->1676*/
/*1621*/      OPC_RecordChild0, // #0 = $b
/*1622*/      OPC_RecordChild1, // #1 = $c
/*1623*/      OPC_Scope, 40, /*->1665*/ // 2 children in Scope
/*1625*/        OPC_MoveChild, 1,
/*1627*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1630*/        OPC_Scope, 14, /*->1646*/ // 2 children in Scope
/*1632*/          OPC_CheckPredicate, 0, // Predicate_immUs
/*1634*/          OPC_MoveParent,
/*1635*/          OPC_EmitConvertToTarget, 1,
/*1637*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immUs>>:$c) - Complexity = 7
                  // Dst: (SUB_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*1646*/        /*Scope*/ 17, /*->1664*/
/*1647*/          OPC_CheckPredicate, 1, // Predicate_immUs4
/*1649*/          OPC_MoveParent,
/*1650*/          OPC_EmitConvertToTarget, 1,
/*1652*/          OPC_EmitNodeXForm, 0, 2, // div4_xform
/*1655*/          OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (sub:i32 GRRegs:i32:$addr, (imm:i32)<<P:Predicate_immUs4>>:$offset) - Complexity = 7
                  // Dst: (LDAWB_l2rus:i32 GRRegs:i32:$addr, (div4_xform:i32 (imm:i32)<<P:Predicate_immUs4>>:$offset))
/*1664*/        0, /*End of Scope*/
/*1665*/      /*Scope*/ 9, /*->1675*/
/*1666*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SUB_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (SUB_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1675*/      0, /*End of Scope*/
/*1676*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::AND),// ->1784
/*1680*/    OPC_Scope, 31, /*->1713*/ // 3 children in Scope
/*1682*/      OPC_RecordChild0, // #0 = $src1
/*1683*/      OPC_MoveChild, 1,
/*1685*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1688*/      OPC_RecordChild0, // #1 = $src2
/*1689*/      OPC_MoveChild, 1,
/*1691*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1702*/      OPC_MoveParent,
/*1703*/      OPC_MoveParent,
/*1704*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GRRegs:i32:$src1, (xor:i32 GRRegs:i32:$src2, -1:i32)) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1713*/    /*Scope*/ 31, /*->1745*/
/*1714*/      OPC_MoveChild, 0,
/*1716*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*1719*/      OPC_RecordChild0, // #0 = $src2
/*1720*/      OPC_MoveChild, 1,
/*1722*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1733*/      OPC_MoveParent,
/*1734*/      OPC_MoveParent,
/*1735*/      OPC_RecordChild1, // #1 = $src1
/*1736*/      OPC_MorphNodeTo, TARGET_VAL(XCore::ANDNOT_2r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GRRegs:i32:$src2, -1:i32), GRRegs:i32:$src1) - Complexity = 11
              // Dst: (ANDNOT_2r:i32 GRRegs:i32:$src1, GRRegs:i32:$src2)
/*1745*/    /*Scope*/ 37, /*->1783*/
/*1746*/      OPC_RecordChild0, // #0 = $val
/*1747*/      OPC_RecordChild1, // #1 = $mask
/*1748*/      OPC_Scope, 22, /*->1772*/ // 2 children in Scope
/*1750*/        OPC_MoveChild, 1,
/*1752*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1755*/        OPC_CheckPredicate, 22, // Predicate_immMskBitp
/*1757*/        OPC_MoveParent,
/*1758*/        OPC_EmitConvertToTarget, 1,
/*1760*/        OPC_EmitNodeXForm, 4, 2, // msksize_xform
/*1763*/        OPC_MorphNodeTo, TARGET_VAL(XCore::ZEXT_rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                // Src: (and:i32 GRRegs:i32:$val, (imm:i32)<<P:Predicate_immMskBitp>>:$mask) - Complexity = 7
                // Dst: (ZEXT_rus:i32 GRRegs:i32:$val, (msksize_xform:i32 (imm:i32)<<P:Predicate_immMskBitp>>:$mask))
/*1772*/      /*Scope*/ 9, /*->1782*/
/*1773*/        OPC_MorphNodeTo, TARGET_VAL(XCore::AND_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
                // Dst: (AND_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*1782*/      0, /*End of Scope*/
/*1783*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::BRIND),// ->1827
/*1787*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*1788*/    OPC_Scope, 24, /*->1814*/ // 2 children in Scope
/*1790*/      OPC_MoveChild, 1,
/*1792*/      OPC_CheckOpcode, TARGET_VAL(ISD::INTRINSIC_W_CHAIN),
/*1795*/      OPC_RecordNode, // #1 = 'intrinsic_w_chain' chained node
/*1796*/      OPC_CheckFoldableChainNode,
/*1797*/      OPC_MoveChild, 1,
/*1799*/      OPC_CheckInteger, 124|128,6/*892*/, 
/*1802*/      OPC_MoveParent,
/*1803*/      OPC_MoveParent,
/*1804*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*1808*/      OPC_MorphNodeTo, TARGET_VAL(XCore::WAITEU_0R), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (brind (intrinsic_w_chain:iPTR 892:iPTR)) - Complexity = 11
              // Dst: (WAITEU_0R)
/*1814*/    /*Scope*/ 11, /*->1826*/
/*1815*/      OPC_RecordChild1, // #1 = $addr
/*1816*/      OPC_CheckChild1Type, MVT::i32,
/*1818*/      OPC_EmitMergeInputChains1_0,
/*1819*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BAU_1r), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (brind GRRegs:i32:$addr) - Complexity = 3
              // Dst: (BAU_1r GRRegs:i32:$addr)
/*1826*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 113|128,2/*369*/,  TARGET_VAL(ISD::BRCOND),// ->2200
/*1831*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*1832*/    OPC_Scope, 90|128,2/*346*/, /*->2181*/ // 2 children in Scope
/*1835*/      OPC_MoveChild, 1,
/*1837*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*1840*/      OPC_RecordChild0, // #1 = $lhs
/*1841*/      OPC_Scope, 6|128,1/*134*/, /*->1978*/ // 3 children in Scope
/*1844*/        OPC_MoveChild, 1,
/*1846*/        OPC_Scope, 82, /*->1930*/ // 2 children in Scope
/*1848*/          OPC_CheckInteger, 0, 
/*1850*/          OPC_MoveParent,
/*1851*/          OPC_MoveChild, 2,
/*1853*/          OPC_Scope, 20, /*->1875*/ // 3 children in Scope
/*1855*/            OPC_CheckCondCode, ISD::SETNE,
/*1857*/            OPC_MoveParent,
/*1858*/            OPC_MoveParent,
/*1859*/            OPC_RecordChild2, // #2 = $dst
/*1860*/            OPC_MoveChild, 2,
/*1862*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1865*/            OPC_MoveParent,
/*1866*/            OPC_EmitMergeInputChains1_0,
/*1867*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*1875*/          /*Scope*/ 20, /*->1896*/
/*1876*/            OPC_CheckCondCode, ISD::SETEQ,
/*1878*/            OPC_MoveParent,
/*1879*/            OPC_MoveParent,
/*1880*/            OPC_RecordChild2, // #2 = $dst
/*1881*/            OPC_MoveChild, 2,
/*1883*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1886*/            OPC_MoveParent,
/*1887*/            OPC_EmitMergeInputChains1_0,
/*1888*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFF_lru6 GRRegs:i32:$lhs, (bb:Other):$dst)
/*1896*/          /*Scope*/ 32, /*->1929*/
/*1897*/            OPC_CheckCondCode, ISD::SETLT,
/*1899*/            OPC_MoveParent,
/*1900*/            OPC_MoveParent,
/*1901*/            OPC_RecordChild2, // #2 = $dst
/*1902*/            OPC_MoveChild, 2,
/*1904*/            OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1907*/            OPC_MoveParent,
/*1908*/            OPC_EmitMergeInputChains1_0,
/*1909*/            OPC_EmitInteger, MVT::i32, 32, 
/*1912*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4 
/*1921*/            OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                        0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                    // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), (bb:Other):$dst) - Complexity = 11
                    // Dst: (BRFT_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*1929*/          0, /*End of Scope*/
/*1930*/        /*Scope*/ 46, /*->1977*/
/*1931*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*1942*/          OPC_MoveParent,
/*1943*/          OPC_MoveChild, 2,
/*1945*/          OPC_CheckCondCode, ISD::SETGT,
/*1947*/          OPC_MoveParent,
/*1948*/          OPC_MoveParent,
/*1949*/          OPC_RecordChild2, // #2 = $dst
/*1950*/          OPC_MoveChild, 2,
/*1952*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*1955*/          OPC_MoveParent,
/*1956*/          OPC_EmitMergeInputChains1_0,
/*1957*/          OPC_EmitInteger, MVT::i32, 32, 
/*1960*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3,  // Results = #4 
/*1969*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 2, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), (bb:Other):$dst) - Complexity = 11
                  // Dst: (BRFF_lru6 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), (bb:Other):$dst)
/*1977*/        0, /*End of Scope*/
/*1978*/      /*Scope*/ 42, /*->2021*/
/*1979*/        OPC_RecordChild1, // #2 = $rhs
/*1980*/        OPC_MoveChild, 1,
/*1982*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1985*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*1987*/        OPC_MoveParent,
/*1988*/        OPC_MoveChild, 2,
/*1990*/        OPC_CheckCondCode, ISD::SETNE,
/*1992*/        OPC_MoveParent,
/*1993*/        OPC_MoveParent,
/*1994*/        OPC_RecordChild2, // #3 = $dst
/*1995*/        OPC_MoveChild, 2,
/*1997*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2000*/        OPC_MoveParent,
/*2001*/        OPC_EmitMergeInputChains1_0,
/*2002*/        OPC_EmitConvertToTarget, 2,
/*2004*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 4,  // Results = #5 
/*2013*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 5, 3, 
                // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 10
                // Dst: (BRFF_lru6 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), (bb:Other):$dst)
/*2021*/      /*Scope*/ 29|128,1/*157*/, /*->2180*/
/*2023*/        OPC_CheckChild0Type, MVT::i32,
/*2025*/        OPC_RecordChild1, // #2 = $rhs
/*2026*/        OPC_MoveChild, 2,
/*2028*/        OPC_Scope, 29, /*->2059*/ // 5 children in Scope
/*2030*/          OPC_CheckCondCode, ISD::SETLE,
/*2032*/          OPC_MoveParent,
/*2033*/          OPC_MoveParent,
/*2034*/          OPC_RecordChild2, // #3 = $dst
/*2035*/          OPC_MoveChild, 2,
/*2037*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2040*/          OPC_MoveParent,
/*2041*/          OPC_EmitMergeInputChains1_0,
/*2042*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*2051*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2059*/        /*Scope*/ 29, /*->2089*/
/*2060*/          OPC_CheckCondCode, ISD::SETULE,
/*2062*/          OPC_MoveParent,
/*2063*/          OPC_MoveParent,
/*2064*/          OPC_RecordChild2, // #3 = $dst
/*2065*/          OPC_MoveChild, 2,
/*2067*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2070*/          OPC_MoveParent,
/*2071*/          OPC_EmitMergeInputChains1_0,
/*2072*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*2081*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), (bb:Other):$dst)
/*2089*/        /*Scope*/ 29, /*->2119*/
/*2090*/          OPC_CheckCondCode, ISD::SETGE,
/*2092*/          OPC_MoveParent,
/*2093*/          OPC_MoveParent,
/*2094*/          OPC_RecordChild2, // #3 = $dst
/*2095*/          OPC_MoveChild, 2,
/*2097*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2100*/          OPC_MoveParent,
/*2101*/          OPC_EmitMergeInputChains1_0,
/*2102*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*2111*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2119*/        /*Scope*/ 29, /*->2149*/
/*2120*/          OPC_CheckCondCode, ISD::SETUGE,
/*2122*/          OPC_MoveParent,
/*2123*/          OPC_MoveParent,
/*2124*/          OPC_RecordChild2, // #3 = $dst
/*2125*/          OPC_MoveChild, 2,
/*2127*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2130*/          OPC_MoveParent,
/*2131*/          OPC_EmitMergeInputChains1_0,
/*2132*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*2141*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2149*/        /*Scope*/ 29, /*->2179*/
/*2150*/          OPC_CheckCondCode, ISD::SETNE,
/*2152*/          OPC_MoveParent,
/*2153*/          OPC_MoveParent,
/*2154*/          OPC_RecordChild2, // #3 = $dst
/*2155*/          OPC_MoveChild, 2,
/*2157*/          OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2160*/          OPC_MoveParent,
/*2161*/          OPC_EmitMergeInputChains1_0,
/*2162*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2,  // Results = #4 
/*2171*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BRFF_lru6), 0|OPFL_Chain,
                      0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                  // Src: (brcond (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), (bb:Other):$dst) - Complexity = 6
                  // Dst: (BRFF_lru6 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), (bb:Other):$dst)
/*2179*/        0, /*End of Scope*/
/*2180*/      0, /*End of Scope*/
/*2181*/    /*Scope*/ 17, /*->2199*/
/*2182*/      OPC_RecordChild1, // #1 = $cond
/*2183*/      OPC_RecordChild2, // #2 = $addr
/*2184*/      OPC_MoveChild, 2,
/*2186*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*2189*/      OPC_MoveParent,
/*2190*/      OPC_EmitMergeInputChains1_0,
/*2191*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BRFT_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GRRegs:i32:$cond, (bb:Other):$addr) - Complexity = 3
              // Dst: (BRFT_lru6 GRRegs:i32:$cond, (bb:Other):$addr)
/*2199*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 89|128,2/*345*/,  TARGET_VAL(ISD::SELECT),// ->2549
/*2204*/    OPC_Scope, 69|128,2/*325*/, /*->2532*/ // 2 children in Scope
/*2207*/      OPC_MoveChild, 0,
/*2209*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*2212*/      OPC_RecordChild0, // #0 = $lhs
/*2213*/      OPC_Scope, 126, /*->2341*/ // 3 children in Scope
/*2215*/        OPC_MoveChild, 1,
/*2217*/        OPC_Scope, 76, /*->2295*/ // 2 children in Scope
/*2219*/          OPC_CheckInteger, 0, 
/*2221*/          OPC_MoveParent,
/*2222*/          OPC_MoveChild, 2,
/*2224*/          OPC_Scope, 18, /*->2244*/ // 3 children in Scope
/*2226*/            OPC_CheckCondCode, ISD::SETNE,
/*2228*/            OPC_MoveParent,
/*2229*/            OPC_MoveParent,
/*2230*/            OPC_RecordChild1, // #1 = $T
/*2231*/            OPC_RecordChild2, // #2 = $F
/*2232*/            OPC_CheckType, MVT::i32,
/*2234*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$T, GRRegs:i32:$F)
/*2244*/          /*Scope*/ 18, /*->2263*/
/*2245*/            OPC_CheckCondCode, ISD::SETEQ,
/*2247*/            OPC_MoveParent,
/*2248*/            OPC_MoveParent,
/*2249*/            OPC_RecordChild1, // #1 = $T
/*2250*/            OPC_RecordChild2, // #2 = $F
/*2251*/            OPC_CheckType, MVT::i32,
/*2253*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 1, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETEQ:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 GRRegs:i32:$lhs, GRRegs:i32:$F, GRRegs:i32:$T)
/*2263*/          /*Scope*/ 30, /*->2294*/
/*2264*/            OPC_CheckCondCode, ISD::SETLT,
/*2266*/            OPC_MoveParent,
/*2267*/            OPC_MoveParent,
/*2268*/            OPC_RecordChild1, // #1 = $T
/*2269*/            OPC_RecordChild2, // #2 = $F
/*2270*/            OPC_CheckType, MVT::i32,
/*2272*/            OPC_EmitInteger, MVT::i32, 32, 
/*2275*/            OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*2284*/            OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                        1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 1, 2, 
                    // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, 0:i32, SETLT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                    // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$T, GRRegs:i32:$F)
/*2294*/          0, /*End of Scope*/
/*2295*/        /*Scope*/ 44, /*->2340*/
/*2296*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2307*/          OPC_MoveParent,
/*2308*/          OPC_MoveChild, 2,
/*2310*/          OPC_CheckCondCode, ISD::SETGT,
/*2312*/          OPC_MoveParent,
/*2313*/          OPC_MoveParent,
/*2314*/          OPC_RecordChild1, // #1 = $T
/*2315*/          OPC_RecordChild2, // #2 = $F
/*2316*/          OPC_CheckType, MVT::i32,
/*2318*/          OPC_EmitInteger, MVT::i32, 32, 
/*2321*/          OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*2330*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 2, 1, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 11
                  // Dst: (SELECT_CC:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), GRRegs:i32:$F, GRRegs:i32:$T)
/*2340*/        0, /*End of Scope*/
/*2341*/      /*Scope*/ 40, /*->2382*/
/*2342*/        OPC_RecordChild1, // #1 = $rhs
/*2343*/        OPC_MoveChild, 1,
/*2345*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2348*/        OPC_CheckPredicate, 0, // Predicate_immUs
/*2350*/        OPC_MoveParent,
/*2351*/        OPC_MoveChild, 2,
/*2353*/        OPC_CheckCondCode, ISD::SETNE,
/*2355*/        OPC_MoveParent,
/*2356*/        OPC_MoveParent,
/*2357*/        OPC_RecordChild1, // #2 = $T
/*2358*/        OPC_RecordChild2, // #3 = $F
/*2359*/        OPC_CheckType, MVT::i32,
/*2361*/        OPC_EmitConvertToTarget, 1,
/*2363*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 4,  // Results = #5 
/*2372*/        OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 5, 3, 2, 
                // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 10
                // Dst: (SELECT_CC:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2382*/      /*Scope*/ 19|128,1/*147*/, /*->2531*/
/*2384*/        OPC_CheckChild0Type, MVT::i32,
/*2386*/        OPC_RecordChild1, // #1 = $rhs
/*2387*/        OPC_MoveChild, 2,
/*2389*/        OPC_Scope, 27, /*->2418*/ // 5 children in Scope
/*2391*/          OPC_CheckCondCode, ISD::SETLE,
/*2393*/          OPC_MoveParent,
/*2394*/          OPC_MoveParent,
/*2395*/          OPC_RecordChild1, // #2 = $T
/*2396*/          OPC_RecordChild2, // #3 = $F
/*2397*/          OPC_CheckType, MVT::i32,
/*2399*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*2408*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2418*/        /*Scope*/ 27, /*->2446*/
/*2419*/          OPC_CheckCondCode, ISD::SETULE,
/*2421*/          OPC_MoveParent,
/*2422*/          OPC_MoveParent,
/*2423*/          OPC_RecordChild1, // #2 = $T
/*2424*/          OPC_RecordChild2, // #3 = $F
/*2425*/          OPC_CheckType, MVT::i32,
/*2427*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*2436*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2446*/        /*Scope*/ 27, /*->2474*/
/*2447*/          OPC_CheckCondCode, ISD::SETGE,
/*2449*/          OPC_MoveParent,
/*2450*/          OPC_MoveParent,
/*2451*/          OPC_RecordChild1, // #2 = $T
/*2452*/          OPC_RecordChild2, // #3 = $F
/*2453*/          OPC_CheckType, MVT::i32,
/*2455*/          OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*2464*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2474*/        /*Scope*/ 27, /*->2502*/
/*2475*/          OPC_CheckCondCode, ISD::SETUGE,
/*2477*/          OPC_MoveParent,
/*2478*/          OPC_MoveParent,
/*2479*/          OPC_RecordChild1, // #2 = $T
/*2480*/          OPC_RecordChild2, // #3 = $F
/*2481*/          OPC_CheckType, MVT::i32,
/*2483*/          OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*2492*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2502*/        /*Scope*/ 27, /*->2530*/
/*2503*/          OPC_CheckCondCode, ISD::SETNE,
/*2505*/          OPC_MoveParent,
/*2506*/          OPC_MoveParent,
/*2507*/          OPC_RecordChild1, // #2 = $T
/*2508*/          OPC_RecordChild2, // #3 = $F
/*2509*/          OPC_CheckType, MVT::i32,
/*2511*/          OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #4 
/*2520*/          OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 4, 3, 2, 
                  // Src: (select:i32 (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other), GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 6
                  // Dst: (SELECT_CC:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), GRRegs:i32:$F, GRRegs:i32:$T)
/*2530*/        0, /*End of Scope*/
/*2531*/      0, /*End of Scope*/
/*2532*/    /*Scope*/ 15, /*->2548*/
/*2533*/      OPC_RecordChild0, // #0 = $cond
/*2534*/      OPC_RecordChild1, // #1 = $T
/*2535*/      OPC_RecordChild2, // #2 = $F
/*2536*/      OPC_CheckType, MVT::i32,
/*2538*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SELECT_CC), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (select:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F) - Complexity = 3
              // Dst: (SELECT_CC:i32 GRRegs:i32:$cond, GRRegs:i32:$T, GRRegs:i32:$F)
/*2548*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->2578
/*2552*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*2553*/    OPC_CaptureGlueInput,
/*2554*/    OPC_RecordChild1, // #1 = $amt1
/*2555*/    OPC_MoveChild, 1,
/*2557*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2560*/    OPC_MoveParent,
/*2561*/    OPC_RecordChild2, // #2 = $amt2
/*2562*/    OPC_MoveChild, 2,
/*2564*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2567*/    OPC_MoveParent,
/*2568*/    OPC_EmitMergeInputChains1_0,
/*2569*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::FrameIndex),// ->2596
/*2581*/    OPC_RecordNode,   // #0 = $addr
/*2582*/    OPC_CheckType, MVT::i32,
/*2584*/    OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectADDRspii:$addr #1 #2
/*2587*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWFI), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRspii:i32:$addr - Complexity = 9
            // Dst: (LDAWFI:i32 ADDRspii:i32:$addr)
          /*SwitchOpcode*/ 15,  TARGET_VAL(XCoreISD::DPRelativeWrapper),// ->2614
/*2599*/    OPC_RecordNode,   // #0 = $a
/*2600*/    OPC_CheckType, MVT::i32,
/*2602*/    OPC_CheckComplexPat, /*CP*/1, /*#*/0, // SelectADDRdpii:$a #1 #2
/*2605*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWDP_lru6), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRdpii:i32:$a - Complexity = 9
            // Dst: (LDAWDP_lru6:i32 ADDRdpii:i32:$a)
          /*SwitchOpcode*/ 15,  TARGET_VAL(XCoreISD::CPRelativeWrapper),// ->2632
/*2617*/    OPC_RecordNode,   // #0 = $a
/*2618*/    OPC_CheckType, MVT::i32,
/*2620*/    OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectADDRcpii:$a #1 #2
/*2623*/    OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWCP_lu6), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: ADDRcpii:i32:$a - Complexity = 9
            // Dst: (LDAWCP_lu6:i32 ADDRcpii:i32:$a)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::XOR),// ->2672
/*2635*/    OPC_RecordChild0, // #0 = $b
/*2636*/    OPC_Scope, 22, /*->2660*/ // 2 children in Scope
/*2638*/      OPC_MoveChild, 1,
/*2640*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2651*/      OPC_MoveParent,
/*2652*/      OPC_MorphNodeTo, TARGET_VAL(XCore::NOT), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (xor:i32 GRRegs:i32:$b, -1:i32) - Complexity = 8
              // Dst: (NOT:i32 GRRegs:i32:$b)
/*2660*/    /*Scope*/ 10, /*->2671*/
/*2661*/      OPC_RecordChild1, // #1 = $c
/*2662*/      OPC_MorphNodeTo, TARGET_VAL(XCore::XOR_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (XOR_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2671*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->2705
/*2675*/    OPC_MoveChild, 0,
/*2677*/    OPC_Scope, 13, /*->2692*/ // 2 children in Scope
/*2679*/      OPC_CheckInteger, 102|128,6/*870*/, 
/*2682*/      OPC_MoveParent,
/*2683*/      OPC_RecordChild1, // #0 = $src
/*2684*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BITREV_l2r), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:i32 870:iPTR, GRRegs:i32:$src) - Complexity = 8
              // Dst: (BITREV_l2r:i32 GRRegs:i32:$src)
/*2692*/    /*Scope*/ 11, /*->2704*/
/*2693*/      OPC_CheckInteger, 107|128,6/*875*/, 
/*2696*/      OPC_MoveParent,
/*2697*/      OPC_MorphNodeTo, TARGET_VAL(XCore::GETID_0R), 0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (intrinsic_wo_chain:i32 875:iPTR) - Complexity = 8
              // Dst: (GETID_0R:i32)
/*2704*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 67,  TARGET_VAL(ISD::MUL),// ->2775
/*2708*/    OPC_RecordChild0, // #0 = $src
/*2709*/    OPC_Scope, 52, /*->2763*/ // 2 children in Scope
/*2711*/      OPC_MoveChild, 1,
/*2713*/      OPC_Scope, 12, /*->2727*/ // 3 children in Scope
/*2715*/        OPC_CheckInteger, 3, 
/*2717*/        OPC_MoveParent,
/*2718*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDA16F_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 3:i32) - Complexity = 8
                // Dst: (LDA16F_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*2727*/      /*Scope*/ 12, /*->2740*/
/*2728*/        OPC_CheckInteger, 5, 
/*2730*/        OPC_MoveParent,
/*2731*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWF_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, 5:i32) - Complexity = 8
                // Dst: (LDAWF_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*2740*/      /*Scope*/ 21, /*->2762*/
/*2741*/        OPC_CheckInteger, 125|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551613*/, 
/*2752*/        OPC_MoveParent,
/*2753*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LDAWB_l3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                // Src: (mul:i32 GRRegs:i32:$src, -3:i32) - Complexity = 8
                // Dst: (LDAWB_l3r:i32 GRRegs:i32:$src, GRRegs:i32:$src)
/*2762*/      0, /*End of Scope*/
/*2763*/    /*Scope*/ 10, /*->2774*/
/*2764*/      OPC_RecordChild1, // #1 = $c
/*2765*/      OPC_MorphNodeTo, TARGET_VAL(XCore::MUL_l3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (MUL_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*2774*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,2/*302*/,  TARGET_VAL(ISD::SETCC),// ->3081
/*2779*/    OPC_RecordChild0, // #0 = $lhs
/*2780*/    OPC_Scope, 43, /*->2825*/ // 3 children in Scope
/*2782*/      OPC_MoveChild, 1,
/*2784*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2795*/      OPC_MoveParent,
/*2796*/      OPC_MoveChild, 2,
/*2798*/      OPC_CheckCondCode, ISD::SETGT,
/*2800*/      OPC_MoveParent,
/*2801*/      OPC_EmitInteger, MVT::i32, 32, 
/*2804*/      OPC_EmitNode, TARGET_VAL(XCore::ASHR_l2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*2813*/      OPC_EmitInteger, MVT::i32, 0, 
/*2816*/      OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (setcc:i32 GRRegs:i32:$lhs, -1:i32, SETGT:Other) - Complexity = 8
              // Dst: (EQ_2rus:i32 (ASHR_l2rus:i32 GRRegs:i32:$lhs, 32:i32), 0:i32)
/*2825*/    /*Scope*/ 55, /*->2881*/
/*2826*/      OPC_RecordChild1, // #1 = $rhs
/*2827*/      OPC_MoveChild, 1,
/*2829*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2832*/      OPC_CheckPredicate, 0, // Predicate_immUs
/*2834*/      OPC_MoveParent,
/*2835*/      OPC_MoveChild, 2,
/*2837*/      OPC_Scope, 14, /*->2853*/ // 2 children in Scope
/*2839*/        OPC_CheckCondCode, ISD::SETEQ,
/*2841*/        OPC_MoveParent,
/*2842*/        OPC_EmitConvertToTarget, 1,
/*2844*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETEQ:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs)
/*2853*/      /*Scope*/ 26, /*->2880*/
/*2854*/        OPC_CheckCondCode, ISD::SETNE,
/*2856*/        OPC_MoveParent,
/*2857*/        OPC_EmitConvertToTarget, 1,
/*2859*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2,  // Results = #3 
/*2868*/        OPC_EmitInteger, MVT::i32, 0, 
/*2871*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs, SETNE:Other) - Complexity = 7
                // Dst: (EQ_2rus:i32 (EQ_2rus:i32 GRRegs:i32:$lhs, (imm:i32)<<P:Predicate_immUs>>:$rhs), 0:i32)
/*2880*/      0, /*End of Scope*/
/*2881*/    /*Scope*/ 69|128,1/*197*/, /*->3080*/
/*2883*/      OPC_CheckChild0Type, MVT::i32,
/*2885*/      OPC_RecordChild1, // #1 = $rhs
/*2886*/      OPC_MoveChild, 2,
/*2888*/      OPC_Scope, 12, /*->2902*/ // 10 children in Scope
/*2890*/        OPC_CheckCondCode, ISD::SETGT,
/*2892*/        OPC_MoveParent,
/*2893*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*2902*/      /*Scope*/ 12, /*->2915*/
/*2903*/        OPC_CheckCondCode, ISD::SETUGT,
/*2905*/        OPC_MoveParent,
/*2906*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs)
/*2915*/      /*Scope*/ 12, /*->2928*/
/*2916*/        OPC_CheckCondCode, ISD::SETLT,
/*2918*/        OPC_MoveParent,
/*2919*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLT:Other) - Complexity = 3
                // Dst: (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*2928*/      /*Scope*/ 12, /*->2941*/
/*2929*/        OPC_CheckCondCode, ISD::SETULT,
/*2931*/        OPC_MoveParent,
/*2932*/        OPC_MorphNodeTo, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULT:Other) - Complexity = 3
                // Dst: (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*2941*/      /*Scope*/ 12, /*->2954*/
/*2942*/        OPC_CheckCondCode, ISD::SETEQ,
/*2944*/        OPC_MoveParent,
/*2945*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETEQ:Other) - Complexity = 3
                // Dst: (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs)
/*2954*/      /*Scope*/ 24, /*->2979*/
/*2955*/        OPC_CheckCondCode, ISD::SETLE,
/*2957*/        OPC_MoveParent,
/*2958*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*2967*/        OPC_EmitInteger, MVT::i32, 0, 
/*2970*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETLE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*2979*/      /*Scope*/ 24, /*->3004*/
/*2980*/        OPC_CheckCondCode, ISD::SETULE,
/*2982*/        OPC_MoveParent,
/*2983*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #2 
/*2992*/        OPC_EmitInteger, MVT::i32, 0, 
/*2995*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETULE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$rhs, GRRegs:i32:$lhs), 0:i32)
/*3004*/      /*Scope*/ 24, /*->3029*/
/*3005*/        OPC_CheckCondCode, ISD::SETGE,
/*3007*/        OPC_MoveParent,
/*3008*/        OPC_EmitNode, TARGET_VAL(XCore::LSS_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3017*/        OPC_EmitInteger, MVT::i32, 0, 
/*3020*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSS_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3029*/      /*Scope*/ 24, /*->3054*/
/*3030*/        OPC_CheckCondCode, ISD::SETUGE,
/*3032*/        OPC_MoveParent,
/*3033*/        OPC_EmitNode, TARGET_VAL(XCore::LSU_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3042*/        OPC_EmitInteger, MVT::i32, 0, 
/*3045*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETUGE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (LSU_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3054*/      /*Scope*/ 24, /*->3079*/
/*3055*/        OPC_CheckCondCode, ISD::SETNE,
/*3057*/        OPC_MoveParent,
/*3058*/        OPC_EmitNode, TARGET_VAL(XCore::EQ_3r), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3067*/        OPC_EmitInteger, MVT::i32, 0, 
/*3070*/        OPC_MorphNodeTo, TARGET_VAL(XCore::EQ_2rus), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (setcc:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs, SETNE:Other) - Complexity = 3
                // Dst: (EQ_2rus:i32 (EQ_3r:i32 GRRegs:i32:$lhs, GRRegs:i32:$rhs), 0:i32)
/*3079*/      0, /*End of Scope*/
/*3080*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SHL),// ->3118
/*3084*/    OPC_RecordChild0, // #0 = $b
/*3085*/    OPC_RecordChild1, // #1 = $c
/*3086*/    OPC_Scope, 19, /*->3107*/ // 2 children in Scope
/*3088*/      OPC_MoveChild, 1,
/*3090*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3093*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3095*/      OPC_MoveParent,
/*3096*/      OPC_EmitConvertToTarget, 1,
/*3098*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHL_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3107*/    /*Scope*/ 9, /*->3117*/
/*3108*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHL_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHL_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3117*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 34,  TARGET_VAL(ISD::SRL),// ->3155
/*3121*/    OPC_RecordChild0, // #0 = $b
/*3122*/    OPC_RecordChild1, // #1 = $c
/*3123*/    OPC_Scope, 19, /*->3144*/ // 2 children in Scope
/*3125*/      OPC_MoveChild, 1,
/*3127*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3130*/      OPC_CheckPredicate, 19, // Predicate_immBitp
/*3132*/      OPC_MoveParent,
/*3133*/      OPC_EmitConvertToTarget, 1,
/*3135*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_2rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GRRegs:i32:$b, (imm:i32)<<P:Predicate_immBitp>>:$c) - Complexity = 7
              // Dst: (SHR_2rus:i32 GRRegs:i32:$b, (imm:i32):$c)
/*3144*/    /*Scope*/ 9, /*->3154*/
/*3145*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SHR_3r), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
              // Dst: (SHR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
/*3154*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::STWSP),// ->3200
/*3158*/    OPC_RecordNode,   // #0 = 'XCoreStwsp' chained node
/*3159*/    OPC_RecordChild1, // #1 = $val
/*3160*/    OPC_CheckChild1Type, MVT::i32,
/*3162*/    OPC_RecordChild2, // #2 = $index
/*3163*/    OPC_MoveChild, 2,
/*3165*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3168*/    OPC_Scope, 14, /*->3184*/ // 2 children in Scope
/*3170*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3172*/      OPC_MoveParent,
/*3173*/      OPC_EmitMergeInputChains1_0,
/*3174*/      OPC_EmitConvertToTarget, 2,
/*3176*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_ru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU6>>:$index) - Complexity = 7
              // Dst: (STWSP_ru6 GRRegs:i32:$val, (imm:i32):$index)
/*3184*/    /*Scope*/ 14, /*->3199*/
/*3185*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3187*/      OPC_MoveParent,
/*3188*/      OPC_EmitMergeInputChains1_0,
/*3189*/      OPC_EmitConvertToTarget, 2,
/*3191*/      OPC_MorphNodeTo, TARGET_VAL(XCore::STWSP_lru6), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (XCoreStwsp GRRegs:i32:$val, (imm:i32)<<P:Predicate_immU16>>:$index) - Complexity = 7
              // Dst: (STWSP_lru6 GRRegs:i32:$val, (imm:i32):$index)
/*3199*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(XCoreISD::RETSP),// ->3245
/*3203*/    OPC_RecordNode,   // #0 = 'XCoreRetsp' chained node
/*3204*/    OPC_CaptureGlueInput,
/*3205*/    OPC_RecordChild1, // #1 = $b
/*3206*/    OPC_MoveChild, 1,
/*3208*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3211*/    OPC_CheckType, MVT::i32,
/*3213*/    OPC_Scope, 14, /*->3229*/ // 2 children in Scope
/*3215*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3217*/      OPC_MoveParent,
/*3218*/      OPC_EmitMergeInputChains1_0,
/*3219*/      OPC_EmitConvertToTarget, 1,
/*3221*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_u6), 0|OPFL_Chain|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU6>>:$b) - Complexity = 7
              // Dst: (RETSP_u6:i32 (imm:i32):$b)
/*3229*/    /*Scope*/ 14, /*->3244*/
/*3230*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3232*/      OPC_MoveParent,
/*3233*/      OPC_EmitMergeInputChains1_0,
/*3234*/      OPC_EmitConvertToTarget, 1,
/*3236*/      OPC_MorphNodeTo, TARGET_VAL(XCore::RETSP_lu6), 0|OPFL_Chain|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
              // Src: (XCoreRetsp (imm:i32)<<P:Predicate_immU16>>:$b) - Complexity = 7
              // Dst: (RETSP_lu6:i32 (imm:i32):$b)
/*3244*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 85,  TARGET_VAL(XCoreISD::BL),// ->3333
/*3248*/    OPC_RecordNode,   // #0 = 'XCoreBranchLink' chained node
/*3249*/    OPC_CaptureGlueInput,
/*3250*/    OPC_RecordChild1, // #1 = $target
/*3251*/    OPC_Scope, 67, /*->3320*/ // 2 children in Scope
/*3253*/      OPC_MoveChild, 1,
/*3255*/      OPC_SwitchOpcode /*3 cases */, 34,  TARGET_VAL(ISD::Constant),// ->3293
/*3259*/        OPC_CheckType, MVT::i32,
/*3261*/        OPC_Scope, 14, /*->3277*/ // 2 children in Scope
/*3263*/          OPC_CheckPredicate, 23, // Predicate_immU10
/*3265*/          OPC_MoveParent,
/*3266*/          OPC_EmitMergeInputChains1_0,
/*3267*/          OPC_EmitConvertToTarget, 1,
/*3269*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BL_u10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU10>>:$target) - Complexity = 7
                  // Dst: (BL_u10:i32 (imm:i32):$target)
/*3277*/        /*Scope*/ 14, /*->3292*/
/*3278*/          OPC_CheckPredicate, 24, // Predicate_immU20
/*3280*/          OPC_MoveParent,
/*3281*/          OPC_EmitMergeInputChains1_0,
/*3282*/          OPC_EmitConvertToTarget, 1,
/*3284*/          OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                  // Src: (XCoreBranchLink (imm:i32)<<P:Predicate_immU20>>:$target) - Complexity = 7
                  // Dst: (BL_lu10:i32 (imm:i32):$target)
/*3292*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3306
/*3296*/        OPC_MoveParent,
/*3297*/        OPC_EmitMergeInputChains1_0,
/*3298*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (tglobaladdr:iPTR):$addr) - Complexity = 6
                // Dst: (BL_lu10:i32 (tglobaladdr:i32):$addr)
              /*SwitchOpcode*/ 10,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3319
/*3309*/        OPC_MoveParent,
/*3310*/        OPC_EmitMergeInputChains1_0,
/*3311*/        OPC_MorphNodeTo, TARGET_VAL(XCore::BL_lu10), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (XCoreBranchLink (texternalsym:iPTR):$addr) - Complexity = 6
                // Dst: (BL_lu10:i32 (texternalsym:i32):$addr)
              0, // EndSwitchOpcode
/*3320*/    /*Scope*/ 11, /*->3332*/
/*3321*/      OPC_CheckChild1Type, MVT::i32,
/*3323*/      OPC_EmitMergeInputChains1_0,
/*3324*/      OPC_MorphNodeTo, TARGET_VAL(XCore::BLA_1r), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (XCoreBranchLink GRRegs:i32:$addr) - Complexity = 3
              // Dst: (BLA_1r:i32 GRRegs:i32:$addr)
/*3332*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->3353
/*3336*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3337*/    OPC_RecordChild1, // #1 = $amt
/*3338*/    OPC_MoveChild, 1,
/*3340*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3343*/    OPC_MoveParent,
/*3344*/    OPC_EmitMergeInputChains1_0,
/*3345*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 33,  TARGET_VAL(XCoreISD::PCRelativeWrapper),// ->3389
/*3356*/    OPC_RecordChild0, // #0 = $addr
/*3357*/    OPC_MoveChild, 0,
/*3359*/    OPC_SwitchOpcode /*2 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3374
/*3363*/      OPC_MoveParent,
/*3364*/      OPC_CheckType, MVT::i32,
/*3366*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAP_lu10), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tglobaladdr:i32):$addr) - Complexity = 6
              // Dst: (LDAP_lu10:i32 (tglobaladdr:i32):$addr)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->3388
/*3377*/      OPC_MoveParent,
/*3378*/      OPC_CheckType, MVT::i32,
/*3380*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDAP_lu10_ba), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (pcrelwrapper:i32 (tblockaddress:i32):$addr) - Complexity = 6
              // Dst: (LDAP_lu10_ba:i32 (tblockaddress:i32):$addr)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT),// ->3410
/*3392*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT' chained node
/*3393*/    OPC_RecordChild1, // #1 = $t
/*3394*/    OPC_MoveChild, 1,
/*3396*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3399*/    OPC_MoveParent,
/*3400*/    OPC_RecordChild2, // #2 = $i
/*3401*/    OPC_EmitMergeInputChains1_0,
/*3402*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 18,  TARGET_VAL(XCoreISD::BR_JT32),// ->3431
/*3413*/    OPC_RecordNode,   // #0 = 'XCoreBR_JT32' chained node
/*3414*/    OPC_RecordChild1, // #1 = $t
/*3415*/    OPC_MoveChild, 1,
/*3417*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetJumpTable),
/*3420*/    OPC_MoveParent,
/*3421*/    OPC_RecordChild2, // #2 = $i
/*3422*/    OPC_EmitMergeInputChains1_0,
/*3423*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BR_JT32), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (XCoreBR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i) - Complexity = 6
            // Dst: (BR_JT32 (tjumptable:i32):$t, GRRegs:i32:$i)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::Constant),// ->3463
/*3434*/    OPC_RecordNode,   // #0 = $b
/*3435*/    OPC_Scope, 12, /*->3449*/ // 2 children in Scope
/*3437*/      OPC_CheckPredicate, 20, // Predicate_immU6
/*3439*/      OPC_EmitConvertToTarget, 0,
/*3441*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_ru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU6>>:$b - Complexity = 4
              // Dst: (LDC_ru6:i32 (imm:i32):$b)
/*3449*/    /*Scope*/ 12, /*->3462*/
/*3450*/      OPC_CheckPredicate, 21, // Predicate_immU16
/*3452*/      OPC_EmitConvertToTarget, 0,
/*3454*/      OPC_MorphNodeTo, TARGET_VAL(XCore::LDC_lru6), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (imm:i32)<<P:Predicate_immU16>>:$b - Complexity = 4
              // Dst: (LDC_lru6:i32 (imm:i32):$b)
/*3462*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::OR),// ->3477
/*3466*/    OPC_RecordChild0, // #0 = $b
/*3467*/    OPC_RecordChild1, // #1 = $c
/*3468*/    OPC_MorphNodeTo, TARGET_VAL(XCore::OR_3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (or:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (OR_3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SDIV),// ->3491
/*3480*/    OPC_RecordChild0, // #0 = $b
/*3481*/    OPC_RecordChild1, // #1 = $c
/*3482*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UDIV),// ->3505
/*3494*/    OPC_RecordChild0, // #0 = $b
/*3495*/    OPC_RecordChild1, // #1 = $c
/*3496*/    OPC_MorphNodeTo, TARGET_VAL(XCore::DIVU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (DIVU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SREM),// ->3519
/*3508*/    OPC_RecordChild0, // #0 = $b
/*3509*/    OPC_RecordChild1, // #1 = $c
/*3510*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMS_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (srem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMS_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::UREM),// ->3533
/*3522*/    OPC_RecordChild0, // #0 = $b
/*3523*/    OPC_RecordChild1, // #1 = $c
/*3524*/    OPC_MorphNodeTo, TARGET_VAL(XCore::REMU_l3r), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (urem:i32 GRRegs:i32:$b, GRRegs:i32:$c) - Complexity = 3
            // Dst: (REMU_l3r:i32 GRRegs:i32:$b, GRRegs:i32:$c)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::BSWAP),// ->3545
/*3536*/    OPC_RecordChild0, // #0 = $src
/*3537*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BYTEREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (bswap:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (BYTEREV_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::CTLZ),// ->3557
/*3548*/    OPC_RecordChild0, // #0 = $src
/*3549*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (ctlz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 GRRegs:i32:$src)
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3613
/*3560*/    OPC_RecordChild0, // #0 = $b
/*3561*/    OPC_MoveChild, 1,
/*3563*/    OPC_Scope, 15, /*->3580*/ // 3 children in Scope
/*3565*/      OPC_CheckValueType, MVT::i1,
/*3567*/      OPC_MoveParent,
/*3568*/      OPC_EmitInteger, MVT::i32, 1, 
/*3571*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i1:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 1:i32)
/*3580*/    /*Scope*/ 15, /*->3596*/
/*3581*/      OPC_CheckValueType, MVT::i8,
/*3583*/      OPC_MoveParent,
/*3584*/      OPC_EmitInteger, MVT::i32, 8, 
/*3587*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i8:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 8:i32)
/*3596*/    /*Scope*/ 15, /*->3612*/
/*3597*/      OPC_CheckValueType, MVT::i16,
/*3599*/      OPC_MoveParent,
/*3600*/      OPC_EmitInteger, MVT::i32, 16, 
/*3603*/      OPC_MorphNodeTo, TARGET_VAL(XCore::SEXT_rus), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sext_inreg:i32 GRRegs:i32:$b, i16:Other) - Complexity = 3
              // Dst: (SEXT_rus:i32 GRRegs:i32:$b, 16:i32)
/*3612*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->3632
/*3616*/    OPC_RecordNode,   // #0 = 'br' chained node
/*3617*/    OPC_RecordChild1, // #1 = $addr
/*3618*/    OPC_MoveChild, 1,
/*3620*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3623*/    OPC_MoveParent,
/*3624*/    OPC_EmitMergeInputChains1_0,
/*3625*/    OPC_MorphNodeTo, TARGET_VAL(XCore::BRFU_lu6), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$addr) - Complexity = 3
            // Dst: (BRFU_lu6 (bb:Other):$addr)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CTTZ),// ->3652
/*3635*/    OPC_RecordChild0, // #0 = $src
/*3636*/    OPC_EmitNode, TARGET_VAL(XCore::BITREV_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0,  // Results = #1 
/*3644*/    OPC_MorphNodeTo, TARGET_VAL(XCore::CLZ_l2r), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (cttz:i32 GRRegs:i32:$src) - Complexity = 3
            // Dst: (CLZ_l2r:i32 (BITREV_l2r:i32 GRRegs:i32:$src))
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::TRAP),// ->3675
/*3655*/    OPC_RecordNode,   // #0 = 'trap' chained node
/*3656*/    OPC_EmitMergeInputChains1_0,
/*3657*/    OPC_EmitInteger, MVT::i32, 0, 
/*3660*/    OPC_EmitNode, TARGET_VAL(XCore::LDC_ru6), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1,  // Results = #2 
/*3668*/    OPC_MorphNodeTo, TARGET_VAL(XCore::ECALLF_1r), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 2, 
            // Src: (trap) - Complexity = 3
            // Dst: (ECALLF_1r (LDC_ru6:i32 0:i32))
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 3677 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 66
  // #OPC_RecordNode                     = 21
  // #OPC_RecordChild                    = 153
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 3
  // #OPC_MoveChild                      = 90
  // #OPC_MoveParent                     = 188
  // #OPC_CheckSame                      = 1
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 83
  // #OPC_CheckOpcode                    = 53
  // #OPC_SwitchOpcode                   = 3
  // #OPC_CheckType                      = 40
  // #OPC_SwitchType                     = 0
  // #OPC_CheckChildType                 = 30
  // #OPC_CheckInteger                   = 52
  // #OPC_CheckCondCode                  = 33
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 10
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 1
  // #OPC_EmitInteger                    = 25
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 30
  // #OPC_EmitMergeInputChains           = 79
  // #OPC_EmitCopyToReg                  = 1
  // #OPC_EmitNode                       = 31
  // #OPC_EmitNodeXForm                  = 8
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 160

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_immUs
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() <= 11;

  }
  case 1: { // Predicate_immUs4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return value%4 == 0 && value/4 <= 11;

  }
  case 2: { // Predicate_immUsNeg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return -((uint32_t)N->getZExtValue()) <= 11;

  }
  case 3: { // Predicate_immUs4Neg
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (-value)%4 == 0 && (-value)/4 <= 11;

  }
  case 4: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 11: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 14: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 15: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 16: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 17: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 18: { // Predicate_immBpwSubBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 24 && value <= 31)
          || value == 16
          || value == 8
          || value == 0;

  }
  case 19: { // Predicate_immBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  uint32_t value = (uint32_t)N->getZExtValue();
  return (value >= 1 && value <= 8)
          || value == 16
          || value == 24
          || value == 32;

  }
  case 20: { // Predicate_immU6
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 6);

  }
  case 21: { // Predicate_immU16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 16);

  }
  case 22: { // Predicate_immMskBitp
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
 return immMskBitp(N); 
  }
  case 23: { // Predicate_immU10
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 10);

  }
  case 24: { // Predicate_immU20
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (uint32_t)N->getZExtValue() < (1 << 20);

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
    return SelectADDRspii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRdpii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRcpii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // div4_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: imm/4
  assert(N->getZExtValue() % 4 == 0);
  return getI32Imm(N->getZExtValue()/4);

  }
  case 1: {  // neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(-value);

  }
  case 2: {  // div4neg_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: -imm/4
  uint32_t value = N->getZExtValue();
  assert(-value % 4 == 0);
  return getI32Imm(-value/4);

  }
  case 3: {  // bpwsub_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32-imm
  uint32_t value = N->getZExtValue();
  return getI32Imm(32-value);

  }
  case 4: {  // msksize_xform
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the size of a mask
  assert(isMask_32(N->getZExtValue()));
  // look for the first non-zero bit
  return getI32Imm(32 - CountLeadingZeros_32(N->getZExtValue()));

  }
  }
}

