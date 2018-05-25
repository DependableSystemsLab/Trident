//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the MBlaze target
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
/*0*/     OPC_SwitchOpcode /*52 cases */, 69|128,1/*197*/,  TARGET_VAL(ISD::STORE),// ->202
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 28, /*->37*/ // 2 children in Scope
/*9*/         OPC_MoveChild, 1,
/*11*/        OPC_CheckInteger, 0, 
/*13*/        OPC_MoveParent,
/*14*/        OPC_RecordChild2, // #1 = $dst
/*15*/        OPC_CheckChild2Type, MVT::i32,
/*17*/        OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*19*/        OPC_CheckPredicate, 1, // Predicate_store
/*21*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$dst #2 #3
/*24*/        OPC_EmitMergeInputChains1_0,
/*25*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*28*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWI), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 4, 2, 3, 
              // Src: (st 0:i32, iaddr:i32:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 18
              // Dst: (SWI R0:i32, iaddr:i32:$dst)
/*37*/      /*Scope*/ 34|128,1/*162*/, /*->201*/
/*39*/        OPC_RecordChild1, // #1 = $dst
/*40*/        OPC_Scope, 116, /*->158*/ // 2 children in Scope
/*42*/          OPC_CheckChild1Type, MVT::i32,
/*44*/          OPC_RecordChild2, // #2 = $addr
/*45*/          OPC_CheckChild2Type, MVT::i32,
/*47*/          OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*49*/          OPC_Scope, 36, /*->87*/ // 3 children in Scope
/*51*/            OPC_CheckPredicate, 2, // Predicate_truncstore
/*53*/            OPC_Scope, 15, /*->70*/ // 2 children in Scope
/*55*/              OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*57*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*60*/              OPC_EmitMergeInputChains1_0,
/*61*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SBI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SBI GPR:i32:$dst, iaddr:i32:$addr)
/*70*/            /*Scope*/ 15, /*->86*/
/*71*/              OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*73*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*76*/              OPC_EmitMergeInputChains1_0,
/*77*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SHI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SHI GPR:i32:$dst, iaddr:i32:$addr)
/*86*/            0, /*End of Scope*/
/*87*/          /*Scope*/ 32, /*->120*/
/*88*/            OPC_CheckPredicate, 1, // Predicate_store
/*90*/            OPC_Scope, 13, /*->105*/ // 2 children in Scope
/*92*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*95*/              OPC_EmitMergeInputChains1_0,
/*96*/              OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWI), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SWI GPR:i32:$dst, iaddr:i32:$addr)
/*105*/           /*Scope*/ 13, /*->119*/
/*106*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*109*/             OPC_EmitMergeInputChains1_0,
/*110*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SW), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (SW GPR:i32:$dst, xaddr:i32:$addr)
/*119*/           0, /*End of Scope*/
/*120*/         /*Scope*/ 36, /*->157*/
/*121*/           OPC_CheckPredicate, 2, // Predicate_truncstore
/*123*/           OPC_Scope, 15, /*->140*/ // 2 children in Scope
/*125*/             OPC_CheckPredicate, 4, // Predicate_truncstorei16
/*127*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*130*/             OPC_EmitMergeInputChains1_0,
/*131*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (SH GPR:i32:$dst, xaddr:i32:$addr)
/*140*/           /*Scope*/ 15, /*->156*/
/*141*/             OPC_CheckPredicate, 3, // Predicate_truncstorei8
/*143*/             OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*146*/             OPC_EmitMergeInputChains1_0,
/*147*/             OPC_MorphNodeTo, TARGET_VAL(MBlaze::SB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPR:i32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (SB GPR:i32:$dst, xaddr:i32:$addr)
/*156*/           0, /*End of Scope*/
/*157*/         0, /*End of Scope*/
/*158*/       /*Scope*/ 41, /*->200*/
/*159*/         OPC_CheckChild1Type, MVT::f32,
/*161*/         OPC_RecordChild2, // #2 = $addr
/*162*/         OPC_CheckChild2Type, MVT::i32,
/*164*/         OPC_CheckPredicate, 0, // Predicate_unindexedstore
/*166*/         OPC_CheckPredicate, 1, // Predicate_store
/*168*/         OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*170*/         OPC_Scope, 13, /*->185*/ // 2 children in Scope
/*172*/           OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrRegReg:$addr #3 #4
/*175*/           OPC_EmitMergeInputChains1_0,
/*176*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWF), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPR:f32:$dst, xaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWF GPR:f32:$dst, xaddr:i32:$addr)
/*185*/         /*Scope*/ 13, /*->199*/
/*186*/           OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrRegImm:$addr #3 #4
/*189*/           OPC_EmitMergeInputChains1_0,
/*190*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWFI), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPR:f32:$dst, iaddr:i32:$addr)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (SWFI GPR:f32:$dst, iaddr:i32:$addr)
/*199*/         0, /*End of Scope*/
/*200*/       0, /*End of Scope*/
/*201*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::MEMBARRIER),// ->243
/*205*/     OPC_RecordNode,   // #0 = 'membarrier' chained node
/*206*/     OPC_MoveChild, 1,
/*208*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*211*/     OPC_MoveParent,
/*212*/     OPC_MoveChild, 2,
/*214*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*217*/     OPC_MoveParent,
/*218*/     OPC_MoveChild, 3,
/*220*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*223*/     OPC_MoveParent,
/*224*/     OPC_MoveChild, 4,
/*226*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*229*/     OPC_MoveParent,
/*230*/     OPC_MoveChild, 5,
/*232*/     OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*235*/     OPC_MoveParent,
/*236*/     OPC_EmitMergeInputChains1_0,
/*237*/     OPC_MorphNodeTo, TARGET_VAL(MBlaze::MEMBARRIER), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (MEMBARRIER)
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(ISD::LOAD),// ->472
/*247*/     OPC_RecordMemRef,
/*248*/     OPC_RecordNode,   // #0 = 'ld' chained node
/*249*/     OPC_RecordChild1, // #1 = $addr
/*250*/     OPC_CheckChild1Type, MVT::i32,
/*252*/     OPC_CheckPredicate, 5, // Predicate_unindexedload
/*254*/     OPC_SwitchType /*2 cases */, 49|128,1/*177*/,  MVT::i32,// ->435
/*258*/       OPC_Scope, 36, /*->296*/ // 5 children in Scope
/*260*/         OPC_CheckPredicate, 6, // Predicate_zextload
/*262*/         OPC_Scope, 15, /*->279*/ // 2 children in Scope
/*264*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*266*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*269*/           OPC_EmitMergeInputChains1_0,
/*270*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBUI:i32 iaddr:i32:$addr)
/*279*/         /*Scope*/ 15, /*->295*/
/*280*/           OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*282*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*285*/           OPC_EmitMergeInputChains1_0,
/*286*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHUI:i32 iaddr:i32:$addr)
/*295*/         0, /*End of Scope*/
/*296*/       /*Scope*/ 15, /*->312*/
/*297*/         OPC_CheckPredicate, 9, // Predicate_load
/*299*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*302*/         OPC_EmitMergeInputChains1_0,
/*303*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWI:i32 iaddr:i32:$addr)
/*312*/       /*Scope*/ 68, /*->381*/
/*313*/         OPC_CheckPredicate, 10, // Predicate_extload
/*315*/         OPC_Scope, 15, /*->332*/ // 4 children in Scope
/*317*/           OPC_CheckPredicate, 11, // Predicate_extloadi8
/*319*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$src #2 #3
/*322*/           OPC_EmitMergeInputChains1_0,
/*323*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBUI:i32 iaddr:i32:$src)
/*332*/         /*Scope*/ 15, /*->348*/
/*333*/           OPC_CheckPredicate, 12, // Predicate_extloadi16
/*335*/           OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$src #2 #3
/*338*/           OPC_EmitMergeInputChains1_0,
/*339*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHUI), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHUI:i32 iaddr:i32:$src)
/*348*/         /*Scope*/ 15, /*->364*/
/*349*/           OPC_CheckPredicate, 11, // Predicate_extloadi8
/*351*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$src #2 #3
/*354*/           OPC_EmitMergeInputChains1_0,
/*355*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBU:i32 xaddr:i32:$src)
/*364*/         /*Scope*/ 15, /*->380*/
/*365*/           OPC_CheckPredicate, 12, // Predicate_extloadi16
/*367*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$src #2 #3
/*370*/           OPC_EmitMergeInputChains1_0,
/*371*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHU:i32 xaddr:i32:$src)
/*380*/         0, /*End of Scope*/
/*381*/       /*Scope*/ 15, /*->397*/
/*382*/         OPC_CheckPredicate, 9, // Predicate_load
/*384*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*387*/         OPC_EmitMergeInputChains1_0,
/*388*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LW), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LW:i32 xaddr:i32:$addr)
/*397*/       /*Scope*/ 36, /*->434*/
/*398*/         OPC_CheckPredicate, 6, // Predicate_zextload
/*400*/         OPC_Scope, 15, /*->417*/ // 2 children in Scope
/*402*/           OPC_CheckPredicate, 8, // Predicate_zextloadi16
/*404*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*407*/           OPC_EmitMergeInputChains1_0,
/*408*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LHU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                  // Dst: (LHU:i32 xaddr:i32:$addr)
/*417*/         /*Scope*/ 15, /*->433*/
/*418*/           OPC_CheckPredicate, 7, // Predicate_zextloadi8
/*420*/           OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*423*/           OPC_EmitMergeInputChains1_0,
/*424*/           OPC_MorphNodeTo, TARGET_VAL(MBlaze::LBU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                  // Dst: (LBU:i32 xaddr:i32:$addr)
/*433*/         0, /*End of Scope*/
/*434*/       0, /*End of Scope*/
            /*SwitchType*/ 34,  MVT::f32,// ->471
/*437*/       OPC_CheckPredicate, 9, // Predicate_load
/*439*/       OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*441*/       OPC_Scope, 13, /*->456*/ // 2 children in Scope
/*443*/         OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrRegReg:$addr #2 #3
/*446*/         OPC_EmitMergeInputChains1_0,
/*447*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWF), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 xaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWF:f32 xaddr:i32:$addr)
/*456*/       /*Scope*/ 13, /*->470*/
/*457*/         OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrRegImm:$addr #2 #3
/*460*/         OPC_EmitMergeInputChains1_0,
/*461*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::LWFI), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:f32 iaddr:i32:$addr)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LWFI:f32 iaddr:i32:$addr)
/*470*/       0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 101|128,9/*1253*/,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->1729
/*476*/     OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*477*/     OPC_MoveChild, 1,
/*479*/     OPC_Scope, 37, /*->518*/ // 32 children in Scope
/*481*/       OPC_CheckInteger, 7|128,7/*903*/, 
/*484*/       OPC_MoveParent,
/*485*/       OPC_RecordChild2, // #1 = $b
/*486*/       OPC_Scope, 19, /*->507*/ // 2 children in Scope
/*488*/         OPC_MoveChild, 2,
/*490*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*493*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*495*/         OPC_MoveParent,
/*496*/         OPC_EmitMergeInputChains1_0,
/*497*/         OPC_EmitConvertToTarget, 1,
/*499*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::GET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 903:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (GET:i32 (imm:i32):$b)
/*507*/       /*Scope*/ 9, /*->517*/
/*508*/         OPC_EmitMergeInputChains1_0,
/*509*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::GETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 903:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (GETD:i32 GPR:i32:$b)
/*517*/       0, /*End of Scope*/
/*518*/     /*Scope*/ 37, /*->556*/
/*519*/       OPC_CheckInteger, 125|128,6/*893*/, 
/*522*/       OPC_MoveParent,
/*523*/       OPC_RecordChild2, // #1 = $b
/*524*/       OPC_Scope, 19, /*->545*/ // 2 children in Scope
/*526*/         OPC_MoveChild, 2,
/*528*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*531*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*533*/         OPC_MoveParent,
/*534*/         OPC_EmitMergeInputChains1_0,
/*535*/         OPC_EmitConvertToTarget, 1,
/*537*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::AGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 893:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (AGET:i32 (imm:i32):$b)
/*545*/       /*Scope*/ 9, /*->555*/
/*546*/         OPC_EmitMergeInputChains1_0,
/*547*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::AGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 893:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (AGETD:i32 GPR:i32:$b)
/*555*/       0, /*End of Scope*/
/*556*/     /*Scope*/ 37, /*->594*/
/*557*/       OPC_CheckInteger, 1|128,7/*897*/, 
/*560*/       OPC_MoveParent,
/*561*/       OPC_RecordChild2, // #1 = $b
/*562*/       OPC_Scope, 19, /*->583*/ // 2 children in Scope
/*564*/         OPC_MoveChild, 2,
/*566*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*569*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*571*/         OPC_MoveParent,
/*572*/         OPC_EmitMergeInputChains1_0,
/*573*/         OPC_EmitConvertToTarget, 1,
/*575*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 897:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CGET:i32 (imm:i32):$b)
/*583*/       /*Scope*/ 9, /*->593*/
/*584*/         OPC_EmitMergeInputChains1_0,
/*585*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 897:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (CGETD:i32 GPR:i32:$b)
/*593*/       0, /*End of Scope*/
/*594*/     /*Scope*/ 37, /*->632*/
/*595*/       OPC_CheckInteger, 127|128,6/*895*/, 
/*598*/       OPC_MoveParent,
/*599*/       OPC_RecordChild2, // #1 = $b
/*600*/       OPC_Scope, 19, /*->621*/ // 2 children in Scope
/*602*/         OPC_MoveChild, 2,
/*604*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*607*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*609*/         OPC_MoveParent,
/*610*/         OPC_EmitMergeInputChains1_0,
/*611*/         OPC_EmitConvertToTarget, 1,
/*613*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 895:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CAGET:i32 (imm:i32):$b)
/*621*/       /*Scope*/ 9, /*->631*/
/*622*/         OPC_EmitMergeInputChains1_0,
/*623*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 895:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (CAGETD:i32 GPR:i32:$b)
/*631*/       0, /*End of Scope*/
/*632*/     /*Scope*/ 37, /*->670*/
/*633*/       OPC_CheckInteger, 6|128,7/*902*/, 
/*636*/       OPC_MoveParent,
/*637*/       OPC_RecordChild2, // #1 = $b
/*638*/       OPC_Scope, 19, /*->659*/ // 2 children in Scope
/*640*/         OPC_MoveChild, 2,
/*642*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*645*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*647*/         OPC_MoveParent,
/*648*/         OPC_EmitMergeInputChains1_0,
/*649*/         OPC_EmitConvertToTarget, 1,
/*651*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 902:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (EGET:i32 (imm:i32):$b)
/*659*/       /*Scope*/ 9, /*->669*/
/*660*/         OPC_EmitMergeInputChains1_0,
/*661*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 902:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (EGETD:i32 GPR:i32:$b)
/*669*/       0, /*End of Scope*/
/*670*/     /*Scope*/ 37, /*->708*/
/*671*/       OPC_CheckInteger, 3|128,7/*899*/, 
/*674*/       OPC_MoveParent,
/*675*/       OPC_RecordChild2, // #1 = $b
/*676*/       OPC_Scope, 19, /*->697*/ // 2 children in Scope
/*678*/         OPC_MoveChild, 2,
/*680*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*683*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*685*/         OPC_MoveParent,
/*686*/         OPC_EmitMergeInputChains1_0,
/*687*/         OPC_EmitConvertToTarget, 1,
/*689*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 899:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (EAGET:i32 (imm:i32):$b)
/*697*/       /*Scope*/ 9, /*->707*/
/*698*/         OPC_EmitMergeInputChains1_0,
/*699*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::EAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 899:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (EAGETD:i32 GPR:i32:$b)
/*707*/       0, /*End of Scope*/
/*708*/     /*Scope*/ 37, /*->746*/
/*709*/       OPC_CheckInteger, 5|128,7/*901*/, 
/*712*/       OPC_MoveParent,
/*713*/       OPC_RecordChild2, // #1 = $b
/*714*/       OPC_Scope, 19, /*->735*/ // 2 children in Scope
/*716*/         OPC_MoveChild, 2,
/*718*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*721*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*723*/         OPC_MoveParent,
/*724*/         OPC_EmitMergeInputChains1_0,
/*725*/         OPC_EmitConvertToTarget, 1,
/*727*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 901:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (ECGET:i32 (imm:i32):$b)
/*735*/       /*Scope*/ 9, /*->745*/
/*736*/         OPC_EmitMergeInputChains1_0,
/*737*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 901:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (ECGETD:i32 GPR:i32:$b)
/*745*/       0, /*End of Scope*/
/*746*/     /*Scope*/ 37, /*->784*/
/*747*/       OPC_CheckInteger, 4|128,7/*900*/, 
/*750*/       OPC_MoveParent,
/*751*/       OPC_RecordChild2, // #1 = $b
/*752*/       OPC_Scope, 19, /*->773*/ // 2 children in Scope
/*754*/         OPC_MoveChild, 2,
/*756*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*759*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*761*/         OPC_MoveParent,
/*762*/         OPC_EmitMergeInputChains1_0,
/*763*/         OPC_EmitConvertToTarget, 1,
/*765*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 900:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (ECAGET:i32 (imm:i32):$b)
/*773*/       /*Scope*/ 9, /*->783*/
/*774*/         OPC_EmitMergeInputChains1_0,
/*775*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::ECAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 900:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (ECAGETD:i32 GPR:i32:$b)
/*783*/       0, /*End of Scope*/
/*784*/     /*Scope*/ 37, /*->822*/
/*785*/       OPC_CheckInteger, 31|128,7/*927*/, 
/*788*/       OPC_MoveParent,
/*789*/       OPC_RecordChild2, // #1 = $b
/*790*/       OPC_Scope, 19, /*->811*/ // 2 children in Scope
/*792*/         OPC_MoveChild, 2,
/*794*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*797*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*799*/         OPC_MoveParent,
/*800*/         OPC_EmitMergeInputChains1_0,
/*801*/         OPC_EmitConvertToTarget, 1,
/*803*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 927:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TGET:i32 (imm:i32):$b)
/*811*/       /*Scope*/ 9, /*->821*/
/*812*/         OPC_EmitMergeInputChains1_0,
/*813*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 927:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TGETD:i32 GPR:i32:$b)
/*821*/       0, /*End of Scope*/
/*822*/     /*Scope*/ 37, /*->860*/
/*823*/       OPC_CheckInteger, 21|128,7/*917*/, 
/*826*/       OPC_MoveParent,
/*827*/       OPC_RecordChild2, // #1 = $b
/*828*/       OPC_Scope, 19, /*->849*/ // 2 children in Scope
/*830*/         OPC_MoveChild, 2,
/*832*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*835*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*837*/         OPC_MoveParent,
/*838*/         OPC_EmitMergeInputChains1_0,
/*839*/         OPC_EmitConvertToTarget, 1,
/*841*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 917:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TAGET:i32 (imm:i32):$b)
/*849*/       /*Scope*/ 9, /*->859*/
/*850*/         OPC_EmitMergeInputChains1_0,
/*851*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 917:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TAGETD:i32 GPR:i32:$b)
/*859*/       0, /*End of Scope*/
/*860*/     /*Scope*/ 37, /*->898*/
/*861*/       OPC_CheckInteger, 25|128,7/*921*/, 
/*864*/       OPC_MoveParent,
/*865*/       OPC_RecordChild2, // #1 = $b
/*866*/       OPC_Scope, 19, /*->887*/ // 2 children in Scope
/*868*/         OPC_MoveChild, 2,
/*870*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*873*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*875*/         OPC_MoveParent,
/*876*/         OPC_EmitMergeInputChains1_0,
/*877*/         OPC_EmitConvertToTarget, 1,
/*879*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 921:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCGET:i32 (imm:i32):$b)
/*887*/       /*Scope*/ 9, /*->897*/
/*888*/         OPC_EmitMergeInputChains1_0,
/*889*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 921:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCGETD:i32 GPR:i32:$b)
/*897*/       0, /*End of Scope*/
/*898*/     /*Scope*/ 37, /*->936*/
/*899*/       OPC_CheckInteger, 23|128,7/*919*/, 
/*902*/       OPC_MoveParent,
/*903*/       OPC_RecordChild2, // #1 = $b
/*904*/       OPC_Scope, 19, /*->925*/ // 2 children in Scope
/*906*/         OPC_MoveChild, 2,
/*908*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*911*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*913*/         OPC_MoveParent,
/*914*/         OPC_EmitMergeInputChains1_0,
/*915*/         OPC_EmitConvertToTarget, 1,
/*917*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 919:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCAGET:i32 (imm:i32):$b)
/*925*/       /*Scope*/ 9, /*->935*/
/*926*/         OPC_EmitMergeInputChains1_0,
/*927*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 919:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCAGETD:i32 GPR:i32:$b)
/*935*/       0, /*End of Scope*/
/*936*/     /*Scope*/ 37, /*->974*/
/*937*/       OPC_CheckInteger, 30|128,7/*926*/, 
/*940*/       OPC_MoveParent,
/*941*/       OPC_RecordChild2, // #1 = $b
/*942*/       OPC_Scope, 19, /*->963*/ // 2 children in Scope
/*944*/         OPC_MoveChild, 2,
/*946*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*949*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*951*/         OPC_MoveParent,
/*952*/         OPC_EmitMergeInputChains1_0,
/*953*/         OPC_EmitConvertToTarget, 1,
/*955*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 926:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TEGET:i32 (imm:i32):$b)
/*963*/       /*Scope*/ 9, /*->973*/
/*964*/         OPC_EmitMergeInputChains1_0,
/*965*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 926:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TEGETD:i32 GPR:i32:$b)
/*973*/       0, /*End of Scope*/
/*974*/     /*Scope*/ 37, /*->1012*/
/*975*/       OPC_CheckInteger, 27|128,7/*923*/, 
/*978*/       OPC_MoveParent,
/*979*/       OPC_RecordChild2, // #1 = $b
/*980*/       OPC_Scope, 19, /*->1001*/ // 2 children in Scope
/*982*/         OPC_MoveChild, 2,
/*984*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*987*/         OPC_CheckPredicate, 13, // Predicate_immZExt4
/*989*/         OPC_MoveParent,
/*990*/         OPC_EmitMergeInputChains1_0,
/*991*/         OPC_EmitConvertToTarget, 1,
/*993*/         OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 923:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TEAGET:i32 (imm:i32):$b)
/*1001*/      /*Scope*/ 9, /*->1011*/
/*1002*/        OPC_EmitMergeInputChains1_0,
/*1003*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TEAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 923:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TEAGETD:i32 GPR:i32:$b)
/*1011*/      0, /*End of Scope*/
/*1012*/    /*Scope*/ 37, /*->1050*/
/*1013*/      OPC_CheckInteger, 29|128,7/*925*/, 
/*1016*/      OPC_MoveParent,
/*1017*/      OPC_RecordChild2, // #1 = $b
/*1018*/      OPC_Scope, 19, /*->1039*/ // 2 children in Scope
/*1020*/        OPC_MoveChild, 2,
/*1022*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1025*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1027*/        OPC_MoveParent,
/*1028*/        OPC_EmitMergeInputChains1_0,
/*1029*/        OPC_EmitConvertToTarget, 1,
/*1031*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 925:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TECGET:i32 (imm:i32):$b)
/*1039*/      /*Scope*/ 9, /*->1049*/
/*1040*/        OPC_EmitMergeInputChains1_0,
/*1041*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 925:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TECGETD:i32 GPR:i32:$b)
/*1049*/      0, /*End of Scope*/
/*1050*/    /*Scope*/ 37, /*->1088*/
/*1051*/      OPC_CheckInteger, 28|128,7/*924*/, 
/*1054*/      OPC_MoveParent,
/*1055*/      OPC_RecordChild2, // #1 = $b
/*1056*/      OPC_Scope, 19, /*->1077*/ // 2 children in Scope
/*1058*/        OPC_MoveChild, 2,
/*1060*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1063*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1065*/        OPC_MoveParent,
/*1066*/        OPC_EmitMergeInputChains1_0,
/*1067*/        OPC_EmitConvertToTarget, 1,
/*1069*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECAGET), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 924:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TECAGET:i32 (imm:i32):$b)
/*1077*/      /*Scope*/ 9, /*->1087*/
/*1078*/        OPC_EmitMergeInputChains1_0,
/*1079*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TECAGETD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 924:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TECAGETD:i32 GPR:i32:$b)
/*1087*/      0, /*End of Scope*/
/*1088*/    /*Scope*/ 39, /*->1128*/
/*1089*/      OPC_CheckInteger, 18|128,7/*914*/, 
/*1092*/      OPC_MoveParent,
/*1093*/      OPC_RecordChild2, // #1 = $b
/*1094*/      OPC_Scope, 20, /*->1116*/ // 2 children in Scope
/*1096*/        OPC_MoveChild, 2,
/*1098*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1101*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1103*/        OPC_MoveParent,
/*1104*/        OPC_EmitMergeInputChains1_0,
/*1105*/        OPC_EmitConvertToTarget, 1,
/*1107*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 914:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NGET:i32:i32 (imm:i32):$b)
/*1116*/      /*Scope*/ 10, /*->1127*/
/*1117*/        OPC_EmitMergeInputChains1_0,
/*1118*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 914:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NGETD:i32:i32 GPR:i32:$b)
/*1127*/      0, /*End of Scope*/
/*1128*/    /*Scope*/ 39, /*->1168*/
/*1129*/      OPC_CheckInteger, 8|128,7/*904*/, 
/*1132*/      OPC_MoveParent,
/*1133*/      OPC_RecordChild2, // #1 = $b
/*1134*/      OPC_Scope, 20, /*->1156*/ // 2 children in Scope
/*1136*/        OPC_MoveChild, 2,
/*1138*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1141*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1143*/        OPC_MoveParent,
/*1144*/        OPC_EmitMergeInputChains1_0,
/*1145*/        OPC_EmitConvertToTarget, 1,
/*1147*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 904:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NAGET:i32:i32 (imm:i32):$b)
/*1156*/      /*Scope*/ 10, /*->1167*/
/*1157*/        OPC_EmitMergeInputChains1_0,
/*1158*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 904:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NAGETD:i32:i32 GPR:i32:$b)
/*1167*/      0, /*End of Scope*/
/*1168*/    /*Scope*/ 39, /*->1208*/
/*1169*/      OPC_CheckInteger, 12|128,7/*908*/, 
/*1172*/      OPC_MoveParent,
/*1173*/      OPC_RecordChild2, // #1 = $b
/*1174*/      OPC_Scope, 20, /*->1196*/ // 2 children in Scope
/*1176*/        OPC_MoveChild, 2,
/*1178*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1181*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1183*/        OPC_MoveParent,
/*1184*/        OPC_EmitMergeInputChains1_0,
/*1185*/        OPC_EmitConvertToTarget, 1,
/*1187*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 908:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCGET:i32:i32 (imm:i32):$b)
/*1196*/      /*Scope*/ 10, /*->1207*/
/*1197*/        OPC_EmitMergeInputChains1_0,
/*1198*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 908:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NCGETD:i32:i32 GPR:i32:$b)
/*1207*/      0, /*End of Scope*/
/*1208*/    /*Scope*/ 39, /*->1248*/
/*1209*/      OPC_CheckInteger, 10|128,7/*906*/, 
/*1212*/      OPC_MoveParent,
/*1213*/      OPC_RecordChild2, // #1 = $b
/*1214*/      OPC_Scope, 20, /*->1236*/ // 2 children in Scope
/*1216*/        OPC_MoveChild, 2,
/*1218*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1221*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1223*/        OPC_MoveParent,
/*1224*/        OPC_EmitMergeInputChains1_0,
/*1225*/        OPC_EmitConvertToTarget, 1,
/*1227*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 906:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCAGET:i32:i32 (imm:i32):$b)
/*1236*/      /*Scope*/ 10, /*->1247*/
/*1237*/        OPC_EmitMergeInputChains1_0,
/*1238*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 906:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NCAGETD:i32:i32 GPR:i32:$b)
/*1247*/      0, /*End of Scope*/
/*1248*/    /*Scope*/ 39, /*->1288*/
/*1249*/      OPC_CheckInteger, 17|128,7/*913*/, 
/*1252*/      OPC_MoveParent,
/*1253*/      OPC_RecordChild2, // #1 = $b
/*1254*/      OPC_Scope, 20, /*->1276*/ // 2 children in Scope
/*1256*/        OPC_MoveChild, 2,
/*1258*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1261*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1263*/        OPC_MoveParent,
/*1264*/        OPC_EmitMergeInputChains1_0,
/*1265*/        OPC_EmitConvertToTarget, 1,
/*1267*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 913:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NEGET:i32:i32 (imm:i32):$b)
/*1276*/      /*Scope*/ 10, /*->1287*/
/*1277*/        OPC_EmitMergeInputChains1_0,
/*1278*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 913:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NEGETD:i32:i32 GPR:i32:$b)
/*1287*/      0, /*End of Scope*/
/*1288*/    /*Scope*/ 39, /*->1328*/
/*1289*/      OPC_CheckInteger, 14|128,7/*910*/, 
/*1292*/      OPC_MoveParent,
/*1293*/      OPC_RecordChild2, // #1 = $b
/*1294*/      OPC_Scope, 20, /*->1316*/ // 2 children in Scope
/*1296*/        OPC_MoveChild, 2,
/*1298*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1301*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1303*/        OPC_MoveParent,
/*1304*/        OPC_EmitMergeInputChains1_0,
/*1305*/        OPC_EmitConvertToTarget, 1,
/*1307*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 910:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NEAGET:i32:i32 (imm:i32):$b)
/*1316*/      /*Scope*/ 10, /*->1327*/
/*1317*/        OPC_EmitMergeInputChains1_0,
/*1318*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NEAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 910:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NEAGETD:i32:i32 GPR:i32:$b)
/*1327*/      0, /*End of Scope*/
/*1328*/    /*Scope*/ 39, /*->1368*/
/*1329*/      OPC_CheckInteger, 16|128,7/*912*/, 
/*1332*/      OPC_MoveParent,
/*1333*/      OPC_RecordChild2, // #1 = $b
/*1334*/      OPC_Scope, 20, /*->1356*/ // 2 children in Scope
/*1336*/        OPC_MoveChild, 2,
/*1338*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1341*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1343*/        OPC_MoveParent,
/*1344*/        OPC_EmitMergeInputChains1_0,
/*1345*/        OPC_EmitConvertToTarget, 1,
/*1347*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 912:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NECGET:i32:i32 (imm:i32):$b)
/*1356*/      /*Scope*/ 10, /*->1367*/
/*1357*/        OPC_EmitMergeInputChains1_0,
/*1358*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 912:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NECGETD:i32:i32 GPR:i32:$b)
/*1367*/      0, /*End of Scope*/
/*1368*/    /*Scope*/ 39, /*->1408*/
/*1369*/      OPC_CheckInteger, 15|128,7/*911*/, 
/*1372*/      OPC_MoveParent,
/*1373*/      OPC_RecordChild2, // #1 = $b
/*1374*/      OPC_Scope, 20, /*->1396*/ // 2 children in Scope
/*1376*/        OPC_MoveChild, 2,
/*1378*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1381*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1383*/        OPC_MoveParent,
/*1384*/        OPC_EmitMergeInputChains1_0,
/*1385*/        OPC_EmitConvertToTarget, 1,
/*1387*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 911:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NECAGET:i32:i32 (imm:i32):$b)
/*1396*/      /*Scope*/ 10, /*->1407*/
/*1397*/        OPC_EmitMergeInputChains1_0,
/*1398*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NECAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 911:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (NECAGETD:i32:i32 GPR:i32:$b)
/*1407*/      0, /*End of Scope*/
/*1408*/    /*Scope*/ 39, /*->1448*/
/*1409*/      OPC_CheckInteger, 42|128,7/*938*/, 
/*1412*/      OPC_MoveParent,
/*1413*/      OPC_RecordChild2, // #1 = $b
/*1414*/      OPC_Scope, 20, /*->1436*/ // 2 children in Scope
/*1416*/        OPC_MoveChild, 2,
/*1418*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1421*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1423*/        OPC_MoveParent,
/*1424*/        OPC_EmitMergeInputChains1_0,
/*1425*/        OPC_EmitConvertToTarget, 1,
/*1427*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 938:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNGET:i32:i32 (imm:i32):$b)
/*1436*/      /*Scope*/ 10, /*->1447*/
/*1437*/        OPC_EmitMergeInputChains1_0,
/*1438*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 938:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNGETD:i32:i32 GPR:i32:$b)
/*1447*/      0, /*End of Scope*/
/*1448*/    /*Scope*/ 39, /*->1488*/
/*1449*/      OPC_CheckInteger, 32|128,7/*928*/, 
/*1452*/      OPC_MoveParent,
/*1453*/      OPC_RecordChild2, // #1 = $b
/*1454*/      OPC_Scope, 20, /*->1476*/ // 2 children in Scope
/*1456*/        OPC_MoveChild, 2,
/*1458*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1461*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1463*/        OPC_MoveParent,
/*1464*/        OPC_EmitMergeInputChains1_0,
/*1465*/        OPC_EmitConvertToTarget, 1,
/*1467*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 928:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNAGET:i32:i32 (imm:i32):$b)
/*1476*/      /*Scope*/ 10, /*->1487*/
/*1477*/        OPC_EmitMergeInputChains1_0,
/*1478*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 928:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNAGETD:i32:i32 GPR:i32:$b)
/*1487*/      0, /*End of Scope*/
/*1488*/    /*Scope*/ 39, /*->1528*/
/*1489*/      OPC_CheckInteger, 36|128,7/*932*/, 
/*1492*/      OPC_MoveParent,
/*1493*/      OPC_RecordChild2, // #1 = $b
/*1494*/      OPC_Scope, 20, /*->1516*/ // 2 children in Scope
/*1496*/        OPC_MoveChild, 2,
/*1498*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1501*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1503*/        OPC_MoveParent,
/*1504*/        OPC_EmitMergeInputChains1_0,
/*1505*/        OPC_EmitConvertToTarget, 1,
/*1507*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 932:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCGET:i32:i32 (imm:i32):$b)
/*1516*/      /*Scope*/ 10, /*->1527*/
/*1517*/        OPC_EmitMergeInputChains1_0,
/*1518*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 932:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCGETD:i32:i32 GPR:i32:$b)
/*1527*/      0, /*End of Scope*/
/*1528*/    /*Scope*/ 39, /*->1568*/
/*1529*/      OPC_CheckInteger, 34|128,7/*930*/, 
/*1532*/      OPC_MoveParent,
/*1533*/      OPC_RecordChild2, // #1 = $b
/*1534*/      OPC_Scope, 20, /*->1556*/ // 2 children in Scope
/*1536*/        OPC_MoveChild, 2,
/*1538*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1541*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1543*/        OPC_MoveParent,
/*1544*/        OPC_EmitMergeInputChains1_0,
/*1545*/        OPC_EmitConvertToTarget, 1,
/*1547*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 930:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCAGET:i32:i32 (imm:i32):$b)
/*1556*/      /*Scope*/ 10, /*->1567*/
/*1557*/        OPC_EmitMergeInputChains1_0,
/*1558*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 930:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCAGETD:i32:i32 GPR:i32:$b)
/*1567*/      0, /*End of Scope*/
/*1568*/    /*Scope*/ 39, /*->1608*/
/*1569*/      OPC_CheckInteger, 41|128,7/*937*/, 
/*1572*/      OPC_MoveParent,
/*1573*/      OPC_RecordChild2, // #1 = $b
/*1574*/      OPC_Scope, 20, /*->1596*/ // 2 children in Scope
/*1576*/        OPC_MoveChild, 2,
/*1578*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1581*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1583*/        OPC_MoveParent,
/*1584*/        OPC_EmitMergeInputChains1_0,
/*1585*/        OPC_EmitConvertToTarget, 1,
/*1587*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 937:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNEGET:i32:i32 (imm:i32):$b)
/*1596*/      /*Scope*/ 10, /*->1607*/
/*1597*/        OPC_EmitMergeInputChains1_0,
/*1598*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 937:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNEGETD:i32:i32 GPR:i32:$b)
/*1607*/      0, /*End of Scope*/
/*1608*/    /*Scope*/ 39, /*->1648*/
/*1609*/      OPC_CheckInteger, 38|128,7/*934*/, 
/*1612*/      OPC_MoveParent,
/*1613*/      OPC_RecordChild2, // #1 = $b
/*1614*/      OPC_Scope, 20, /*->1636*/ // 2 children in Scope
/*1616*/        OPC_MoveChild, 2,
/*1618*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1621*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1623*/        OPC_MoveParent,
/*1624*/        OPC_EmitMergeInputChains1_0,
/*1625*/        OPC_EmitConvertToTarget, 1,
/*1627*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 934:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNEAGET:i32:i32 (imm:i32):$b)
/*1636*/      /*Scope*/ 10, /*->1647*/
/*1637*/        OPC_EmitMergeInputChains1_0,
/*1638*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNEAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 934:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNEAGETD:i32:i32 GPR:i32:$b)
/*1647*/      0, /*End of Scope*/
/*1648*/    /*Scope*/ 39, /*->1688*/
/*1649*/      OPC_CheckInteger, 40|128,7/*936*/, 
/*1652*/      OPC_MoveParent,
/*1653*/      OPC_RecordChild2, // #1 = $b
/*1654*/      OPC_Scope, 20, /*->1676*/ // 2 children in Scope
/*1656*/        OPC_MoveChild, 2,
/*1658*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1661*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1663*/        OPC_MoveParent,
/*1664*/        OPC_EmitMergeInputChains1_0,
/*1665*/        OPC_EmitConvertToTarget, 1,
/*1667*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 936:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNECGET:i32:i32 (imm:i32):$b)
/*1676*/      /*Scope*/ 10, /*->1687*/
/*1677*/        OPC_EmitMergeInputChains1_0,
/*1678*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 936:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNECGETD:i32:i32 GPR:i32:$b)
/*1687*/      0, /*End of Scope*/
/*1688*/    /*Scope*/ 39, /*->1728*/
/*1689*/      OPC_CheckInteger, 39|128,7/*935*/, 
/*1692*/      OPC_MoveParent,
/*1693*/      OPC_RecordChild2, // #1 = $b
/*1694*/      OPC_Scope, 20, /*->1716*/ // 2 children in Scope
/*1696*/        OPC_MoveChild, 2,
/*1698*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1701*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1703*/        OPC_MoveParent,
/*1704*/        OPC_EmitMergeInputChains1_0,
/*1705*/        OPC_EmitConvertToTarget, 1,
/*1707*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECAGET), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_w_chain:i32 935:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNECAGET:i32:i32 (imm:i32):$b)
/*1716*/      /*Scope*/ 10, /*->1727*/
/*1717*/        OPC_EmitMergeInputChains1_0,
/*1718*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNECAGETD), 0|OPFL_Chain,
                    2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_w_chain:i32 935:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNECAGETD:i32:i32 GPR:i32:$b)
/*1727*/      0, /*End of Scope*/
/*1728*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 109|128,4/*621*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->2354
/*1733*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*1734*/    OPC_MoveChild, 1,
/*1736*/    OPC_Scope, 38, /*->1776*/ // 16 children in Scope
/*1738*/      OPC_CheckInteger, 20|128,7/*916*/, 
/*1741*/      OPC_MoveParent,
/*1742*/      OPC_RecordChild2, // #1 = $v
/*1743*/      OPC_RecordChild3, // #2 = $b
/*1744*/      OPC_Scope, 19, /*->1765*/ // 2 children in Scope
/*1746*/        OPC_MoveChild, 3,
/*1748*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1751*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1753*/        OPC_MoveParent,
/*1754*/        OPC_EmitMergeInputChains1_0,
/*1755*/        OPC_EmitConvertToTarget, 2,
/*1757*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::PUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 916:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (PUT GPR:i32:$v, (imm:i32):$b)
/*1765*/      /*Scope*/ 9, /*->1775*/
/*1766*/        OPC_EmitMergeInputChains1_0,
/*1767*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::PUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 916:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (PUTD GPR:i32:$v, GPR:i32:$b)
/*1775*/      0, /*End of Scope*/
/*1776*/    /*Scope*/ 38, /*->1815*/
/*1777*/      OPC_CheckInteger, 126|128,6/*894*/, 
/*1780*/      OPC_MoveParent,
/*1781*/      OPC_RecordChild2, // #1 = $v
/*1782*/      OPC_RecordChild3, // #2 = $b
/*1783*/      OPC_Scope, 19, /*->1804*/ // 2 children in Scope
/*1785*/        OPC_MoveChild, 3,
/*1787*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1790*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1792*/        OPC_MoveParent,
/*1793*/        OPC_EmitMergeInputChains1_0,
/*1794*/        OPC_EmitConvertToTarget, 2,
/*1796*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::APUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 894:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (APUT GPR:i32:$v, (imm:i32):$b)
/*1804*/      /*Scope*/ 9, /*->1814*/
/*1805*/        OPC_EmitMergeInputChains1_0,
/*1806*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::APUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 894:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (APUTD GPR:i32:$v, GPR:i32:$b)
/*1814*/      0, /*End of Scope*/
/*1815*/    /*Scope*/ 38, /*->1854*/
/*1816*/      OPC_CheckInteger, 2|128,7/*898*/, 
/*1819*/      OPC_MoveParent,
/*1820*/      OPC_RecordChild2, // #1 = $v
/*1821*/      OPC_RecordChild3, // #2 = $b
/*1822*/      OPC_Scope, 19, /*->1843*/ // 2 children in Scope
/*1824*/        OPC_MoveChild, 3,
/*1826*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1829*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1831*/        OPC_MoveParent,
/*1832*/        OPC_EmitMergeInputChains1_0,
/*1833*/        OPC_EmitConvertToTarget, 2,
/*1835*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 898:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CPUT GPR:i32:$v, (imm:i32):$b)
/*1843*/      /*Scope*/ 9, /*->1853*/
/*1844*/        OPC_EmitMergeInputChains1_0,
/*1845*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 898:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (CPUTD GPR:i32:$v, GPR:i32:$b)
/*1853*/      0, /*End of Scope*/
/*1854*/    /*Scope*/ 38, /*->1893*/
/*1855*/      OPC_CheckInteger, 0|128,7/*896*/, 
/*1858*/      OPC_MoveParent,
/*1859*/      OPC_RecordChild2, // #1 = $v
/*1860*/      OPC_RecordChild3, // #2 = $b
/*1861*/      OPC_Scope, 19, /*->1882*/ // 2 children in Scope
/*1863*/        OPC_MoveChild, 3,
/*1865*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1868*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1870*/        OPC_MoveParent,
/*1871*/        OPC_EmitMergeInputChains1_0,
/*1872*/        OPC_EmitConvertToTarget, 2,
/*1874*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 896:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (CAPUT GPR:i32:$v, (imm:i32):$b)
/*1882*/      /*Scope*/ 9, /*->1892*/
/*1883*/        OPC_EmitMergeInputChains1_0,
/*1884*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 896:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (CAPUTD GPR:i32:$v, GPR:i32:$b)
/*1892*/      0, /*End of Scope*/
/*1893*/    /*Scope*/ 35, /*->1929*/
/*1894*/      OPC_CheckInteger, 44|128,7/*940*/, 
/*1897*/      OPC_MoveParent,
/*1898*/      OPC_RecordChild2, // #1 = $b
/*1899*/      OPC_Scope, 18, /*->1919*/ // 2 children in Scope
/*1901*/        OPC_MoveChild, 2,
/*1903*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1906*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1908*/        OPC_MoveParent,
/*1909*/        OPC_EmitMergeInputChains1_0,
/*1910*/        OPC_EmitConvertToTarget, 1,
/*1912*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 940:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TPUT (imm:i32):$b)
/*1919*/      /*Scope*/ 8, /*->1928*/
/*1920*/        OPC_EmitMergeInputChains1_0,
/*1921*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 940:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TPUTD GPR:i32:$b)
/*1928*/      0, /*End of Scope*/
/*1929*/    /*Scope*/ 35, /*->1965*/
/*1930*/      OPC_CheckInteger, 22|128,7/*918*/, 
/*1933*/      OPC_MoveParent,
/*1934*/      OPC_RecordChild2, // #1 = $b
/*1935*/      OPC_Scope, 18, /*->1955*/ // 2 children in Scope
/*1937*/        OPC_MoveChild, 2,
/*1939*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1942*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1944*/        OPC_MoveParent,
/*1945*/        OPC_EmitMergeInputChains1_0,
/*1946*/        OPC_EmitConvertToTarget, 1,
/*1948*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 918:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TAPUT (imm:i32):$b)
/*1955*/      /*Scope*/ 8, /*->1964*/
/*1956*/        OPC_EmitMergeInputChains1_0,
/*1957*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 918:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TAPUTD GPR:i32:$b)
/*1964*/      0, /*End of Scope*/
/*1965*/    /*Scope*/ 35, /*->2001*/
/*1966*/      OPC_CheckInteger, 26|128,7/*922*/, 
/*1969*/      OPC_MoveParent,
/*1970*/      OPC_RecordChild2, // #1 = $b
/*1971*/      OPC_Scope, 18, /*->1991*/ // 2 children in Scope
/*1973*/        OPC_MoveChild, 2,
/*1975*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1978*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*1980*/        OPC_MoveParent,
/*1981*/        OPC_EmitMergeInputChains1_0,
/*1982*/        OPC_EmitConvertToTarget, 1,
/*1984*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 922:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCPUT (imm:i32):$b)
/*1991*/      /*Scope*/ 8, /*->2000*/
/*1992*/        OPC_EmitMergeInputChains1_0,
/*1993*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 922:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCPUTD GPR:i32:$b)
/*2000*/      0, /*End of Scope*/
/*2001*/    /*Scope*/ 35, /*->2037*/
/*2002*/      OPC_CheckInteger, 24|128,7/*920*/, 
/*2005*/      OPC_MoveParent,
/*2006*/      OPC_RecordChild2, // #1 = $b
/*2007*/      OPC_Scope, 18, /*->2027*/ // 2 children in Scope
/*2009*/        OPC_MoveChild, 2,
/*2011*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2014*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2016*/        OPC_MoveParent,
/*2017*/        OPC_EmitMergeInputChains1_0,
/*2018*/        OPC_EmitConvertToTarget, 1,
/*2020*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAPUT), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 920:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TCAPUT (imm:i32):$b)
/*2027*/      /*Scope*/ 8, /*->2036*/
/*2028*/        OPC_EmitMergeInputChains1_0,
/*2029*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TCAPUTD), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 920:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TCAPUTD GPR:i32:$b)
/*2036*/      0, /*End of Scope*/
/*2037*/    /*Scope*/ 40, /*->2078*/
/*2038*/      OPC_CheckInteger, 19|128,7/*915*/, 
/*2041*/      OPC_MoveParent,
/*2042*/      OPC_RecordChild2, // #1 = $v
/*2043*/      OPC_RecordChild3, // #2 = $b
/*2044*/      OPC_Scope, 20, /*->2066*/ // 2 children in Scope
/*2046*/        OPC_MoveChild, 3,
/*2048*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2051*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2053*/        OPC_MoveParent,
/*2054*/        OPC_EmitMergeInputChains1_0,
/*2055*/        OPC_EmitConvertToTarget, 2,
/*2057*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 915:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2066*/      /*Scope*/ 10, /*->2077*/
/*2067*/        OPC_EmitMergeInputChains1_0,
/*2068*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 915:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2077*/      0, /*End of Scope*/
/*2078*/    /*Scope*/ 40, /*->2119*/
/*2079*/      OPC_CheckInteger, 9|128,7/*905*/, 
/*2082*/      OPC_MoveParent,
/*2083*/      OPC_RecordChild2, // #1 = $v
/*2084*/      OPC_RecordChild3, // #2 = $b
/*2085*/      OPC_Scope, 20, /*->2107*/ // 2 children in Scope
/*2087*/        OPC_MoveChild, 3,
/*2089*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2092*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2094*/        OPC_MoveParent,
/*2095*/        OPC_EmitMergeInputChains1_0,
/*2096*/        OPC_EmitConvertToTarget, 2,
/*2098*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 905:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NAPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2107*/      /*Scope*/ 10, /*->2118*/
/*2108*/        OPC_EmitMergeInputChains1_0,
/*2109*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 905:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NAPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2118*/      0, /*End of Scope*/
/*2119*/    /*Scope*/ 40, /*->2160*/
/*2120*/      OPC_CheckInteger, 13|128,7/*909*/, 
/*2123*/      OPC_MoveParent,
/*2124*/      OPC_RecordChild2, // #1 = $v
/*2125*/      OPC_RecordChild3, // #2 = $b
/*2126*/      OPC_Scope, 20, /*->2148*/ // 2 children in Scope
/*2128*/        OPC_MoveChild, 3,
/*2130*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2133*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2135*/        OPC_MoveParent,
/*2136*/        OPC_EmitMergeInputChains1_0,
/*2137*/        OPC_EmitConvertToTarget, 2,
/*2139*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 909:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2148*/      /*Scope*/ 10, /*->2159*/
/*2149*/        OPC_EmitMergeInputChains1_0,
/*2150*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 909:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NCPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2159*/      0, /*End of Scope*/
/*2160*/    /*Scope*/ 40, /*->2201*/
/*2161*/      OPC_CheckInteger, 11|128,7/*907*/, 
/*2164*/      OPC_MoveParent,
/*2165*/      OPC_RecordChild2, // #1 = $v
/*2166*/      OPC_RecordChild3, // #2 = $b
/*2167*/      OPC_Scope, 20, /*->2189*/ // 2 children in Scope
/*2169*/        OPC_MoveChild, 3,
/*2171*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2174*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2176*/        OPC_MoveParent,
/*2177*/        OPC_EmitMergeInputChains1_0,
/*2178*/        OPC_EmitConvertToTarget, 2,
/*2180*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 3, 
                // Src: (intrinsic_void 907:iPTR, GPR:i32:$v, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (NCAPUT:i32 GPR:i32:$v, (imm:i32):$b)
/*2189*/      /*Scope*/ 10, /*->2200*/
/*2190*/        OPC_EmitMergeInputChains1_0,
/*2191*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::NCAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (intrinsic_void 907:iPTR, GPR:i32:$v, GPR:i32:$b) - Complexity = 8
                // Dst: (NCAPUTD:i32 GPR:i32:$v, GPR:i32:$b)
/*2200*/      0, /*End of Scope*/
/*2201*/    /*Scope*/ 37, /*->2239*/
/*2202*/      OPC_CheckInteger, 43|128,7/*939*/, 
/*2205*/      OPC_MoveParent,
/*2206*/      OPC_RecordChild2, // #1 = $b
/*2207*/      OPC_Scope, 19, /*->2228*/ // 2 children in Scope
/*2209*/        OPC_MoveChild, 2,
/*2211*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2214*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2216*/        OPC_MoveParent,
/*2217*/        OPC_EmitMergeInputChains1_0,
/*2218*/        OPC_EmitConvertToTarget, 1,
/*2220*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 939:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNPUT:i32 (imm:i32):$b)
/*2228*/      /*Scope*/ 9, /*->2238*/
/*2229*/        OPC_EmitMergeInputChains1_0,
/*2230*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 939:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNPUTD:i32 GPR:i32:$b)
/*2238*/      0, /*End of Scope*/
/*2239*/    /*Scope*/ 37, /*->2277*/
/*2240*/      OPC_CheckInteger, 33|128,7/*929*/, 
/*2243*/      OPC_MoveParent,
/*2244*/      OPC_RecordChild2, // #1 = $b
/*2245*/      OPC_Scope, 19, /*->2266*/ // 2 children in Scope
/*2247*/        OPC_MoveChild, 2,
/*2249*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2252*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2254*/        OPC_MoveParent,
/*2255*/        OPC_EmitMergeInputChains1_0,
/*2256*/        OPC_EmitConvertToTarget, 1,
/*2258*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 929:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNAPUT:i32 (imm:i32):$b)
/*2266*/      /*Scope*/ 9, /*->2276*/
/*2267*/        OPC_EmitMergeInputChains1_0,
/*2268*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 929:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNAPUTD:i32 GPR:i32:$b)
/*2276*/      0, /*End of Scope*/
/*2277*/    /*Scope*/ 37, /*->2315*/
/*2278*/      OPC_CheckInteger, 37|128,7/*933*/, 
/*2281*/      OPC_MoveParent,
/*2282*/      OPC_RecordChild2, // #1 = $b
/*2283*/      OPC_Scope, 19, /*->2304*/ // 2 children in Scope
/*2285*/        OPC_MoveChild, 2,
/*2287*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2290*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2292*/        OPC_MoveParent,
/*2293*/        OPC_EmitMergeInputChains1_0,
/*2294*/        OPC_EmitConvertToTarget, 1,
/*2296*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 933:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCPUT:i32 (imm:i32):$b)
/*2304*/      /*Scope*/ 9, /*->2314*/
/*2305*/        OPC_EmitMergeInputChains1_0,
/*2306*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 933:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCPUTD:i32 GPR:i32:$b)
/*2314*/      0, /*End of Scope*/
/*2315*/    /*Scope*/ 37, /*->2353*/
/*2316*/      OPC_CheckInteger, 35|128,7/*931*/, 
/*2319*/      OPC_MoveParent,
/*2320*/      OPC_RecordChild2, // #1 = $b
/*2321*/      OPC_Scope, 19, /*->2342*/ // 2 children in Scope
/*2323*/        OPC_MoveChild, 2,
/*2325*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2328*/        OPC_CheckPredicate, 13, // Predicate_immZExt4
/*2330*/        OPC_MoveParent,
/*2331*/        OPC_EmitMergeInputChains1_0,
/*2332*/        OPC_EmitConvertToTarget, 1,
/*2334*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAPUT), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (intrinsic_void 931:iPTR, (imm:i32)<<P:Predicate_immZExt4>>:$b) - Complexity = 12
                // Dst: (TNCAPUT:i32 (imm:i32):$b)
/*2342*/      /*Scope*/ 9, /*->2352*/
/*2343*/        OPC_EmitMergeInputChains1_0,
/*2344*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::TNCAPUTD), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (intrinsic_void 931:iPTR, GPR:i32:$b) - Complexity = 8
                // Dst: (TNCAPUTD:i32 GPR:i32:$b)
/*2352*/      0, /*End of Scope*/
/*2353*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 101,  TARGET_VAL(ISD::AND),// ->2458
/*2357*/    OPC_Scope, 31, /*->2390*/ // 3 children in Scope
/*2359*/      OPC_RecordChild0, // #0 = $lh
/*2360*/      OPC_MoveChild, 1,
/*2362*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2365*/      OPC_RecordChild0, // #1 = $rh
/*2366*/      OPC_MoveChild, 1,
/*2368*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2379*/      OPC_MoveParent,
/*2380*/      OPC_MoveParent,
/*2381*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDN), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:i32 GPR:i32:$lh, (xor:i32 GPR:i32:$rh, -1:i32)) - Complexity = 11
              // Dst: (ANDN:i32 GPR:i32:$lh, GPR:i32:$rh)
/*2390*/    /*Scope*/ 31, /*->2422*/
/*2391*/      OPC_MoveChild, 0,
/*2393*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*2396*/      OPC_RecordChild0, // #0 = $rh
/*2397*/      OPC_MoveChild, 1,
/*2399*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*2410*/      OPC_MoveParent,
/*2411*/      OPC_MoveParent,
/*2412*/      OPC_RecordChild1, // #1 = $lh
/*2413*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDN), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (and:i32 (xor:i32 GPR:i32:$rh, -1:i32), GPR:i32:$lh) - Complexity = 11
              // Dst: (ANDN:i32 GPR:i32:$lh, GPR:i32:$rh)
/*2422*/    /*Scope*/ 34, /*->2457*/
/*2423*/      OPC_RecordChild0, // #0 = $b
/*2424*/      OPC_RecordChild1, // #1 = $c
/*2425*/      OPC_Scope, 19, /*->2446*/ // 2 children in Scope
/*2427*/        OPC_MoveChild, 1,
/*2429*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2432*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*2434*/        OPC_MoveParent,
/*2435*/        OPC_EmitConvertToTarget, 1,
/*2437*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ANDI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (and:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
                // Dst: (ANDI:i32 GPR:i32:$b, (imm:i32):$c)
/*2446*/      /*Scope*/ 9, /*->2456*/
/*2447*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::AND), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
                // Dst: (AND:i32 GPR:i32:$b, GPR:i32:$c)
/*2456*/      0, /*End of Scope*/
/*2457*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 25,  TARGET_VAL(ISD::CALLSEQ_END),// ->2486
/*2461*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*2462*/    OPC_CaptureGlueInput,
/*2463*/    OPC_RecordChild1, // #1 = $amt1
/*2464*/    OPC_MoveChild, 1,
/*2466*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2469*/    OPC_MoveParent,
/*2470*/    OPC_RecordChild2, // #2 = $amt2
/*2471*/    OPC_MoveChild, 2,
/*2473*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*2476*/    OPC_MoveParent,
/*2477*/    OPC_EmitMergeInputChains1_0,
/*2478*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SRL),// ->2537
/*2489*/    OPC_RecordChild0, // #0 = $b
/*2490*/    OPC_RecordChild1, // #1 = $c
/*2491*/    OPC_Scope, 21, /*->2514*/ // 3 children in Scope
/*2493*/      OPC_MoveChild, 1,
/*2495*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2498*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*2500*/      OPC_MoveParent,
/*2501*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*2503*/      OPC_EmitConvertToTarget, 1,
/*2505*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (srl:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSRLI:i32 GPR:i32:$b, (imm:i32):$c)
/*2514*/    /*Scope*/ 11, /*->2526*/
/*2515*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*2517*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSRL:i32 GPR:i32:$b, GPR:i32:$c)
/*2526*/    /*Scope*/ 9, /*->2536*/
/*2527*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftRL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftRL:i32 GPR:i32:$L, GPR:i32:$R)
/*2536*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SRA),// ->2588
/*2540*/    OPC_RecordChild0, // #0 = $b
/*2541*/    OPC_RecordChild1, // #1 = $c
/*2542*/    OPC_Scope, 21, /*->2565*/ // 3 children in Scope
/*2544*/      OPC_MoveChild, 1,
/*2546*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2549*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*2551*/      OPC_MoveParent,
/*2552*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*2554*/      OPC_EmitConvertToTarget, 1,
/*2556*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRAI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (sra:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSRAI:i32 GPR:i32:$b, (imm:i32):$c)
/*2565*/    /*Scope*/ 11, /*->2577*/
/*2566*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*2568*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSRA:i32 GPR:i32:$b, GPR:i32:$c)
/*2577*/    /*Scope*/ 9, /*->2587*/
/*2578*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftRA), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftRA:i32 GPR:i32:$L, GPR:i32:$R)
/*2587*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 48,  TARGET_VAL(ISD::SHL),// ->2639
/*2591*/    OPC_RecordChild0, // #0 = $b
/*2592*/    OPC_RecordChild1, // #1 = $c
/*2593*/    OPC_Scope, 21, /*->2616*/ // 3 children in Scope
/*2595*/      OPC_MoveChild, 1,
/*2597*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2600*/      OPC_CheckPredicate, 15, // Predicate_immZExt5
/*2602*/      OPC_MoveParent,
/*2603*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*2605*/      OPC_EmitConvertToTarget, 1,
/*2607*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSLLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (shl:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt5>>:$c) - Complexity = 7
              // Dst: (BSLLI:i32 GPR:i32:$b, (imm:i32):$c)
/*2616*/    /*Scope*/ 11, /*->2628*/
/*2617*/      OPC_CheckPatternPredicate, 1, // (Subtarget.hasBarrel())
/*2619*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BSLL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (BSLL:i32 GPR:i32:$b, GPR:i32:$c)
/*2628*/    /*Scope*/ 9, /*->2638*/
/*2629*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ShiftL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:i32 GPR:i32:$L, GPR:i32:$R) - Complexity = 3
              // Dst: (ShiftL:i32 GPR:i32:$L, GPR:i32:$R)
/*2638*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::ADD),// ->2692
/*2642*/    OPC_RecordChild0, // #0 = $b
/*2643*/    OPC_RecordChild1, // #1 = $c
/*2644*/    OPC_Scope, 35, /*->2681*/ // 2 children in Scope
/*2646*/      OPC_MoveChild, 1,
/*2648*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2651*/      OPC_Scope, 14, /*->2667*/ // 2 children in Scope
/*2653*/        OPC_CheckPredicate, 16, // Predicate_immSExt16
/*2655*/        OPC_MoveParent,
/*2656*/        OPC_EmitConvertToTarget, 1,
/*2658*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (add:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
                // Dst: (ADDIK:i32 GPR:i32:$b, (imm:i32):$c)
/*2667*/      /*Scope*/ 12, /*->2680*/
/*2668*/        OPC_MoveParent,
/*2669*/        OPC_EmitConvertToTarget, 1,
/*2671*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (add:i32 GPR:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (ADDIK:i32 GPR:i32:$in, (imm:i32):$imm)
/*2680*/      0, /*End of Scope*/
/*2681*/    /*Scope*/ 9, /*->2691*/
/*2682*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (add:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADDK:i32 GPR:i32:$b, GPR:i32:$c)
/*2691*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(ISD::SUB),// ->2730
/*2695*/    OPC_RecordChild0, // #0 = $b
/*2696*/    OPC_Scope, 20, /*->2718*/ // 2 children in Scope
/*2698*/      OPC_MoveChild, 0,
/*2700*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2703*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*2705*/      OPC_MoveParent,
/*2706*/      OPC_RecordChild1, // #1 = $c
/*2707*/      OPC_EmitConvertToTarget, 0,
/*2709*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBIK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBIK:i32 (imm:i32):$b, GPR:i32:$c)
/*2718*/    /*Scope*/ 10, /*->2729*/
/*2719*/      OPC_RecordChild1, // #1 = $c
/*2720*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sub:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUBK:i32 GPR:i32:$b, GPR:i32:$c)
/*2729*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::OR),// ->2783
/*2733*/    OPC_RecordChild0, // #0 = $b
/*2734*/    OPC_RecordChild1, // #1 = $c
/*2735*/    OPC_Scope, 35, /*->2772*/ // 2 children in Scope
/*2737*/      OPC_MoveChild, 1,
/*2739*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2742*/      OPC_Scope, 14, /*->2758*/ // 2 children in Scope
/*2744*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*2746*/        OPC_MoveParent,
/*2747*/        OPC_EmitConvertToTarget, 1,
/*2749*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (or:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
                // Dst: (ORI:i32 GPR:i32:$b, (imm:i32):$c)
/*2758*/      /*Scope*/ 12, /*->2771*/
/*2759*/        OPC_MoveParent,
/*2760*/        OPC_EmitConvertToTarget, 1,
/*2762*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (or:i32 GPR:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (ORI:i32 GPR:i32:$in, (imm:i32):$imm)
/*2771*/      0, /*End of Scope*/
/*2772*/    /*Scope*/ 9, /*->2782*/
/*2773*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::OR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (or:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (OR:i32 GPR:i32:$b, GPR:i32:$c)
/*2782*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::XOR),// ->2836
/*2786*/    OPC_RecordChild0, // #0 = $b
/*2787*/    OPC_RecordChild1, // #1 = $c
/*2788*/    OPC_Scope, 35, /*->2825*/ // 2 children in Scope
/*2790*/      OPC_MoveChild, 1,
/*2792*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2795*/      OPC_Scope, 14, /*->2811*/ // 2 children in Scope
/*2797*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*2799*/        OPC_MoveParent,
/*2800*/        OPC_EmitConvertToTarget, 1,
/*2802*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::XORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (xor:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immZExt16>>:$c) - Complexity = 7
                // Dst: (XORI:i32 GPR:i32:$b, (imm:i32):$c)
/*2811*/      /*Scope*/ 12, /*->2824*/
/*2812*/        OPC_MoveParent,
/*2813*/        OPC_EmitConvertToTarget, 1,
/*2815*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::XORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (xor:i32 GPR:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (XORI:i32 GPR:i32:$in, (imm:i32):$imm)
/*2824*/      0, /*End of Scope*/
/*2825*/    /*Scope*/ 9, /*->2835*/
/*2826*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::XOR), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (XOR:i32 GPR:i32:$b, GPR:i32:$c)
/*2835*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 36,  TARGET_VAL(ISD::ADDC),// ->2875
/*2839*/    OPC_RecordChild0, // #0 = $b
/*2840*/    OPC_RecordChild1, // #1 = $c
/*2841*/    OPC_Scope, 20, /*->2863*/ // 2 children in Scope
/*2843*/      OPC_MoveChild, 1,
/*2845*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2848*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*2850*/      OPC_MoveParent,
/*2851*/      OPC_EmitConvertToTarget, 1,
/*2853*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDI), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (addc:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDI:i32:i32 GPR:i32:$b, (imm:i32):$c)
/*2863*/    /*Scope*/ 10, /*->2874*/
/*2864*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADD), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADD:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*2874*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::SUBC),// ->2915
/*2878*/    OPC_RecordChild0, // #0 = $b
/*2879*/    OPC_Scope, 21, /*->2902*/ // 2 children in Scope
/*2881*/      OPC_MoveChild, 0,
/*2883*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2886*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*2888*/      OPC_MoveParent,
/*2889*/      OPC_RecordChild1, // #1 = $c
/*2890*/      OPC_EmitConvertToTarget, 0,
/*2892*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBI), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBI:i32:i32 (imm:i32):$b, GPR:i32:$c)
/*2902*/    /*Scope*/ 11, /*->2914*/
/*2903*/      OPC_RecordChild1, // #1 = $c
/*2904*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUB), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (subc:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUB:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*2914*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ADDE),// ->2955
/*2918*/    OPC_CaptureGlueInput,
/*2919*/    OPC_RecordChild0, // #0 = $b
/*2920*/    OPC_RecordChild1, // #1 = $c
/*2921*/    OPC_Scope, 20, /*->2943*/ // 2 children in Scope
/*2923*/      OPC_MoveChild, 1,
/*2925*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2928*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*2930*/      OPC_MoveParent,
/*2931*/      OPC_EmitConvertToTarget, 1,
/*2933*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (adde:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (ADDIC:i32:i32 GPR:i32:$b, (imm:i32):$c)
/*2943*/    /*Scope*/ 10, /*->2954*/
/*2944*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (adde:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*2954*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::SUBE),// ->2996
/*2958*/    OPC_CaptureGlueInput,
/*2959*/    OPC_RecordChild0, // #0 = $b
/*2960*/    OPC_Scope, 21, /*->2983*/ // 2 children in Scope
/*2962*/      OPC_MoveChild, 0,
/*2964*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2967*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*2969*/      OPC_MoveParent,
/*2970*/      OPC_RecordChild1, // #1 = $c
/*2971*/      OPC_EmitConvertToTarget, 0,
/*2973*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBIC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 2, 1, 
              // Src: (sube:i32 (imm:i32)<<P:Predicate_immSExt16>>:$b, GPR:i32:$c) - Complexity = 7
              // Dst: (RSUBIC:i32:i32 (imm:i32):$b, GPR:i32:$c)
/*2983*/    /*Scope*/ 11, /*->2995*/
/*2984*/      OPC_RecordChild1, // #1 = $c
/*2985*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::RSUBC), 0|OPFL_GlueInput|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sube:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (RSUBC:i32:i32 GPR:i32:$b, GPR:i32:$c)
/*2995*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 38,  TARGET_VAL(ISD::MUL),// ->3037
/*2999*/    OPC_RecordChild0, // #0 = $b
/*3000*/    OPC_RecordChild1, // #1 = $c
/*3001*/    OPC_Scope, 21, /*->3024*/ // 2 children in Scope
/*3003*/      OPC_MoveChild, 1,
/*3005*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3008*/      OPC_CheckPredicate, 16, // Predicate_immSExt16
/*3010*/      OPC_MoveParent,
/*3011*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasMul())
/*3013*/      OPC_EmitConvertToTarget, 1,
/*3015*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPR:i32:$b, (imm:i32)<<P:Predicate_immSExt16>>:$c) - Complexity = 7
              // Dst: (MULI:i32 GPR:i32:$b, (imm:i32):$c)
/*3024*/    /*Scope*/ 11, /*->3036*/
/*3025*/      OPC_CheckPatternPredicate, 2, // (Subtarget.hasMul())
/*3027*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::MUL), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
              // Dst: (MUL:i32 GPR:i32:$b, GPR:i32:$c)
/*3036*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::CALLSEQ_START),// ->3056
/*3040*/    OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*3041*/    OPC_RecordChild1, // #1 = $amt
/*3042*/    OPC_MoveChild, 1,
/*3044*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*3047*/    OPC_MoveParent,
/*3048*/    OPC_EmitMergeInputChains1_0,
/*3049*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN (timm:i32):$amt)
          /*SwitchOpcode*/ 55,  TARGET_VAL(MBlazeISD::JmpLink),// ->3114
/*3059*/    OPC_RecordNode,   // #0 = 'MBlazeJmpLink' chained node
/*3060*/    OPC_CaptureGlueInput,
/*3061*/    OPC_RecordChild1, // #1 = $dst
/*3062*/    OPC_Scope, 36, /*->3100*/ // 2 children in Scope
/*3064*/      OPC_MoveChild, 1,
/*3066*/      OPC_SwitchOpcode /*2 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3083
/*3070*/        OPC_MoveParent,
/*3071*/        OPC_EmitMergeInputChains1_0,
/*3072*/        OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*3075*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRLID), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                // Src: (MBlazeJmpLink (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BRLID R15:i32, (tglobaladdr:i32):$dst)
              /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3099
/*3086*/        OPC_MoveParent,
/*3087*/        OPC_EmitMergeInputChains1_0,
/*3088*/        OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*3091*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRLID), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    0/*#VTs*/, 2/*#Ops*/, 2, 1, 
                // Src: (MBlazeJmpLink (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BRLID R15:i32, (texternalsym:i32):$dst)
              0, // EndSwitchOpcode
/*3100*/    /*Scope*/ 12, /*->3113*/
/*3101*/      OPC_EmitMergeInputChains1_0,
/*3102*/      OPC_EmitRegister, MVT::i32, MBlaze::R15,
/*3105*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRALD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                  0/*#VTs*/, 2/*#Ops*/, 2, 1, 
              // Src: (MBlazeJmpLink GPR:i32:$dst) - Complexity = 3
              // Dst: (BRALD R15:i32, GPR:i32:$dst)
/*3113*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 53,  TARGET_VAL(MBlazeISD::Wrap),// ->3170
/*3117*/    OPC_RecordChild0, // #0 = $in
/*3118*/    OPC_MoveChild, 0,
/*3120*/    OPC_SwitchOpcode /*3 cases */, 13,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3137
/*3124*/      OPC_MoveParent,
/*3125*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3128*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tglobaladdr:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tglobaladdr:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetJumpTable),// ->3153
/*3140*/      OPC_MoveParent,
/*3141*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3144*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tjumptable:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tjumptable:i32):$in)
            /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TargetConstantPool),// ->3169
/*3156*/      OPC_MoveParent,
/*3157*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3160*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (MBWrapper:i32 (tconstpool:i32):$in) - Complexity = 6
              // Dst: (ORI:i32 R0:i32, (tconstpool:i32):$in)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 80|128,2/*336*/,  TARGET_VAL(ISD::BRCOND),// ->3510
/*3174*/    OPC_RecordNode,   // #0 = 'brcond' chained node
/*3175*/    OPC_Scope, 57|128,2/*313*/, /*->3491*/ // 2 children in Scope
/*3178*/      OPC_MoveChild, 1,
/*3180*/      OPC_CheckOpcode, TARGET_VAL(ISD::SETCC),
/*3183*/      OPC_RecordChild0, // #1 = $L
/*3184*/      OPC_CheckChild0Type, MVT::i32,
/*3186*/      OPC_RecordChild1, // #2 = $R
/*3187*/      OPC_MoveChild, 2,
/*3189*/      OPC_Scope, 29, /*->3220*/ // 10 children in Scope
/*3191*/        OPC_CheckCondCode, ISD::SETEQ,
/*3193*/        OPC_MoveParent,
/*3194*/        OPC_MoveParent,
/*3195*/        OPC_RecordChild2, // #3 = $T
/*3196*/        OPC_MoveChild, 2,
/*3198*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3201*/        OPC_MoveParent,
/*3202*/        OPC_EmitMergeInputChains1_0,
/*3203*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3212*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BEQID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETEQ:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BEQID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3220*/      /*Scope*/ 29, /*->3250*/
/*3221*/        OPC_CheckCondCode, ISD::SETNE,
/*3223*/        OPC_MoveParent,
/*3224*/        OPC_MoveParent,
/*3225*/        OPC_RecordChild2, // #3 = $T
/*3226*/        OPC_MoveChild, 2,
/*3228*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3231*/        OPC_MoveParent,
/*3232*/        OPC_EmitMergeInputChains1_0,
/*3233*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3242*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETNE:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BNEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3250*/      /*Scope*/ 29, /*->3280*/
/*3251*/        OPC_CheckCondCode, ISD::SETGT,
/*3253*/        OPC_MoveParent,
/*3254*/        OPC_MoveParent,
/*3255*/        OPC_RecordChild2, // #3 = $T
/*3256*/        OPC_MoveChild, 2,
/*3258*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3261*/        OPC_MoveParent,
/*3262*/        OPC_EmitMergeInputChains1_0,
/*3263*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3272*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGT:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BGTID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3280*/      /*Scope*/ 29, /*->3310*/
/*3281*/        OPC_CheckCondCode, ISD::SETLT,
/*3283*/        OPC_MoveParent,
/*3284*/        OPC_MoveParent,
/*3285*/        OPC_RecordChild2, // #3 = $T
/*3286*/        OPC_MoveChild, 2,
/*3288*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3291*/        OPC_MoveParent,
/*3292*/        OPC_EmitMergeInputChains1_0,
/*3293*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3302*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLT:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BLTID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3310*/      /*Scope*/ 29, /*->3340*/
/*3311*/        OPC_CheckCondCode, ISD::SETGE,
/*3313*/        OPC_MoveParent,
/*3314*/        OPC_MoveParent,
/*3315*/        OPC_RecordChild2, // #3 = $T
/*3316*/        OPC_MoveChild, 2,
/*3318*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3321*/        OPC_MoveParent,
/*3322*/        OPC_EmitMergeInputChains1_0,
/*3323*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3332*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGE:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BGEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3340*/      /*Scope*/ 29, /*->3370*/
/*3341*/        OPC_CheckCondCode, ISD::SETLE,
/*3343*/        OPC_MoveParent,
/*3344*/        OPC_MoveParent,
/*3345*/        OPC_RecordChild2, // #3 = $T
/*3346*/        OPC_MoveChild, 2,
/*3348*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3351*/        OPC_MoveParent,
/*3352*/        OPC_EmitMergeInputChains1_0,
/*3353*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3362*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLE:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BLEID (CMP:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3370*/      /*Scope*/ 29, /*->3400*/
/*3371*/        OPC_CheckCondCode, ISD::SETUGT,
/*3373*/        OPC_MoveParent,
/*3374*/        OPC_MoveParent,
/*3375*/        OPC_RecordChild2, // #3 = $T
/*3376*/        OPC_MoveChild, 2,
/*3378*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3381*/        OPC_MoveParent,
/*3382*/        OPC_EmitMergeInputChains1_0,
/*3383*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3392*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGTID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGT:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BGTID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3400*/      /*Scope*/ 29, /*->3430*/
/*3401*/        OPC_CheckCondCode, ISD::SETULT,
/*3403*/        OPC_MoveParent,
/*3404*/        OPC_MoveParent,
/*3405*/        OPC_RecordChild2, // #3 = $T
/*3406*/        OPC_MoveChild, 2,
/*3408*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3411*/        OPC_MoveParent,
/*3412*/        OPC_EmitMergeInputChains1_0,
/*3413*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3422*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLTID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULT:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BLTID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3430*/      /*Scope*/ 29, /*->3460*/
/*3431*/        OPC_CheckCondCode, ISD::SETUGE,
/*3433*/        OPC_MoveParent,
/*3434*/        OPC_MoveParent,
/*3435*/        OPC_RecordChild2, // #3 = $T
/*3436*/        OPC_MoveChild, 2,
/*3438*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3441*/        OPC_MoveParent,
/*3442*/        OPC_EmitMergeInputChains1_0,
/*3443*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3452*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BGEID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGE:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BGEID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3460*/      /*Scope*/ 29, /*->3490*/
/*3461*/        OPC_CheckCondCode, ISD::SETULE,
/*3463*/        OPC_MoveParent,
/*3464*/        OPC_MoveParent,
/*3465*/        OPC_RecordChild2, // #3 = $T
/*3466*/        OPC_MoveChild, 2,
/*3468*/        OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3471*/        OPC_MoveParent,
/*3472*/        OPC_EmitMergeInputChains1_0,
/*3473*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 1,  // Results = #4 
/*3482*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::BLEID), 0|OPFL_Chain,
                    0/*#VTs*/, 2/*#Ops*/, 4, 3, 
                // Src: (brcond (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULE:Other), (bb:Other):$T) - Complexity = 6
                // Dst: (BLEID (CMPU:i32 GPR:i32:$R, GPR:i32:$L), (bb:Other):$T)
/*3490*/      0, /*End of Scope*/
/*3491*/    /*Scope*/ 17, /*->3509*/
/*3492*/      OPC_RecordChild1, // #1 = $C
/*3493*/      OPC_RecordChild2, // #2 = $T
/*3494*/      OPC_MoveChild, 2,
/*3496*/      OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3499*/      OPC_MoveParent,
/*3500*/      OPC_EmitMergeInputChains1_0,
/*3501*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::BNEID), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 1, 2, 
              // Src: (brcond GPR:i32:$C, (bb:Other):$T) - Complexity = 3
              // Dst: (BNEID GPR:i32:$C, (bb:Other):$T)
/*3509*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 73,  TARGET_VAL(ISD::Constant),// ->3586
/*3513*/    OPC_Scope, 17, /*->3532*/ // 2 children in Scope
/*3515*/      OPC_CheckInteger, 0, 
/*3517*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3520*/      OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3523*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDK), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: 0:i32 - Complexity = 5
              // Dst: (ADDK:i32 R0:i32, R0:i32)
/*3532*/    /*Scope*/ 52, /*->3585*/
/*3533*/      OPC_RecordNode, // #0 = $imm
/*3534*/      OPC_Scope, 16, /*->3552*/ // 3 children in Scope
/*3536*/        OPC_CheckPredicate, 16, // Predicate_immSExt16
/*3538*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3541*/        OPC_EmitConvertToTarget, 0,
/*3543*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (ADDIK:i32 R0:i32, (imm:i32):$imm)
/*3552*/      /*Scope*/ 16, /*->3569*/
/*3553*/        OPC_CheckPredicate, 14, // Predicate_immZExt16
/*3555*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3558*/        OPC_EmitConvertToTarget, 0,
/*3560*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32)<<P:Predicate_immZExt16>>:$imm - Complexity = 4
                // Dst: (ORI:i32 R0:i32, (imm:i32):$imm)
/*3569*/      /*Scope*/ 14, /*->3584*/
/*3570*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*3573*/        OPC_EmitConvertToTarget, 0,
/*3575*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ADDIK:i32 R0:i32, (imm:i32):$imm)
/*3584*/      0, /*End of Scope*/
/*3585*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 20,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3609
/*3589*/    OPC_RecordMemRef,
/*3590*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3591*/    OPC_RecordChild1, // #1 = $ptr
/*3592*/    OPC_CheckChild1Type, MVT::i32,
/*3594*/    OPC_RecordChild2, // #2 = $cmp
/*3595*/    OPC_RecordChild3, // #3 = $swp
/*3596*/    OPC_CheckPredicate, 17, // Predicate_atomic_cmp_swap_32
/*3598*/    OPC_EmitMergeInputChains1_0,
/*3599*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::CAS32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
            // Src: (atomic_cmp_swap:i32 GPR:i32:$ptr, GPR:i32:$cmp, GPR:i32:$swp)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 4
            // Dst: (CAS32:i32 GPR:i32:$ptr, GPR:i32:$cmp, GPR:i32:$swp)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3630
/*3612*/    OPC_RecordMemRef,
/*3613*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3614*/    OPC_RecordChild1, // #1 = $ptr
/*3615*/    OPC_CheckChild1Type, MVT::i32,
/*3617*/    OPC_RecordChild2, // #2 = $swp
/*3618*/    OPC_CheckPredicate, 18, // Predicate_atomic_swap_32
/*3620*/    OPC_EmitMergeInputChains1_0,
/*3621*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::SWP32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_swap:i32 GPR:i32:$ptr, GPR:i32:$swp)<<P:Predicate_atomic_swap_32>> - Complexity = 4
            // Dst: (SWP32:i32 GPR:i32:$ptr, GPR:i32:$swp)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->3651
/*3633*/    OPC_RecordMemRef,
/*3634*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*3635*/    OPC_RecordChild1, // #1 = $ptr
/*3636*/    OPC_CheckChild1Type, MVT::i32,
/*3638*/    OPC_RecordChild2, // #2 = $val
/*3639*/    OPC_CheckPredicate, 19, // Predicate_atomic_load_add_32
/*3641*/    OPC_EmitMergeInputChains1_0,
/*3642*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAA32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_add:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_add_32>> - Complexity = 4
            // Dst: (LAA32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->3672
/*3654*/    OPC_RecordMemRef,
/*3655*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*3656*/    OPC_RecordChild1, // #1 = $ptr
/*3657*/    OPC_CheckChild1Type, MVT::i32,
/*3659*/    OPC_RecordChild2, // #2 = $val
/*3660*/    OPC_CheckPredicate, 20, // Predicate_atomic_load_sub_32
/*3662*/    OPC_EmitMergeInputChains1_0,
/*3663*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAS32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_sub:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_sub_32>> - Complexity = 4
            // Dst: (LAS32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->3693
/*3675*/    OPC_RecordMemRef,
/*3676*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*3677*/    OPC_RecordChild1, // #1 = $ptr
/*3678*/    OPC_CheckChild1Type, MVT::i32,
/*3680*/    OPC_RecordChild2, // #2 = $val
/*3681*/    OPC_CheckPredicate, 21, // Predicate_atomic_load_and_32
/*3683*/    OPC_EmitMergeInputChains1_0,
/*3684*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAD32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_and:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_and_32>> - Complexity = 4
            // Dst: (LAD32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->3714
/*3696*/    OPC_RecordMemRef,
/*3697*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*3698*/    OPC_RecordChild1, // #1 = $ptr
/*3699*/    OPC_CheckChild1Type, MVT::i32,
/*3701*/    OPC_RecordChild2, // #2 = $val
/*3702*/    OPC_CheckPredicate, 22, // Predicate_atomic_load_or_32
/*3704*/    OPC_EmitMergeInputChains1_0,
/*3705*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAO32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_or:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_or_32>> - Complexity = 4
            // Dst: (LAO32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->3735
/*3717*/    OPC_RecordMemRef,
/*3718*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*3719*/    OPC_RecordChild1, // #1 = $ptr
/*3720*/    OPC_CheckChild1Type, MVT::i32,
/*3722*/    OPC_RecordChild2, // #2 = $val
/*3723*/    OPC_CheckPredicate, 23, // Predicate_atomic_load_xor_32
/*3725*/    OPC_EmitMergeInputChains1_0,
/*3726*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAX32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_xor:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_xor_32>> - Complexity = 4
            // Dst: (LAX32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 18,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3756
/*3738*/    OPC_RecordMemRef,
/*3739*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*3740*/    OPC_RecordChild1, // #1 = $ptr
/*3741*/    OPC_CheckChild1Type, MVT::i32,
/*3743*/    OPC_RecordChild2, // #2 = $val
/*3744*/    OPC_CheckPredicate, 24, // Predicate_atomic_load_nand_32
/*3746*/    OPC_EmitMergeInputChains1_0,
/*3747*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::LAN32), 0|OPFL_Chain|OPFL_MemRefs,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (atomic_load_nand:i32 GPR:i32:$ptr, GPR:i32:$val)<<P:Predicate_atomic_load_nand_32>> - Complexity = 4
            // Dst: (LAN32:i32 GPR:i32:$ptr, GPR:i32:$val)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MULHS),// ->3772
/*3759*/    OPC_RecordChild0, // #0 = $b
/*3760*/    OPC_RecordChild1, // #1 = $c
/*3761*/    OPC_CheckPatternPredicate, 3, // (Subtarget.hasMul()) && (Subtarget.hasMul64())
/*3763*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULH), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mulhs:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (MULH:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::MULHU),// ->3788
/*3775*/    OPC_RecordChild0, // #0 = $b
/*3776*/    OPC_RecordChild1, // #1 = $c
/*3777*/    OPC_CheckPatternPredicate, 3, // (Subtarget.hasMul()) && (Subtarget.hasMul64())
/*3779*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::MULHU), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (mulhu:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (MULHU:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SDIV),// ->3804
/*3791*/    OPC_RecordChild0, // #0 = $b
/*3792*/    OPC_RecordChild1, // #1 = $c
/*3793*/    OPC_CheckPatternPredicate, 4, // (Subtarget.hasDiv())
/*3795*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::IDIV), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (sdiv:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (IDIV:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::UDIV),// ->3820
/*3807*/    OPC_RecordChild0, // #0 = $b
/*3808*/    OPC_RecordChild1, // #1 = $c
/*3809*/    OPC_CheckPatternPredicate, 4, // (Subtarget.hasDiv())
/*3811*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::IDIVU), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
            // Src: (udiv:i32 GPR:i32:$b, GPR:i32:$c) - Complexity = 3
            // Dst: (IDIVU:i32 GPR:i32:$b, GPR:i32:$c)
          /*SwitchOpcode*/ 29,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->3852
/*3823*/    OPC_RecordChild0, // #0 = $src
/*3824*/    OPC_MoveChild, 1,
/*3826*/    OPC_Scope, 11, /*->3839*/ // 2 children in Scope
/*3828*/      OPC_CheckValueType, MVT::i16,
/*3830*/      OPC_MoveParent,
/*3831*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::SEXT16), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 GPR:i32:$src, i16:Other) - Complexity = 3
              // Dst: (SEXT16:i32 GPR:i32:$src)
/*3839*/    /*Scope*/ 11, /*->3851*/
/*3840*/      OPC_CheckValueType, MVT::i8,
/*3842*/      OPC_MoveParent,
/*3843*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::SEXT8), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i32 GPR:i32:$src, i8:Other) - Complexity = 3
              // Dst: (SEXT8:i32 GPR:i32:$src)
/*3851*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(MBlazeISD::Ret),// ->3870
/*3855*/    OPC_RecordNode,   // #0 = 'MBlazeRet' chained node
/*3856*/    OPC_CaptureGlueInput,
/*3857*/    OPC_RecordChild1, // #1 = $target
/*3858*/    OPC_EmitMergeInputChains1_0,
/*3859*/    OPC_EmitInteger, MVT::i32, 8, 
/*3862*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::RTSD), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MBlazeRet GPR:i32:$target) - Complexity = 3
            // Dst: (RTSD GPR:i32:$target, 8:i32)
          /*SwitchOpcode*/ 15,  TARGET_VAL(MBlazeISD::IRet),// ->3888
/*3873*/    OPC_RecordNode,   // #0 = 'MBlazeIRet' chained node
/*3874*/    OPC_CaptureGlueInput,
/*3875*/    OPC_RecordChild1, // #1 = $target
/*3876*/    OPC_EmitMergeInputChains1_0,
/*3877*/    OPC_EmitInteger, MVT::i32, 0, 
/*3880*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::RTID), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (MBlazeIRet GPR:i32:$target) - Complexity = 3
            // Dst: (RTID GPR:i32:$target, 0:i32)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->3907
/*3891*/    OPC_RecordNode,   // #0 = 'br' chained node
/*3892*/    OPC_RecordChild1, // #1 = $T
/*3893*/    OPC_MoveChild, 1,
/*3895*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*3898*/    OPC_MoveParent,
/*3899*/    OPC_EmitMergeInputChains1_0,
/*3900*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRID), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$T) - Complexity = 3
            // Dst: (BRID (bb:Other):$T)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::BRIND),// ->3922
/*3910*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*3911*/    OPC_RecordChild1, // #1 = $T
/*3912*/    OPC_CheckChild1Type, MVT::i32,
/*3914*/    OPC_EmitMergeInputChains1_0,
/*3915*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::BRAD), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (brind GPR:i32:$T) - Complexity = 3
            // Dst: (BRAD GPR:i32:$T)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FP_TO_SINT),// ->3936
/*3925*/    OPC_RecordChild0, // #0 = $V
/*3926*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*3928*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FINT), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (fp_to_sint:i32 GPR:f32:$V) - Complexity = 3
            // Dst: (FINT:i32 GPR:f32:$V)
          /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::SELECT),// ->3976
/*3939*/    OPC_RecordChild0, // #0 = $C
/*3940*/    OPC_RecordChild1, // #1 = $T
/*3941*/    OPC_RecordChild2, // #2 = $F
/*3942*/    OPC_SwitchType /*2 cases */, 14,  MVT::i32,// ->3959
/*3945*/      OPC_EmitInteger, MVT::i32, 2, 
/*3948*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 1, 2, 0, 3, 
              // Src: (select:i32 GPR:i32:$C, GPR:i32:$T, GPR:i32:$F) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, GPR:i32:$C, 2:i32)
            /*SwitchType*/ 14,  MVT::f32,// ->3975
/*3961*/      OPC_EmitInteger, MVT::i32, 2, 
/*3964*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_FCC), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 1, 2, 0, 3, 
              // Src: (select:f32 GPR:i32:$C, GPR:f32:$T, GPR:f32:$F) - Complexity = 3
              // Dst: (Select_FCC:f32 GPR:f32:$T, GPR:f32:$F, GPR:i32:$C, 2:i32)
            0, // EndSwitchType
          /*SwitchOpcode*/ 44|128,2/*300*/,  TARGET_VAL(ISD::SELECT_CC),// ->4280
/*3980*/    OPC_RecordChild0, // #0 = $L
/*3981*/    OPC_CheckChild0Type, MVT::i32,
/*3983*/    OPC_RecordChild1, // #1 = $R
/*3984*/    OPC_RecordChild2, // #2 = $T
/*3985*/    OPC_RecordChild3, // #3 = $F
/*3986*/    OPC_MoveChild, 4,
/*3988*/    OPC_Scope, 28, /*->4018*/ // 10 children in Scope
/*3990*/      OPC_CheckCondCode, ISD::SETEQ,
/*3992*/      OPC_MoveParent,
/*3993*/      OPC_CheckType, MVT::i32,
/*3995*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4004*/      OPC_EmitInteger, MVT::i32, 1, 
/*4007*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETEQ:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 1:i32)
/*4018*/    /*Scope*/ 28, /*->4047*/
/*4019*/      OPC_CheckCondCode, ISD::SETNE,
/*4021*/      OPC_MoveParent,
/*4022*/      OPC_CheckType, MVT::i32,
/*4024*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4033*/      OPC_EmitInteger, MVT::i32, 2, 
/*4036*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETNE:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 2:i32)
/*4047*/    /*Scope*/ 28, /*->4076*/
/*4048*/      OPC_CheckCondCode, ISD::SETGT,
/*4050*/      OPC_MoveParent,
/*4051*/      OPC_CheckType, MVT::i32,
/*4053*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4062*/      OPC_EmitInteger, MVT::i32, 3, 
/*4065*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGT:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4076*/    /*Scope*/ 28, /*->4105*/
/*4077*/      OPC_CheckCondCode, ISD::SETLT,
/*4079*/      OPC_MoveParent,
/*4080*/      OPC_CheckType, MVT::i32,
/*4082*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4091*/      OPC_EmitInteger, MVT::i32, 4, 
/*4094*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLT:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4105*/    /*Scope*/ 28, /*->4134*/
/*4106*/      OPC_CheckCondCode, ISD::SETGE,
/*4108*/      OPC_MoveParent,
/*4109*/      OPC_CheckType, MVT::i32,
/*4111*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4120*/      OPC_EmitInteger, MVT::i32, 5, 
/*4123*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETGE:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4134*/    /*Scope*/ 28, /*->4163*/
/*4135*/      OPC_CheckCondCode, ISD::SETLE,
/*4137*/      OPC_MoveParent,
/*4138*/      OPC_CheckType, MVT::i32,
/*4140*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4149*/      OPC_EmitInteger, MVT::i32, 6, 
/*4152*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETLE:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMP:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4163*/    /*Scope*/ 28, /*->4192*/
/*4164*/      OPC_CheckCondCode, ISD::SETUGT,
/*4166*/      OPC_MoveParent,
/*4167*/      OPC_CheckType, MVT::i32,
/*4169*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4178*/      OPC_EmitInteger, MVT::i32, 3, 
/*4181*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGT:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4192*/    /*Scope*/ 28, /*->4221*/
/*4193*/      OPC_CheckCondCode, ISD::SETULT,
/*4195*/      OPC_MoveParent,
/*4196*/      OPC_CheckType, MVT::i32,
/*4198*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4207*/      OPC_EmitInteger, MVT::i32, 4, 
/*4210*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULT:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4221*/    /*Scope*/ 28, /*->4250*/
/*4222*/      OPC_CheckCondCode, ISD::SETUGE,
/*4224*/      OPC_MoveParent,
/*4225*/      OPC_CheckType, MVT::i32,
/*4227*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4236*/      OPC_EmitInteger, MVT::i32, 5, 
/*4239*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETUGE:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4250*/    /*Scope*/ 28, /*->4279*/
/*4251*/      OPC_CheckCondCode, ISD::SETULE,
/*4253*/      OPC_MoveParent,
/*4254*/      OPC_CheckType, MVT::i32,
/*4256*/      OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #4 
/*4265*/      OPC_EmitInteger, MVT::i32, 6, 
/*4268*/      OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (selectcc:i32 GPR:i32:$L, GPR:i32:$R, GPR:i32:$T, GPR:i32:$F, SETULE:Other) - Complexity = 3
              // Dst: (Select_CC:i32 GPR:i32:$T, GPR:i32:$F, (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4279*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 114|128,14/*1906*/,  TARGET_VAL(ISD::SETCC),// ->6190
/*4284*/    OPC_RecordChild0, // #0 = $L
/*4285*/    OPC_Scope, 65|128,4/*577*/, /*->4865*/ // 2 children in Scope
/*4288*/      OPC_CheckChild0Type, MVT::i32,
/*4290*/      OPC_RecordChild1, // #1 = $R
/*4291*/      OPC_MoveChild, 2,
/*4293*/      OPC_Scope, 56, /*->4351*/ // 10 children in Scope
/*4295*/        OPC_CheckCondCode, ISD::SETEQ,
/*4297*/        OPC_MoveParent,
/*4298*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4301*/        OPC_EmitInteger, MVT::i32, 1, 
/*4304*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4313*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4316*/        OPC_EmitInteger, MVT::i32, 0, 
/*4319*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4328*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4337*/        OPC_EmitInteger, MVT::i32, 1, 
/*4340*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETEQ:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 1:i32)
/*4351*/      /*Scope*/ 56, /*->4408*/
/*4352*/        OPC_CheckCondCode, ISD::SETNE,
/*4354*/        OPC_MoveParent,
/*4355*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4358*/        OPC_EmitInteger, MVT::i32, 1, 
/*4361*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4370*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4373*/        OPC_EmitInteger, MVT::i32, 0, 
/*4376*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4385*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4394*/        OPC_EmitInteger, MVT::i32, 2, 
/*4397*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETNE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 2:i32)
/*4408*/      /*Scope*/ 56, /*->4465*/
/*4409*/        OPC_CheckCondCode, ISD::SETGT,
/*4411*/        OPC_MoveParent,
/*4412*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4415*/        OPC_EmitInteger, MVT::i32, 1, 
/*4418*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4427*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4430*/        OPC_EmitInteger, MVT::i32, 0, 
/*4433*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4442*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4451*/        OPC_EmitInteger, MVT::i32, 3, 
/*4454*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4465*/      /*Scope*/ 56, /*->4522*/
/*4466*/        OPC_CheckCondCode, ISD::SETLT,
/*4468*/        OPC_MoveParent,
/*4469*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4472*/        OPC_EmitInteger, MVT::i32, 1, 
/*4475*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4484*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4487*/        OPC_EmitInteger, MVT::i32, 0, 
/*4490*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4499*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4508*/        OPC_EmitInteger, MVT::i32, 4, 
/*4511*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4522*/      /*Scope*/ 56, /*->4579*/
/*4523*/        OPC_CheckCondCode, ISD::SETGE,
/*4525*/        OPC_MoveParent,
/*4526*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4529*/        OPC_EmitInteger, MVT::i32, 1, 
/*4532*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4541*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4544*/        OPC_EmitInteger, MVT::i32, 0, 
/*4547*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4556*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4565*/        OPC_EmitInteger, MVT::i32, 5, 
/*4568*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4579*/      /*Scope*/ 56, /*->4636*/
/*4580*/        OPC_CheckCondCode, ISD::SETLE,
/*4582*/        OPC_MoveParent,
/*4583*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4586*/        OPC_EmitInteger, MVT::i32, 1, 
/*4589*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4598*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4601*/        OPC_EmitInteger, MVT::i32, 0, 
/*4604*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4613*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMP), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4622*/        OPC_EmitInteger, MVT::i32, 6, 
/*4625*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETLE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMP:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4636*/      /*Scope*/ 56, /*->4693*/
/*4637*/        OPC_CheckCondCode, ISD::SETUGT,
/*4639*/        OPC_MoveParent,
/*4640*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4643*/        OPC_EmitInteger, MVT::i32, 1, 
/*4646*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4655*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4658*/        OPC_EmitInteger, MVT::i32, 0, 
/*4661*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4670*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4679*/        OPC_EmitInteger, MVT::i32, 3, 
/*4682*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 3:i32)
/*4693*/      /*Scope*/ 56, /*->4750*/
/*4694*/        OPC_CheckCondCode, ISD::SETULT,
/*4696*/        OPC_MoveParent,
/*4697*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4700*/        OPC_EmitInteger, MVT::i32, 1, 
/*4703*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4712*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4715*/        OPC_EmitInteger, MVT::i32, 0, 
/*4718*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4727*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4736*/        OPC_EmitInteger, MVT::i32, 4, 
/*4739*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 4:i32)
/*4750*/      /*Scope*/ 56, /*->4807*/
/*4751*/        OPC_CheckCondCode, ISD::SETUGE,
/*4753*/        OPC_MoveParent,
/*4754*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4757*/        OPC_EmitInteger, MVT::i32, 1, 
/*4760*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4769*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4772*/        OPC_EmitInteger, MVT::i32, 0, 
/*4775*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4784*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4793*/        OPC_EmitInteger, MVT::i32, 5, 
/*4796*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETUGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 5:i32)
/*4807*/      /*Scope*/ 56, /*->4864*/
/*4808*/        OPC_CheckCondCode, ISD::SETULE,
/*4810*/        OPC_MoveParent,
/*4811*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4814*/        OPC_EmitInteger, MVT::i32, 1, 
/*4817*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4826*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4829*/        OPC_EmitInteger, MVT::i32, 0, 
/*4832*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4841*/        OPC_EmitNode, TARGET_VAL(MBlaze::CMPU), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0,  // Results = #8 
/*4850*/        OPC_EmitInteger, MVT::i32, 6, 
/*4853*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:i32:$L, GPR:i32:$R, SETULE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (CMPU:i32 GPR:i32:$R, GPR:i32:$L), 6:i32)
/*4864*/      0, /*End of Scope*/
/*4865*/    /*Scope*/ 42|128,10/*1322*/, /*->6189*/
/*4867*/      OPC_CheckChild0Type, MVT::f32,
/*4869*/      OPC_RecordChild1, // #1 = $R
/*4870*/      OPC_MoveChild, 2,
/*4872*/      OPC_Scope, 58, /*->4932*/ // 20 children in Scope
/*4874*/        OPC_CheckCondCode, ISD::SETEQ,
/*4876*/        OPC_MoveParent,
/*4877*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*4879*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4882*/        OPC_EmitInteger, MVT::i32, 1, 
/*4885*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4894*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4897*/        OPC_EmitInteger, MVT::i32, 0, 
/*4900*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4909*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*4918*/        OPC_EmitInteger, MVT::i32, 2, 
/*4921*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETEQ:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*4932*/      /*Scope*/ 58, /*->4991*/
/*4933*/        OPC_CheckCondCode, ISD::SETNE,
/*4935*/        OPC_MoveParent,
/*4936*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*4938*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4941*/        OPC_EmitInteger, MVT::i32, 1, 
/*4944*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*4953*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*4956*/        OPC_EmitInteger, MVT::i32, 0, 
/*4959*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*4968*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*4977*/        OPC_EmitInteger, MVT::i32, 1, 
/*4980*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETNE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 1:i32)
/*4991*/      /*Scope*/ 58, /*->5050*/
/*4992*/        OPC_CheckCondCode, ISD::SETOEQ,
/*4994*/        OPC_MoveParent,
/*4995*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*4997*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5000*/        OPC_EmitInteger, MVT::i32, 1, 
/*5003*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5012*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5015*/        OPC_EmitInteger, MVT::i32, 0, 
/*5018*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5027*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5036*/        OPC_EmitInteger, MVT::i32, 2, 
/*5039*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOEQ:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5050*/      /*Scope*/ 58, /*->5109*/
/*5051*/        OPC_CheckCondCode, ISD::SETGT,
/*5053*/        OPC_MoveParent,
/*5054*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5056*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5059*/        OPC_EmitInteger, MVT::i32, 1, 
/*5062*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5071*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5074*/        OPC_EmitInteger, MVT::i32, 0, 
/*5077*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5086*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5095*/        OPC_EmitInteger, MVT::i32, 2, 
/*5098*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5109*/      /*Scope*/ 58, /*->5168*/
/*5110*/        OPC_CheckCondCode, ISD::SETLT,
/*5112*/        OPC_MoveParent,
/*5113*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5115*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5118*/        OPC_EmitInteger, MVT::i32, 1, 
/*5121*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5130*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5133*/        OPC_EmitInteger, MVT::i32, 0, 
/*5136*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5145*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5154*/        OPC_EmitInteger, MVT::i32, 2, 
/*5157*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETLT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5168*/      /*Scope*/ 58, /*->5227*/
/*5169*/        OPC_CheckCondCode, ISD::SETGE,
/*5171*/        OPC_MoveParent,
/*5172*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5174*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5177*/        OPC_EmitInteger, MVT::i32, 1, 
/*5180*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5189*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5192*/        OPC_EmitInteger, MVT::i32, 0, 
/*5195*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5204*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5213*/        OPC_EmitInteger, MVT::i32, 2, 
/*5216*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5227*/      /*Scope*/ 58, /*->5286*/
/*5228*/        OPC_CheckCondCode, ISD::SETLE,
/*5230*/        OPC_MoveParent,
/*5231*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5233*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5236*/        OPC_EmitInteger, MVT::i32, 1, 
/*5239*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5248*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5251*/        OPC_EmitInteger, MVT::i32, 0, 
/*5254*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5263*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5272*/        OPC_EmitInteger, MVT::i32, 2, 
/*5275*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETLE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5286*/      /*Scope*/ 58, /*->5345*/
/*5287*/        OPC_CheckCondCode, ISD::SETOGT,
/*5289*/        OPC_MoveParent,
/*5290*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5292*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5295*/        OPC_EmitInteger, MVT::i32, 1, 
/*5298*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5307*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5310*/        OPC_EmitInteger, MVT::i32, 0, 
/*5313*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5322*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5331*/        OPC_EmitInteger, MVT::i32, 2, 
/*5334*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5345*/      /*Scope*/ 58, /*->5404*/
/*5346*/        OPC_CheckCondCode, ISD::SETOLT,
/*5348*/        OPC_MoveParent,
/*5349*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5351*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5354*/        OPC_EmitInteger, MVT::i32, 1, 
/*5357*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5366*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5369*/        OPC_EmitInteger, MVT::i32, 0, 
/*5372*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5381*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5390*/        OPC_EmitInteger, MVT::i32, 2, 
/*5393*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOLT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5404*/      /*Scope*/ 58, /*->5463*/
/*5405*/        OPC_CheckCondCode, ISD::SETOGE,
/*5407*/        OPC_MoveParent,
/*5408*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5410*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5413*/        OPC_EmitInteger, MVT::i32, 1, 
/*5416*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5425*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5428*/        OPC_EmitInteger, MVT::i32, 0, 
/*5431*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5440*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5449*/        OPC_EmitInteger, MVT::i32, 2, 
/*5452*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5463*/      /*Scope*/ 58, /*->5522*/
/*5464*/        OPC_CheckCondCode, ISD::SETOLE,
/*5466*/        OPC_MoveParent,
/*5467*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5469*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5472*/        OPC_EmitInteger, MVT::i32, 1, 
/*5475*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5484*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5487*/        OPC_EmitInteger, MVT::i32, 0, 
/*5490*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5499*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5508*/        OPC_EmitInteger, MVT::i32, 2, 
/*5511*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETOLE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5522*/      /*Scope*/ 58, /*->5581*/
/*5523*/        OPC_CheckCondCode, ISD::SETUNE,
/*5525*/        OPC_MoveParent,
/*5526*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5528*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5531*/        OPC_EmitInteger, MVT::i32, 1, 
/*5534*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5543*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5546*/        OPC_EmitInteger, MVT::i32, 0, 
/*5549*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5558*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_NE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5567*/        OPC_EmitInteger, MVT::i32, 2, 
/*5570*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUNE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_NE:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5581*/      /*Scope*/ 58, /*->5640*/
/*5582*/        OPC_CheckCondCode, ISD::SETO,
/*5584*/        OPC_MoveParent,
/*5585*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5587*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5590*/        OPC_EmitInteger, MVT::i32, 1, 
/*5593*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5602*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5605*/        OPC_EmitInteger, MVT::i32, 0, 
/*5608*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5617*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5626*/        OPC_EmitInteger, MVT::i32, 1, 
/*5629*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETO:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), 1:i32)
/*5640*/      /*Scope*/ 58, /*->5699*/
/*5641*/        OPC_CheckCondCode, ISD::SETUO,
/*5643*/        OPC_MoveParent,
/*5644*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5646*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5649*/        OPC_EmitInteger, MVT::i32, 1, 
/*5652*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5661*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5664*/        OPC_EmitInteger, MVT::i32, 0, 
/*5667*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5676*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5685*/        OPC_EmitInteger, MVT::i32, 2, 
/*5688*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 8, 9, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUO:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), 2:i32)
/*5699*/      /*Scope*/ 103, /*->5803*/
/*5700*/        OPC_CheckCondCode, ISD::SETONE,
/*5702*/        OPC_MoveParent,
/*5703*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5705*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5708*/        OPC_EmitInteger, MVT::i32, 1, 
/*5711*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5720*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5723*/        OPC_EmitInteger, MVT::i32, 0, 
/*5726*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5735*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5744*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9 
/*5753*/        OPC_Scope, 23, /*->5778*/ // 2 children in Scope
/*5755*/          OPC_EmitNode, TARGET_VAL(MBlaze::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10 
/*5764*/          OPC_EmitInteger, MVT::i32, 2, 
/*5767*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETONE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (XOR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*5778*/        /*Scope*/ 23, /*->5802*/
/*5779*/          OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10 
/*5788*/          OPC_EmitInteger, MVT::i32, 2, 
/*5791*/          OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                      1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                  // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETONE:Other) - Complexity = 3
                  // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*5802*/        0, /*End of Scope*/
/*5803*/      /*Scope*/ 76, /*->5880*/
/*5804*/        OPC_CheckCondCode, ISD::SETUEQ,
/*5806*/        OPC_MoveParent,
/*5807*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5809*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5812*/        OPC_EmitInteger, MVT::i32, 1, 
/*5815*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5824*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5827*/        OPC_EmitInteger, MVT::i32, 0, 
/*5830*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5839*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5848*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_EQ), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9 
/*5857*/        OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10 
/*5866*/        OPC_EmitInteger, MVT::i32, 2, 
/*5869*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUEQ:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_EQ:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*5880*/      /*Scope*/ 76, /*->5957*/
/*5881*/        OPC_CheckCondCode, ISD::SETUGT,
/*5883*/        OPC_MoveParent,
/*5884*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5886*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5889*/        OPC_EmitInteger, MVT::i32, 1, 
/*5892*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5901*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5904*/        OPC_EmitInteger, MVT::i32, 0, 
/*5907*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5916*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*5925*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9 
/*5934*/        OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10 
/*5943*/        OPC_EmitInteger, MVT::i32, 2, 
/*5946*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUGT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_GT:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*5957*/      /*Scope*/ 76, /*->6034*/
/*5958*/        OPC_CheckCondCode, ISD::SETULT,
/*5960*/        OPC_MoveParent,
/*5961*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*5963*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5966*/        OPC_EmitInteger, MVT::i32, 1, 
/*5969*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*5978*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*5981*/        OPC_EmitInteger, MVT::i32, 0, 
/*5984*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*5993*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*6002*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LT), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9 
/*6011*/        OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10 
/*6020*/        OPC_EmitInteger, MVT::i32, 2, 
/*6023*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETULT:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_LT:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6034*/      /*Scope*/ 76, /*->6111*/
/*6035*/        OPC_CheckCondCode, ISD::SETUGE,
/*6037*/        OPC_MoveParent,
/*6038*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6040*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6043*/        OPC_EmitInteger, MVT::i32, 1, 
/*6046*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6055*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6058*/        OPC_EmitInteger, MVT::i32, 0, 
/*6061*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*6070*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*6079*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_GE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9 
/*6088*/        OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10 
/*6097*/        OPC_EmitInteger, MVT::i32, 2, 
/*6100*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETUGE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_GE:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6111*/      /*Scope*/ 76, /*->6188*/
/*6112*/        OPC_CheckCondCode, ISD::SETULE,
/*6114*/        OPC_MoveParent,
/*6115*/        OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6117*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6120*/        OPC_EmitInteger, MVT::i32, 1, 
/*6123*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*6132*/        OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6135*/        OPC_EmitInteger, MVT::i32, 0, 
/*6138*/        OPC_EmitNode, TARGET_VAL(MBlaze::ADDIK), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 5, 6,  // Results = #7 
/*6147*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_UN), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #8 
/*6156*/        OPC_EmitNode, TARGET_VAL(MBlaze::FCMP_LE), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1,  // Results = #9 
/*6165*/        OPC_EmitNode, TARGET_VAL(MBlaze::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 8, 9,  // Results = #10 
/*6174*/        OPC_EmitInteger, MVT::i32, 2, 
/*6177*/        OPC_MorphNodeTo, TARGET_VAL(MBlaze::Select_CC), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 7, 10, 11, 
                // Src: (setcc:i32 GPR:f32:$L, GPR:f32:$R, SETULE:Other) - Complexity = 3
                // Dst: (Select_CC:i32 (ADDIK:i32 R0:i32, 1:i32), (ADDIK:i32 R0:i32, 0:i32), (OR:i32 (FCMP_UN:i32 GPR:f32:$L, GPR:f32:$R), (FCMP_LE:i32 GPR:f32:$L, GPR:f32:$R)), 2:i32)
/*6188*/      0, /*End of Scope*/
/*6189*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FADD),// ->6206
/*6193*/    OPC_RecordChild0, // #0 = $b
/*6194*/    OPC_RecordChild1, // #1 = $c
/*6195*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6197*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FADD), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fadd:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FADD:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FSUB),// ->6222
/*6209*/    OPC_RecordChild0, // #0 = $b
/*6210*/    OPC_RecordChild1, // #1 = $c
/*6211*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6213*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FRSUB), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fsub:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FRSUB:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FMUL),// ->6238
/*6225*/    OPC_RecordChild0, // #0 = $b
/*6226*/    OPC_RecordChild1, // #1 = $c
/*6227*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6229*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FMUL), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fmul:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FMUL:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FDIV),// ->6254
/*6241*/    OPC_RecordChild0, // #0 = $b
/*6242*/    OPC_RecordChild1, // #1 = $c
/*6243*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6245*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FDIV), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
            // Src: (fdiv:f32 GPR:f32:$b, GPR:f32:$c) - Complexity = 3
            // Dst: (FDIV:f32 GPR:f32:$b, GPR:f32:$c)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::SINT_TO_FP),// ->6268
/*6257*/    OPC_RecordChild0, // #0 = $V
/*6258*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6260*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FLT), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (sint_to_fp:f32 GPR:i32:$V) - Complexity = 3
            // Dst: (FLT:f32 GPR:i32:$V)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::FSQRT),// ->6282
/*6271*/    OPC_RecordChild0, // #0 = $V
/*6272*/    OPC_CheckPatternPredicate, 0, // (Subtarget.hasFPU())
/*6274*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FSQRT), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fsqrt:f32 GPR:f32:$V) - Complexity = 3
            // Dst: (FSQRT:f32 GPR:f32:$V)
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::ConstantFP),// ->6300
/*6285*/    OPC_RecordNode,   // #0 = $imm
/*6286*/    OPC_EmitRegister, MVT::i32, MBlaze::R0,
/*6289*/    OPC_EmitConvertToTarget, 0,
/*6291*/    OPC_MorphNodeTo, TARGET_VAL(MBlaze::FORI), 0,
                1/*#VTs*/, MVT::f32, 2/*#Ops*/, 1, 2, 
            // Src: (fpimm:f32):$imm - Complexity = 3
            // Dst: (FORI:f32 R0:i32, (fpimm:f32):$imm)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 6302 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 90
  // #OPC_RecordNode                     = 23
  // #OPC_RecordChild                    = 164
  // #OPC_RecordMemRef                   = 10
  // #OPC_CaptureGlueInput               = 6
  // #OPC_MoveChild                      = 96
  // #OPC_MoveParent                     = 204
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 41
  // #OPC_CheckPredicate                 = 98
  // #OPC_CheckOpcode                    = 84
  // #OPC_SwitchOpcode                   = 3
  // #OPC_CheckType                      = 10
  // #OPC_SwitchType                     = 2
  // #OPC_CheckChildType                 = 19
  // #OPC_CheckInteger                   = 52
  // #OPC_CheckCondCode                  = 50
  // #OPC_CheckValueType                 = 2
  // #OPC_CheckComplexPat                = 21
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 105
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 73
  // #OPC_EmitConvertToTarget            = 68
  // #OPC_EmitMergeInputChains           = 146
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 123
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 244

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (Subtarget.hasFPU());
  case 1: return (Subtarget.hasBarrel());
  case 2: return (Subtarget.hasMul());
  case 3: return (Subtarget.hasMul()) && (Subtarget.hasMul64());
  case 4: return (Subtarget.hasDiv());
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
  case 6: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 7: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 8: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 9: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 12: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 13: { // Predicate_immZExt4
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0xf) ;

  }
  case 14: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (N->getZExtValue() >> 16) == 0;

  }
  case 15: { // Predicate_immZExt5
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return N->getZExtValue() == ((N->getZExtValue()) & 0x1f) ;

  }
  case 16: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  return (N->getZExtValue() >> 16) == 0;

  }
  case 17: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 18: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 19: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 20: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 21: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 22: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 23: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 24: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
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
    return SelectAddrRegImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrRegReg(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

