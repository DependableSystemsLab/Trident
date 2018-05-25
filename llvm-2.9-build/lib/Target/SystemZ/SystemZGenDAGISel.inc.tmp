//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the SystemZ target
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
/*0*/     OPC_SwitchOpcode /*52 cases */, 63|128,2/*319*/,  TARGET_VAL(ISD::ADD),// ->324
/*5*/       OPC_Scope, 35, /*->42*/ // 6 children in Scope
/*7*/         OPC_RecordChild0, // #0 = $src1
/*8*/         OPC_MoveChild, 1,
/*10*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*13*/        OPC_RecordMemRef,
/*14*/        OPC_RecordNode, // #1 = 'ld' chained node
/*15*/        OPC_CheckFoldableChainNode,
/*16*/        OPC_RecordChild1, // #2 = $src2
/*17*/        OPC_CheckChild1Type, MVT::i64,
/*19*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*21*/        OPC_CheckPredicate, 1, // Predicate_load
/*23*/        OPC_MoveParent,
/*24*/        OPC_CheckType, MVT::i32,
/*26*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*29*/        OPC_EmitMergeInputChains1_1,
/*30*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (add:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (ADD32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*42*/      /*Scope*/ 35, /*->78*/
/*43*/        OPC_MoveChild, 0,
/*45*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*48*/        OPC_RecordMemRef,
/*49*/        OPC_RecordNode, // #0 = 'ld' chained node
/*50*/        OPC_CheckFoldableChainNode,
/*51*/        OPC_RecordChild1, // #1 = $src2
/*52*/        OPC_CheckChild1Type, MVT::i64,
/*54*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*56*/        OPC_CheckPredicate, 1, // Predicate_load
/*58*/        OPC_MoveParent,
/*59*/        OPC_RecordChild1, // #2 = $src1
/*60*/        OPC_CheckType, MVT::i32,
/*62*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*65*/        OPC_EmitMergeInputChains1_0,
/*66*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (add:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (ADD32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*78*/      /*Scope*/ 55, /*->134*/
/*79*/        OPC_RecordChild0, // #0 = $src1
/*80*/        OPC_MoveChild, 1,
/*82*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*85*/        OPC_RecordMemRef,
/*86*/        OPC_RecordNode, // #1 = 'ld' chained node
/*87*/        OPC_CheckFoldableChainNode,
/*88*/        OPC_RecordChild1, // #2 = $src2
/*89*/        OPC_CheckChild1Type, MVT::i64,
/*91*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*93*/        OPC_CheckPredicate, 1, // Predicate_load
/*95*/        OPC_MoveParent,
/*96*/        OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->115
/*99*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*102*/         OPC_EmitMergeInputChains1_1,
/*103*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADD32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->133
/*117*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*120*/         OPC_EmitMergeInputChains1_1,
/*121*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (add:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (ADD64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*134*/     /*Scope*/ 55, /*->190*/
/*135*/       OPC_MoveChild, 0,
/*137*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*140*/       OPC_RecordMemRef,
/*141*/       OPC_RecordNode, // #0 = 'ld' chained node
/*142*/       OPC_CheckFoldableChainNode,
/*143*/       OPC_RecordChild1, // #1 = $src2
/*144*/       OPC_CheckChild1Type, MVT::i64,
/*146*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*148*/       OPC_CheckPredicate, 1, // Predicate_load
/*150*/       OPC_MoveParent,
/*151*/       OPC_RecordChild1, // #2 = $src1
/*152*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->171
/*155*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*158*/         OPC_EmitMergeInputChains1_0,
/*159*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (ADD32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->189
/*173*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*176*/         OPC_EmitMergeInputChains1_0,
/*177*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (add:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (ADD64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*190*/     /*Scope*/ 16, /*->207*/
/*191*/       OPC_RecordNode, // #0 = $src
/*192*/       OPC_CheckType, MVT::i64,
/*194*/       OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*197*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr:i64:$src - Complexity = 13
              // Dst: (LA64r:i64 laaddr:i64:$src)
/*207*/     /*Scope*/ 115, /*->323*/
/*208*/       OPC_RecordChild0, // #0 = $src1
/*209*/       OPC_RecordChild1, // #1 = $src2
/*210*/       OPC_Scope, 84, /*->296*/ // 3 children in Scope
/*212*/         OPC_MoveChild, 1,
/*214*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*217*/         OPC_Scope, 39, /*->258*/ // 3 children in Scope
/*219*/           OPC_CheckPredicate, 2, // Predicate_immSExt16
/*221*/           OPC_MoveParent,
/*222*/           OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->240
/*225*/             OPC_EmitConvertToTarget, 1,
/*227*/             OPC_EmitNodeXForm, 0, 2, // LL16
/*230*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32ri16), 0,
                        2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                    // Dst: (ADD32ri16:i32:i64 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
                  /*SwitchType*/ 15,  MVT::i64,// ->257
/*242*/             OPC_EmitConvertToTarget, 1,
/*244*/             OPC_EmitNodeXForm, 0, 2, // LL16
/*247*/             OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64ri16), 0,
                        2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                    // Dst: (ADD64ri16:i64:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
                  0, // EndSwitchType
/*258*/         /*Scope*/ 20, /*->279*/
/*259*/           OPC_CheckPredicate, 3, // Predicate_immSExt32
/*261*/           OPC_MoveParent,
/*262*/           OPC_CheckType, MVT::i64,
/*264*/           OPC_EmitConvertToTarget, 1,
/*266*/           OPC_EmitNodeXForm, 1, 2, // LO32
/*269*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64ri32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (ADD64ri32:i64:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*279*/         /*Scope*/ 15, /*->295*/
/*280*/           OPC_MoveParent,
/*281*/           OPC_CheckType, MVT::i32,
/*283*/           OPC_EmitConvertToTarget, 1,
/*285*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32ri), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (ADD32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*295*/         0, /*End of Scope*/
/*296*/       /*Scope*/ 12, /*->309*/
/*297*/         OPC_CheckType, MVT::i32,
/*299*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (ADD32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*309*/       /*Scope*/ 12, /*->322*/
/*310*/         OPC_CheckType, MVT::i64,
/*312*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADD64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (ADD64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*322*/       0, /*End of Scope*/
/*323*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 27|128,3/*411*/,  TARGET_VAL(ISD::AND),// ->739
/*328*/     OPC_Scope, 35, /*->365*/ // 5 children in Scope
/*330*/       OPC_RecordChild0, // #0 = $src1
/*331*/       OPC_MoveChild, 1,
/*333*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*336*/       OPC_RecordMemRef,
/*337*/       OPC_RecordNode, // #1 = 'ld' chained node
/*338*/       OPC_CheckFoldableChainNode,
/*339*/       OPC_RecordChild1, // #2 = $src2
/*340*/       OPC_CheckChild1Type, MVT::i64,
/*342*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*344*/       OPC_CheckPredicate, 1, // Predicate_load
/*346*/       OPC_MoveParent,
/*347*/       OPC_CheckType, MVT::i32,
/*349*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*352*/       OPC_EmitMergeInputChains1_1,
/*353*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (and:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (AND32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*365*/     /*Scope*/ 35, /*->401*/
/*366*/       OPC_MoveChild, 0,
/*368*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*371*/       OPC_RecordMemRef,
/*372*/       OPC_RecordNode, // #0 = 'ld' chained node
/*373*/       OPC_CheckFoldableChainNode,
/*374*/       OPC_RecordChild1, // #1 = $src2
/*375*/       OPC_CheckChild1Type, MVT::i64,
/*377*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*379*/       OPC_CheckPredicate, 1, // Predicate_load
/*381*/       OPC_MoveParent,
/*382*/       OPC_RecordChild1, // #2 = $src1
/*383*/       OPC_CheckType, MVT::i32,
/*385*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*388*/       OPC_EmitMergeInputChains1_0,
/*389*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (and:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (AND32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*401*/     /*Scope*/ 55, /*->457*/
/*402*/       OPC_RecordChild0, // #0 = $src1
/*403*/       OPC_MoveChild, 1,
/*405*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*408*/       OPC_RecordMemRef,
/*409*/       OPC_RecordNode, // #1 = 'ld' chained node
/*410*/       OPC_CheckFoldableChainNode,
/*411*/       OPC_RecordChild1, // #2 = $src2
/*412*/       OPC_CheckChild1Type, MVT::i64,
/*414*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*416*/       OPC_CheckPredicate, 1, // Predicate_load
/*418*/       OPC_MoveParent,
/*419*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->438
/*422*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*425*/         OPC_EmitMergeInputChains1_1,
/*426*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AND32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->456
/*440*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*443*/         OPC_EmitMergeInputChains1_1,
/*444*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (and:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (AND64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*457*/     /*Scope*/ 55, /*->513*/
/*458*/       OPC_MoveChild, 0,
/*460*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*463*/       OPC_RecordMemRef,
/*464*/       OPC_RecordNode, // #0 = 'ld' chained node
/*465*/       OPC_CheckFoldableChainNode,
/*466*/       OPC_RecordChild1, // #1 = $src2
/*467*/       OPC_CheckChild1Type, MVT::i64,
/*469*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*471*/       OPC_CheckPredicate, 1, // Predicate_load
/*473*/       OPC_MoveParent,
/*474*/       OPC_RecordChild1, // #2 = $src1
/*475*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->494
/*478*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*481*/         OPC_EmitMergeInputChains1_0,
/*482*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (AND32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->512
/*496*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*499*/         OPC_EmitMergeInputChains1_0,
/*500*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (and:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (AND64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*513*/     /*Scope*/ 95|128,1/*223*/, /*->738*/
/*515*/       OPC_RecordChild0, // #0 = $src1
/*516*/       OPC_RecordChild1, // #1 = $src2
/*517*/       OPC_Scope, 63|128,1/*191*/, /*->711*/ // 3 children in Scope
/*520*/         OPC_MoveChild, 1,
/*522*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*525*/         OPC_Scope, 20, /*->547*/ // 9 children in Scope
/*527*/           OPC_CheckPredicate, 4, // Predicate_i32ll16c
/*529*/           OPC_MoveParent,
/*530*/           OPC_CheckType, MVT::i32,
/*532*/           OPC_EmitConvertToTarget, 1,
/*534*/           OPC_EmitNodeXForm, 0, 2, // LL16
/*537*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rill16), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32ll16c>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (AND32rill16:i32:i64 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*547*/         /*Scope*/ 20, /*->568*/
/*548*/           OPC_CheckPredicate, 5, // Predicate_i64ll16c
/*550*/           OPC_MoveParent,
/*551*/           OPC_CheckType, MVT::i64,
/*553*/           OPC_EmitConvertToTarget, 1,
/*555*/           OPC_EmitNodeXForm, 0, 2, // LL16
/*558*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rill16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64ll16c>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (AND64rill16:i64:i64 GR64:i64:$src1, (LL16:i32 (imm:i64):$src2))
/*568*/         /*Scope*/ 20, /*->589*/
/*569*/           OPC_CheckPredicate, 6, // Predicate_i32lh16c
/*571*/           OPC_MoveParent,
/*572*/           OPC_CheckType, MVT::i32,
/*574*/           OPC_EmitConvertToTarget, 1,
/*576*/           OPC_EmitNodeXForm, 2, 2, // LH16
/*579*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rilh16), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32lh16c>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (AND32rilh16:i32:i64 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
/*589*/         /*Scope*/ 20, /*->610*/
/*590*/           OPC_CheckPredicate, 7, // Predicate_i64lh16c
/*592*/           OPC_MoveParent,
/*593*/           OPC_CheckType, MVT::i64,
/*595*/           OPC_EmitConvertToTarget, 1,
/*597*/           OPC_EmitNodeXForm, 2, 2, // LH16
/*600*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rilh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lh16c>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (AND64rilh16:i64:i64 GR64:i64:$src1, (LH16:i32 (imm:i64):$src2))
/*610*/         /*Scope*/ 20, /*->631*/
/*611*/           OPC_CheckPredicate, 8, // Predicate_i64hl16c
/*613*/           OPC_MoveParent,
/*614*/           OPC_CheckType, MVT::i64,
/*616*/           OPC_EmitConvertToTarget, 1,
/*618*/           OPC_EmitNodeXForm, 3, 2, // HL16
/*621*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rihl16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hl16c>><<X:HL16>>:$src2) - Complexity = 7
                  // Dst: (AND64rihl16:i64:i64 GR64:i64:$src1, (HL16:i32 (imm:i64):$src2))
/*631*/         /*Scope*/ 20, /*->652*/
/*632*/           OPC_CheckPredicate, 9, // Predicate_i64hh16c
/*634*/           OPC_MoveParent,
/*635*/           OPC_CheckType, MVT::i64,
/*637*/           OPC_EmitConvertToTarget, 1,
/*639*/           OPC_EmitNodeXForm, 4, 2, // HH16
/*642*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rihh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hh16c>><<X:HH16>>:$src2) - Complexity = 7
                  // Dst: (AND64rihh16:i64:i64 GR64:i64:$src1, (HH16:i32 (imm:i64):$src2))
/*652*/         /*Scope*/ 20, /*->673*/
/*653*/           OPC_CheckPredicate, 10, // Predicate_i64lo32c
/*655*/           OPC_MoveParent,
/*656*/           OPC_CheckType, MVT::i64,
/*658*/           OPC_EmitConvertToTarget, 1,
/*660*/           OPC_EmitNodeXForm, 1, 2, // LO32
/*663*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rilo32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lo32c>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (AND64rilo32:i64:i64 GR64:i64:$src1, (LO32:i32 (imm:i64):$src2))
/*673*/         /*Scope*/ 20, /*->694*/
/*674*/           OPC_CheckPredicate, 11, // Predicate_i64hi32c
/*676*/           OPC_MoveParent,
/*677*/           OPC_CheckType, MVT::i64,
/*679*/           OPC_EmitConvertToTarget, 1,
/*681*/           OPC_EmitNodeXForm, 5, 2, // HI32
/*684*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rihi32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (and:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hi32c>><<X:HI32>>:$src2) - Complexity = 7
                  // Dst: (AND64rihi32:i64:i64 GR64:i64:$src1, (HI32:i32 (imm:i64):$src2))
/*694*/         /*Scope*/ 15, /*->710*/
/*695*/           OPC_MoveParent,
/*696*/           OPC_CheckType, MVT::i32,
/*698*/           OPC_EmitConvertToTarget, 1,
/*700*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32ri), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (AND32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*710*/         0, /*End of Scope*/
/*711*/       /*Scope*/ 12, /*->724*/
/*712*/         OPC_CheckType, MVT::i32,
/*714*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (AND32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*724*/       /*Scope*/ 12, /*->737*/
/*725*/         OPC_CheckType, MVT::i64,
/*727*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::AND64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (AND64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*737*/       0, /*End of Scope*/
/*738*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 44|128,3/*428*/,  TARGET_VAL(ISD::OR),// ->1171
/*743*/     OPC_Scope, 35, /*->780*/ // 6 children in Scope
/*745*/       OPC_RecordChild0, // #0 = $src1
/*746*/       OPC_MoveChild, 1,
/*748*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*751*/       OPC_RecordMemRef,
/*752*/       OPC_RecordNode, // #1 = 'ld' chained node
/*753*/       OPC_CheckFoldableChainNode,
/*754*/       OPC_RecordChild1, // #2 = $src2
/*755*/       OPC_CheckChild1Type, MVT::i64,
/*757*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*759*/       OPC_CheckPredicate, 1, // Predicate_load
/*761*/       OPC_MoveParent,
/*762*/       OPC_CheckType, MVT::i32,
/*764*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*767*/       OPC_EmitMergeInputChains1_1,
/*768*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (or:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (OR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*780*/     /*Scope*/ 35, /*->816*/
/*781*/       OPC_MoveChild, 0,
/*783*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*786*/       OPC_RecordMemRef,
/*787*/       OPC_RecordNode, // #0 = 'ld' chained node
/*788*/       OPC_CheckFoldableChainNode,
/*789*/       OPC_RecordChild1, // #1 = $src2
/*790*/       OPC_CheckChild1Type, MVT::i64,
/*792*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*794*/       OPC_CheckPredicate, 1, // Predicate_load
/*796*/       OPC_MoveParent,
/*797*/       OPC_RecordChild1, // #2 = $src1
/*798*/       OPC_CheckType, MVT::i32,
/*800*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*803*/       OPC_EmitMergeInputChains1_0,
/*804*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (or:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (OR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*816*/     /*Scope*/ 55, /*->872*/
/*817*/       OPC_RecordChild0, // #0 = $src1
/*818*/       OPC_MoveChild, 1,
/*820*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*823*/       OPC_RecordMemRef,
/*824*/       OPC_RecordNode, // #1 = 'ld' chained node
/*825*/       OPC_CheckFoldableChainNode,
/*826*/       OPC_RecordChild1, // #2 = $src2
/*827*/       OPC_CheckChild1Type, MVT::i64,
/*829*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*831*/       OPC_CheckPredicate, 1, // Predicate_load
/*833*/       OPC_MoveParent,
/*834*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->853
/*837*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*840*/         OPC_EmitMergeInputChains1_1,
/*841*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (OR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->871
/*855*/         OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*858*/         OPC_EmitMergeInputChains1_1,
/*859*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (or:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (OR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*872*/     /*Scope*/ 55, /*->928*/
/*873*/       OPC_MoveChild, 0,
/*875*/       OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*878*/       OPC_RecordMemRef,
/*879*/       OPC_RecordNode, // #0 = 'ld' chained node
/*880*/       OPC_CheckFoldableChainNode,
/*881*/       OPC_RecordChild1, // #1 = $src2
/*882*/       OPC_CheckChild1Type, MVT::i64,
/*884*/       OPC_CheckPredicate, 0, // Predicate_unindexedload
/*886*/       OPC_CheckPredicate, 1, // Predicate_load
/*888*/       OPC_MoveParent,
/*889*/       OPC_RecordChild1, // #2 = $src1
/*890*/       OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->909
/*893*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*896*/         OPC_EmitMergeInputChains1_0,
/*897*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (OR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->927
/*911*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*914*/         OPC_EmitMergeInputChains1_0,
/*915*/         OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (or:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (OR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*928*/     /*Scope*/ 16, /*->945*/
/*929*/       OPC_RecordNode, // #0 = $src
/*930*/       OPC_CheckType, MVT::i64,
/*932*/       OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*935*/       OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr:i64:$src - Complexity = 13
              // Dst: (LA64r:i64 laaddr:i64:$src)
/*945*/     /*Scope*/ 95|128,1/*223*/, /*->1170*/
/*947*/       OPC_RecordChild0, // #0 = $src1
/*948*/       OPC_RecordChild1, // #1 = $src2
/*949*/       OPC_Scope, 63|128,1/*191*/, /*->1143*/ // 3 children in Scope
/*952*/         OPC_MoveChild, 1,
/*954*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*957*/         OPC_Scope, 20, /*->979*/ // 9 children in Scope
/*959*/           OPC_CheckPredicate, 12, // Predicate_i32ll16
/*961*/           OPC_MoveParent,
/*962*/           OPC_CheckType, MVT::i32,
/*964*/           OPC_EmitConvertToTarget, 1,
/*966*/           OPC_EmitNodeXForm, 0, 2, // LL16
/*969*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32ri16), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32ll16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (OR32ri16:i32:i64 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*979*/         /*Scope*/ 20, /*->1000*/
/*980*/           OPC_CheckPredicate, 13, // Predicate_i32lh16
/*982*/           OPC_MoveParent,
/*983*/           OPC_CheckType, MVT::i32,
/*985*/           OPC_EmitConvertToTarget, 1,
/*987*/           OPC_EmitNodeXForm, 2, 2, // LH16
/*990*/           OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32ri16h), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32lh16>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (OR32ri16h:i32:i64 GR32:i32:$src1, (LH16:i32 (imm:i32):$src2))
/*1000*/        /*Scope*/ 20, /*->1021*/
/*1001*/          OPC_CheckPredicate, 14, // Predicate_i64ll16
/*1003*/          OPC_MoveParent,
/*1004*/          OPC_CheckType, MVT::i64,
/*1006*/          OPC_EmitConvertToTarget, 1,
/*1008*/          OPC_EmitNodeXForm, 0, 2, // LL16
/*1011*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rill16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64ll16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (OR64rill16:i64:i64 GR64:i64:$src1, (LL16:i32 (imm:i64):$src2))
/*1021*/        /*Scope*/ 20, /*->1042*/
/*1022*/          OPC_CheckPredicate, 15, // Predicate_i64lh16
/*1024*/          OPC_MoveParent,
/*1025*/          OPC_CheckType, MVT::i64,
/*1027*/          OPC_EmitConvertToTarget, 1,
/*1029*/          OPC_EmitNodeXForm, 2, 2, // LH16
/*1032*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rilh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lh16>><<X:LH16>>:$src2) - Complexity = 7
                  // Dst: (OR64rilh16:i64:i64 GR64:i64:$src1, (LH16:i32 (imm:i64):$src2))
/*1042*/        /*Scope*/ 20, /*->1063*/
/*1043*/          OPC_CheckPredicate, 16, // Predicate_i64hl16
/*1045*/          OPC_MoveParent,
/*1046*/          OPC_CheckType, MVT::i64,
/*1048*/          OPC_EmitConvertToTarget, 1,
/*1050*/          OPC_EmitNodeXForm, 3, 2, // HL16
/*1053*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rihl16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hl16>><<X:HL16>>:$src2) - Complexity = 7
                  // Dst: (OR64rihl16:i64:i64 GR64:i64:$src1, (HL16:i32 (imm:i64):$src2))
/*1063*/        /*Scope*/ 20, /*->1084*/
/*1064*/          OPC_CheckPredicate, 17, // Predicate_i64hh16
/*1066*/          OPC_MoveParent,
/*1067*/          OPC_CheckType, MVT::i64,
/*1069*/          OPC_EmitConvertToTarget, 1,
/*1071*/          OPC_EmitNodeXForm, 4, 2, // HH16
/*1074*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rihh16), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hh16>><<X:HH16>>:$src2) - Complexity = 7
                  // Dst: (OR64rihh16:i64:i64 GR64:i64:$src1, (HH16:i32 (imm:i64):$src2))
/*1084*/        /*Scope*/ 20, /*->1105*/
/*1085*/          OPC_CheckPredicate, 18, // Predicate_i64lo32
/*1087*/          OPC_MoveParent,
/*1088*/          OPC_CheckType, MVT::i64,
/*1090*/          OPC_EmitConvertToTarget, 1,
/*1092*/          OPC_EmitNodeXForm, 1, 2, // LO32
/*1095*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rilo32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64lo32>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (OR64rilo32:i64:i64 GR64:i64:$src1, (LO32:i32 (imm:i64):$src2))
/*1105*/        /*Scope*/ 20, /*->1126*/
/*1106*/          OPC_CheckPredicate, 19, // Predicate_i64hi32
/*1108*/          OPC_MoveParent,
/*1109*/          OPC_CheckType, MVT::i64,
/*1111*/          OPC_EmitConvertToTarget, 1,
/*1113*/          OPC_EmitNodeXForm, 5, 2, // HI32
/*1116*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rihi32), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64hi32>><<X:HI32>>:$src2) - Complexity = 7
                  // Dst: (OR64rihi32:i64:i64 GR64:i64:$src1, (HI32:i32 (imm:i64):$src2))
/*1126*/        /*Scope*/ 15, /*->1142*/
/*1127*/          OPC_MoveParent,
/*1128*/          OPC_CheckType, MVT::i32,
/*1130*/          OPC_EmitConvertToTarget, 1,
/*1132*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32ri), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (OR32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*1142*/        0, /*End of Scope*/
/*1143*/      /*Scope*/ 12, /*->1156*/
/*1144*/        OPC_CheckType, MVT::i32,
/*1146*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (OR32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*1156*/      /*Scope*/ 12, /*->1169*/
/*1157*/        OPC_CheckType, MVT::i64,
/*1159*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (OR64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*1169*/      0, /*End of Scope*/
/*1170*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 51|128,1/*179*/,  TARGET_VAL(ISD::SUB),// ->1354
/*1175*/    OPC_Scope, 75, /*->1252*/ // 4 children in Scope
/*1177*/      OPC_RecordChild0, // #0 = $src1
/*1178*/      OPC_MoveChild, 1,
/*1180*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1183*/      OPC_RecordMemRef,
/*1184*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1185*/      OPC_CheckFoldableChainNode,
/*1186*/      OPC_RecordChild1, // #2 = $src2
/*1187*/      OPC_CheckChild1Type, MVT::i64,
/*1189*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1191*/      OPC_CheckPredicate, 1, // Predicate_load
/*1193*/      OPC_MoveParent,
/*1194*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->1233
/*1197*/        OPC_Scope, 16, /*->1215*/ // 2 children in Scope
/*1199*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1202*/          OPC_EmitMergeInputChains1_1,
/*1203*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
                  // Dst: (SUB32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1215*/        /*Scope*/ 16, /*->1232*/
/*1216*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1219*/          OPC_EmitMergeInputChains1_1,
/*1220*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (sub:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (SUB32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
/*1232*/        0, /*End of Scope*/
              /*SwitchType*/ 16,  MVT::i64,// ->1251
/*1235*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1238*/        OPC_EmitMergeInputChains1_1,
/*1239*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (sub:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (SUB64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1252*/    /*Scope*/ 16, /*->1269*/
/*1253*/      OPC_RecordNode, // #0 = $src
/*1254*/      OPC_CheckType, MVT::i64,
/*1256*/      OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*1259*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: laaddr:i64:$src - Complexity = 13
              // Dst: (LA64r:i64 laaddr:i64:$src)
/*1269*/    /*Scope*/ 54, /*->1324*/
/*1270*/      OPC_MoveChild, 0,
/*1272*/      OPC_CheckInteger, 0, 
/*1274*/      OPC_MoveParent,
/*1275*/      OPC_Scope, 20, /*->1297*/ // 2 children in Scope
/*1277*/        OPC_MoveChild, 1,
/*1279*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*1282*/        OPC_RecordChild0, // #0 = $src
/*1283*/        OPC_CheckChild0Type, MVT::i32,
/*1285*/        OPC_MoveParent,
/*1286*/        OPC_CheckType, MVT::i64,
/*1288*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::NEG64rr32), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, (sext:i64 GR32:i32:$src)) - Complexity = 11
                // Dst: (NEG64rr32:i64:i64 GR32:i32:$src)
/*1297*/      /*Scope*/ 25, /*->1323*/
/*1298*/        OPC_RecordChild1, // #0 = $src
/*1299*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1311
/*1302*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NEG32rr), 0,
                      2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sub:i32 0:i32, GR32:i32:$src) - Complexity = 8
                  // Dst: (NEG32rr:i32:i64 GR32:i32:$src)
                /*SwitchType*/ 9,  MVT::i64,// ->1322
/*1313*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::NEG64rr), 0,
                      2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                  // Src: (sub:i64 0:i64, GR64:i64:$src) - Complexity = 8
                  // Dst: (NEG64rr:i64:i64 GR64:i64:$src)
                0, // EndSwitchType
/*1323*/      0, /*End of Scope*/
/*1324*/    /*Scope*/ 28, /*->1353*/
/*1325*/      OPC_RecordChild0, // #0 = $src1
/*1326*/      OPC_RecordChild1, // #1 = $src2
/*1327*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->1340
/*1330*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (SUB32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 10,  MVT::i64,// ->1352
/*1342*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUB64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (SUB64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*1353*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 110|128,1/*238*/,  TARGET_VAL(ISD::XOR),// ->1596
/*1358*/    OPC_Scope, 35, /*->1395*/ // 5 children in Scope
/*1360*/      OPC_RecordChild0, // #0 = $src1
/*1361*/      OPC_MoveChild, 1,
/*1363*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1366*/      OPC_RecordMemRef,
/*1367*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1368*/      OPC_CheckFoldableChainNode,
/*1369*/      OPC_RecordChild1, // #2 = $src2
/*1370*/      OPC_CheckChild1Type, MVT::i64,
/*1372*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1374*/      OPC_CheckPredicate, 1, // Predicate_load
/*1376*/      OPC_MoveParent,
/*1377*/      OPC_CheckType, MVT::i32,
/*1379*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1382*/      OPC_EmitMergeInputChains1_1,
/*1383*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (xor:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (XOR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1395*/    /*Scope*/ 35, /*->1431*/
/*1396*/      OPC_MoveChild, 0,
/*1398*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1401*/      OPC_RecordMemRef,
/*1402*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1403*/      OPC_CheckFoldableChainNode,
/*1404*/      OPC_RecordChild1, // #1 = $src2
/*1405*/      OPC_CheckChild1Type, MVT::i64,
/*1407*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1409*/      OPC_CheckPredicate, 1, // Predicate_load
/*1411*/      OPC_MoveParent,
/*1412*/      OPC_RecordChild1, // #2 = $src1
/*1413*/      OPC_CheckType, MVT::i32,
/*1415*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*1418*/      OPC_EmitMergeInputChains1_0,
/*1419*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (xor:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (XOR32rm:i32:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1431*/    /*Scope*/ 55, /*->1487*/
/*1432*/      OPC_RecordChild0, // #0 = $src1
/*1433*/      OPC_MoveChild, 1,
/*1435*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1438*/      OPC_RecordMemRef,
/*1439*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1440*/      OPC_CheckFoldableChainNode,
/*1441*/      OPC_RecordChild1, // #2 = $src2
/*1442*/      OPC_CheckChild1Type, MVT::i64,
/*1444*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1446*/      OPC_CheckPredicate, 1, // Predicate_load
/*1448*/      OPC_MoveParent,
/*1449*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->1468
/*1452*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1455*/        OPC_EmitMergeInputChains1_1,
/*1456*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XOR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->1486
/*1470*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1473*/        OPC_EmitMergeInputChains1_1,
/*1474*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (xor:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (XOR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1487*/    /*Scope*/ 55, /*->1543*/
/*1488*/      OPC_MoveChild, 0,
/*1490*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1493*/      OPC_RecordMemRef,
/*1494*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1495*/      OPC_CheckFoldableChainNode,
/*1496*/      OPC_RecordChild1, // #1 = $src2
/*1497*/      OPC_CheckChild1Type, MVT::i64,
/*1499*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1501*/      OPC_CheckPredicate, 1, // Predicate_load
/*1503*/      OPC_MoveParent,
/*1504*/      OPC_RecordChild1, // #2 = $src1
/*1505*/      OPC_SwitchType /*2 cases */, 16,  MVT::i32,// ->1524
/*1508*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1511*/        OPC_EmitMergeInputChains1_0,
/*1512*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (XOR32rmy:i32:i64 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 16,  MVT::i64,// ->1542
/*1526*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1529*/        OPC_EmitMergeInputChains1_0,
/*1530*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (xor:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (XOR64rm:i64:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1543*/    /*Scope*/ 51, /*->1595*/
/*1544*/      OPC_RecordChild0, // #0 = $src1
/*1545*/      OPC_RecordChild1, // #1 = $src2
/*1546*/      OPC_Scope, 20, /*->1568*/ // 3 children in Scope
/*1548*/        OPC_MoveChild, 1,
/*1550*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1553*/        OPC_MoveParent,
/*1554*/        OPC_CheckType, MVT::i32,
/*1556*/        OPC_EmitConvertToTarget, 1,
/*1558*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32ri), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (xor:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                // Dst: (XOR32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*1568*/      /*Scope*/ 12, /*->1581*/
/*1569*/        OPC_CheckType, MVT::i32,
/*1571*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR32rr), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (XOR32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*1581*/      /*Scope*/ 12, /*->1594*/
/*1582*/        OPC_CheckType, MVT::i64,
/*1584*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::XOR64rr), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (XOR64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*1594*/      0, /*End of Scope*/
/*1595*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 86|128,2/*342*/,  TARGET_VAL(ISD::MUL),// ->1942
/*1600*/    OPC_Scope, 34, /*->1636*/ // 7 children in Scope
/*1602*/      OPC_RecordChild0, // #0 = $src1
/*1603*/      OPC_MoveChild, 1,
/*1605*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1608*/      OPC_RecordMemRef,
/*1609*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1610*/      OPC_CheckFoldableChainNode,
/*1611*/      OPC_RecordChild1, // #2 = $src2
/*1612*/      OPC_CheckChild1Type, MVT::i64,
/*1614*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1616*/      OPC_CheckPredicate, 1, // Predicate_load
/*1618*/      OPC_MoveParent,
/*1619*/      OPC_CheckType, MVT::i32,
/*1621*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1624*/      OPC_EmitMergeInputChains1_1,
/*1625*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
              // Src: (mul:i32 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
              // Dst: (MUL32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1636*/    /*Scope*/ 34, /*->1671*/
/*1637*/      OPC_MoveChild, 0,
/*1639*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1642*/      OPC_RecordMemRef,
/*1643*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1644*/      OPC_CheckFoldableChainNode,
/*1645*/      OPC_RecordChild1, // #1 = $src2
/*1646*/      OPC_CheckChild1Type, MVT::i64,
/*1648*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1650*/      OPC_CheckPredicate, 1, // Predicate_load
/*1652*/      OPC_MoveParent,
/*1653*/      OPC_RecordChild1, // #2 = $src1
/*1654*/      OPC_CheckType, MVT::i32,
/*1656*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*1659*/      OPC_EmitMergeInputChains1_0,
/*1660*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (mul:i32 (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 20
              // Dst: (MUL32rm:i32 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1671*/    /*Scope*/ 53, /*->1725*/
/*1672*/      OPC_RecordChild0, // #0 = $src1
/*1673*/      OPC_MoveChild, 1,
/*1675*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1678*/      OPC_RecordMemRef,
/*1679*/      OPC_RecordNode, // #1 = 'ld' chained node
/*1680*/      OPC_CheckFoldableChainNode,
/*1681*/      OPC_RecordChild1, // #2 = $src2
/*1682*/      OPC_CheckChild1Type, MVT::i64,
/*1684*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1686*/      OPC_CheckPredicate, 1, // Predicate_load
/*1688*/      OPC_MoveParent,
/*1689*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->1707
/*1692*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1695*/        OPC_EmitMergeInputChains1_1,
/*1696*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i32 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MUL32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 15,  MVT::i64,// ->1724
/*1709*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1712*/        OPC_EmitMergeInputChains1_1,
/*1713*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (mul:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (MUL64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1725*/    /*Scope*/ 53, /*->1779*/
/*1726*/      OPC_MoveChild, 0,
/*1728*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1731*/      OPC_RecordMemRef,
/*1732*/      OPC_RecordNode, // #0 = 'ld' chained node
/*1733*/      OPC_CheckFoldableChainNode,
/*1734*/      OPC_RecordChild1, // #1 = $src2
/*1735*/      OPC_CheckChild1Type, MVT::i64,
/*1737*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1739*/      OPC_CheckPredicate, 1, // Predicate_load
/*1741*/      OPC_MoveParent,
/*1742*/      OPC_RecordChild1, // #2 = $src1
/*1743*/      OPC_SwitchType /*2 cases */, 15,  MVT::i32,// ->1761
/*1746*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1749*/        OPC_EmitMergeInputChains1_0,
/*1750*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i32 (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR32:i32:$src1) - Complexity = 19
                // Dst: (MUL32rmy:i32 GR32:i32:$src1, rriaddr:i64:$src2)
              /*SwitchType*/ 15,  MVT::i64,// ->1778
/*1763*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src2 #3 #4 #5
/*1766*/        OPC_EmitMergeInputChains1_0,
/*1767*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (mul:i64 (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR64:i64:$src1) - Complexity = 19
                // Dst: (MUL64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
              0, // EndSwitchType
/*1779*/    /*Scope*/ 112, /*->1892*/
/*1780*/      OPC_RecordChild0, // #0 = $src1
/*1781*/      OPC_Scope, 87, /*->1870*/ // 2 children in Scope
/*1783*/        OPC_RecordChild1, // #1 = $src2
/*1784*/        OPC_MoveChild, 1,
/*1786*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1789*/        OPC_Scope, 21, /*->1812*/ // 4 children in Scope
/*1791*/          OPC_CheckPredicate, 20, // Predicate_i64immSExt32
/*1793*/          OPC_MoveParent,
/*1794*/          OPC_CheckType, MVT::i64,
/*1796*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*1798*/          OPC_EmitConvertToTarget, 1,
/*1800*/          OPC_EmitNodeXForm, 1, 2, // LO32
/*1803*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64ri32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immSExt32>><<X:LO32>>:$src2) - Complexity = 9
                  // Dst: (MUL64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*1812*/        /*Scope*/ 16, /*->1829*/
/*1813*/          OPC_MoveParent,
/*1814*/          OPC_CheckType, MVT::i32,
/*1816*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*1818*/          OPC_EmitConvertToTarget, 1,
/*1820*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32ri), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (mul:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 8
                  // Dst: (MUL32ri:i32 GR32:i32:$src1, (imm:i32):$src2)
/*1829*/        /*Scope*/ 19, /*->1849*/
/*1830*/          OPC_CheckPredicate, 21, // Predicate_i32immSExt16
/*1832*/          OPC_MoveParent,
/*1833*/          OPC_CheckType, MVT::i32,
/*1835*/          OPC_EmitConvertToTarget, 1,
/*1837*/          OPC_EmitNodeXForm, 0, 2, // LL16
/*1840*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32ri16), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i32 GR32:i32:$src1, (imm:i32)<<P:Predicate_i32immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (MUL32ri16:i32 GR32:i32:$src1, (LL16:i32 (imm:i32):$src2))
/*1849*/        /*Scope*/ 19, /*->1869*/
/*1850*/          OPC_CheckPredicate, 2, // Predicate_immSExt16
/*1852*/          OPC_MoveParent,
/*1853*/          OPC_CheckType, MVT::i64,
/*1855*/          OPC_EmitConvertToTarget, 1,
/*1857*/          OPC_EmitNodeXForm, 0, 2, // LL16
/*1860*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64ri16), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (mul:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src2) - Complexity = 7
                  // Dst: (MUL64ri16:i64 GR64:i64:$src1, (LL16:i64 (imm:i64):$src2))
/*1869*/        0, /*End of Scope*/
/*1870*/      /*Scope*/ 20, /*->1891*/
/*1871*/        OPC_MoveChild, 1,
/*1873*/        OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*1876*/        OPC_RecordChild0, // #1 = $src2
/*1877*/        OPC_CheckChild0Type, MVT::i32,
/*1879*/        OPC_MoveParent,
/*1880*/        OPC_CheckType, MVT::i64,
/*1882*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MULSX64rr32), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                // Dst: (MULSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
/*1891*/      0, /*End of Scope*/
/*1892*/    /*Scope*/ 21, /*->1914*/
/*1893*/      OPC_MoveChild, 0,
/*1895*/      OPC_CheckOpcode, TARGET_VAL(ISD::SIGN_EXTEND),
/*1898*/      OPC_RecordChild0, // #0 = $src2
/*1899*/      OPC_CheckChild0Type, MVT::i32,
/*1901*/      OPC_MoveParent,
/*1902*/      OPC_RecordChild1, // #1 = $src1
/*1903*/      OPC_CheckType, MVT::i64,
/*1905*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MULSX64rr32), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
              // Src: (mul:i64 (sext:i64 GR32:i32:$src2), GR64:i64:$src1) - Complexity = 6
              // Dst: (MULSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
/*1914*/    /*Scope*/ 26, /*->1941*/
/*1915*/      OPC_RecordChild0, // #0 = $src1
/*1916*/      OPC_RecordChild1, // #1 = $src2
/*1917*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->1929
/*1920*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL32rr), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                // Dst: (MUL32rr:i32 GR32:i32:$src1, GR32:i32:$src2)
              /*SwitchType*/ 9,  MVT::i64,// ->1940
/*1931*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MUL64rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (mul:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (MUL64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
              0, // EndSwitchType
/*1941*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 5|128,2/*261*/,  TARGET_VAL(SystemZISD::CMP),// ->2207
/*1946*/    OPC_RecordChild0, // #0 = $src1
/*1947*/    OPC_Scope, 87, /*->2036*/ // 4 children in Scope
/*1949*/      OPC_CheckChild0Type, MVT::i32,
/*1951*/      OPC_Scope, 50, /*->2003*/ // 2 children in Scope
/*1953*/        OPC_MoveChild, 1,
/*1955*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1958*/        OPC_RecordMemRef,
/*1959*/        OPC_RecordNode, // #1 = 'ld' chained node
/*1960*/        OPC_CheckFoldableChainNode,
/*1961*/        OPC_RecordChild1, // #2 = $src2
/*1962*/        OPC_CheckChild1Type, MVT::i64,
/*1964*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1966*/        OPC_CheckPredicate, 1, // Predicate_load
/*1968*/        OPC_MoveParent,
/*1969*/        OPC_Scope, 15, /*->1986*/ // 2 children in Scope
/*1971*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*1974*/          OPC_EmitMergeInputChains1_1,
/*1975*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
                  // Dst: (CMP32rm:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*1986*/        /*Scope*/ 15, /*->2002*/
/*1987*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*1990*/          OPC_EmitMergeInputChains1_1,
/*1991*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (CMP32rmy:i64 GR32:i32:$src1, rriaddr:i64:$src2)
/*2002*/        0, /*End of Scope*/
/*2003*/      /*Scope*/ 31, /*->2035*/
/*2004*/        OPC_RecordChild1, // #1 = $src2
/*2005*/        OPC_Scope, 17, /*->2024*/ // 2 children in Scope
/*2007*/          OPC_MoveChild, 1,
/*2009*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2012*/          OPC_MoveParent,
/*2013*/          OPC_EmitConvertToTarget, 1,
/*2015*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32ri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (CMP32ri:i64 GR32:i32:$src1, (imm:i32):$src2)
/*2024*/        /*Scope*/ 9, /*->2034*/
/*2025*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP32rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZcmp:i64 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                  // Dst: (CMP32rr:i64 GR32:i32:$src1, GR32:i32:$src2)
/*2034*/        0, /*End of Scope*/
/*2035*/      0, /*End of Scope*/
/*2036*/    /*Scope*/ 73, /*->2110*/
/*2037*/      OPC_CheckChild0Type, MVT::i64,
/*2039*/      OPC_Scope, 31, /*->2072*/ // 2 children in Scope
/*2041*/        OPC_MoveChild, 1,
/*2043*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2046*/        OPC_RecordMemRef,
/*2047*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2048*/        OPC_CheckFoldableChainNode,
/*2049*/        OPC_RecordChild1, // #2 = $src2
/*2050*/        OPC_CheckChild1Type, MVT::i64,
/*2052*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2054*/        OPC_CheckPredicate, 1, // Predicate_load
/*2056*/        OPC_MoveParent,
/*2057*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2060*/        OPC_EmitMergeInputChains1_1,
/*2061*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (SystemZcmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (CMP64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2072*/      /*Scope*/ 36, /*->2109*/
/*2073*/        OPC_RecordChild1, // #1 = $src2
/*2074*/        OPC_Scope, 22, /*->2098*/ // 2 children in Scope
/*2076*/          OPC_MoveChild, 1,
/*2078*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2081*/          OPC_CheckPredicate, 20, // Predicate_i64immSExt32
/*2083*/          OPC_MoveParent,
/*2084*/          OPC_EmitConvertToTarget, 1,
/*2086*/          OPC_EmitNodeXForm, 1, 2, // LO32
/*2089*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP64ri32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (SystemZcmp:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                  // Dst: (CMP64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*2098*/        /*Scope*/ 9, /*->2108*/
/*2099*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMP64rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZcmp:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                  // Dst: (CMP64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
/*2108*/        0, /*End of Scope*/
/*2109*/      0, /*End of Scope*/
/*2110*/    /*Scope*/ 47, /*->2158*/
/*2111*/      OPC_CheckChild0Type, MVT::f32,
/*2113*/      OPC_Scope, 31, /*->2146*/ // 2 children in Scope
/*2115*/        OPC_MoveChild, 1,
/*2117*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2120*/        OPC_RecordMemRef,
/*2121*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2122*/        OPC_CheckFoldableChainNode,
/*2123*/        OPC_RecordChild1, // #2 = $src2
/*2124*/        OPC_CheckChild1Type, MVT::i64,
/*2126*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2128*/        OPC_CheckPredicate, 1, // Predicate_load
/*2130*/        OPC_MoveParent,
/*2131*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*2134*/        OPC_EmitMergeInputChains1_1,
/*2135*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (SystemZcmp:i64 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FCMP32rm:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
/*2146*/      /*Scope*/ 10, /*->2157*/
/*2147*/        OPC_RecordChild1, // #1 = $src2
/*2148*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP32rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (SystemZcmp:i64 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FCMP32rr:i64 FP32:f32:$src1, FP32:f32:$src2)
/*2157*/      0, /*End of Scope*/
/*2158*/    /*Scope*/ 47, /*->2206*/
/*2159*/      OPC_CheckChild0Type, MVT::f64,
/*2161*/      OPC_Scope, 31, /*->2194*/ // 2 children in Scope
/*2163*/        OPC_MoveChild, 1,
/*2165*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2168*/        OPC_RecordMemRef,
/*2169*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2170*/        OPC_CheckFoldableChainNode,
/*2171*/        OPC_RecordChild1, // #2 = $src2
/*2172*/        OPC_CheckChild1Type, MVT::i64,
/*2174*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2176*/        OPC_CheckPredicate, 1, // Predicate_load
/*2178*/        OPC_MoveParent,
/*2179*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*2182*/        OPC_EmitMergeInputChains1_1,
/*2183*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (SystemZcmp:i64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FCMP64rm:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
/*2194*/      /*Scope*/ 10, /*->2205*/
/*2195*/        OPC_RecordChild1, // #1 = $src2
/*2196*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCMP64rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (SystemZcmp:i64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FCMP64rr:i64 FP64:f64:$src1, FP64:f64:$src2)
/*2205*/      0, /*End of Scope*/
/*2206*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 118|128,1/*246*/,  TARGET_VAL(SystemZISD::UCMP),// ->2457
/*2211*/    OPC_RecordChild0, // #0 = $src1
/*2212*/    OPC_Scope, 87, /*->2301*/ // 2 children in Scope
/*2214*/      OPC_CheckChild0Type, MVT::i32,
/*2216*/      OPC_Scope, 50, /*->2268*/ // 2 children in Scope
/*2218*/        OPC_MoveChild, 1,
/*2220*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2223*/        OPC_RecordMemRef,
/*2224*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2225*/        OPC_CheckFoldableChainNode,
/*2226*/        OPC_RecordChild1, // #2 = $src2
/*2227*/        OPC_CheckChild1Type, MVT::i64,
/*2229*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2231*/        OPC_CheckPredicate, 1, // Predicate_load
/*2233*/        OPC_MoveParent,
/*2234*/        OPC_Scope, 15, /*->2251*/ // 2 children in Scope
/*2236*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*2239*/          OPC_EmitMergeInputChains1_1,
/*2240*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, (ld:i32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 20
                  // Dst: (UCMP32rm:i64 GR32:i32:$src1, rriaddr12:i64:$src2)
/*2251*/        /*Scope*/ 15, /*->2267*/
/*2252*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2255*/          OPC_EmitMergeInputChains1_1,
/*2256*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, (ld:i32 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (UCMP32rmy:i64 GR32:i32:$src1, rriaddr:i64:$src2)
/*2267*/        0, /*End of Scope*/
/*2268*/      /*Scope*/ 31, /*->2300*/
/*2269*/        OPC_RecordChild1, // #1 = $src2
/*2270*/        OPC_Scope, 17, /*->2289*/ // 2 children in Scope
/*2272*/          OPC_MoveChild, 1,
/*2274*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2277*/          OPC_MoveParent,
/*2278*/          OPC_EmitConvertToTarget, 1,
/*2280*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32ri), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                  // Dst: (UCMP32ri:i64 GR32:i32:$src1, (imm:i32):$src2)
/*2289*/        /*Scope*/ 9, /*->2299*/
/*2290*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP32rr), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZucmp:i64 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
                  // Dst: (UCMP32rr:i64 GR32:i32:$src1, GR32:i32:$src2)
/*2299*/        0, /*End of Scope*/
/*2300*/      0, /*End of Scope*/
/*2301*/    /*Scope*/ 25|128,1/*153*/, /*->2456*/
/*2303*/      OPC_CheckChild0Type, MVT::i64,
/*2305*/      OPC_Scope, 76, /*->2383*/ // 4 children in Scope
/*2307*/        OPC_MoveChild, 1,
/*2309*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2312*/        OPC_RecordMemRef,
/*2313*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2314*/        OPC_CheckFoldableChainNode,
/*2315*/        OPC_RecordChild1, // #2 = $src2
/*2316*/        OPC_CheckChild1Type, MVT::i64,
/*2318*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2320*/        OPC_Scope, 18, /*->2340*/ // 3 children in Scope
/*2322*/          OPC_CheckPredicate, 1, // Predicate_load
/*2324*/          OPC_MoveParent,
/*2325*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2328*/          OPC_EmitMergeInputChains1_1,
/*2329*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (UCMP64rm:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2340*/        /*Scope*/ 20, /*->2361*/
/*2341*/          OPC_CheckPredicate, 22, // Predicate_sextload
/*2343*/          OPC_CheckPredicate, 23, // Predicate_sextloadi32
/*2345*/          OPC_MoveParent,
/*2346*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2349*/          OPC_EmitMergeInputChains1_1,
/*2350*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMPSX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>>) - Complexity = 19
                  // Dst: (CMPSX64rm32:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2361*/        /*Scope*/ 20, /*->2382*/
/*2362*/          OPC_CheckPredicate, 24, // Predicate_zextload
/*2364*/          OPC_CheckPredicate, 25, // Predicate_zextloadi32
/*2366*/          OPC_MoveParent,
/*2367*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$src2 #3 #4 #5
/*2370*/          OPC_EmitMergeInputChains1_1,
/*2371*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMPZX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (ld:i64 rriaddr:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>>) - Complexity = 19
                  // Dst: (UCMPZX64rm32:i64 GR64:i64:$src1, rriaddr:i64:$src2)
/*2382*/        0, /*End of Scope*/
/*2383*/      /*Scope*/ 23, /*->2407*/
/*2384*/        OPC_RecordChild1, // #1 = $src2
/*2385*/        OPC_MoveChild, 1,
/*2387*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2390*/        OPC_CheckPredicate, 26, // Predicate_i64immZExt32
/*2392*/        OPC_MoveParent,
/*2393*/        OPC_EmitConvertToTarget, 1,
/*2395*/        OPC_EmitNodeXForm, 1, 2, // LO32
/*2398*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP64ri32), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (SystemZucmp:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_i64immZExt32>><<X:LO32>>:$src2) - Complexity = 7
                // Dst: (UCMP64ri32:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*2407*/      /*Scope*/ 36, /*->2444*/
/*2408*/        OPC_MoveChild, 1,
/*2410*/        OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->2427
/*2414*/          OPC_RecordChild0, // #1 = $src2
/*2415*/          OPC_CheckChild0Type, MVT::i32,
/*2417*/          OPC_MoveParent,
/*2418*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::CMPSX64rr32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (sext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (CMPSX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
                /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::ZERO_EXTEND),// ->2443
/*2430*/          OPC_RecordChild0, // #1 = $src2
/*2431*/          OPC_CheckChild0Type, MVT::i32,
/*2433*/          OPC_MoveParent,
/*2434*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMPZX64rr32), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (SystemZucmp:i64 GR64:i64:$src1, (zext:i64 GR32:i32:$src2)) - Complexity = 6
                  // Dst: (UCMPZX64rr32:i64 GR64:i64:$src1, GR32:i32:$src2)
                0, // EndSwitchOpcode
/*2444*/      /*Scope*/ 10, /*->2455*/
/*2445*/        OPC_RecordChild1, // #1 = $src2
/*2446*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::UCMP64rr), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (SystemZucmp:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
                // Dst: (UCMP64rr:i64 GR64:i64:$src1, GR64:i64:$src2)
/*2455*/      0, /*End of Scope*/
/*2456*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 76,  TARGET_VAL(ISD::BSWAP),// ->2536
/*2460*/    OPC_Scope, 49, /*->2511*/ // 2 children in Scope
/*2462*/      OPC_MoveChild, 0,
/*2464*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2467*/      OPC_RecordMemRef,
/*2468*/      OPC_RecordNode, // #0 = 'ld' chained node
/*2469*/      OPC_RecordChild1, // #1 = $src
/*2470*/      OPC_CheckChild1Type, MVT::i64,
/*2472*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2474*/      OPC_CheckPredicate, 1, // Predicate_load
/*2476*/      OPC_MoveParent,
/*2477*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->2494
/*2480*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2483*/        OPC_EmitMergeInputChains1_0,
/*2484*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i32 (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (BSWAP32rm:i32 rriaddr:i64:$src)
              /*SwitchType*/ 14,  MVT::i64,// ->2510
/*2496*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2499*/        OPC_EmitMergeInputChains1_0,
/*2500*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (bswap:i64 (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (BSWAP64rm:i64 rriaddr:i64:$src)
              0, // EndSwitchType
/*2511*/    /*Scope*/ 23, /*->2535*/
/*2512*/      OPC_RecordChild0, // #0 = $src
/*2513*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->2524
/*2516*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP32rr), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (bswap:i32 GR32:i32:$src) - Complexity = 3
                // Dst: (BSWAP32rr:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->2534
/*2526*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP64rr), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (bswap:i64 GR64:i64:$src) - Complexity = 3
                // Dst: (BSWAP64rr:i64 GR64:i64:$src)
              0, // EndSwitchType
/*2535*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,3/*503*/,  TARGET_VAL(ISD::LOAD),// ->3043
/*2540*/    OPC_RecordMemRef,
/*2541*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*2542*/    OPC_RecordChild1, // #1 = $src
/*2543*/    OPC_CheckChild1Type, MVT::i64,
/*2545*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2547*/    OPC_Scope, 18, /*->2567*/ // 7 children in Scope
/*2549*/      OPC_CheckPredicate, 1, // Predicate_load
/*2551*/      OPC_CheckType, MVT::i32,
/*2553*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*2556*/      OPC_EmitMergeInputChains1_0,
/*2557*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (ld:i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 17
              // Dst: (MOV32rm:i32 rriaddr12:i64:$src)
/*2567*/    /*Scope*/ 20, /*->2588*/
/*2568*/      OPC_CheckPredicate, 22, // Predicate_sextload
/*2570*/      OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*2572*/      OPC_CheckType, MVT::i32,
/*2574*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*2577*/      OPC_EmitMergeInputChains1_0,
/*2578*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rm16), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
              // Src: (ld:i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 17
              // Dst: (MOVSX32rm16:i32 rriaddr12:i64:$src)
/*2588*/    /*Scope*/ 36, /*->2625*/
/*2589*/      OPC_CheckPredicate, 1, // Predicate_load
/*2591*/      OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->2608
/*2594*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2597*/        OPC_EmitMergeInputChains1_0,
/*2598*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (MOV32rmy:i32 rriaddr:i64:$src)
              /*SwitchType*/ 14,  MVT::i64,// ->2624
/*2610*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2613*/        OPC_EmitMergeInputChains1_0,
/*2614*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (MOV64rm:i64 rriaddr:i64:$src)
              0, // EndSwitchType
/*2625*/    /*Scope*/ 97, /*->2723*/
/*2626*/      OPC_CheckPredicate, 22, // Predicate_sextload
/*2628*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2667
/*2631*/        OPC_Scope, 16, /*->2649*/ // 2 children in Scope
/*2633*/          OPC_CheckPredicate, 28, // Predicate_sextloadi8
/*2635*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2638*/          OPC_EmitMergeInputChains1_0,
/*2639*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (MOVSX32rm8:i32 rriaddr:i64:$src)
/*2649*/        /*Scope*/ 16, /*->2666*/
/*2650*/          OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*2652*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2655*/          OPC_EmitMergeInputChains1_0,
/*2656*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rm16y), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (MOVSX32rm16y:i32 rriaddr:i64:$src)
/*2666*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->2722
/*2669*/        OPC_Scope, 16, /*->2687*/ // 3 children in Scope
/*2671*/          OPC_CheckPredicate, 28, // Predicate_sextloadi8
/*2673*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2676*/          OPC_EmitMergeInputChains1_0,
/*2677*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi8>> - Complexity = 16
                  // Dst: (MOVSX64rm8:i64 rriaddr:i64:$src)
/*2687*/        /*Scope*/ 16, /*->2704*/
/*2688*/          OPC_CheckPredicate, 27, // Predicate_sextloadi16
/*2690*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2693*/          OPC_EmitMergeInputChains1_0,
/*2694*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 16
                  // Dst: (MOVSX64rm16:i64 rriaddr:i64:$src)
/*2704*/        /*Scope*/ 16, /*->2721*/
/*2705*/          OPC_CheckPredicate, 23, // Predicate_sextloadi32
/*2707*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2710*/          OPC_EmitMergeInputChains1_0,
/*2711*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 16
                  // Dst: (MOVSX64rm32:i64 rriaddr:i64:$src)
/*2721*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2723*/    /*Scope*/ 97, /*->2821*/
/*2724*/      OPC_CheckPredicate, 24, // Predicate_zextload
/*2726*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2765
/*2729*/        OPC_Scope, 16, /*->2747*/ // 2 children in Scope
/*2731*/          OPC_CheckPredicate, 29, // Predicate_zextloadi8
/*2733*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2736*/          OPC_EmitMergeInputChains1_0,
/*2737*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (MOVZX32rm8:i32 rriaddr:i64:$src)
/*2747*/        /*Scope*/ 16, /*->2764*/
/*2748*/          OPC_CheckPredicate, 30, // Predicate_zextloadi16
/*2750*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2753*/          OPC_EmitMergeInputChains1_0,
/*2754*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (MOVZX32rm16:i32 rriaddr:i64:$src)
/*2764*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->2820
/*2767*/        OPC_Scope, 16, /*->2785*/ // 3 children in Scope
/*2769*/          OPC_CheckPredicate, 29, // Predicate_zextloadi8
/*2771*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2774*/          OPC_EmitMergeInputChains1_0,
/*2775*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 16
                  // Dst: (MOVZX64rm8:i64 rriaddr:i64:$src)
/*2785*/        /*Scope*/ 16, /*->2802*/
/*2786*/          OPC_CheckPredicate, 30, // Predicate_zextloadi16
/*2788*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2791*/          OPC_EmitMergeInputChains1_0,
/*2792*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 16
                  // Dst: (MOVZX64rm16:i64 rriaddr:i64:$src)
/*2802*/        /*Scope*/ 16, /*->2819*/
/*2803*/          OPC_CheckPredicate, 25, // Predicate_zextloadi32
/*2805*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2808*/          OPC_EmitMergeInputChains1_0,
/*2809*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 16
                  // Dst: (MOVZX64rm32:i64 rriaddr:i64:$src)
/*2819*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2821*/    /*Scope*/ 97, /*->2919*/
/*2822*/      OPC_CheckPredicate, 31, // Predicate_extload
/*2824*/      OPC_SwitchType /*2 cases */, 36,  MVT::i32,// ->2863
/*2827*/        OPC_Scope, 16, /*->2845*/ // 2 children in Scope
/*2829*/          OPC_CheckPredicate, 32, // Predicate_extloadi8
/*2831*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2834*/          OPC_EmitMergeInputChains1_0,
/*2835*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (MOVZX32rm8:i32 rriaddr:i64:$src)
/*2845*/        /*Scope*/ 16, /*->2862*/
/*2846*/          OPC_CheckPredicate, 33, // Predicate_extloadi16
/*2848*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2851*/          OPC_EmitMergeInputChains1_0,
/*2852*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX32rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (MOVZX32rm16:i32 rriaddr:i64:$src)
/*2862*/        0, /*End of Scope*/
              /*SwitchType*/ 53,  MVT::i64,// ->2918
/*2865*/        OPC_Scope, 16, /*->2883*/ // 3 children in Scope
/*2867*/          OPC_CheckPredicate, 32, // Predicate_extloadi8
/*2869*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2872*/          OPC_EmitMergeInputChains1_0,
/*2873*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 16
                  // Dst: (MOVZX64rm8:i64 rriaddr:i64:$src)
/*2883*/        /*Scope*/ 16, /*->2900*/
/*2884*/          OPC_CheckPredicate, 33, // Predicate_extloadi16
/*2886*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2889*/          OPC_EmitMergeInputChains1_0,
/*2890*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm16), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 16
                  // Dst: (MOVZX64rm16:i64 rriaddr:i64:$src)
/*2900*/        /*Scope*/ 16, /*->2917*/
/*2901*/          OPC_CheckPredicate, 34, // Predicate_extloadi32
/*2903*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2906*/          OPC_EmitMergeInputChains1_0,
/*2907*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rm32), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 16
                  // Dst: (MOVZX64rm32:i64 rriaddr:i64:$src)
/*2917*/        0, /*End of Scope*/
              0, // EndSwitchType
/*2919*/    /*Scope*/ 122, /*->3042*/
/*2920*/      OPC_CheckPredicate, 1, // Predicate_load
/*2922*/      OPC_SwitchType /*4 cases */, 32,  MVT::v2i32,// ->2957
/*2925*/        OPC_Scope, 14, /*->2941*/ // 2 children in Scope
/*2927*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*2930*/          OPC_EmitMergeInputChains1_0,
/*2931*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Prm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:v2i32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (MOV64Prm:v2i32 rriaddr12:i64:$src)
/*2941*/        /*Scope*/ 14, /*->2956*/
/*2942*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2945*/          OPC_EmitMergeInputChains1_0,
/*2946*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Prmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:v2i32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (MOV64Prmy:v2i32 rriaddr:i64:$src)
/*2956*/        0, /*End of Scope*/
              /*SwitchType*/ 14,  MVT::v2i64,// ->2973
/*2959*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2962*/        OPC_EmitMergeInputChains1_0,
/*2963*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV128rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::v2i64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (ld:v2i64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                // Dst: (MOV128rm:v2i64 rriaddr:i64:$src)
              /*SwitchType*/ 32,  MVT::f32,// ->3007
/*2975*/        OPC_Scope, 14, /*->2991*/ // 2 children in Scope
/*2977*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*2980*/          OPC_EmitMergeInputChains1_0,
/*2981*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV32rm:f32 rriaddr12:i64:$src)
/*2991*/        /*Scope*/ 14, /*->3006*/
/*2992*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*2995*/          OPC_EmitMergeInputChains1_0,
/*2996*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f32 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV32rmy:f32 rriaddr:i64:$src)
/*3006*/        0, /*End of Scope*/
              /*SwitchType*/ 32,  MVT::f64,// ->3041
/*3009*/        OPC_Scope, 14, /*->3025*/ // 2 children in Scope
/*3011*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*3014*/          OPC_EmitMergeInputChains1_0,
/*3015*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV64rm:f64 rriaddr12:i64:$src)
/*3025*/        /*Scope*/ 14, /*->3040*/
/*3026*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRRI20:$src #2 #3 #4
/*3029*/          OPC_EmitMergeInputChains1_0,
/*3030*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64rmy), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                  // Src: (ld:f64 rriaddr:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 16
                  // Dst: (FMOV64rmy:f64 rriaddr:i64:$src)
/*3040*/        0, /*End of Scope*/
              0, // EndSwitchType
/*3042*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::FrameIndex),// ->3062
/*3046*/    OPC_RecordNode,   // #0 = $src
/*3047*/    OPC_CheckType, MVT::i64,
/*3049*/    OPC_CheckComplexPat, /*CP*/2, /*#*/0, // SelectLAAddr:$src #1 #2 #3
/*3052*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64r), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
            // Src: laaddr:i64:$src - Complexity = 13
            // Dst: (LA64r:i64 laaddr:i64:$src)
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SRL),// ->3101
/*3065*/    OPC_RecordChild0, // #0 = $src
/*3066*/    OPC_RecordChild1, // #1 = $amt
/*3067*/    OPC_CheckChild1Type, MVT::i64,
/*3069*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3085
/*3072*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3075*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL32rri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 13
              // Dst: (SRL32rri:i32 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 13,  MVT::i64,// ->3100
/*3087*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3090*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRL64rri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (srl:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (SRL64rri:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::SHL),// ->3140
/*3104*/    OPC_RecordChild0, // #0 = $src
/*3105*/    OPC_RecordChild1, // #1 = $amt
/*3106*/    OPC_CheckChild1Type, MVT::i64,
/*3108*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3124
/*3111*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3114*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHL32rri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 13
              // Dst: (SHL32rri:i32 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 13,  MVT::i64,// ->3139
/*3126*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3129*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SHL64rri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (shl:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (SHL64rri:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::SRA),// ->3181
/*3143*/    OPC_RecordChild0, // #0 = $src
/*3144*/    OPC_RecordChild1, // #1 = $amt
/*3145*/    OPC_CheckChild1Type, MVT::i64,
/*3147*/    OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3164
/*3150*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3153*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA32rri), 0,
                  2/*#VTs*/, MVT::i32, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 13
              // Dst: (SRA32rri:i32:i64 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 14,  MVT::i64,// ->3180
/*3166*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3169*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SRA64rri), 0,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (sra:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (SRA64rri:i64:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ROTL),// ->3220
/*3184*/    OPC_RecordChild0, // #0 = $src
/*3185*/    OPC_RecordChild1, // #1 = $amt
/*3186*/    OPC_CheckChild1Type, MVT::i64,
/*3188*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3204
/*3191*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrRI12Only:$amt #2 #3
/*3194*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ROTL32rri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i32 GR32:i32:$src, riaddr32:i64:$amt) - Complexity = 12
              // Dst: (ROTL32rri:i32 GR32:i32:$src, riaddr32:i64:$amt)
            /*SwitchType*/ 13,  MVT::i64,// ->3219
/*3206*/      OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectAddrRI:$amt #2 #3
/*3209*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ROTL64rri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
              // Src: (rotl:i64 GR64:i64:$src, riaddr:i64:$amt) - Complexity = 12
              // Dst: (ROTL64rri:i64 GR64:i64:$src, riaddr:i64:$amt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::ADDC),// ->3298
/*3223*/    OPC_RecordChild0, // #0 = $src1
/*3224*/    OPC_RecordChild1, // #1 = $src2
/*3225*/    OPC_Scope, 44, /*->3271*/ // 3 children in Scope
/*3227*/      OPC_MoveChild, 1,
/*3229*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3232*/      OPC_Scope, 20, /*->3254*/ // 2 children in Scope
/*3234*/        OPC_CheckPredicate, 3, // Predicate_immSExt32
/*3236*/        OPC_MoveParent,
/*3237*/        OPC_CheckType, MVT::i64,
/*3239*/        OPC_EmitConvertToTarget, 1,
/*3241*/        OPC_EmitNodeXForm, 1, 2, // LO32
/*3244*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC64ri32), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (addc:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                // Dst: (ADC64ri32:i64:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*3254*/      /*Scope*/ 15, /*->3270*/
/*3255*/        OPC_MoveParent,
/*3256*/        OPC_CheckType, MVT::i32,
/*3258*/        OPC_EmitConvertToTarget, 1,
/*3260*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC32ri), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                // Dst: (ADC32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*3270*/      0, /*End of Scope*/
/*3271*/    /*Scope*/ 12, /*->3284*/
/*3272*/      OPC_CheckType, MVT::i32,
/*3274*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC32rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (ADC32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*3284*/    /*Scope*/ 12, /*->3297*/
/*3285*/      OPC_CheckType, MVT::i64,
/*3287*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADC64rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (ADC64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*3297*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 75,  TARGET_VAL(ISD::SUBC),// ->3376
/*3301*/    OPC_RecordChild0, // #0 = $src1
/*3302*/    OPC_RecordChild1, // #1 = $src2
/*3303*/    OPC_Scope, 44, /*->3349*/ // 3 children in Scope
/*3305*/      OPC_MoveChild, 1,
/*3307*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3310*/      OPC_Scope, 20, /*->3332*/ // 2 children in Scope
/*3312*/        OPC_CheckPredicate, 3, // Predicate_immSExt32
/*3314*/        OPC_MoveParent,
/*3315*/        OPC_CheckType, MVT::i64,
/*3317*/        OPC_EmitConvertToTarget, 1,
/*3319*/        OPC_EmitNodeXForm, 1, 2, // LO32
/*3322*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC64ri32), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 3, 
                // Src: (subc:i64 GR64:i64:$src1, (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src2) - Complexity = 7
                // Dst: (SBC64ri32:i64:i64 GR64:i64:$src1, (LO32:i64 (imm:i64):$src2))
/*3332*/      /*Scope*/ 15, /*->3348*/
/*3333*/        OPC_MoveParent,
/*3334*/        OPC_CheckType, MVT::i32,
/*3336*/        OPC_EmitConvertToTarget, 1,
/*3338*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC32ri), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 2, 
                // Src: (subc:i32 GR32:i32:$src1, (imm:i32):$src2) - Complexity = 6
                // Dst: (SBC32ri:i32:i64 GR32:i32:$src1, (imm:i32):$src2)
/*3348*/      0, /*End of Scope*/
/*3349*/    /*Scope*/ 12, /*->3362*/
/*3350*/      OPC_CheckType, MVT::i32,
/*3352*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC32rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (SBC32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
/*3362*/    /*Scope*/ 12, /*->3375*/
/*3363*/      OPC_CheckType, MVT::i64,
/*3365*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SBC64rr), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (SBC64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
/*3375*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(SystemZISD::PCRelativeWrapper),// ->3426
/*3379*/    OPC_RecordChild0, // #0 = $src
/*3380*/    OPC_MoveChild, 0,
/*3382*/    OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3397
/*3386*/      OPC_MoveParent,
/*3387*/      OPC_CheckType, MVT::i64,
/*3389*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64rm), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (SystemZpcrelwrapper:i64 (tglobaladdr:i64):$src) - Complexity = 6
              // Dst: (LA64rm:i64 (tglobaladdr:i64):$src)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetJumpTable),// ->3411
/*3400*/      OPC_MoveParent,
/*3401*/      OPC_CheckType, MVT::i64,
/*3403*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64rm), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (SystemZpcrelwrapper:i64 (tjumptable:i64):$src) - Complexity = 6
              // Dst: (LA64rm:i64 (tjumptable:i64):$src)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetConstantPool),// ->3425
/*3414*/      OPC_MoveParent,
/*3415*/      OPC_CheckType, MVT::i64,
/*3417*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::LA64rm), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (SystemZpcrelwrapper:i64 (tconstpool:i64):$src) - Complexity = 6
              // Dst: (LA64rm:i64 (tconstpool:i64):$src)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 80,  TARGET_VAL(SystemZISD::SELECT),// ->3509
/*3429*/    OPC_RecordChild0, // #0 = $src1
/*3430*/    OPC_RecordChild1, // #1 = $src2
/*3431*/    OPC_RecordChild2, // #2 = $cc
/*3432*/    OPC_MoveChild, 2,
/*3434*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3437*/    OPC_MoveParent,
/*3438*/    OPC_RecordChild3, // #3 = physreg input PSW
/*3439*/    OPC_SwitchType /*4 cases */, 15,  MVT::i32,// ->3457
/*3442*/      OPC_EmitConvertToTarget, 2,
/*3444*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*3447*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (Select32:i32 GR32:i32:$src1, GR32:i32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 15,  MVT::i64,// ->3474
/*3459*/      OPC_EmitConvertToTarget, 2,
/*3461*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*3464*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::Select64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (Select64:i64 GR64:i64:$src1, GR64:i64:$src2, (imm:i8):$cc)
            /*SwitchType*/ 15,  MVT::f32,// ->3491
/*3476*/      OPC_EmitConvertToTarget, 2,
/*3478*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*3481*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF32), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (SelectF32:f32 FP32:f32:$src1, FP32:f32:$src2, (imm:i8):$cc)
            /*SwitchType*/ 15,  MVT::f64,// ->3508
/*3493*/      OPC_EmitConvertToTarget, 2,
/*3495*/      OPC_EmitCopyToReg, 3, SystemZ::PSW,
/*3498*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SelectF64), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 4, 
              // Src: (SystemZselect:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc, PSW:i64) - Complexity = 6
              // Dst: (SelectF64:f64 FP64:f64:$src1, FP64:f64:$src2, (imm:i8):$cc)
            0, // EndSwitchType
          /*SwitchOpcode*/ 95|128,1/*223*/,  TARGET_VAL(ISD::Constant),// ->3736
/*3513*/    OPC_RecordNode,   // #0 = $src
/*3514*/    OPC_Scope, 34, /*->3550*/ // 10 children in Scope
/*3516*/      OPC_CheckPredicate, 2, // Predicate_immSExt16
/*3518*/      OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3534
/*3521*/        OPC_EmitConvertToTarget, 0,
/*3523*/        OPC_EmitNodeXForm, 0, 1, // LL16
/*3526*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32ri16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (MOV32ri16:i32 (LL16:i32 (imm:i32):$src))
              /*SwitchType*/ 13,  MVT::i64,// ->3549
/*3536*/        OPC_EmitConvertToTarget, 0,
/*3538*/        OPC_EmitNodeXForm, 0, 1, // LL16
/*3541*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64ri16), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src - Complexity = 4
                // Dst: (MOV64ri16:i64 (LL16:i64 (imm:i64):$src))
              0, // EndSwitchType
/*3550*/    /*Scope*/ 17, /*->3568*/
/*3551*/      OPC_CheckPredicate, 14, // Predicate_i64ll16
/*3553*/      OPC_CheckType, MVT::i64,
/*3555*/      OPC_EmitConvertToTarget, 0,
/*3557*/      OPC_EmitNodeXForm, 0, 1, // LL16
/*3560*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rill16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64ll16>><<X:LL16>>:$src - Complexity = 4
              // Dst: (MOV64rill16:i64 (LL16:i32 (imm:i64):$src))
/*3568*/    /*Scope*/ 17, /*->3586*/
/*3569*/      OPC_CheckPredicate, 15, // Predicate_i64lh16
/*3571*/      OPC_CheckType, MVT::i64,
/*3573*/      OPC_EmitConvertToTarget, 0,
/*3575*/      OPC_EmitNodeXForm, 2, 1, // LH16
/*3578*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rilh16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64lh16>><<X:LH16>>:$src - Complexity = 4
              // Dst: (MOV64rilh16:i64 (LH16:i32 (imm:i64):$src))
/*3586*/    /*Scope*/ 17, /*->3604*/
/*3587*/      OPC_CheckPredicate, 16, // Predicate_i64hl16
/*3589*/      OPC_CheckType, MVT::i64,
/*3591*/      OPC_EmitConvertToTarget, 0,
/*3593*/      OPC_EmitNodeXForm, 3, 1, // HL16
/*3596*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rihl16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64hl16>><<X:HL16>>:$src - Complexity = 4
              // Dst: (MOV64rihl16:i64 (HL16:i32 (imm:i64):$src))
/*3604*/    /*Scope*/ 17, /*->3622*/
/*3605*/      OPC_CheckPredicate, 17, // Predicate_i64hh16
/*3607*/      OPC_CheckType, MVT::i64,
/*3609*/      OPC_EmitConvertToTarget, 0,
/*3611*/      OPC_EmitNodeXForm, 4, 1, // HH16
/*3614*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rihh16), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64hh16>><<X:HH16>>:$src - Complexity = 4
              // Dst: (MOV64rihh16:i64 (HH16:i32 (imm:i64):$src))
/*3622*/    /*Scope*/ 17, /*->3640*/
/*3623*/      OPC_CheckPredicate, 3, // Predicate_immSExt32
/*3625*/      OPC_CheckType, MVT::i64,
/*3627*/      OPC_EmitConvertToTarget, 0,
/*3629*/      OPC_EmitNodeXForm, 1, 1, // LO32
/*3632*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64ri32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_immSExt32>><<X:LO32>>:$src - Complexity = 4
              // Dst: (MOV64ri32:i64 (LO32:i64 (imm:i64):$src))
/*3640*/    /*Scope*/ 17, /*->3658*/
/*3641*/      OPC_CheckPredicate, 18, // Predicate_i64lo32
/*3643*/      OPC_CheckType, MVT::i64,
/*3645*/      OPC_EmitConvertToTarget, 0,
/*3647*/      OPC_EmitNodeXForm, 1, 1, // LO32
/*3650*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rilo32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64lo32>><<X:LO32>>:$src - Complexity = 4
              // Dst: (MOV64rilo32:i64 (LO32:i32 (imm:i64):$src))
/*3658*/    /*Scope*/ 17, /*->3676*/
/*3659*/      OPC_CheckPredicate, 19, // Predicate_i64hi32
/*3661*/      OPC_CheckType, MVT::i64,
/*3663*/      OPC_EmitConvertToTarget, 0,
/*3665*/      OPC_EmitNodeXForm, 5, 1, // HI32
/*3668*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64rihi32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (imm:i64)<<P:Predicate_i64hi32>><<X:HI32>>:$src - Complexity = 4
              // Dst: (MOV64rihi32:i64 (HI32:i32 (imm:i64):$src))
/*3676*/    /*Scope*/ 27, /*->3704*/
/*3677*/      OPC_CheckType, MVT::i32,
/*3679*/      OPC_EmitConvertToTarget, 0,
/*3681*/      OPC_EmitNodeXForm, 6, 1, // GetI64FromI32
/*3684*/      OPC_EmitNode, TARGET_VAL(SystemZ::MOV64ri32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3 
/*3692*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*3695*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 4, 
              // Src: (imm:i32):$src - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i32 (MOV64ri32:i64 (GetI64FromI32:i64 (imm:i32):$src)), subreg_32bit:i32)
/*3704*/    /*Scope*/ 30, /*->3735*/
/*3705*/      OPC_CheckType, MVT::i64,
/*3707*/      OPC_EmitConvertToTarget, 0,
/*3709*/      OPC_EmitNodeXForm, 5, 1, // HI32
/*3712*/      OPC_EmitNode, TARGET_VAL(SystemZ::MOV64rihi32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2,  // Results = #3 
/*3720*/      OPC_EmitConvertToTarget, 0,
/*3722*/      OPC_EmitNodeXForm, 1, 4, // LO32
/*3725*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::OR64rilo32), 0,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 3, 5, 
              // Src: (imm:i64):$imm - Complexity = 3
              // Dst: (OR64rilo32:i64:i64 (MOV64rihi32:i64 (HI32:i32 (imm:i64):$imm)), (LO32:i32 (imm:i64):$imm))
/*3735*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->3752
/*3739*/    OPC_RecordChild0, // #0 = $src
/*3740*/    OPC_CheckChild0Type, MVT::i32,
/*3742*/    OPC_CheckType, MVT::i64,
/*3744*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (MOVSX64rr32:i64 GR32:i32:$src)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::ZERO_EXTEND),// ->3768
/*3755*/    OPC_RecordChild0, // #0 = $src
/*3756*/    OPC_CheckChild0Type, MVT::i32,
/*3758*/    OPC_CheckType, MVT::i64,
/*3760*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVZX64rr32), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (zext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (MOVZX64rr32:i64 GR32:i32:$src)
          /*SwitchOpcode*/ 81,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3852
/*3771*/    OPC_RecordChild0, // #0 = $src
/*3772*/    OPC_MoveChild, 1,
/*3774*/    OPC_Scope, 25, /*->3801*/ // 3 children in Scope
/*3776*/      OPC_CheckValueType, MVT::i8,
/*3778*/      OPC_MoveParent,
/*3779*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->3790
/*3782*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rr8), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$src, i8:Other) - Complexity = 3
                // Dst: (MOVSX32rr8:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->3800
/*3792*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$src, i8:Other) - Complexity = 3
                // Dst: (MOVSX64rr8:i64 GR64:i64:$src)
              0, // EndSwitchType
/*3801*/    /*Scope*/ 25, /*->3827*/
/*3802*/      OPC_CheckValueType, MVT::i16,
/*3804*/      OPC_MoveParent,
/*3805*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->3816
/*3808*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX32rr16), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GR32:i32:$src, i16:Other) - Complexity = 3
                // Dst: (MOVSX32rr16:i32 GR32:i32:$src)
              /*SwitchType*/ 8,  MVT::i64,// ->3826
/*3818*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr16), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 GR64:i64:$src, i16:Other) - Complexity = 3
                // Dst: (MOVSX64rr16:i64 GR64:i64:$src)
              0, // EndSwitchType
/*3827*/    /*Scope*/ 23, /*->3851*/
/*3828*/      OPC_CheckValueType, MVT::i32,
/*3830*/      OPC_MoveParent,
/*3831*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*3834*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #2 
/*3843*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOVSX64rr32), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
              // Src: (sext_inreg:i64 GR64:i64:$src, i32:Other) - Complexity = 3
              // Dst: (MOVSX64rr32:i64 (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32))
/*3851*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::ADDE),// ->3884
/*3855*/    OPC_CaptureGlueInput,
/*3856*/    OPC_RecordChild0, // #0 = $src1
/*3857*/    OPC_RecordChild1, // #1 = $src2
/*3858*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->3871
/*3861*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADDE32rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (ADDE32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
            /*SwitchType*/ 10,  MVT::i64,// ->3883
/*3873*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADDE64rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (ADDE64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SUBE),// ->3916
/*3887*/    OPC_CaptureGlueInput,
/*3888*/    OPC_RecordChild0, // #0 = $src1
/*3889*/    OPC_RecordChild1, // #1 = $src2
/*3890*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->3903
/*3893*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUBE32rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (SUBE32rr:i32:i64 GR32:i32:$src1, GR32:i32:$src2)
            /*SwitchType*/ 10,  MVT::i64,// ->3915
/*3905*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::SUBE64rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (SUBE64rr:i64:i64 GR64:i64:$src1, GR64:i64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TRUNCATE),// ->3934
/*3919*/    OPC_RecordChild0, // #0 = $src
/*3920*/    OPC_CheckType, MVT::i32,
/*3922*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*3925*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i32 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 GR64:i64:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 57,  TARGET_VAL(ISD::FP_TO_SINT),// ->3994
/*3937*/    OPC_RecordChild0, // #0 = $src
/*3938*/    OPC_Scope, 26, /*->3966*/ // 2 children in Scope
/*3940*/      OPC_CheckChild0Type, MVT::f32,
/*3942*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3954
/*3945*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR32), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i32 FP32:f32:$src) - Complexity = 3
                // Dst: (FCONVGR32:i32:i64 FP32:f32:$src)
              /*SwitchType*/ 9,  MVT::i64,// ->3965
/*3956*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR64r32), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i64 FP32:f32:$src) - Complexity = 3
                // Dst: (FCONVGR64r32:i64:i64 FP32:f32:$src)
              0, // EndSwitchType
/*3966*/    /*Scope*/ 26, /*->3993*/
/*3967*/      OPC_CheckChild0Type, MVT::f64,
/*3969*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3981
/*3972*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR32r64), 0,
                    2/*#VTs*/, MVT::i32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i32 FP64:f64:$src) - Complexity = 3
                // Dst: (FCONVGR32r64:i32:i64 FP64:f64:$src)
              /*SwitchType*/ 9,  MVT::i64,// ->3992
/*3983*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVGR64), 0,
                    2/*#VTs*/, MVT::i64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fp_to_sint:i64 FP64:f64:$src) - Complexity = 3
                // Dst: (FCONVGR64:i64:i64 FP64:f64:$src)
              0, // EndSwitchType
/*3993*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::BITCAST),// ->4024
/*3997*/    OPC_RecordChild0, // #0 = $src
/*3998*/    OPC_SwitchType /*2 cases */, 10,  MVT::i64,// ->4011
/*4001*/      OPC_CheckChild0Type, MVT::f64,
/*4003*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FBCONVG64), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:i64 FP64:f64:$src) - Complexity = 3
              // Dst: (FBCONVG64:i64 FP64:f64:$src)
            /*SwitchType*/ 10,  MVT::f64,// ->4023
/*4013*/      OPC_CheckChild0Type, MVT::i64,
/*4015*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FBCONVF64), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (bitconvert:f64 GR64:i64:$src) - Complexity = 3
              // Dst: (FBCONVF64:f64 GR64:i64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::ANY_EXTEND),// ->4052
/*4027*/    OPC_RecordChild0, // #0 = $src
/*4028*/    OPC_CheckChild0Type, MVT::i32,
/*4030*/    OPC_CheckType, MVT::i64,
/*4032*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::i64, 0/*#Ops*/,  // Results = #1 
/*4039*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4042*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i64 GR32:i32:$src) - Complexity = 3
            // Dst: (INSERT_SUBREG:i64 (IMPLICIT_DEF:i64), GR32:i32:$src, subreg_32bit:i32)
          /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::CTLZ),// ->4079
/*4055*/    OPC_RecordChild0, // #0 = $src
/*4056*/    OPC_CheckType, MVT::i64,
/*4058*/    OPC_EmitNode, TARGET_VAL(SystemZ::FLOGR64), 0,
                2/*#VTs*/, MVT::v2i64, MVT::i64, 1/*#Ops*/, 0,  // Results = #1 #2 
/*4067*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_even,
/*4070*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 3, 
            // Src: (ctlz:i64 GR64:i64:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i64 (FLOGR64:v2i64:i64 GR64:i64:$src), subreg_even:i32)
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::MULHS),// ->4127
/*4082*/    OPC_RecordChild0, // #0 = $src1
/*4083*/    OPC_RecordChild1, // #1 = $src2
/*4084*/    OPC_CheckType, MVT::i32,
/*4086*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                1/*#VTs*/, MVT::v2i32, 0/*#Ops*/,  // Results = #2 
/*4093*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_odd32,
/*4096*/    OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4 
/*4106*/    OPC_EmitNode, TARGET_VAL(SystemZ::MUL64rrP), 0,
                1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 4, 1,  // Results = #5 
/*4115*/    OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4118*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6, 
            // Src: (mulhs:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i32 (MUL64rrP:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), GR32:i32:$src1, subreg_odd32:i32), GR32:i32:$src2), subreg_32bit:i32)
          /*SwitchOpcode*/ 90,  TARGET_VAL(ISD::MULHU),// ->4220
/*4130*/    OPC_RecordChild0, // #0 = $src1
/*4131*/    OPC_RecordChild1, // #1 = $src2
/*4132*/    OPC_SwitchType /*2 cases */, 41,  MVT::i32,// ->4176
/*4135*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v2i32, 0/*#Ops*/,  // Results = #2 
/*4142*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_odd32,
/*4145*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v2i32, 3/*#Ops*/, 2, 0, 3,  // Results = #4 
/*4155*/      OPC_EmitNode, TARGET_VAL(SystemZ::UMUL64rrP), 0,
                  1/*#VTs*/, MVT::v2i32, 2/*#Ops*/, 4, 1,  // Results = #5 
/*4164*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_32bit,
/*4167*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6, 
              // Src: (mulhu:i32 GR32:i32:$src1, GR32:i32:$src2) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i32 (UMUL64rrP:v2i32 (INSERT_SUBREG:v2i32 (IMPLICIT_DEF:v2i32), GR32:i32:$src1, subreg_odd32:i32), GR32:i32:$src2), subreg_32bit:i32)
            /*SwitchType*/ 41,  MVT::i64,// ->4219
/*4178*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::IMPLICIT_DEF), 0,
                  1/*#VTs*/, MVT::v2i64, 0/*#Ops*/,  // Results = #2 
/*4185*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_odd,
/*4188*/      OPC_EmitNode, TARGET_VAL(TargetOpcode::INSERT_SUBREG), 0,
                  1/*#VTs*/, MVT::v2i64, 3/*#Ops*/, 2, 0, 3,  // Results = #4 
/*4198*/      OPC_EmitNode, TARGET_VAL(SystemZ::UMUL128rrP), 0,
                  1/*#VTs*/, MVT::v2i64, 2/*#Ops*/, 4, 1,  // Results = #5 
/*4207*/      OPC_EmitInteger, MVT::i32, SystemZ::subreg_even,
/*4210*/      OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 5, 6, 
              // Src: (mulhu:i64 GR64:i64:$src1, GR64:i64:$src2) - Complexity = 3
              // Dst: (EXTRACT_SUBREG:i64 (UMUL128rrP:v2i64 (INSERT_SUBREG:v2i64 (IMPLICIT_DEF:v2i64), GR64:i64:$src1, subreg_odd:i32), GR64:i64:$src2), subreg_even:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 20|128,4/*532*/,  TARGET_VAL(ISD::FADD),// ->4756
/*4224*/    OPC_Scope, 103, /*->4329*/ // 6 children in Scope
/*4226*/      OPC_MoveChild, 0,
/*4228*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*4231*/      OPC_Scope, 57, /*->4290*/ // 2 children in Scope
/*4233*/        OPC_MoveChild, 0,
/*4235*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4238*/        OPC_RecordMemRef,
/*4239*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4240*/        OPC_CheckFoldableChainNode,
/*4241*/        OPC_RecordChild1, // #1 = $src2
/*4242*/        OPC_CheckChild1Type, MVT::i64,
/*4244*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4246*/        OPC_CheckPredicate, 1, // Predicate_load
/*4248*/        OPC_MoveParent,
/*4249*/        OPC_RecordChild1, // #2 = $src3
/*4250*/        OPC_MoveParent,
/*4251*/        OPC_RecordChild1, // #3 = $src1
/*4252*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->4271
/*4255*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*4258*/          OPC_EmitMergeInputChains1_0,
/*4259*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fadd:f32 (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 22
                  // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->4289
/*4273*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*4276*/          OPC_EmitMergeInputChains1_0,
/*4277*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fadd:f64 (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 22
                  // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*4290*/      /*Scope*/ 37, /*->4328*/
/*4291*/        OPC_RecordChild0, // #0 = $src3
/*4292*/        OPC_MoveChild, 1,
/*4294*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4297*/        OPC_RecordMemRef,
/*4298*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4299*/        OPC_CheckFoldableChainNode,
/*4300*/        OPC_RecordChild1, // #2 = $src2
/*4301*/        OPC_CheckChild1Type, MVT::i64,
/*4303*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4305*/        OPC_CheckPredicate, 1, // Predicate_load
/*4307*/        OPC_MoveParent,
/*4308*/        OPC_MoveParent,
/*4309*/        OPC_RecordChild1, // #3 = $src1
/*4310*/        OPC_CheckType, MVT::f32,
/*4312*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*4315*/        OPC_EmitMergeInputChains1_1,
/*4316*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 0, 
                // Src: (fadd:f32 (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP32:f32:$src1) - Complexity = 22
                // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
/*4328*/      0, /*End of Scope*/
/*4329*/    /*Scope*/ 84, /*->4414*/
/*4330*/      OPC_RecordChild0, // #0 = $src1
/*4331*/      OPC_MoveChild, 1,
/*4333*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*4336*/      OPC_Scope, 36, /*->4374*/ // 2 children in Scope
/*4338*/        OPC_MoveChild, 0,
/*4340*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4343*/        OPC_RecordMemRef,
/*4344*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4345*/        OPC_CheckFoldableChainNode,
/*4346*/        OPC_RecordChild1, // #2 = $src2
/*4347*/        OPC_CheckChild1Type, MVT::i64,
/*4349*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4351*/        OPC_CheckPredicate, 1, // Predicate_load
/*4353*/        OPC_MoveParent,
/*4354*/        OPC_RecordChild1, // #3 = $src3
/*4355*/        OPC_MoveParent,
/*4356*/        OPC_CheckType, MVT::f32,
/*4358*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*4361*/        OPC_EmitMergeInputChains1_1,
/*4362*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 5/*#Ops*/, 0, 4, 5, 6, 3, 
                // Src: (fadd:f32 FP32:f32:$src1, (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3)) - Complexity = 22
                // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
/*4374*/      /*Scope*/ 38, /*->4413*/
/*4375*/        OPC_RecordChild0, // #1 = $src3
/*4376*/        OPC_MoveChild, 1,
/*4378*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4381*/        OPC_RecordMemRef,
/*4382*/        OPC_RecordNode, // #2 = 'ld' chained node
/*4383*/        OPC_CheckFoldableChainNode,
/*4384*/        OPC_RecordChild1, // #3 = $src2
/*4385*/        OPC_CheckChild1Type, MVT::i64,
/*4387*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4389*/        OPC_CheckPredicate, 1, // Predicate_load
/*4391*/        OPC_MoveParent,
/*4392*/        OPC_MoveParent,
/*4393*/        OPC_CheckType, MVT::f32,
/*4395*/        OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddrRRI12:$src2 #4 #5 #6
/*4398*/        OPC_EmitMergeInputChains, 1, 2, 
/*4401*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 5/*#Ops*/, 0, 4, 5, 6, 1, 
                // Src: (fadd:f32 FP32:f32:$src1, (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)) - Complexity = 22
                // Dst: (FMADD32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
/*4413*/      0, /*End of Scope*/
/*4414*/    /*Scope*/ 42, /*->4457*/
/*4415*/      OPC_MoveChild, 0,
/*4417*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*4420*/      OPC_RecordChild0, // #0 = $src3
/*4421*/      OPC_MoveChild, 1,
/*4423*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4426*/      OPC_RecordMemRef,
/*4427*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4428*/      OPC_CheckFoldableChainNode,
/*4429*/      OPC_RecordChild1, // #2 = $src2
/*4430*/      OPC_CheckChild1Type, MVT::i64,
/*4432*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4434*/      OPC_CheckPredicate, 1, // Predicate_load
/*4436*/      OPC_MoveParent,
/*4437*/      OPC_MoveParent,
/*4438*/      OPC_RecordChild1, // #3 = $src1
/*4439*/      OPC_CheckType, MVT::f64,
/*4441*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*4444*/      OPC_EmitMergeInputChains1_1,
/*4445*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 0, 
              // Src: (fadd:f64 (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP64:f64:$src1) - Complexity = 22
              // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
/*4457*/    /*Scope*/ 10|128,1/*138*/, /*->4597*/
/*4459*/      OPC_RecordChild0, // #0 = $src1
/*4460*/      OPC_MoveChild, 1,
/*4462*/      OPC_SwitchOpcode /*2 cases */, 78,  TARGET_VAL(ISD::FMUL),// ->4544
/*4466*/        OPC_Scope, 36, /*->4504*/ // 2 children in Scope
/*4468*/          OPC_MoveChild, 0,
/*4470*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4473*/          OPC_RecordMemRef,
/*4474*/          OPC_RecordNode, // #1 = 'ld' chained node
/*4475*/          OPC_CheckFoldableChainNode,
/*4476*/          OPC_RecordChild1, // #2 = $src2
/*4477*/          OPC_CheckChild1Type, MVT::i64,
/*4479*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4481*/          OPC_CheckPredicate, 1, // Predicate_load
/*4483*/          OPC_MoveParent,
/*4484*/          OPC_RecordChild1, // #3 = $src3
/*4485*/          OPC_MoveParent,
/*4486*/          OPC_CheckType, MVT::f64,
/*4488*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*4491*/          OPC_EmitMergeInputChains1_1,
/*4492*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 0, 4, 5, 6, 3, 
                  // Src: (fadd:f64 FP64:f64:$src1, (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3)) - Complexity = 22
                  // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
/*4504*/        /*Scope*/ 38, /*->4543*/
/*4505*/          OPC_RecordChild0, // #1 = $src3
/*4506*/          OPC_MoveChild, 1,
/*4508*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4511*/          OPC_RecordMemRef,
/*4512*/          OPC_RecordNode, // #2 = 'ld' chained node
/*4513*/          OPC_CheckFoldableChainNode,
/*4514*/          OPC_RecordChild1, // #3 = $src2
/*4515*/          OPC_CheckChild1Type, MVT::i64,
/*4517*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4519*/          OPC_CheckPredicate, 1, // Predicate_load
/*4521*/          OPC_MoveParent,
/*4522*/          OPC_MoveParent,
/*4523*/          OPC_CheckType, MVT::f64,
/*4525*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddrRRI12:$src2 #4 #5 #6
/*4528*/          OPC_EmitMergeInputChains, 1, 2, 
/*4531*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 0, 4, 5, 6, 1, 
                  // Src: (fadd:f64 FP64:f64:$src1, (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)) - Complexity = 22
                  // Dst: (FMADD64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
/*4543*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 49,  TARGET_VAL(ISD::LOAD),// ->4596
/*4547*/        OPC_RecordMemRef,
/*4548*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4549*/        OPC_CheckFoldableChainNode,
/*4550*/        OPC_RecordChild1, // #2 = $src2
/*4551*/        OPC_CheckChild1Type, MVT::i64,
/*4553*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4555*/        OPC_CheckPredicate, 1, // Predicate_load
/*4557*/        OPC_MoveParent,
/*4558*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->4577
/*4561*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*4564*/          OPC_EmitMergeInputChains1_1,
/*4565*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fadd:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (FADD32rm:f32:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
                /*SwitchType*/ 16,  MVT::f64,// ->4595
/*4579*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*4582*/          OPC_EmitMergeInputChains1_1,
/*4583*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                  // Src: (fadd:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                  // Dst: (FADD64rm:f64:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*4597*/    /*Scope*/ 90, /*->4688*/
/*4598*/      OPC_MoveChild, 0,
/*4600*/      OPC_SwitchOpcode /*2 cases */, 50,  TARGET_VAL(ISD::LOAD),// ->4654
/*4604*/        OPC_RecordMemRef,
/*4605*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4606*/        OPC_CheckFoldableChainNode,
/*4607*/        OPC_RecordChild1, // #1 = $src2
/*4608*/        OPC_CheckChild1Type, MVT::i64,
/*4610*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4612*/        OPC_CheckPredicate, 1, // Predicate_load
/*4614*/        OPC_MoveParent,
/*4615*/        OPC_RecordChild1, // #2 = $src1
/*4616*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->4635
/*4619*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*4622*/          OPC_EmitMergeInputChains1_0,
/*4623*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f32, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fadd:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1) - Complexity = 19
                  // Dst: (FADD32rm:f32:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
                /*SwitchType*/ 16,  MVT::f64,// ->4653
/*4637*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*4640*/          OPC_EmitMergeInputChains1_0,
/*4641*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      2/*#VTs*/, MVT::f64, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                  // Src: (fadd:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1) - Complexity = 19
                  // Dst: (FADD64rm:f64:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::FMUL),// ->4687
/*4657*/        OPC_RecordChild0, // #0 = $src2
/*4658*/        OPC_RecordChild1, // #1 = $src3
/*4659*/        OPC_MoveParent,
/*4660*/        OPC_RecordChild1, // #2 = $src1
/*4661*/        OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->4674
/*4664*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rr), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f32 (fmul:f32 FP32:f32:$src2, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 6
                  // Dst: (FMADD32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
                /*SwitchType*/ 10,  MVT::f64,// ->4686
/*4676*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rr), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                  // Src: (fadd:f64 (fmul:f64 FP64:f64:$src2, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 6
                  // Dst: (FMADD64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*4688*/    /*Scope*/ 66, /*->4755*/
/*4689*/      OPC_RecordChild0, // #0 = $src1
/*4690*/      OPC_Scope, 34, /*->4726*/ // 2 children in Scope
/*4692*/        OPC_MoveChild, 1,
/*4694*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*4697*/        OPC_RecordChild0, // #1 = $src2
/*4698*/        OPC_RecordChild1, // #2 = $src3
/*4699*/        OPC_MoveParent,
/*4700*/        OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->4713
/*4703*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD32rr), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f32 FP32:f32:$src1, (fmul:f32 FP32:f32:$src2, FP32:f32:$src3)) - Complexity = 6
                  // Dst: (FMADD32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
                /*SwitchType*/ 10,  MVT::f64,// ->4725
/*4715*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMADD64rr), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fadd:f64 FP64:f64:$src1, (fmul:f64 FP64:f64:$src2, FP64:f64:$src3)) - Complexity = 6
                  // Dst: (FMADD64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*4726*/      /*Scope*/ 27, /*->4754*/
/*4727*/        OPC_RecordChild1, // #1 = $src2
/*4728*/        OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->4741
/*4731*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD32rr), 0,
                      2/*#VTs*/, MVT::f32, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                  // Dst: (FADD32rr:f32:i64 FP32:f32:$src1, FP32:f32:$src2)
                /*SwitchType*/ 10,  MVT::f64,// ->4753
/*4743*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FADD64rr), 0,
                      2/*#VTs*/, MVT::f64, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                  // Dst: (FADD64rr:f64:i64 FP64:f64:$src1, FP64:f64:$src2)
                0, // EndSwitchType
/*4754*/      0, /*End of Scope*/
/*4755*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 119|128,1/*247*/,  TARGET_VAL(ISD::FSUB),// ->5007
/*4760*/    OPC_Scope, 123, /*->4885*/ // 4 children in Scope
/*4762*/      OPC_MoveChild, 0,
/*4764*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*4767*/      OPC_Scope, 57, /*->4826*/ // 2 children in Scope
/*4769*/        OPC_MoveChild, 0,
/*4771*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4774*/        OPC_RecordMemRef,
/*4775*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4776*/        OPC_CheckFoldableChainNode,
/*4777*/        OPC_RecordChild1, // #1 = $src2
/*4778*/        OPC_CheckChild1Type, MVT::i64,
/*4780*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4782*/        OPC_CheckPredicate, 1, // Predicate_load
/*4784*/        OPC_MoveParent,
/*4785*/        OPC_RecordChild1, // #2 = $src3
/*4786*/        OPC_MoveParent,
/*4787*/        OPC_RecordChild1, // #3 = $src1
/*4788*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->4807
/*4791*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*4794*/          OPC_EmitMergeInputChains1_0,
/*4795*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fsub:f32 (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 22
                  // Dst: (FMSUB32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->4825
/*4809*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #4 #5 #6
/*4812*/          OPC_EmitMergeInputChains1_0,
/*4813*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 2, 
                  // Src: (fsub:f64 (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 22
                  // Dst: (FMSUB64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*4826*/      /*Scope*/ 57, /*->4884*/
/*4827*/        OPC_RecordChild0, // #0 = $src3
/*4828*/        OPC_MoveChild, 1,
/*4830*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4833*/        OPC_RecordMemRef,
/*4834*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4835*/        OPC_CheckFoldableChainNode,
/*4836*/        OPC_RecordChild1, // #2 = $src2
/*4837*/        OPC_CheckChild1Type, MVT::i64,
/*4839*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4841*/        OPC_CheckPredicate, 1, // Predicate_load
/*4843*/        OPC_MoveParent,
/*4844*/        OPC_MoveParent,
/*4845*/        OPC_RecordChild1, // #3 = $src1
/*4846*/        OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->4865
/*4849*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*4852*/          OPC_EmitMergeInputChains1_1,
/*4853*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 5/*#Ops*/, 3, 4, 5, 6, 0, 
                  // Src: (fsub:f32 (fmul:f32 FP32:f32:$src3, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP32:f32:$src1) - Complexity = 22
                  // Dst: (FMSUB32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2, FP32:f32:$src3)
                /*SwitchType*/ 16,  MVT::f64,// ->4883
/*4867*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #4 #5 #6
/*4870*/          OPC_EmitMergeInputChains1_1,
/*4871*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 5/*#Ops*/, 3, 4, 5, 6, 0, 
                  // Src: (fsub:f64 (fmul:f64 FP64:f64:$src3, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>), FP64:f64:$src1) - Complexity = 22
                  // Dst: (FMSUB64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2, FP64:f64:$src3)
                0, // EndSwitchType
/*4884*/      0, /*End of Scope*/
/*4885*/    /*Scope*/ 55, /*->4941*/
/*4886*/      OPC_RecordChild0, // #0 = $src1
/*4887*/      OPC_MoveChild, 1,
/*4889*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4892*/      OPC_RecordMemRef,
/*4893*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4894*/      OPC_CheckFoldableChainNode,
/*4895*/      OPC_RecordChild1, // #2 = $src2
/*4896*/      OPC_CheckChild1Type, MVT::i64,
/*4898*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4900*/      OPC_CheckPredicate, 1, // Predicate_load
/*4902*/      OPC_MoveParent,
/*4903*/      OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->4922
/*4906*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*4909*/        OPC_EmitMergeInputChains1_1,
/*4910*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f32, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSUB32rm:f32:i64 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 16,  MVT::f64,// ->4940
/*4924*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*4927*/        OPC_EmitMergeInputChains1_1,
/*4928*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::f64, MVT::i64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fsub:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSUB64rm:f64:i64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*4941*/    /*Scope*/ 35, /*->4977*/
/*4942*/      OPC_MoveChild, 0,
/*4944*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*4947*/      OPC_RecordChild0, // #0 = $src2
/*4948*/      OPC_RecordChild1, // #1 = $src3
/*4949*/      OPC_MoveParent,
/*4950*/      OPC_RecordChild1, // #2 = $src1
/*4951*/      OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->4964
/*4954*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB32rr), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fsub:f32 (fmul:f32 FP32:f32:$src2, FP32:f32:$src3), FP32:f32:$src1) - Complexity = 6
                // Dst: (FMSUB32rr:f32 FP32:f32:$src1, FP32:f32:$src2, FP32:f32:$src3)
              /*SwitchType*/ 10,  MVT::f64,// ->4976
/*4966*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMSUB64rr), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 0, 1, 
                // Src: (fsub:f64 (fmul:f64 FP64:f64:$src2, FP64:f64:$src3), FP64:f64:$src1) - Complexity = 6
                // Dst: (FMSUB64rr:f64 FP64:f64:$src1, FP64:f64:$src2, FP64:f64:$src3)
              0, // EndSwitchType
/*4977*/    /*Scope*/ 28, /*->5006*/
/*4978*/      OPC_RecordChild0, // #0 = $src1
/*4979*/      OPC_RecordChild1, // #1 = $src2
/*4980*/      OPC_SwitchType /*2 cases */, 10,  MVT::f32,// ->4993
/*4983*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FSUB32rr:f32:i64 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 10,  MVT::f64,// ->5005
/*4995*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSUB64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (fsub:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FSUB64rr:f64:i64 FP64:f64:$src1, FP64:f64:$src2)
              0, // EndSwitchType
/*5006*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 30|128,5/*670*/,  TARGET_VAL(ISD::STORE),// ->5681
/*5011*/    OPC_RecordMemRef,
/*5012*/    OPC_RecordNode,   // #0 = 'st' chained node
/*5013*/    OPC_Scope, 108, /*->5123*/ // 3 children in Scope
/*5015*/      OPC_RecordChild1, // #1 = $src
/*5016*/      OPC_MoveChild, 1,
/*5018*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5021*/      OPC_Scope, 34, /*->5057*/ // 2 children in Scope
/*5023*/        OPC_CheckPredicate, 21, // Predicate_i32immSExt16
/*5025*/        OPC_CheckType, MVT::i32,
/*5027*/        OPC_MoveParent,
/*5028*/        OPC_RecordChild2, // #2 = $dst
/*5029*/        OPC_CheckChild2Type, MVT::i64,
/*5031*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5033*/        OPC_CheckPredicate, 36, // Predicate_truncstore
/*5035*/        OPC_CheckPredicate, 37, // Predicate_truncstorei16
/*5037*/        OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*5039*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*5042*/        OPC_EmitMergeInputChains1_0,
/*5043*/        OPC_EmitConvertToTarget, 1,
/*5045*/        OPC_EmitNodeXForm, 0, 5, // LL16
/*5048*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (st (imm:i32)<<P:Predicate_i32immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 19
                // Dst: (MOV16mi riaddr12:i64:$dst, (LL16:i32 (imm:i32):$src))
/*5057*/      /*Scope*/ 64, /*->5122*/
/*5058*/        OPC_CheckPredicate, 2, // Predicate_immSExt16
/*5060*/        OPC_SwitchType /*2 cases */, 28,  MVT::i32,// ->5091
/*5063*/          OPC_MoveParent,
/*5064*/          OPC_RecordChild2, // #2 = $dst
/*5065*/          OPC_CheckChild2Type, MVT::i64,
/*5067*/          OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5069*/          OPC_CheckPredicate, 38, // Predicate_store
/*5071*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*5073*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*5076*/          OPC_EmitMergeInputChains1_0,
/*5077*/          OPC_EmitConvertToTarget, 1,
/*5079*/          OPC_EmitNodeXForm, 0, 5, // LL16
/*5082*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32mi16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i32)<<P:Predicate_immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (MOV32mi16 riaddr12:i64:$dst, (LL16:i32 (imm:i32):$src))
                /*SwitchType*/ 28,  MVT::i64,// ->5121
/*5093*/          OPC_MoveParent,
/*5094*/          OPC_RecordChild2, // #2 = $dst
/*5095*/          OPC_CheckChild2Type, MVT::i64,
/*5097*/          OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5099*/          OPC_CheckPredicate, 38, // Predicate_store
/*5101*/          OPC_CheckPatternPredicate, 0, // (Subtarget.isZ10())
/*5103*/          OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*5106*/          OPC_EmitMergeInputChains1_0,
/*5107*/          OPC_EmitConvertToTarget, 1,
/*5109*/          OPC_EmitNodeXForm, 0, 5, // LL16
/*5112*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64mi16), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                  // Src: (st (imm:i64)<<P:Predicate_immSExt16>><<X:LL16>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (MOV64mi16 riaddr12:i64:$dst, (LL16:i64 (imm:i64):$src))
                0, // EndSwitchType
/*5122*/      0, /*End of Scope*/
/*5123*/    /*Scope*/ 56, /*->5180*/
/*5124*/      OPC_MoveChild, 1,
/*5126*/      OPC_CheckOpcode, TARGET_VAL(ISD::BSWAP),
/*5129*/      OPC_RecordChild0, // #1 = $src
/*5130*/      OPC_SwitchType /*2 cases */, 22,  MVT::i32,// ->5155
/*5133*/        OPC_MoveParent,
/*5134*/        OPC_RecordChild2, // #2 = $dst
/*5135*/        OPC_CheckChild2Type, MVT::i64,
/*5137*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5139*/        OPC_CheckPredicate, 38, // Predicate_store
/*5141*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5144*/        OPC_EmitMergeInputChains1_0,
/*5145*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP32mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st (bswap:i32 GR32:i32:$src), rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                // Dst: (BSWAP32mr rriaddr:i64:$dst, GR32:i32:$src)
              /*SwitchType*/ 22,  MVT::i64,// ->5179
/*5157*/        OPC_MoveParent,
/*5158*/        OPC_RecordChild2, // #2 = $dst
/*5159*/        OPC_CheckChild2Type, MVT::i64,
/*5161*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5163*/        OPC_CheckPredicate, 38, // Predicate_store
/*5165*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5168*/        OPC_EmitMergeInputChains1_0,
/*5169*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::BSWAP64mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st (bswap:i64 GR64:i64:$src), rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                // Dst: (BSWAP64mr rriaddr:i64:$dst, GR64:i64:$src)
              0, // EndSwitchType
/*5180*/    /*Scope*/ 114|128,3/*498*/, /*->5680*/
/*5182*/      OPC_RecordChild1, // #1 = $src
/*5183*/      OPC_Scope, 37, /*->5222*/ // 9 children in Scope
/*5185*/        OPC_MoveChild, 1,
/*5187*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5190*/        OPC_CheckPredicate, 39, // Predicate_i32immSExt8
/*5192*/        OPC_CheckType, MVT::i32,
/*5194*/        OPC_MoveParent,
/*5195*/        OPC_RecordChild2, // #2 = $dst
/*5196*/        OPC_CheckChild2Type, MVT::i64,
/*5198*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5200*/        OPC_CheckPredicate, 36, // Predicate_truncstore
/*5202*/        OPC_CheckPredicate, 40, // Predicate_truncstorei8
/*5204*/        OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectAddrRI12:$dst #3 #4
/*5207*/        OPC_EmitMergeInputChains1_0,
/*5208*/        OPC_EmitConvertToTarget, 1,
/*5210*/        OPC_EmitNodeXForm, 7, 5, // LO8
/*5213*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV8mi), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (st (imm:i32)<<P:Predicate_i32immSExt8>><<X:LO8>>:$src, riaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 18
                // Dst: (MOV8mi riaddr12:i64:$dst, (LO8:i32 (imm:i32):$src))
/*5222*/      /*Scope*/ 23, /*->5246*/
/*5223*/        OPC_CheckChild1Type, MVT::i32,
/*5225*/        OPC_RecordChild2, // #2 = $dst
/*5226*/        OPC_CheckChild2Type, MVT::i64,
/*5228*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5230*/        OPC_CheckPredicate, 38, // Predicate_store
/*5232*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5235*/        OPC_EmitMergeInputChains1_0,
/*5236*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 17
                // Dst: (MOV32mr rriaddr12:i64:$dst, GR32:i32:$src)
/*5246*/      /*Scope*/ 37, /*->5284*/
/*5247*/        OPC_MoveChild, 1,
/*5249*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5252*/        OPC_CheckPredicate, 39, // Predicate_i32immSExt8
/*5254*/        OPC_CheckType, MVT::i32,
/*5256*/        OPC_MoveParent,
/*5257*/        OPC_RecordChild2, // #2 = $dst
/*5258*/        OPC_CheckChild2Type, MVT::i64,
/*5260*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5262*/        OPC_CheckPredicate, 36, // Predicate_truncstore
/*5264*/        OPC_CheckPredicate, 40, // Predicate_truncstorei8
/*5266*/        OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectAddrRI:$dst #3 #4
/*5269*/        OPC_EmitMergeInputChains1_0,
/*5270*/        OPC_EmitConvertToTarget, 1,
/*5272*/        OPC_EmitNodeXForm, 7, 5, // LO8
/*5275*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV8miy), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 6, 
                // Src: (st (imm:i32)<<P:Predicate_i32immSExt8>><<X:LO8>>:$src, riaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 17
                // Dst: (MOV8miy riaddr:i64:$dst, (LO8:i32 (imm:i32):$src))
/*5284*/      /*Scope*/ 104, /*->5389*/
/*5285*/        OPC_CheckChild1Type, MVT::i32,
/*5287*/        OPC_RecordChild2, // #2 = $dst
/*5288*/        OPC_CheckChild2Type, MVT::i64,
/*5290*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5292*/        OPC_Scope, 38, /*->5332*/ // 3 children in Scope
/*5294*/          OPC_CheckPredicate, 36, // Predicate_truncstore
/*5296*/          OPC_Scope, 16, /*->5314*/ // 2 children in Scope
/*5298*/            OPC_CheckPredicate, 40, // Predicate_truncstorei8
/*5300*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5303*/            OPC_EmitMergeInputChains1_0,
/*5304*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m8r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 17
                    // Dst: (MOV32m8r rriaddr12:i64:$dst, GR32:i32:$src)
/*5314*/          /*Scope*/ 16, /*->5331*/
/*5315*/            OPC_CheckPredicate, 37, // Predicate_truncstorei16
/*5317*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5320*/            OPC_EmitMergeInputChains1_0,
/*5321*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m16r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 17
                    // Dst: (MOV32m16r rriaddr12:i64:$dst, GR32:i32:$src)
/*5331*/          0, /*End of Scope*/
/*5332*/        /*Scope*/ 16, /*->5349*/
/*5333*/          OPC_CheckPredicate, 38, // Predicate_store
/*5335*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5338*/          OPC_EmitMergeInputChains1_0,
/*5339*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32mry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV32mry rriaddr:i64:$dst, GR32:i32:$src)
/*5349*/        /*Scope*/ 38, /*->5388*/
/*5350*/          OPC_CheckPredicate, 36, // Predicate_truncstore
/*5352*/          OPC_Scope, 16, /*->5370*/ // 2 children in Scope
/*5354*/            OPC_CheckPredicate, 40, // Predicate_truncstorei8
/*5356*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5359*/            OPC_EmitMergeInputChains1_0,
/*5360*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m8ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MOV32m8ry rriaddr:i64:$dst, GR32:i32:$src)
/*5370*/          /*Scope*/ 16, /*->5387*/
/*5371*/            OPC_CheckPredicate, 37, // Predicate_truncstorei16
/*5373*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5376*/            OPC_EmitMergeInputChains1_0,
/*5377*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV32m16ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR32:i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (MOV32m16ry rriaddr:i64:$dst, GR32:i32:$src)
/*5387*/          0, /*End of Scope*/
/*5388*/        0, /*End of Scope*/
/*5389*/      /*Scope*/ 10|128,1/*138*/, /*->5529*/
/*5391*/        OPC_CheckChild1Type, MVT::i64,
/*5393*/        OPC_RecordChild2, // #2 = $dst
/*5394*/        OPC_CheckChild2Type, MVT::i64,
/*5396*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5398*/        OPC_Scope, 55, /*->5455*/ // 3 children in Scope
/*5400*/          OPC_CheckPredicate, 36, // Predicate_truncstore
/*5402*/          OPC_Scope, 16, /*->5420*/ // 3 children in Scope
/*5404*/            OPC_CheckPredicate, 40, // Predicate_truncstorei8
/*5406*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5409*/            OPC_EmitMergeInputChains1_0,
/*5410*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m8r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 17
                    // Dst: (MOV64m8r rriaddr12:i64:$dst, GR64:i64:$src)
/*5420*/          /*Scope*/ 16, /*->5437*/
/*5421*/            OPC_CheckPredicate, 37, // Predicate_truncstorei16
/*5423*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5426*/            OPC_EmitMergeInputChains1_0,
/*5427*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m16r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 17
                    // Dst: (MOV64m16r rriaddr12:i64:$dst, GR64:i64:$src)
/*5437*/          /*Scope*/ 16, /*->5454*/
/*5438*/            OPC_CheckPredicate, 41, // Predicate_truncstorei32
/*5440*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5443*/            OPC_EmitMergeInputChains1_0,
/*5444*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m32r), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 17
                    // Dst: (MOV64m32r rriaddr12:i64:$dst, GR64:i64:$src)
/*5454*/          0, /*End of Scope*/
/*5455*/        /*Scope*/ 16, /*->5472*/
/*5456*/          OPC_CheckPredicate, 38, // Predicate_store
/*5458*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5461*/          OPC_EmitMergeInputChains1_0,
/*5462*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64mr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV64mr rriaddr:i64:$dst, GR64:i64:$src)
/*5472*/        /*Scope*/ 55, /*->5528*/
/*5473*/          OPC_CheckPredicate, 36, // Predicate_truncstore
/*5475*/          OPC_Scope, 16, /*->5493*/ // 3 children in Scope
/*5477*/            OPC_CheckPredicate, 40, // Predicate_truncstorei8
/*5479*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5482*/            OPC_EmitMergeInputChains1_0,
/*5483*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m8ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 16
                    // Dst: (MOV64m8ry rriaddr:i64:$dst, GR64:i64:$src)
/*5493*/          /*Scope*/ 16, /*->5510*/
/*5494*/            OPC_CheckPredicate, 37, // Predicate_truncstorei16
/*5496*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5499*/            OPC_EmitMergeInputChains1_0,
/*5500*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m16ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 16
                    // Dst: (MOV64m16ry rriaddr:i64:$dst, GR64:i64:$src)
/*5510*/          /*Scope*/ 16, /*->5527*/
/*5511*/            OPC_CheckPredicate, 41, // Predicate_truncstorei32
/*5513*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5516*/            OPC_EmitMergeInputChains1_0,
/*5517*/            OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64m32ry), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                    // Src: (st GR64:i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 16
                    // Dst: (MOV64m32ry rriaddr:i64:$dst, GR64:i64:$src)
/*5527*/          0, /*End of Scope*/
/*5528*/        0, /*End of Scope*/
/*5529*/      /*Scope*/ 41, /*->5571*/
/*5530*/        OPC_CheckChild1Type, MVT::v2i32,
/*5532*/        OPC_RecordChild2, // #2 = $dst
/*5533*/        OPC_CheckChild2Type, MVT::i64,
/*5535*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5537*/        OPC_CheckPredicate, 38, // Predicate_store
/*5539*/        OPC_Scope, 14, /*->5555*/ // 2 children in Scope
/*5541*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5544*/          OPC_EmitMergeInputChains1_0,
/*5545*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Pmr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR64P:v2i32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV64Pmr rriaddr12:i64:$dst, GR64P:v2i32:$src)
/*5555*/        /*Scope*/ 14, /*->5570*/
/*5556*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5559*/          OPC_EmitMergeInputChains1_0,
/*5560*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV64Pmry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st GR64P:v2i32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV64Pmry rriaddr:i64:$dst, GR64P:v2i32:$src)
/*5570*/        0, /*End of Scope*/
/*5571*/      /*Scope*/ 23, /*->5595*/
/*5572*/        OPC_CheckChild1Type, MVT::v2i64,
/*5574*/        OPC_RecordChild2, // #2 = $dst
/*5575*/        OPC_CheckChild2Type, MVT::i64,
/*5577*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5579*/        OPC_CheckPredicate, 38, // Predicate_store
/*5581*/        OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5584*/        OPC_EmitMergeInputChains1_0,
/*5585*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::MOV128mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                // Src: (st GR128:v2i64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                // Dst: (MOV128mr rriaddr:i64:$dst, GR128:v2i64:$src)
/*5595*/      /*Scope*/ 41, /*->5637*/
/*5596*/        OPC_CheckChild1Type, MVT::f32,
/*5598*/        OPC_RecordChild2, // #2 = $dst
/*5599*/        OPC_CheckChild2Type, MVT::i64,
/*5601*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5603*/        OPC_CheckPredicate, 38, // Predicate_store
/*5605*/        OPC_Scope, 14, /*->5621*/ // 2 children in Scope
/*5607*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5610*/          OPC_EmitMergeInputChains1_0,
/*5611*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32mr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP32:f32:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV32mr rriaddr12:i64:$dst, FP32:f32:$src)
/*5621*/        /*Scope*/ 14, /*->5636*/
/*5622*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5625*/          OPC_EmitMergeInputChains1_0,
/*5626*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV32mry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP32:f32:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV32mry rriaddr:i64:$dst, FP32:f32:$src)
/*5636*/        0, /*End of Scope*/
/*5637*/      /*Scope*/ 41, /*->5679*/
/*5638*/        OPC_CheckChild1Type, MVT::f64,
/*5640*/        OPC_RecordChild2, // #2 = $dst
/*5641*/        OPC_CheckChild2Type, MVT::i64,
/*5643*/        OPC_CheckPredicate, 35, // Predicate_unindexedstore
/*5645*/        OPC_CheckPredicate, 38, // Predicate_store
/*5647*/        OPC_Scope, 14, /*->5663*/ // 2 children in Scope
/*5649*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$dst #3 #4 #5
/*5652*/          OPC_EmitMergeInputChains1_0,
/*5653*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64mr), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP64:f64:$src, rriaddr12:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV64mr rriaddr12:i64:$dst, FP64:f64:$src)
/*5663*/        /*Scope*/ 14, /*->5678*/
/*5664*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRRI20:$dst #3 #4 #5
/*5667*/          OPC_EmitMergeInputChains1_0,
/*5668*/          OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMOV64mry), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 3, 4, 5, 1, 
                  // Src: (st FP64:f64:$src, rriaddr:i64:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (FMOV64mry rriaddr:i64:$dst, FP64:f64:$src)
/*5678*/        0, /*End of Scope*/
/*5679*/      0, /*End of Scope*/
/*5680*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,1/*137*/,  TARGET_VAL(ISD::FMUL),// ->5822
/*5685*/    OPC_Scope, 53, /*->5740*/ // 3 children in Scope
/*5687*/      OPC_RecordChild0, // #0 = $src1
/*5688*/      OPC_MoveChild, 1,
/*5690*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5693*/      OPC_RecordMemRef,
/*5694*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5695*/      OPC_CheckFoldableChainNode,
/*5696*/      OPC_RecordChild1, // #2 = $src2
/*5697*/      OPC_CheckChild1Type, MVT::i64,
/*5699*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5701*/      OPC_CheckPredicate, 1, // Predicate_load
/*5703*/      OPC_MoveParent,
/*5704*/      OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->5722
/*5707*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5710*/        OPC_EmitMergeInputChains1_1,
/*5711*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FMUL32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->5739
/*5724*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5727*/        OPC_EmitMergeInputChains1_1,
/*5728*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fmul:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FMUL64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*5740*/    /*Scope*/ 53, /*->5794*/
/*5741*/      OPC_MoveChild, 0,
/*5743*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5746*/      OPC_RecordMemRef,
/*5747*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5748*/      OPC_CheckFoldableChainNode,
/*5749*/      OPC_RecordChild1, // #1 = $src2
/*5750*/      OPC_CheckChild1Type, MVT::i64,
/*5752*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5754*/      OPC_CheckPredicate, 1, // Predicate_load
/*5756*/      OPC_MoveParent,
/*5757*/      OPC_RecordChild1, // #2 = $src1
/*5758*/      OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->5776
/*5761*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*5764*/        OPC_EmitMergeInputChains1_0,
/*5765*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fmul:f32 (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP32:f32:$src1) - Complexity = 19
                // Dst: (FMUL32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->5793
/*5778*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src2 #3 #4 #5
/*5781*/        OPC_EmitMergeInputChains1_0,
/*5782*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                // Src: (fmul:f64 (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, FP64:f64:$src1) - Complexity = 19
                // Dst: (FMUL64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*5794*/    /*Scope*/ 26, /*->5821*/
/*5795*/      OPC_RecordChild0, // #0 = $src1
/*5796*/      OPC_RecordChild1, // #1 = $src2
/*5797*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->5809
/*5800*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL32rr), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FMUL32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->5820
/*5811*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FMUL64rr), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fmul:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FMUL64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
              0, // EndSwitchType
/*5821*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::FDIV),// ->5907
/*5825*/    OPC_RecordChild0, // #0 = $src1
/*5826*/    OPC_Scope, 52, /*->5880*/ // 2 children in Scope
/*5828*/      OPC_MoveChild, 1,
/*5830*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5833*/      OPC_RecordMemRef,
/*5834*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5835*/      OPC_CheckFoldableChainNode,
/*5836*/      OPC_RecordChild1, // #2 = $src2
/*5837*/      OPC_CheckChild1Type, MVT::i64,
/*5839*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5841*/      OPC_CheckPredicate, 1, // Predicate_load
/*5843*/      OPC_MoveParent,
/*5844*/      OPC_SwitchType /*2 cases */, 15,  MVT::f32,// ->5862
/*5847*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5850*/        OPC_EmitMergeInputChains1_1,
/*5851*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f32 FP32:f32:$src1, (ld:f32 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FDIV32rm:f32 FP32:f32:$src1, rriaddr12:i64:$src2)
              /*SwitchType*/ 15,  MVT::f64,// ->5879
/*5864*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRRI12:$src2 #3 #4 #5
/*5867*/        OPC_EmitMergeInputChains1_1,
/*5868*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (fdiv:f64 FP64:f64:$src1, (ld:f64 rriaddr12:i64:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FDIV64rm:f64 FP64:f64:$src1, rriaddr12:i64:$src2)
              0, // EndSwitchType
/*5880*/    /*Scope*/ 25, /*->5906*/
/*5881*/      OPC_RecordChild1, // #1 = $src2
/*5882*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->5894
/*5885*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV32rr), 0,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
                // Dst: (FDIV32rr:f32 FP32:f32:$src1, FP32:f32:$src2)
              /*SwitchType*/ 9,  MVT::f64,// ->5905
/*5896*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FDIV64rr), 0,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                // Src: (fdiv:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
                // Dst: (FDIV64rr:f64 FP64:f64:$src1, FP64:f64:$src2)
              0, // EndSwitchType
/*5906*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 76,  TARGET_VAL(ISD::FSQRT),// ->5986
/*5910*/    OPC_Scope, 49, /*->5961*/ // 2 children in Scope
/*5912*/      OPC_MoveChild, 0,
/*5914*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5917*/      OPC_RecordMemRef,
/*5918*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5919*/      OPC_RecordChild1, // #1 = $src
/*5920*/      OPC_CheckChild1Type, MVT::i64,
/*5922*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5924*/      OPC_CheckPredicate, 1, // Predicate_load
/*5926*/      OPC_MoveParent,
/*5927*/      OPC_SwitchType /*2 cases */, 14,  MVT::f32,// ->5944
/*5930*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*5933*/        OPC_EmitMergeInputChains1_0,
/*5934*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT32rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f32 (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSQRT32rm:f32 rriaddr12:i64:$src)
              /*SwitchType*/ 14,  MVT::f64,// ->5960
/*5946*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*5949*/        OPC_EmitMergeInputChains1_0,
/*5950*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT64rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
                // Src: (fsqrt:f64 (ld:f64 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
                // Dst: (FSQRT64rm:f64 rriaddr12:i64:$src)
              0, // EndSwitchType
/*5961*/    /*Scope*/ 23, /*->5985*/
/*5962*/      OPC_RecordChild0, // #0 = $src
/*5963*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->5974
/*5966*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT32rr), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FSQRT32rr:f32 FP32:f32:$src)
              /*SwitchType*/ 8,  MVT::f64,// ->5984
/*5976*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FSQRT64rr), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fsqrt:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FSQRT64rr:f64 FP64:f64:$src)
              0, // EndSwitchType
/*5985*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 42,  TARGET_VAL(ISD::FP_EXTEND),// ->6031
/*5989*/    OPC_Scope, 29, /*->6020*/ // 2 children in Scope
/*5991*/      OPC_MoveChild, 0,
/*5993*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5996*/      OPC_RecordMemRef,
/*5997*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5998*/      OPC_RecordChild1, // #1 = $src
/*5999*/      OPC_CheckChild1Type, MVT::i64,
/*6001*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6003*/      OPC_CheckPredicate, 1, // Predicate_load
/*6005*/      OPC_MoveParent,
/*6006*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRRI12:$src #2 #3 #4
/*6009*/      OPC_EmitMergeInputChains1_0,
/*6010*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FEXT32m64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 2, 3, 4, 
              // Src: (fextend:f64 (ld:f32 rriaddr12:i64:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 19
              // Dst: (FEXT32m64:f64 rriaddr12:i64:$src)
/*6020*/    /*Scope*/ 9, /*->6030*/
/*6021*/      OPC_RecordChild0, // #0 = $src
/*6022*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FEXT32r64), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fextend:f64 FP32:f32:$src) - Complexity = 3
              // Dst: (FEXT32r64:f64 FP32:f32:$src)
/*6030*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->6059
/*6034*/    OPC_RecordNode,   // #0 = 'SystemZcallseq_end' chained node
/*6035*/    OPC_CaptureGlueInput,
/*6036*/    OPC_RecordChild1, // #1 = $amt1
/*6037*/    OPC_MoveChild, 1,
/*6039*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6042*/    OPC_MoveParent,
/*6043*/    OPC_RecordChild2, // #2 = $amt2
/*6044*/    OPC_MoveChild, 2,
/*6046*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6049*/    OPC_MoveParent,
/*6050*/    OPC_EmitMergeInputChains1_0,
/*6051*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (SystemZcallseq_end (timm:i64):$amt1, (timm:i64):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i64):$amt1, (timm:i64):$amt2)
          /*SwitchOpcode*/ 108|128,1/*236*/,  TARGET_VAL(SystemZISD::BRCOND),// ->6299
/*6063*/    OPC_RecordNode,   // #0 = 'SystemZbrcond' chained node
/*6064*/    OPC_RecordChild1, // #1 = $dst
/*6065*/    OPC_MoveChild, 1,
/*6067*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6070*/    OPC_MoveParent,
/*6071*/    OPC_MoveChild, 2,
/*6073*/    OPC_Scope, 15, /*->6090*/ // 14 children in Scope
/*6075*/      OPC_CheckInteger, 0, 
/*6077*/      OPC_MoveParent,
/*6078*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6079*/      OPC_EmitMergeInputChains1_0,
/*6080*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6083*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JO), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 0:i8, PSW:i64) - Complexity = 8
              // Dst: (JO (bb:Other):$dst)
/*6090*/    /*Scope*/ 15, /*->6106*/
/*6091*/      OPC_CheckInteger, 1, 
/*6093*/      OPC_MoveParent,
/*6094*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6095*/      OPC_EmitMergeInputChains1_0,
/*6096*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6099*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 1:i8, PSW:i64) - Complexity = 8
              // Dst: (JH (bb:Other):$dst)
/*6106*/    /*Scope*/ 15, /*->6122*/
/*6107*/      OPC_CheckInteger, 2, 
/*6109*/      OPC_MoveParent,
/*6110*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6111*/      OPC_EmitMergeInputChains1_0,
/*6112*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6115*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNLE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 2:i8, PSW:i64) - Complexity = 8
              // Dst: (JNLE (bb:Other):$dst)
/*6122*/    /*Scope*/ 15, /*->6138*/
/*6123*/      OPC_CheckInteger, 3, 
/*6125*/      OPC_MoveParent,
/*6126*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6127*/      OPC_EmitMergeInputChains1_0,
/*6128*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6131*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 3:i8, PSW:i64) - Complexity = 8
              // Dst: (JL (bb:Other):$dst)
/*6138*/    /*Scope*/ 15, /*->6154*/
/*6139*/      OPC_CheckInteger, 4, 
/*6141*/      OPC_MoveParent,
/*6142*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6143*/      OPC_EmitMergeInputChains1_0,
/*6144*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6147*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNHE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 4:i8, PSW:i64) - Complexity = 8
              // Dst: (JNHE (bb:Other):$dst)
/*6154*/    /*Scope*/ 15, /*->6170*/
/*6155*/      OPC_CheckInteger, 5, 
/*6157*/      OPC_MoveParent,
/*6158*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6159*/      OPC_EmitMergeInputChains1_0,
/*6160*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6163*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JLH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 5:i8, PSW:i64) - Complexity = 8
              // Dst: (JLH (bb:Other):$dst)
/*6170*/    /*Scope*/ 15, /*->6186*/
/*6171*/      OPC_CheckInteger, 6, 
/*6173*/      OPC_MoveParent,
/*6174*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6175*/      OPC_EmitMergeInputChains1_0,
/*6176*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6179*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 6:i8, PSW:i64) - Complexity = 8
              // Dst: (JNE (bb:Other):$dst)
/*6186*/    /*Scope*/ 15, /*->6202*/
/*6187*/      OPC_CheckInteger, 7, 
/*6189*/      OPC_MoveParent,
/*6190*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6191*/      OPC_EmitMergeInputChains1_0,
/*6192*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6195*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 7:i8, PSW:i64) - Complexity = 8
              // Dst: (JE (bb:Other):$dst)
/*6202*/    /*Scope*/ 15, /*->6218*/
/*6203*/      OPC_CheckInteger, 8, 
/*6205*/      OPC_MoveParent,
/*6206*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6207*/      OPC_EmitMergeInputChains1_0,
/*6208*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6211*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNLH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 8:i8, PSW:i64) - Complexity = 8
              // Dst: (JNLH (bb:Other):$dst)
/*6218*/    /*Scope*/ 15, /*->6234*/
/*6219*/      OPC_CheckInteger, 9, 
/*6221*/      OPC_MoveParent,
/*6222*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6223*/      OPC_EmitMergeInputChains1_0,
/*6224*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6227*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JHE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 9:i8, PSW:i64) - Complexity = 8
              // Dst: (JHE (bb:Other):$dst)
/*6234*/    /*Scope*/ 15, /*->6250*/
/*6235*/      OPC_CheckInteger, 10, 
/*6237*/      OPC_MoveParent,
/*6238*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6239*/      OPC_EmitMergeInputChains1_0,
/*6240*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6243*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNL), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 10:i8, PSW:i64) - Complexity = 8
              // Dst: (JNL (bb:Other):$dst)
/*6250*/    /*Scope*/ 15, /*->6266*/
/*6251*/      OPC_CheckInteger, 11, 
/*6253*/      OPC_MoveParent,
/*6254*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6255*/      OPC_EmitMergeInputChains1_0,
/*6256*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6259*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JLE), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 11:i8, PSW:i64) - Complexity = 8
              // Dst: (JLE (bb:Other):$dst)
/*6266*/    /*Scope*/ 15, /*->6282*/
/*6267*/      OPC_CheckInteger, 12, 
/*6269*/      OPC_MoveParent,
/*6270*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6271*/      OPC_EmitMergeInputChains1_0,
/*6272*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6275*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNH), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 12:i8, PSW:i64) - Complexity = 8
              // Dst: (JNH (bb:Other):$dst)
/*6282*/    /*Scope*/ 15, /*->6298*/
/*6283*/      OPC_CheckInteger, 13, 
/*6285*/      OPC_MoveParent,
/*6286*/      OPC_RecordChild3, // #2 = physreg input PSW
/*6287*/      OPC_EmitMergeInputChains1_0,
/*6288*/      OPC_EmitCopyToReg, 2, SystemZ::PSW,
/*6291*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::JNO), 0|OPFL_Chain|OPFL_GlueInput,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (SystemZbrcond (bb:Other):$dst, 13:i8, PSW:i64) - Complexity = 8
              // Dst: (JNO (bb:Other):$dst)
/*6298*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->6318
/*6302*/    OPC_RecordNode,   // #0 = 'SystemZcallseq_start' chained node
/*6303*/    OPC_RecordChild1, // #1 = $amt
/*6304*/    OPC_MoveChild, 1,
/*6306*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6309*/    OPC_MoveParent,
/*6310*/    OPC_EmitMergeInputChains1_0,
/*6311*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (SystemZcallseq_start (timm:i64):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i64):$amt)
          /*SwitchOpcode*/ 67,  TARGET_VAL(SystemZISD::CALL),// ->6388
/*6321*/    OPC_RecordNode,   // #0 = 'SystemZcall' chained node
/*6322*/    OPC_CaptureGlueInput,
/*6323*/    OPC_RecordChild1, // #1 = $dst
/*6324*/    OPC_Scope, 49, /*->6375*/ // 2 children in Scope
/*6326*/      OPC_MoveChild, 1,
/*6328*/      OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::Constant),// ->6344
/*6332*/        OPC_MoveParent,
/*6333*/        OPC_EmitMergeInputChains1_0,
/*6334*/        OPC_EmitConvertToTarget, 1,
/*6336*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (SystemZcall (imm:iPTR):$dst) - Complexity = 6
                // Dst: (CALLi:i64 (imm:i64):$dst)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->6359
/*6347*/        OPC_CheckType, MVT::i64,
/*6349*/        OPC_MoveParent,
/*6350*/        OPC_EmitMergeInputChains1_0,
/*6351*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (SystemZcall (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (CALLi:i64 (tglobaladdr:i64):$dst)
              /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->6374
/*6362*/        OPC_CheckType, MVT::i64,
/*6364*/        OPC_MoveParent,
/*6365*/        OPC_EmitMergeInputChains1_0,
/*6366*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (SystemZcall (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (CALLi:i64 (texternalsym:i64):$dst)
              0, // EndSwitchOpcode
/*6375*/    /*Scope*/ 11, /*->6387*/
/*6376*/      OPC_CheckChild1Type, MVT::i64,
/*6378*/      OPC_EmitMergeInputChains1_0,
/*6379*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::CALLr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (SystemZcall ADDR64:i64:$dst) - Complexity = 3
              // Dst: (CALLr:i64 ADDR64:i64:$dst)
/*6387*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 60,  TARGET_VAL(ISD::FNEG),// ->6451
/*6391*/    OPC_Scope, 31, /*->6424*/ // 2 children in Scope
/*6393*/      OPC_MoveChild, 0,
/*6395*/      OPC_CheckOpcode, TARGET_VAL(ISD::FABS),
/*6398*/      OPC_RecordChild0, // #0 = $src
/*6399*/      OPC_MoveParent,
/*6400*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6412
/*6403*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNABS32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 (fabs:f32 FP32:f32:$src)) - Complexity = 6
                // Dst: (FNABS32rr:f32:i64 FP32:f32:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6423
/*6414*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNABS64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 (fabs:f64 FP64:f64:$src)) - Complexity = 6
                // Dst: (FNABS64rr:f64:i64 FP64:f64:$src)
              0, // EndSwitchType
/*6424*/    /*Scope*/ 25, /*->6450*/
/*6425*/      OPC_RecordChild0, // #0 = $src
/*6426*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6438
/*6429*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 FP32:f32:$src) - Complexity = 3
                // Dst: (FNEG32rr:f32:i64 FP32:f32:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6449
/*6440*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 FP64:f64:$src) - Complexity = 3
                // Dst: (FNEG64rr:f64:i64 FP64:f64:$src)
              0, // EndSwitchType
/*6450*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 66,  TARGET_VAL(ISD::ConstantFP),// ->6520
/*6454*/    OPC_Scope, 22, /*->6478*/ // 2 children in Scope
/*6456*/      OPC_CheckPredicate, 42, // Predicate_fpimm0
/*6458*/      OPC_SwitchType /*2 cases */, 7,  MVT::f32,// ->6468
/*6461*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD_Fp032), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/, 
                // Src: (fpimm:f32)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LD_Fp032:f32)
              /*SwitchType*/ 7,  MVT::f64,// ->6477
/*6470*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::LD_Fp064), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
                // Src: (fpimm:f64)<<P:Predicate_fpimm0>> - Complexity = 4
                // Dst: (LD_Fp064:f64)
              0, // EndSwitchType
/*6478*/    /*Scope*/ 40, /*->6519*/
/*6479*/      OPC_CheckPredicate, 43, // Predicate_fpimmneg0
/*6481*/      OPC_SwitchType /*2 cases */, 16,  MVT::f32,// ->6500
/*6484*/        OPC_EmitNode, TARGET_VAL(SystemZ::LD_Fp032), 0,
                    1/*#VTs*/, MVT::f32, 0/*#Ops*/,  // Results = #0 
/*6491*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG32rr), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f32)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (FNEG32rr:f32:i64 (LD_Fp032:f32))
              /*SwitchType*/ 16,  MVT::f64,// ->6518
/*6502*/        OPC_EmitNode, TARGET_VAL(SystemZ::LD_Fp064), 0,
                    1/*#VTs*/, MVT::f64, 0/*#Ops*/,  // Results = #0 
/*6509*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FNEG64rr), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (fpimm:f64)<<P:Predicate_fpimmneg0>> - Complexity = 4
                // Dst: (FNEG64rr:f64:i64 (LD_Fp064:f64))
              0, // EndSwitchType
/*6519*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9,  TARGET_VAL(SystemZISD::RET_FLAG),// ->6532
/*6523*/    OPC_RecordNode,   // #0 = 'SystemZretflag' chained node
/*6524*/    OPC_CaptureGlueInput,
/*6525*/    OPC_EmitMergeInputChains1_0,
/*6526*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::RET), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (SystemZretflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->6551
/*6535*/    OPC_RecordNode,   // #0 = 'br' chained node
/*6536*/    OPC_RecordChild1, // #1 = $dst
/*6537*/    OPC_MoveChild, 1,
/*6539*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6542*/    OPC_MoveParent,
/*6543*/    OPC_EmitMergeInputChains1_0,
/*6544*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::JMP), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (JMP (bb:Other):$dst)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->6566
/*6554*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*6555*/    OPC_RecordChild1, // #1 = $dst
/*6556*/    OPC_CheckChild1Type, MVT::i64,
/*6558*/    OPC_EmitMergeInputChains1_0,
/*6559*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::JMPr), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind GR64:i64:$dst) - Complexity = 3
            // Dst: (JMPr GR64:i64:$dst)
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::FCOPYSIGN),// ->6599
/*6569*/    OPC_RecordChild0, // #0 = $src1
/*6570*/    OPC_RecordChild1, // #1 = $src2
/*6571*/    OPC_SwitchType /*2 cases */, 11,  MVT::f32,// ->6585
/*6574*/      OPC_CheckChild1Type, MVT::f32,
/*6576*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCOPYSIGN32), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fcopysign:f32 FP32:f32:$src1, FP32:f32:$src2) - Complexity = 3
              // Dst: (FCOPYSIGN32:f32 FP32:f32:$src1, FP32:f32:$src2)
            /*SwitchType*/ 11,  MVT::f64,// ->6598
/*6587*/      OPC_CheckChild1Type, MVT::f64,
/*6589*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCOPYSIGN64), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fcopysign:f64 FP64:f64:$src1, FP64:f64:$src2) - Complexity = 3
              // Dst: (FCOPYSIGN64:f64 FP64:f64:$src1, FP64:f64:$src2)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::FABS),// ->6627
/*6602*/    OPC_RecordChild0, // #0 = $src
/*6603*/    OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6615
/*6606*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FABS32rr), 0,
                  2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 FP32:f32:$src) - Complexity = 3
              // Dst: (FABS32rr:f32:i64 FP32:f32:$src)
            /*SwitchType*/ 9,  MVT::f64,// ->6626
/*6617*/      OPC_MorphNodeTo, TARGET_VAL(SystemZ::FABS64rr), 0,
                  2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 FP64:f64:$src) - Complexity = 3
              // Dst: (FABS64rr:f64:i64 FP64:f64:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->6639
/*6630*/    OPC_RecordChild0, // #0 = $src
/*6631*/    OPC_MorphNodeTo, TARGET_VAL(SystemZ::FROUND64r32), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 FP64:f64:$src) - Complexity = 3
            // Dst: (FROUND64r32:f32 FP64:f64:$src)
          /*SwitchOpcode*/ 57,  TARGET_VAL(ISD::SINT_TO_FP),// ->6699
/*6642*/    OPC_RecordChild0, // #0 = $src
/*6643*/    OPC_Scope, 26, /*->6671*/ // 2 children in Scope
/*6645*/      OPC_CheckChild0Type, MVT::i32,
/*6647*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6659
/*6650*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP32), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR32:i32:$src) - Complexity = 3
                // Dst: (FCONVFP32:f32:i64 GR32:i32:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6670
/*6661*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP64r32), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR32:i32:$src) - Complexity = 3
                // Dst: (FCONVFP64r32:f64:i64 GR32:i32:$src)
              0, // EndSwitchType
/*6671*/    /*Scope*/ 26, /*->6698*/
/*6672*/      OPC_CheckChild0Type, MVT::i64,
/*6674*/      OPC_SwitchType /*2 cases */, 9,  MVT::f32,// ->6686
/*6677*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP32r64), 0,
                    2/*#VTs*/, MVT::f32, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f32 GR64:i64:$src) - Complexity = 3
                // Dst: (FCONVFP32r64:f32:i64 GR64:i64:$src)
              /*SwitchType*/ 9,  MVT::f64,// ->6697
/*6688*/        OPC_MorphNodeTo, TARGET_VAL(SystemZ::FCONVFP64), 0,
                    2/*#VTs*/, MVT::f64, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sint_to_fp:f64 GR64:i64:$src) - Complexity = 3
                // Dst: (FCONVFP64:f64:i64 GR64:i64:$src)
              0, // EndSwitchType
/*6698*/    0, /*End of Scope*/
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 6701 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 77
  // #OPC_RecordNode                     = 59
  // #OPC_RecordChild                    = 214
  // #OPC_RecordMemRef                   = 47
  // #OPC_CaptureGlueInput               = 5
  // #OPC_MoveChild                      = 82
  // #OPC_MoveParent                     = 136
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 5
  // #OPC_CheckPredicate                 = 202
  // #OPC_CheckOpcode                    = 74
  // #OPC_SwitchOpcode                   = 6
  // #OPC_CheckType                      = 89
  // #OPC_SwitchType                     = 64
  // #OPC_CheckChildType                 = 95
  // #OPC_CheckInteger                   = 15
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 3
  // #OPC_CheckComplexPat                = 137
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 42
  // #OPC_EmitInteger                    = 0
  // #OPC_EmitStringInteger              = 11
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 57
  // #OPC_EmitMergeInputChains           = 148
  // #OPC_EmitCopyToReg                  = 18
  // #OPC_EmitNode                       = 16
  // #OPC_EmitNodeXForm                  = 43
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 301

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (Subtarget.isZ10());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 1: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 2: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - true if the immediate fits in a 16-bit sign extended
  // field.
  if (N->getValueType(0) == MVT::i64) {
    uint64_t val = N->getZExtValue();
    return ((int64_t)val == (int16_t)val);
  } else if (N->getValueType(0) == MVT::i32) {
    uint32_t val = N->getZExtValue();
    return ((int32_t)val == (int16_t)val);
  }

  return false;

  }
  case 3: { // Predicate_immSExt32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt32 predicate - true if the immediate fits in a 32-bit sign extended
  // field.
  uint64_t val = N->getZExtValue();
  return ((int64_t)val == (int32_t)val);

  }
  case 4: { // Predicate_i32ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32ll16c predicate - true if the 32-bit immediate has all bits 16-31 set.
  return ((N->getZExtValue() | 0x00000000FFFF0000ULL) == N->getZExtValue());

  }
  case 5: { // Predicate_i64ll16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64ll16c predicate - true if the 64-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() | 0xFFFFFFFFFFFF0000ULL) == N->getZExtValue());

  }
  case 6: { // Predicate_i32lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32lh16c predicate - true if the 32-bit immediate has all rightmost 16
  //  bits set.
  return ((N->getZExtValue() | 0x000000000000FFFFULL) == N->getZExtValue());

  }
  case 7: { // Predicate_i64lh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64lh16c predicate - true if the 64-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() | 0xFFFFFFFF0000FFFFULL) == N->getZExtValue());

  }
  case 8: { // Predicate_i64hl16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hl16c predicate - true if the 64-bit immediate has only bits 32-47 set.
  return ((N->getZExtValue() | 0xFFFF0000FFFFFFFFULL) == N->getZExtValue());

  }
  case 9: { // Predicate_i64hh16c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hh16c predicate - true if the 64-bit immediate has only bits 48-63 set.
  return ((N->getZExtValue() | 0x0000FFFFFFFFFFFFULL) == N->getZExtValue());

  }
  case 10: { // Predicate_i64lo32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64lo32 predicate - true if the 64-bit immediate has only rightmost 32
  // bits set.
  return ((N->getZExtValue() | 0xFFFFFFFF00000000ULL) == N->getZExtValue());

  }
  case 11: { // Predicate_i64hi32c
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64hi32 predicate - true if the 64-bit immediate has only bits 32-63 set.
  return ((N->getZExtValue() | 0x00000000FFFFFFFFULL) == N->getZExtValue());

  }
  case 12: { // Predicate_i32ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32ll16 predicate - true if the 32-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() & 0x000000000000FFFFULL) == N->getZExtValue());

  }
  case 13: { // Predicate_i32lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32lh16 predicate - true if the 32-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() & 0x00000000FFFF0000ULL) == N->getZExtValue());

  }
  case 14: { // Predicate_i64ll16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64ll16 predicate - true if the 64-bit immediate has only rightmost 16
  // bits set.
  return ((N->getZExtValue() & 0x000000000000FFFFULL) == N->getZExtValue());

  }
  case 15: { // Predicate_i64lh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64lh16 predicate - true if the 64-bit immediate has only bits 16-31 set.
  return ((N->getZExtValue() & 0x00000000FFFF0000ULL) == N->getZExtValue());

  }
  case 16: { // Predicate_i64hl16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hl16 predicate - true if the 64-bit immediate has only bits 32-47 set.
  return ((N->getZExtValue() & 0x0000FFFF00000000ULL) == N->getZExtValue());

  }
  case 17: { // Predicate_i64hh16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);
  
  // i64hh16 predicate - true if the 64-bit immediate has only bits 48-63 set.
  return ((N->getZExtValue() & 0xFFFF000000000000ULL) == N->getZExtValue());

  }
  case 18: { // Predicate_i64lo32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64lo32 predicate - true if the 64-bit immediate has only rightmost 32
  // bits set.
  return ((N->getZExtValue() & 0x00000000FFFFFFFFULL) == N->getZExtValue());

  }
  case 19: { // Predicate_i64hi32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64hi32 predicate - true if the 64-bit immediate has only bits 32-63 set.
  return ((N->getZExtValue() & 0xFFFFFFFF00000000ULL) == N->getZExtValue());

  }
  case 20: { // Predicate_i64immSExt32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64immSExt32 predicate - True if the 64-bit immediate fits in a 32-bit
  // sign extended field.
  return (int64_t)N->getZExtValue() == (int32_t)N->getZExtValue();

  }
  case 21: { // Predicate_i32immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32immSExt16 predicate - True if the 32-bit immediate fits in a 16-bit
  // sign extended field.
  return (int32_t)N->getZExtValue() == (int16_t)N->getZExtValue();

  }
  case 22: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 23: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 24: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 25: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 26: { // Predicate_i64immZExt32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i64immZExt32 predicate - True if the 64-bit immediate fits in a 32-bit
  // zero extended field.
  return (uint64_t)N->getZExtValue() == (uint32_t)N->getZExtValue();

  }
  case 27: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 28: { // Predicate_sextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 29: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 30: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 31: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 32: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 33: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 34: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 35: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 36: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 37: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 38: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 39: { // Predicate_i32immSExt8
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // i32immSExt8 predicate - True if the 32-bit immediate fits in a 8-bit
  // sign extended field.
  return (int32_t)N->getZExtValue() == (int8_t)N->getZExtValue();

  }
  case 40: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 41: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 42: { // Predicate_fpimm0
    ConstantFPSDNode*N = cast<ConstantFPSDNode>(Node);

  return N->isExactlyValue(+0.0);

  }
  case 43: { // Predicate_fpimmneg0
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
    Result.resize(NextRes+3);
    return SelectAddrRRI12(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 1:
    Result.resize(NextRes+3);
    return SelectAddrRRI20(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 2:
    Result.resize(NextRes+3);
    return SelectLAAddr(N, Result[NextRes+0].first, Result[NextRes+1].first, Result[NextRes+2].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrRI12Only(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return SelectAddrRI(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectAddrRI12(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // LL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return low 16 bits.
  return getI16Imm(N->getZExtValue() & 0x000000000000FFFFULL);

  }
  case 1: {  // LO32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return low 32 bits.
  return getI32Imm(N->getZExtValue() & 0x00000000FFFFFFFFULL);

  }
  case 2: {  // LH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 16-31.
  return getI16Imm((N->getZExtValue() & 0x00000000FFFF0000ULL) >> 16);

  }
  case 3: {  // HL16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 32-47.
  return getI16Imm((N->getZExtValue() & 0x0000FFFF00000000ULL) >> 32);

  }
  case 4: {  // HH16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 48-63.
  return getI16Imm((N->getZExtValue() & 0xFFFF000000000000ULL) >> 48);

  }
  case 5: {  // HI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return bits 32-63.
  return getI32Imm(N->getZExtValue() >> 32);

  }
  case 6: {  // GetI64FromI32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  return CurDAG->getTargetConstant(N->getSExtValue(), MVT::i64);

  }
  case 7: {  // LO8
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: return low 8 bits.
  return getI8Imm(N->getZExtValue() & 0x00000000000000FFULL);

  }
  }
}

