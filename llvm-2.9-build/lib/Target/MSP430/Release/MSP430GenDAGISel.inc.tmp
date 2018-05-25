//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the MSP430 target
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
/*0*/     OPC_SwitchOpcode /*34 cases */, 71|128,28/*3655*/,  TARGET_VAL(ISD::STORE),// ->3660
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'st' chained node
/*7*/       OPC_Scope, 93|128,27/*3549*/, /*->3559*/ // 2 children in Scope
/*10*/        OPC_MoveChild, 1,
/*12*/        OPC_SwitchOpcode /*11 cases */, 16|128,6/*784*/,  TARGET_VAL(ISD::AND),// ->801
/*17*/          OPC_Scope, 64|128,5/*704*/, /*->724*/ // 2 children in Scope
/*20*/            OPC_MoveChild, 0,
/*22*/            OPC_SwitchOpcode /*2 cases */, 101|128,3/*485*/,  TARGET_VAL(ISD::LOAD),// ->512
/*27*/              OPC_RecordMemRef,
/*28*/              OPC_RecordNode, // #1 = 'ld' chained node
/*29*/              OPC_CheckFoldableChainNode,
/*30*/              OPC_RecordChild1, // #2 = $dst
/*31*/              OPC_CheckPredicate, 0, // Predicate_unindexedload
/*33*/              OPC_CheckPredicate, 1, // Predicate_load
/*35*/              OPC_MoveParent,
/*36*/              OPC_Scope, 80|128,2/*336*/, /*->375*/ // 2 children in Scope
/*39*/                OPC_MoveChild, 1,
/*41*/                OPC_SwitchOpcode /*2 cases */, 51|128,1/*179*/,  TARGET_VAL(ISD::XOR),// ->225
/*46*/                  OPC_Scope, 99, /*->147*/ // 2 children in Scope
/*48*/                    OPC_MoveChild, 0,
/*50*/                    OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*53*/                    OPC_RecordMemRef,
/*54*/                    OPC_RecordNode, // #3 = 'ld' chained node
/*55*/                    OPC_CheckFoldableChainNode,
/*56*/                    OPC_RecordChild1, // #4 = $src
/*57*/                    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*59*/                    OPC_CheckPredicate, 1, // Predicate_load
/*61*/                    OPC_MoveParent,
/*62*/                    OPC_MoveChild, 1,
/*64*/                    OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*75*/                    OPC_MoveParent,
/*76*/                    OPC_MoveParent,
/*77*/                    OPC_SwitchType /*2 cases */, 32,  MVT::i8,// ->112
/*80*/                      OPC_MoveParent,
/*81*/                      OPC_MoveChild, 2,
/*83*/                      OPC_CheckSame, 2,
/*85*/                      OPC_MoveParent,
/*86*/                      OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*88*/                      OPC_CheckPredicate, 3, // Predicate_store
/*90*/                      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*93*/                      OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*96*/                      OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*101*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                            // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                            // Dst: (BIC8mm:i16 addr:i16:$dst, addr:i16:$src)
                          /*SwitchType*/ 32,  MVT::i16,// ->146
/*114*/                     OPC_MoveParent,
/*115*/                     OPC_MoveChild, 2,
/*117*/                     OPC_CheckSame, 2,
/*119*/                     OPC_MoveParent,
/*120*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*122*/                     OPC_CheckPredicate, 3, // Predicate_store
/*124*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*127*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*130*/                     OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*135*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                            // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                            // Dst: (BIC16mm:i16 addr:i16:$dst, addr:i16:$src)
                          0, // EndSwitchType
/*147*/                 /*Scope*/ 76, /*->224*/
/*148*/                   OPC_RecordChild0, // #3 = $src
/*149*/                   OPC_MoveChild, 1,
/*151*/                   OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*162*/                   OPC_MoveParent,
/*163*/                   OPC_MoveParent,
/*164*/                   OPC_SwitchType /*2 cases */, 27,  MVT::i8,// ->194
/*167*/                     OPC_MoveParent,
/*168*/                     OPC_MoveChild, 2,
/*170*/                     OPC_CheckSame, 2,
/*172*/                     OPC_MoveParent,
/*173*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*175*/                     OPC_CheckPredicate, 3, // Predicate_store
/*177*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*180*/                     OPC_EmitMergeInputChains, 2, 0, 1, 
/*184*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8mr), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                            // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i8 GR8:i8:$src, -1:i8)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                            // Dst: (BIC8mr:i16 addr:i16:$dst, GR8:i8:$src)
                          /*SwitchType*/ 27,  MVT::i16,// ->223
/*196*/                     OPC_MoveParent,
/*197*/                     OPC_MoveChild, 2,
/*199*/                     OPC_CheckSame, 2,
/*201*/                     OPC_MoveParent,
/*202*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*204*/                     OPC_CheckPredicate, 3, // Predicate_store
/*206*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*209*/                     OPC_EmitMergeInputChains, 2, 0, 1, 
/*213*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16mr), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                            // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (xor:i16 GR16:i16:$src, -1:i16)), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                            // Dst: (BIC16mr:i16 addr:i16:$dst, GR16:i16:$src)
                          0, // EndSwitchType
/*224*/                 0, /*End of Scope*/
                      /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(ISD::LOAD),// ->374
/*229*/                 OPC_RecordMemRef,
/*230*/                 OPC_RecordNode, // #3 = 'ld' chained node
/*231*/                 OPC_CheckFoldableChainNode,
/*232*/                 OPC_RecordChild1, // #4 = $src
/*233*/                 OPC_CheckPredicate, 0, // Predicate_unindexedload
/*235*/                 OPC_CheckPredicate, 1, // Predicate_load
/*237*/                 OPC_MoveParent,
/*238*/                 OPC_SwitchType /*2 cases */, 65,  MVT::i8,// ->306
/*241*/                   OPC_MoveParent,
/*242*/                   OPC_MoveChild, 2,
/*244*/                   OPC_Scope, 29, /*->275*/ // 2 children in Scope
/*246*/                     OPC_CheckSame, 2,
/*248*/                     OPC_MoveParent,
/*249*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*251*/                     OPC_CheckPredicate, 3, // Predicate_store
/*253*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*256*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*259*/                     OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*264*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                            // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                            // Dst: (AND8mm:i16 addr:i16:$dst, addr:i16:$src)
/*275*/                   /*Scope*/ 29, /*->305*/
/*276*/                     OPC_CheckSame, 4,
/*278*/                     OPC_MoveParent,
/*279*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*281*/                     OPC_CheckPredicate, 3, // Predicate_store
/*283*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*286*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*289*/                     OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*294*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8mm), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                            // Src: (st (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                            // Dst: (AND8mm:i16 addr:i16:$dst, addr:i16:$src)
/*305*/                   0, /*End of Scope*/
                        /*SwitchType*/ 65,  MVT::i16,// ->373
/*308*/                   OPC_MoveParent,
/*309*/                   OPC_MoveChild, 2,
/*311*/                   OPC_Scope, 29, /*->342*/ // 2 children in Scope
/*313*/                     OPC_CheckSame, 2,
/*315*/                     OPC_MoveParent,
/*316*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*318*/                     OPC_CheckPredicate, 3, // Predicate_store
/*320*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*323*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*326*/                     OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*331*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                            // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                            // Dst: (AND16mm:i16 addr:i16:$dst, addr:i16:$src)
/*342*/                   /*Scope*/ 29, /*->372*/
/*343*/                     OPC_CheckSame, 4,
/*345*/                     OPC_MoveParent,
/*346*/                     OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*348*/                     OPC_CheckPredicate, 3, // Predicate_store
/*350*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*353*/                     OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*356*/                     OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*361*/                     OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16mm), 0|OPFL_Chain|OPFL_MemRefs,
                                1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                            // Src: (st (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                            // Dst: (AND16mm:i16 addr:i16:$dst, addr:i16:$src)
/*372*/                   0, /*End of Scope*/
                        0, // EndSwitchType
                      0, // EndSwitchOpcode
/*375*/             /*Scope*/ 6|128,1/*134*/, /*->511*/
/*377*/               OPC_RecordChild1, // #3 = $src
/*378*/               OPC_Scope, 70, /*->450*/ // 3 children in Scope
/*380*/                 OPC_MoveChild, 1,
/*382*/                 OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*385*/                 OPC_MoveParent,
/*386*/                 OPC_SwitchType /*2 cases */, 29,  MVT::i8,// ->418
/*389*/                   OPC_MoveParent,
/*390*/                   OPC_MoveChild, 2,
/*392*/                   OPC_CheckSame, 2,
/*394*/                   OPC_MoveParent,
/*395*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*397*/                   OPC_CheckPredicate, 3, // Predicate_store
/*399*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*402*/                   OPC_EmitMergeInputChains, 2, 0, 1, 
/*406*/                   OPC_EmitConvertToTarget, 3,
/*408*/                   OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8mi), 0|OPFL_Chain|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (AND8mi:i16 addr:i16:$dst, (imm:i8):$src)
                        /*SwitchType*/ 29,  MVT::i16,// ->449
/*420*/                   OPC_MoveParent,
/*421*/                   OPC_MoveChild, 2,
/*423*/                   OPC_CheckSame, 2,
/*425*/                   OPC_MoveParent,
/*426*/                   OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*428*/                   OPC_CheckPredicate, 3, // Predicate_store
/*430*/                   OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*433*/                   OPC_EmitMergeInputChains, 2, 0, 1, 
/*437*/                   OPC_EmitConvertToTarget, 3,
/*439*/                   OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16mi), 0|OPFL_Chain|OPFL_MemRefs,
                              1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                          // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                          // Dst: (AND16mi:i16 addr:i16:$dst, (imm:i16):$src)
                        0, // EndSwitchType
/*450*/               /*Scope*/ 29, /*->480*/
/*451*/                 OPC_CheckType, MVT::i8,
/*453*/                 OPC_MoveParent,
/*454*/                 OPC_MoveChild, 2,
/*456*/                 OPC_CheckSame, 2,
/*458*/                 OPC_MoveParent,
/*459*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*461*/                 OPC_CheckPredicate, 3, // Predicate_store
/*463*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*466*/                 OPC_EmitMergeInputChains, 2, 0, 1, 
/*470*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (and:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (AND8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*480*/               /*Scope*/ 29, /*->510*/
/*481*/                 OPC_CheckType, MVT::i16,
/*483*/                 OPC_MoveParent,
/*484*/                 OPC_MoveChild, 2,
/*486*/                 OPC_CheckSame, 2,
/*488*/                 OPC_MoveParent,
/*489*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*491*/                 OPC_CheckPredicate, 3, // Predicate_store
/*493*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*496*/                 OPC_EmitMergeInputChains, 2, 0, 1, 
/*500*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                        // Src: (st (and:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                        // Dst: (AND16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*510*/               0, /*End of Scope*/
/*511*/             0, /*End of Scope*/
                  /*SwitchOpcode*/ 79|128,1/*207*/,  TARGET_VAL(ISD::XOR),// ->723
/*516*/             OPC_Scope, 113, /*->631*/ // 2 children in Scope
/*518*/               OPC_MoveChild, 0,
/*520*/               OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*523*/               OPC_RecordMemRef,
/*524*/               OPC_RecordNode, // #1 = 'ld' chained node
/*525*/               OPC_CheckFoldableChainNode,
/*526*/               OPC_RecordChild1, // #2 = $src
/*527*/               OPC_CheckPredicate, 0, // Predicate_unindexedload
/*529*/               OPC_CheckPredicate, 1, // Predicate_load
/*531*/               OPC_MoveParent,
/*532*/               OPC_MoveChild, 1,
/*534*/               OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*545*/               OPC_MoveParent,
/*546*/               OPC_MoveParent,
/*547*/               OPC_MoveChild, 1,
/*549*/               OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*552*/               OPC_RecordMemRef,
/*553*/               OPC_RecordNode, // #3 = 'ld' chained node
/*554*/               OPC_CheckFoldableChainNode,
/*555*/               OPC_RecordChild1, // #4 = $dst
/*556*/               OPC_CheckPredicate, 0, // Predicate_unindexedload
/*558*/               OPC_CheckPredicate, 1, // Predicate_load
/*560*/               OPC_MoveParent,
/*561*/               OPC_SwitchType /*2 cases */, 32,  MVT::i8,// ->596
/*564*/                 OPC_MoveParent,
/*565*/                 OPC_MoveChild, 2,
/*567*/                 OPC_CheckSame, 4,
/*569*/                 OPC_MoveParent,
/*570*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*572*/                 OPC_CheckPredicate, 3, // Predicate_store
/*574*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*577*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*580*/                 OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*585*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (and:i8 (xor:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8), (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                        // Dst: (BIC8mm:i16 addr:i16:$dst, addr:i16:$src)
                      /*SwitchType*/ 32,  MVT::i16,// ->630
/*598*/                 OPC_MoveParent,
/*599*/                 OPC_MoveChild, 2,
/*601*/                 OPC_CheckSame, 4,
/*603*/                 OPC_MoveParent,
/*604*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*606*/                 OPC_CheckPredicate, 3, // Predicate_store
/*608*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*611*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*614*/                 OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*619*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (and:i16 (xor:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16), (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 50
                        // Dst: (BIC16mm:i16 addr:i16:$dst, addr:i16:$src)
                      0, // EndSwitchType
/*631*/             /*Scope*/ 90, /*->722*/
/*632*/               OPC_RecordChild0, // #1 = $src
/*633*/               OPC_MoveChild, 1,
/*635*/               OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*646*/               OPC_MoveParent,
/*647*/               OPC_MoveParent,
/*648*/               OPC_MoveChild, 1,
/*650*/               OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*653*/               OPC_RecordMemRef,
/*654*/               OPC_RecordNode, // #2 = 'ld' chained node
/*655*/               OPC_CheckFoldableChainNode,
/*656*/               OPC_RecordChild1, // #3 = $dst
/*657*/               OPC_CheckPredicate, 0, // Predicate_unindexedload
/*659*/               OPC_CheckPredicate, 1, // Predicate_load
/*661*/               OPC_MoveParent,
/*662*/               OPC_SwitchType /*2 cases */, 27,  MVT::i8,// ->692
/*665*/                 OPC_MoveParent,
/*666*/                 OPC_MoveChild, 2,
/*668*/                 OPC_CheckSame, 3,
/*670*/                 OPC_MoveParent,
/*671*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*673*/                 OPC_CheckPredicate, 3, // Predicate_store
/*675*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*678*/                 OPC_EmitMergeInputChains, 2, 0, 2, 
/*682*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8mr), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                        // Src: (st (and:i8 (xor:i8 GR8:i8:$src, -1:i8), (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                        // Dst: (BIC8mr:i16 addr:i16:$dst, GR8:i8:$src)
                      /*SwitchType*/ 27,  MVT::i16,// ->721
/*694*/                 OPC_MoveParent,
/*695*/                 OPC_MoveChild, 2,
/*697*/                 OPC_CheckSame, 3,
/*699*/                 OPC_MoveParent,
/*700*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*702*/                 OPC_CheckPredicate, 3, // Predicate_store
/*704*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*707*/                 OPC_EmitMergeInputChains, 2, 0, 2, 
/*711*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16mr), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                        // Src: (st (and:i16 (xor:i16 GR16:i16:$src, -1:i16), (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 37
                        // Dst: (BIC16mr:i16 addr:i16:$dst, GR16:i16:$src)
                      0, // EndSwitchType
/*722*/             0, /*End of Scope*/
                  0, // EndSwitchOpcode
/*724*/         /*Scope*/ 75, /*->800*/
/*725*/           OPC_RecordChild0, // #1 = $src
/*726*/           OPC_MoveChild, 1,
/*728*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*731*/           OPC_RecordMemRef,
/*732*/           OPC_RecordNode, // #2 = 'ld' chained node
/*733*/           OPC_CheckFoldableChainNode,
/*734*/           OPC_RecordChild1, // #3 = $dst
/*735*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*737*/           OPC_CheckPredicate, 1, // Predicate_load
/*739*/           OPC_MoveParent,
/*740*/           OPC_SwitchType /*2 cases */, 27,  MVT::i8,// ->770
/*743*/             OPC_MoveParent,
/*744*/             OPC_MoveChild, 2,
/*746*/             OPC_CheckSame, 3,
/*748*/             OPC_MoveParent,
/*749*/             OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*751*/             OPC_CheckPredicate, 3, // Predicate_store
/*753*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*756*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*760*/             OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (and:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (AND8mr:i16 addr:i16:$dst, GR8:i8:$src)
                  /*SwitchType*/ 27,  MVT::i16,// ->799
/*772*/             OPC_MoveParent,
/*773*/             OPC_MoveChild, 2,
/*775*/             OPC_CheckSame, 3,
/*777*/             OPC_MoveParent,
/*778*/             OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*780*/             OPC_CheckPredicate, 3, // Predicate_store
/*782*/             OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*785*/             OPC_EmitMergeInputChains, 2, 0, 2, 
/*789*/             OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (and:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (AND16mr:i16 addr:i16:$dst, GR16:i16:$src)
                  0, // EndSwitchType
/*800*/         0, /*End of Scope*/
              /*SwitchOpcode*/ 0|128,3/*384*/,  TARGET_VAL(ISD::ADD),// ->1189
/*805*/         OPC_Scope, 48|128,2/*304*/, /*->1112*/ // 2 children in Scope
/*808*/           OPC_MoveChild, 0,
/*810*/           OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*813*/           OPC_RecordMemRef,
/*814*/           OPC_RecordNode, // #1 = 'ld' chained node
/*815*/           OPC_CheckFoldableChainNode,
/*816*/           OPC_RecordChild1, // #2 = $dst
/*817*/           OPC_CheckPredicate, 0, // Predicate_unindexedload
/*819*/           OPC_CheckPredicate, 1, // Predicate_load
/*821*/           OPC_MoveParent,
/*822*/           OPC_Scope, 22|128,1/*150*/, /*->975*/ // 2 children in Scope
/*825*/             OPC_MoveChild, 1,
/*827*/             OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*830*/             OPC_RecordMemRef,
/*831*/             OPC_RecordNode, // #3 = 'ld' chained node
/*832*/             OPC_CheckFoldableChainNode,
/*833*/             OPC_RecordChild1, // #4 = $src
/*834*/             OPC_CheckPredicate, 0, // Predicate_unindexedload
/*836*/             OPC_CheckPredicate, 1, // Predicate_load
/*838*/             OPC_MoveParent,
/*839*/             OPC_SwitchType /*2 cases */, 65,  MVT::i8,// ->907
/*842*/               OPC_MoveParent,
/*843*/               OPC_MoveChild, 2,
/*845*/               OPC_Scope, 29, /*->876*/ // 2 children in Scope
/*847*/                 OPC_CheckSame, 2,
/*849*/                 OPC_MoveParent,
/*850*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*852*/                 OPC_CheckPredicate, 3, // Predicate_store
/*854*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*857*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*860*/                 OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*865*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                        // Src: (st (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*876*/               /*Scope*/ 29, /*->906*/
/*877*/                 OPC_CheckSame, 4,
/*879*/                 OPC_MoveParent,
/*880*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*882*/                 OPC_CheckPredicate, 3, // Predicate_store
/*884*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*887*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*890*/                 OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*895*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (add:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*906*/               0, /*End of Scope*/
                    /*SwitchType*/ 65,  MVT::i16,// ->974
/*909*/               OPC_MoveParent,
/*910*/               OPC_MoveChild, 2,
/*912*/               OPC_Scope, 29, /*->943*/ // 2 children in Scope
/*914*/                 OPC_CheckSame, 2,
/*916*/                 OPC_MoveParent,
/*917*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*919*/                 OPC_CheckPredicate, 3, // Predicate_store
/*921*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*924*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*927*/                 OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*932*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                        // Src: (st (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*943*/               /*Scope*/ 29, /*->973*/
/*944*/                 OPC_CheckSame, 4,
/*946*/                 OPC_MoveParent,
/*947*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*949*/                 OPC_CheckPredicate, 3, // Predicate_store
/*951*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*954*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*957*/                 OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*962*/                 OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (add:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*973*/               0, /*End of Scope*/
                    0, // EndSwitchType
/*975*/           /*Scope*/ 6|128,1/*134*/, /*->1111*/
/*977*/             OPC_RecordChild1, // #3 = $src
/*978*/             OPC_Scope, 70, /*->1050*/ // 3 children in Scope
/*980*/               OPC_MoveChild, 1,
/*982*/               OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*985*/               OPC_MoveParent,
/*986*/               OPC_SwitchType /*2 cases */, 29,  MVT::i8,// ->1018
/*989*/                 OPC_MoveParent,
/*990*/                 OPC_MoveChild, 2,
/*992*/                 OPC_CheckSame, 2,
/*994*/                 OPC_MoveParent,
/*995*/                 OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*997*/                 OPC_CheckPredicate, 3, // Predicate_store
/*999*/                 OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1002*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1006*/                OPC_EmitConvertToTarget, 3,
/*1008*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mi), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (ADD8mi:i16 addr:i16:$dst, (imm:i8):$src)
                      /*SwitchType*/ 29,  MVT::i16,// ->1049
/*1020*/                OPC_MoveParent,
/*1021*/                OPC_MoveChild, 2,
/*1023*/                OPC_CheckSame, 2,
/*1025*/                OPC_MoveParent,
/*1026*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1028*/                OPC_CheckPredicate, 3, // Predicate_store
/*1030*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1033*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1037*/                OPC_EmitConvertToTarget, 3,
/*1039*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mi), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (ADD16mi:i16 addr:i16:$dst, (imm:i16):$src)
                      0, // EndSwitchType
/*1050*/            /*Scope*/ 29, /*->1080*/
/*1051*/              OPC_CheckType, MVT::i8,
/*1053*/              OPC_MoveParent,
/*1054*/              OPC_MoveChild, 2,
/*1056*/              OPC_CheckSame, 2,
/*1058*/              OPC_MoveParent,
/*1059*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1061*/              OPC_CheckPredicate, 3, // Predicate_store
/*1063*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1066*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*1070*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (add:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1080*/            /*Scope*/ 29, /*->1110*/
/*1081*/              OPC_CheckType, MVT::i16,
/*1083*/              OPC_MoveParent,
/*1084*/              OPC_MoveChild, 2,
/*1086*/              OPC_CheckSame, 2,
/*1088*/              OPC_MoveParent,
/*1089*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1091*/              OPC_CheckPredicate, 3, // Predicate_store
/*1093*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1096*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*1100*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (add:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1110*/            0, /*End of Scope*/
/*1111*/          0, /*End of Scope*/
/*1112*/        /*Scope*/ 75, /*->1188*/
/*1113*/          OPC_RecordChild0, // #1 = $src
/*1114*/          OPC_MoveChild, 1,
/*1116*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1119*/          OPC_RecordMemRef,
/*1120*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1121*/          OPC_CheckFoldableChainNode,
/*1122*/          OPC_RecordChild1, // #3 = $dst
/*1123*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1125*/          OPC_CheckPredicate, 1, // Predicate_load
/*1127*/          OPC_MoveParent,
/*1128*/          OPC_SwitchType /*2 cases */, 27,  MVT::i8,// ->1158
/*1131*/            OPC_MoveParent,
/*1132*/            OPC_MoveChild, 2,
/*1134*/            OPC_CheckSame, 3,
/*1136*/            OPC_MoveParent,
/*1137*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1139*/            OPC_CheckPredicate, 3, // Predicate_store
/*1141*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1144*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1148*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (add:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
                  /*SwitchType*/ 27,  MVT::i16,// ->1187
/*1160*/            OPC_MoveParent,
/*1161*/            OPC_MoveChild, 2,
/*1163*/            OPC_CheckSame, 3,
/*1165*/            OPC_MoveParent,
/*1166*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1168*/            OPC_CheckPredicate, 3, // Predicate_store
/*1170*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1173*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1177*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (add:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
                  0, // EndSwitchType
/*1188*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 32|128,3/*416*/,  TARGET_VAL(ISD::ADDE),// ->1609
/*1193*/        OPC_RecordNode, // #1 = 'adde' glue output node
/*1194*/        OPC_CaptureGlueInput,
/*1195*/        OPC_Scope, 72|128,2/*328*/, /*->1526*/ // 2 children in Scope
/*1198*/          OPC_MoveChild, 0,
/*1200*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1203*/          OPC_RecordMemRef,
/*1204*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1205*/          OPC_CheckFoldableChainNode,
/*1206*/          OPC_RecordChild1, // #3 = $dst
/*1207*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1209*/          OPC_CheckPredicate, 1, // Predicate_load
/*1211*/          OPC_MoveParent,
/*1212*/          OPC_Scope, 34|128,1/*162*/, /*->1377*/ // 2 children in Scope
/*1215*/            OPC_MoveChild, 1,
/*1217*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1220*/            OPC_RecordMemRef,
/*1221*/            OPC_RecordNode, // #4 = 'ld' chained node
/*1222*/            OPC_CheckFoldableChainNode,
/*1223*/            OPC_RecordChild1, // #5 = $src
/*1224*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1226*/            OPC_CheckPredicate, 1, // Predicate_load
/*1228*/            OPC_MoveParent,
/*1229*/            OPC_SwitchType /*2 cases */, 71,  MVT::i8,// ->1303
/*1232*/              OPC_MoveParent,
/*1233*/              OPC_MoveChild, 2,
/*1235*/              OPC_Scope, 32, /*->1269*/ // 2 children in Scope
/*1237*/                OPC_CheckSame, 3,
/*1239*/                OPC_MoveParent,
/*1240*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1242*/                OPC_CheckPredicate, 3, // Predicate_store
/*1244*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*1247*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*1250*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*1255*/                OPC_MarkGlueResults, 1, 1, 
/*1258*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                        // Src: (st (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADC8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1269*/              /*Scope*/ 32, /*->1302*/
/*1270*/                OPC_CheckSame, 5,
/*1272*/                OPC_MoveParent,
/*1273*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1275*/                OPC_CheckPredicate, 3, // Predicate_store
/*1277*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*1280*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$dst #8 #9
/*1283*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*1288*/                OPC_MarkGlueResults, 1, 1, 
/*1291*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 8, 9, 6, 7, 
                        // Src: (st (adde:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADC8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1302*/              0, /*End of Scope*/
                    /*SwitchType*/ 71,  MVT::i16,// ->1376
/*1305*/              OPC_MoveParent,
/*1306*/              OPC_MoveChild, 2,
/*1308*/              OPC_Scope, 32, /*->1342*/ // 2 children in Scope
/*1310*/                OPC_CheckSame, 3,
/*1312*/                OPC_MoveParent,
/*1313*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1315*/                OPC_CheckPredicate, 3, // Predicate_store
/*1317*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*1320*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*1323*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*1328*/                OPC_MarkGlueResults, 1, 1, 
/*1331*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                        // Src: (st (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADC16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1342*/              /*Scope*/ 32, /*->1375*/
/*1343*/                OPC_CheckSame, 5,
/*1345*/                OPC_MoveParent,
/*1346*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1348*/                OPC_CheckPredicate, 3, // Predicate_store
/*1350*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*1353*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$dst #8 #9
/*1356*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*1361*/                OPC_MarkGlueResults, 1, 1, 
/*1364*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 8, 9, 6, 7, 
                        // Src: (st (adde:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADC16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1375*/              0, /*End of Scope*/
                    0, // EndSwitchType
/*1377*/          /*Scope*/ 18|128,1/*146*/, /*->1525*/
/*1379*/            OPC_RecordChild1, // #4 = $src
/*1380*/            OPC_Scope, 76, /*->1458*/ // 3 children in Scope
/*1382*/              OPC_MoveChild, 1,
/*1384*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1387*/              OPC_MoveParent,
/*1388*/              OPC_SwitchType /*2 cases */, 32,  MVT::i8,// ->1423
/*1391*/                OPC_MoveParent,
/*1392*/                OPC_MoveChild, 2,
/*1394*/                OPC_CheckSame, 3,
/*1396*/                OPC_MoveParent,
/*1397*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1399*/                OPC_CheckPredicate, 3, // Predicate_store
/*1401*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*1404*/                OPC_EmitMergeInputChains, 2, 0, 2, 
/*1408*/                OPC_EmitConvertToTarget, 4,
/*1410*/                OPC_MarkGlueResults, 1, 1, 
/*1413*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 7, 
                        // Src: (st (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (ADC8mi:i16 addr:i16:$dst, (imm:i8):$src)
                      /*SwitchType*/ 32,  MVT::i16,// ->1457
/*1425*/                OPC_MoveParent,
/*1426*/                OPC_MoveChild, 2,
/*1428*/                OPC_CheckSame, 3,
/*1430*/                OPC_MoveParent,
/*1431*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1433*/                OPC_CheckPredicate, 3, // Predicate_store
/*1435*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*1438*/                OPC_EmitMergeInputChains, 2, 0, 2, 
/*1442*/                OPC_EmitConvertToTarget, 4,
/*1444*/                OPC_MarkGlueResults, 1, 1, 
/*1447*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 7, 
                        // Src: (st (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (ADC16mi:i16 addr:i16:$dst, (imm:i16):$src)
                      0, // EndSwitchType
/*1458*/            /*Scope*/ 32, /*->1491*/
/*1459*/              OPC_CheckType, MVT::i8,
/*1461*/              OPC_MoveParent,
/*1462*/              OPC_MoveChild, 2,
/*1464*/              OPC_CheckSame, 3,
/*1466*/              OPC_MoveParent,
/*1467*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1469*/              OPC_CheckPredicate, 3, // Predicate_store
/*1471*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*1474*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1478*/              OPC_MarkGlueResults, 1, 1, 
/*1481*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                      // Src: (st (adde:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADC8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1491*/            /*Scope*/ 32, /*->1524*/
/*1492*/              OPC_CheckType, MVT::i16,
/*1494*/              OPC_MoveParent,
/*1495*/              OPC_MoveChild, 2,
/*1497*/              OPC_CheckSame, 3,
/*1499*/              OPC_MoveParent,
/*1500*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1502*/              OPC_CheckPredicate, 3, // Predicate_store
/*1504*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*1507*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*1511*/              OPC_MarkGlueResults, 1, 1, 
/*1514*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                      // Src: (st (adde:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADC16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1524*/            0, /*End of Scope*/
/*1525*/          0, /*End of Scope*/
/*1526*/        /*Scope*/ 81, /*->1608*/
/*1527*/          OPC_RecordChild0, // #2 = $src
/*1528*/          OPC_MoveChild, 1,
/*1530*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1533*/          OPC_RecordMemRef,
/*1534*/          OPC_RecordNode, // #3 = 'ld' chained node
/*1535*/          OPC_CheckFoldableChainNode,
/*1536*/          OPC_RecordChild1, // #4 = $dst
/*1537*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1539*/          OPC_CheckPredicate, 1, // Predicate_load
/*1541*/          OPC_MoveParent,
/*1542*/          OPC_SwitchType /*2 cases */, 30,  MVT::i8,// ->1575
/*1545*/            OPC_MoveParent,
/*1546*/            OPC_MoveChild, 2,
/*1548*/            OPC_CheckSame, 4,
/*1550*/            OPC_MoveParent,
/*1551*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1553*/            OPC_CheckPredicate, 3, // Predicate_store
/*1555*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #5 #6
/*1558*/            OPC_EmitMergeInputChains, 2, 0, 3, 
/*1562*/            OPC_MarkGlueResults, 1, 1, 
/*1565*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 2, 
                    // Src: (st (adde:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (ADC8mr:i16 addr:i16:$dst, GR8:i8:$src)
                  /*SwitchType*/ 30,  MVT::i16,// ->1607
/*1577*/            OPC_MoveParent,
/*1578*/            OPC_MoveChild, 2,
/*1580*/            OPC_CheckSame, 4,
/*1582*/            OPC_MoveParent,
/*1583*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1585*/            OPC_CheckPredicate, 3, // Predicate_store
/*1587*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #5 #6
/*1590*/            OPC_EmitMergeInputChains, 2, 0, 3, 
/*1594*/            OPC_MarkGlueResults, 1, 1, 
/*1597*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 2, 
                    // Src: (st (adde:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (ADC16mr:i16 addr:i16:$dst, GR16:i16:$src)
                  0, // EndSwitchType
/*1608*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 0|128,3/*384*/,  TARGET_VAL(ISD::OR),// ->1997
/*1613*/        OPC_Scope, 48|128,2/*304*/, /*->1920*/ // 2 children in Scope
/*1616*/          OPC_MoveChild, 0,
/*1618*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1621*/          OPC_RecordMemRef,
/*1622*/          OPC_RecordNode, // #1 = 'ld' chained node
/*1623*/          OPC_CheckFoldableChainNode,
/*1624*/          OPC_RecordChild1, // #2 = $dst
/*1625*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1627*/          OPC_CheckPredicate, 1, // Predicate_load
/*1629*/          OPC_MoveParent,
/*1630*/          OPC_Scope, 22|128,1/*150*/, /*->1783*/ // 2 children in Scope
/*1633*/            OPC_MoveChild, 1,
/*1635*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1638*/            OPC_RecordMemRef,
/*1639*/            OPC_RecordNode, // #3 = 'ld' chained node
/*1640*/            OPC_CheckFoldableChainNode,
/*1641*/            OPC_RecordChild1, // #4 = $src
/*1642*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1644*/            OPC_CheckPredicate, 1, // Predicate_load
/*1646*/            OPC_MoveParent,
/*1647*/            OPC_SwitchType /*2 cases */, 65,  MVT::i8,// ->1715
/*1650*/              OPC_MoveParent,
/*1651*/              OPC_MoveChild, 2,
/*1653*/              OPC_Scope, 29, /*->1684*/ // 2 children in Scope
/*1655*/                OPC_CheckSame, 2,
/*1657*/                OPC_MoveParent,
/*1658*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1660*/                OPC_CheckPredicate, 3, // Predicate_store
/*1662*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1665*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1668*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1673*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                        // Src: (st (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (OR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1684*/              /*Scope*/ 29, /*->1714*/
/*1685*/                OPC_CheckSame, 4,
/*1687*/                OPC_MoveParent,
/*1688*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1690*/                OPC_CheckPredicate, 3, // Predicate_store
/*1692*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1695*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1698*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1703*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (or:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (OR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*1714*/              0, /*End of Scope*/
                    /*SwitchType*/ 65,  MVT::i16,// ->1782
/*1717*/              OPC_MoveParent,
/*1718*/              OPC_MoveChild, 2,
/*1720*/              OPC_Scope, 29, /*->1751*/ // 2 children in Scope
/*1722*/                OPC_CheckSame, 2,
/*1724*/                OPC_MoveParent,
/*1725*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1727*/                OPC_CheckPredicate, 3, // Predicate_store
/*1729*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*1732*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*1735*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1740*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                        // Src: (st (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (OR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1751*/              /*Scope*/ 29, /*->1781*/
/*1752*/                OPC_CheckSame, 4,
/*1754*/                OPC_MoveParent,
/*1755*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1757*/                OPC_CheckPredicate, 3, // Predicate_store
/*1759*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*1762*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*1765*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*1770*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (or:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (OR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*1781*/              0, /*End of Scope*/
                    0, // EndSwitchType
/*1783*/          /*Scope*/ 6|128,1/*134*/, /*->1919*/
/*1785*/            OPC_RecordChild1, // #3 = $src
/*1786*/            OPC_Scope, 70, /*->1858*/ // 3 children in Scope
/*1788*/              OPC_MoveChild, 1,
/*1790*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1793*/              OPC_MoveParent,
/*1794*/              OPC_SwitchType /*2 cases */, 29,  MVT::i8,// ->1826
/*1797*/                OPC_MoveParent,
/*1798*/                OPC_MoveChild, 2,
/*1800*/                OPC_CheckSame, 2,
/*1802*/                OPC_MoveParent,
/*1803*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1805*/                OPC_CheckPredicate, 3, // Predicate_store
/*1807*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1810*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1814*/                OPC_EmitConvertToTarget, 3,
/*1816*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8mi), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (OR8mi:i16 addr:i16:$dst, (imm:i8):$src)
                      /*SwitchType*/ 29,  MVT::i16,// ->1857
/*1828*/                OPC_MoveParent,
/*1829*/                OPC_MoveChild, 2,
/*1831*/                OPC_CheckSame, 2,
/*1833*/                OPC_MoveParent,
/*1834*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1836*/                OPC_CheckPredicate, 3, // Predicate_store
/*1838*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1841*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*1845*/                OPC_EmitConvertToTarget, 3,
/*1847*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16mi), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (OR16mi:i16 addr:i16:$dst, (imm:i16):$src)
                      0, // EndSwitchType
/*1858*/            /*Scope*/ 29, /*->1888*/
/*1859*/              OPC_CheckType, MVT::i8,
/*1861*/              OPC_MoveParent,
/*1862*/              OPC_MoveChild, 2,
/*1864*/              OPC_CheckSame, 2,
/*1866*/              OPC_MoveParent,
/*1867*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1869*/              OPC_CheckPredicate, 3, // Predicate_store
/*1871*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1874*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*1878*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (or:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (OR8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*1888*/            /*Scope*/ 29, /*->1918*/
/*1889*/              OPC_CheckType, MVT::i16,
/*1891*/              OPC_MoveParent,
/*1892*/              OPC_MoveChild, 2,
/*1894*/              OPC_CheckSame, 2,
/*1896*/              OPC_MoveParent,
/*1897*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1899*/              OPC_CheckPredicate, 3, // Predicate_store
/*1901*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*1904*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*1908*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (or:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (OR16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*1918*/            0, /*End of Scope*/
/*1919*/          0, /*End of Scope*/
/*1920*/        /*Scope*/ 75, /*->1996*/
/*1921*/          OPC_RecordChild0, // #1 = $src
/*1922*/          OPC_MoveChild, 1,
/*1924*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*1927*/          OPC_RecordMemRef,
/*1928*/          OPC_RecordNode, // #2 = 'ld' chained node
/*1929*/          OPC_CheckFoldableChainNode,
/*1930*/          OPC_RecordChild1, // #3 = $dst
/*1931*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1933*/          OPC_CheckPredicate, 1, // Predicate_load
/*1935*/          OPC_MoveParent,
/*1936*/          OPC_SwitchType /*2 cases */, 27,  MVT::i8,// ->1966
/*1939*/            OPC_MoveParent,
/*1940*/            OPC_MoveChild, 2,
/*1942*/            OPC_CheckSame, 3,
/*1944*/            OPC_MoveParent,
/*1945*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1947*/            OPC_CheckPredicate, 3, // Predicate_store
/*1949*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1952*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1956*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (or:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (OR8mr:i16 addr:i16:$dst, GR8:i8:$src)
                  /*SwitchType*/ 27,  MVT::i16,// ->1995
/*1968*/            OPC_MoveParent,
/*1969*/            OPC_MoveChild, 2,
/*1971*/            OPC_CheckSame, 3,
/*1973*/            OPC_MoveParent,
/*1974*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*1976*/            OPC_CheckPredicate, 3, // Predicate_store
/*1978*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*1981*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*1985*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (or:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (OR16mr:i16 addr:i16:$dst, GR16:i16:$src)
                  0, // EndSwitchType
/*1996*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 0|128,3/*384*/,  TARGET_VAL(ISD::XOR),// ->2385
/*2001*/        OPC_Scope, 48|128,2/*304*/, /*->2308*/ // 2 children in Scope
/*2004*/          OPC_MoveChild, 0,
/*2006*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2009*/          OPC_RecordMemRef,
/*2010*/          OPC_RecordNode, // #1 = 'ld' chained node
/*2011*/          OPC_CheckFoldableChainNode,
/*2012*/          OPC_RecordChild1, // #2 = $dst
/*2013*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2015*/          OPC_CheckPredicate, 1, // Predicate_load
/*2017*/          OPC_MoveParent,
/*2018*/          OPC_Scope, 22|128,1/*150*/, /*->2171*/ // 2 children in Scope
/*2021*/            OPC_MoveChild, 1,
/*2023*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2026*/            OPC_RecordMemRef,
/*2027*/            OPC_RecordNode, // #3 = 'ld' chained node
/*2028*/            OPC_CheckFoldableChainNode,
/*2029*/            OPC_RecordChild1, // #4 = $src
/*2030*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2032*/            OPC_CheckPredicate, 1, // Predicate_load
/*2034*/            OPC_MoveParent,
/*2035*/            OPC_SwitchType /*2 cases */, 65,  MVT::i8,// ->2103
/*2038*/              OPC_MoveParent,
/*2039*/              OPC_MoveChild, 2,
/*2041*/              OPC_Scope, 29, /*->2072*/ // 2 children in Scope
/*2043*/                OPC_CheckSame, 2,
/*2045*/                OPC_MoveParent,
/*2046*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2048*/                OPC_CheckPredicate, 3, // Predicate_store
/*2050*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2053*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2056*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2061*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                        // Src: (st (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (XOR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*2072*/              /*Scope*/ 29, /*->2102*/
/*2073*/                OPC_CheckSame, 4,
/*2075*/                OPC_MoveParent,
/*2076*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2078*/                OPC_CheckPredicate, 3, // Predicate_store
/*2080*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*2083*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*2086*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2091*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (xor:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (XOR8mm:i16 addr:i16:$dst, addr:i16:$src)
/*2102*/              0, /*End of Scope*/
                    /*SwitchType*/ 65,  MVT::i16,// ->2170
/*2105*/              OPC_MoveParent,
/*2106*/              OPC_MoveChild, 2,
/*2108*/              OPC_Scope, 29, /*->2139*/ // 2 children in Scope
/*2110*/                OPC_CheckSame, 2,
/*2112*/                OPC_MoveParent,
/*2113*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2115*/                OPC_CheckPredicate, 3, // Predicate_store
/*2117*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2120*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2123*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2128*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                        // Src: (st (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (XOR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2139*/              /*Scope*/ 29, /*->2169*/
/*2140*/                OPC_CheckSame, 4,
/*2142*/                OPC_MoveParent,
/*2143*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2145*/                OPC_CheckPredicate, 3, // Predicate_store
/*2147*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #5 #6
/*2150*/                OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #7 #8
/*2153*/                OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2158*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16mm), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 7, 8, 5, 6, 
                        // Src: (st (xor:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (XOR16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2169*/              0, /*End of Scope*/
                    0, // EndSwitchType
/*2171*/          /*Scope*/ 6|128,1/*134*/, /*->2307*/
/*2173*/            OPC_RecordChild1, // #3 = $src
/*2174*/            OPC_Scope, 70, /*->2246*/ // 3 children in Scope
/*2176*/              OPC_MoveChild, 1,
/*2178*/              OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2181*/              OPC_MoveParent,
/*2182*/              OPC_SwitchType /*2 cases */, 29,  MVT::i8,// ->2214
/*2185*/                OPC_MoveParent,
/*2186*/                OPC_MoveChild, 2,
/*2188*/                OPC_CheckSame, 2,
/*2190*/                OPC_MoveParent,
/*2191*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2193*/                OPC_CheckPredicate, 3, // Predicate_store
/*2195*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2198*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2202*/                OPC_EmitConvertToTarget, 3,
/*2204*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8mi), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (XOR8mi:i16 addr:i16:$dst, (imm:i8):$src)
                      /*SwitchType*/ 29,  MVT::i16,// ->2245
/*2216*/                OPC_MoveParent,
/*2217*/                OPC_MoveChild, 2,
/*2219*/                OPC_CheckSame, 2,
/*2221*/                OPC_MoveParent,
/*2222*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2224*/                OPC_CheckPredicate, 3, // Predicate_store
/*2226*/                OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2229*/                OPC_EmitMergeInputChains, 2, 0, 1, 
/*2233*/                OPC_EmitConvertToTarget, 3,
/*2235*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16mi), 0|OPFL_Chain|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                        // Src: (st (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                        // Dst: (XOR16mi:i16 addr:i16:$dst, (imm:i16):$src)
                      0, // EndSwitchType
/*2246*/            /*Scope*/ 29, /*->2276*/
/*2247*/              OPC_CheckType, MVT::i8,
/*2249*/              OPC_MoveParent,
/*2250*/              OPC_MoveChild, 2,
/*2252*/              OPC_CheckSame, 2,
/*2254*/              OPC_MoveParent,
/*2255*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2257*/              OPC_CheckPredicate, 3, // Predicate_store
/*2259*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2262*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2266*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (xor:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (XOR8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2276*/            /*Scope*/ 29, /*->2306*/
/*2277*/              OPC_CheckType, MVT::i16,
/*2279*/              OPC_MoveParent,
/*2280*/              OPC_MoveChild, 2,
/*2282*/              OPC_CheckSame, 2,
/*2284*/              OPC_MoveParent,
/*2285*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2287*/              OPC_CheckPredicate, 3, // Predicate_store
/*2289*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2292*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2296*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                      // Src: (st (xor:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (XOR16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2306*/            0, /*End of Scope*/
/*2307*/          0, /*End of Scope*/
/*2308*/        /*Scope*/ 75, /*->2384*/
/*2309*/          OPC_RecordChild0, // #1 = $src
/*2310*/          OPC_MoveChild, 1,
/*2312*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2315*/          OPC_RecordMemRef,
/*2316*/          OPC_RecordNode, // #2 = 'ld' chained node
/*2317*/          OPC_CheckFoldableChainNode,
/*2318*/          OPC_RecordChild1, // #3 = $dst
/*2319*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2321*/          OPC_CheckPredicate, 1, // Predicate_load
/*2323*/          OPC_MoveParent,
/*2324*/          OPC_SwitchType /*2 cases */, 27,  MVT::i8,// ->2354
/*2327*/            OPC_MoveParent,
/*2328*/            OPC_MoveChild, 2,
/*2330*/            OPC_CheckSame, 3,
/*2332*/            OPC_MoveParent,
/*2333*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2335*/            OPC_CheckPredicate, 3, // Predicate_store
/*2337*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*2340*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2344*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (xor:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (XOR8mr:i16 addr:i16:$dst, GR8:i8:$src)
                  /*SwitchType*/ 27,  MVT::i16,// ->2383
/*2356*/            OPC_MoveParent,
/*2357*/            OPC_MoveChild, 2,
/*2359*/            OPC_CheckSame, 3,
/*2361*/            OPC_MoveParent,
/*2362*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2364*/            OPC_CheckPredicate, 3, // Predicate_store
/*2366*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #4 #5
/*2369*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2373*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 1, 
                    // Src: (st (xor:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (XOR16mr:i16 addr:i16:$dst, GR16:i16:$src)
                  0, // EndSwitchType
/*2384*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 109|128,1/*237*/,  TARGET_VAL(ISD::SUB),// ->2626
/*2389*/        OPC_MoveChild, 0,
/*2391*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2394*/        OPC_RecordMemRef,
/*2395*/        OPC_RecordNode, // #1 = 'ld' chained node
/*2396*/        OPC_CheckFoldableChainNode,
/*2397*/        OPC_RecordChild1, // #2 = $dst
/*2398*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2400*/        OPC_CheckPredicate, 1, // Predicate_load
/*2402*/        OPC_MoveParent,
/*2403*/        OPC_Scope, 84, /*->2489*/ // 2 children in Scope
/*2405*/          OPC_MoveChild, 1,
/*2407*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2410*/          OPC_RecordMemRef,
/*2411*/          OPC_RecordNode, // #3 = 'ld' chained node
/*2412*/          OPC_CheckFoldableChainNode,
/*2413*/          OPC_RecordChild1, // #4 = $src
/*2414*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2416*/          OPC_CheckPredicate, 1, // Predicate_load
/*2418*/          OPC_MoveParent,
/*2419*/          OPC_SwitchType /*2 cases */, 32,  MVT::i8,// ->2454
/*2422*/            OPC_MoveParent,
/*2423*/            OPC_MoveChild, 2,
/*2425*/            OPC_CheckSame, 2,
/*2427*/            OPC_MoveParent,
/*2428*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2430*/            OPC_CheckPredicate, 3, // Predicate_store
/*2432*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2435*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2438*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2443*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8mm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                    // Src: (st (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                    // Dst: (SUB8mm:i16 addr:i16:$dst, addr:i16:$src)
                  /*SwitchType*/ 32,  MVT::i16,// ->2488
/*2456*/            OPC_MoveParent,
/*2457*/            OPC_MoveChild, 2,
/*2459*/            OPC_CheckSame, 2,
/*2461*/            OPC_MoveParent,
/*2462*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2464*/            OPC_CheckPredicate, 3, // Predicate_store
/*2466*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #5 #6
/*2469*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$src #7 #8
/*2472*/            OPC_EmitMergeInputChains, 3, 0, 1, 3, 
/*2477*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16mm), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 5, 6, 7, 8, 
                    // Src: (st (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                    // Dst: (SUB16mm:i16 addr:i16:$dst, addr:i16:$src)
                  0, // EndSwitchType
/*2489*/        /*Scope*/ 6|128,1/*134*/, /*->2625*/
/*2491*/          OPC_RecordChild1, // #3 = $src
/*2492*/          OPC_Scope, 70, /*->2564*/ // 3 children in Scope
/*2494*/            OPC_MoveChild, 1,
/*2496*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2499*/            OPC_MoveParent,
/*2500*/            OPC_SwitchType /*2 cases */, 29,  MVT::i8,// ->2532
/*2503*/              OPC_MoveParent,
/*2504*/              OPC_MoveChild, 2,
/*2506*/              OPC_CheckSame, 2,
/*2508*/              OPC_MoveParent,
/*2509*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2511*/              OPC_CheckPredicate, 3, // Predicate_store
/*2513*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2516*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2520*/              OPC_EmitConvertToTarget, 3,
/*2522*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8mi), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                      // Src: (st (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                      // Dst: (SUB8mi:i16 addr:i16:$dst, (imm:i8):$src)
                    /*SwitchType*/ 29,  MVT::i16,// ->2563
/*2534*/              OPC_MoveParent,
/*2535*/              OPC_MoveChild, 2,
/*2537*/              OPC_CheckSame, 2,
/*2539*/              OPC_MoveParent,
/*2540*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2542*/              OPC_CheckPredicate, 3, // Predicate_store
/*2544*/              OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2547*/              OPC_EmitMergeInputChains, 2, 0, 1, 
/*2551*/              OPC_EmitConvertToTarget, 3,
/*2553*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16mi), 0|OPFL_Chain|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 6, 
                      // Src: (st (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                      // Dst: (SUB16mi:i16 addr:i16:$dst, (imm:i16):$src)
                    0, // EndSwitchType
/*2564*/          /*Scope*/ 29, /*->2594*/
/*2565*/            OPC_CheckType, MVT::i8,
/*2567*/            OPC_MoveParent,
/*2568*/            OPC_MoveChild, 2,
/*2570*/            OPC_CheckSame, 2,
/*2572*/            OPC_MoveParent,
/*2573*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2575*/            OPC_CheckPredicate, 3, // Predicate_store
/*2577*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2580*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2584*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (sub:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (SUB8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2594*/          /*Scope*/ 29, /*->2624*/
/*2595*/            OPC_CheckType, MVT::i16,
/*2597*/            OPC_MoveParent,
/*2598*/            OPC_MoveChild, 2,
/*2600*/            OPC_CheckSame, 2,
/*2602*/            OPC_MoveParent,
/*2603*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2605*/            OPC_CheckPredicate, 3, // Predicate_store
/*2607*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #4 #5
/*2610*/            OPC_EmitMergeInputChains, 2, 0, 1, 
/*2614*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16mr), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 4, 5, 3, 
                    // Src: (st (sub:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (SUB16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2624*/          0, /*End of Scope*/
/*2625*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 1|128,2/*257*/,  TARGET_VAL(ISD::SUBE),// ->2887
/*2630*/        OPC_RecordNode, // #1 = 'sube' glue output node
/*2631*/        OPC_CaptureGlueInput,
/*2632*/        OPC_MoveChild, 0,
/*2634*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2637*/        OPC_RecordMemRef,
/*2638*/        OPC_RecordNode, // #2 = 'ld' chained node
/*2639*/        OPC_CheckFoldableChainNode,
/*2640*/        OPC_RecordChild1, // #3 = $dst
/*2641*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2643*/        OPC_CheckPredicate, 1, // Predicate_load
/*2645*/        OPC_MoveParent,
/*2646*/        OPC_Scope, 90, /*->2738*/ // 2 children in Scope
/*2648*/          OPC_MoveChild, 1,
/*2650*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2653*/          OPC_RecordMemRef,
/*2654*/          OPC_RecordNode, // #4 = 'ld' chained node
/*2655*/          OPC_CheckFoldableChainNode,
/*2656*/          OPC_RecordChild1, // #5 = $src
/*2657*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2659*/          OPC_CheckPredicate, 1, // Predicate_load
/*2661*/          OPC_MoveParent,
/*2662*/          OPC_SwitchType /*2 cases */, 35,  MVT::i8,// ->2700
/*2665*/            OPC_MoveParent,
/*2666*/            OPC_MoveChild, 2,
/*2668*/            OPC_CheckSame, 3,
/*2670*/            OPC_MoveParent,
/*2671*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2673*/            OPC_CheckPredicate, 3, // Predicate_store
/*2675*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*2678*/            OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*2681*/            OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*2686*/            OPC_MarkGlueResults, 1, 1, 
/*2689*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC8mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                    // Src: (st (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                    // Dst: (SBC8mm:i16 addr:i16:$dst, addr:i16:$src)
                  /*SwitchType*/ 35,  MVT::i16,// ->2737
/*2702*/            OPC_MoveParent,
/*2703*/            OPC_MoveChild, 2,
/*2705*/            OPC_CheckSame, 3,
/*2707*/            OPC_MoveParent,
/*2708*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2710*/            OPC_CheckPredicate, 3, // Predicate_store
/*2712*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*2715*/            OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*2718*/            OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*2723*/            OPC_MarkGlueResults, 1, 1, 
/*2726*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC16mm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                    // Src: (st (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                    // Dst: (SBC16mm:i16 addr:i16:$dst, addr:i16:$src)
                  0, // EndSwitchType
/*2738*/        /*Scope*/ 18|128,1/*146*/, /*->2886*/
/*2740*/          OPC_RecordChild1, // #4 = $src
/*2741*/          OPC_Scope, 76, /*->2819*/ // 3 children in Scope
/*2743*/            OPC_MoveChild, 1,
/*2745*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*2748*/            OPC_MoveParent,
/*2749*/            OPC_SwitchType /*2 cases */, 32,  MVT::i8,// ->2784
/*2752*/              OPC_MoveParent,
/*2753*/              OPC_MoveChild, 2,
/*2755*/              OPC_CheckSame, 3,
/*2757*/              OPC_MoveParent,
/*2758*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2760*/              OPC_CheckPredicate, 3, // Predicate_store
/*2762*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*2765*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2769*/              OPC_EmitConvertToTarget, 4,
/*2771*/              OPC_MarkGlueResults, 1, 1, 
/*2774*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC8mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 7, 
                      // Src: (st (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                      // Dst: (SBC8mi:i16 addr:i16:$dst, (imm:i8):$src)
                    /*SwitchType*/ 32,  MVT::i16,// ->2818
/*2786*/              OPC_MoveParent,
/*2787*/              OPC_MoveChild, 2,
/*2789*/              OPC_CheckSame, 3,
/*2791*/              OPC_MoveParent,
/*2792*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2794*/              OPC_CheckPredicate, 3, // Predicate_store
/*2796*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*2799*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*2803*/              OPC_EmitConvertToTarget, 4,
/*2805*/              OPC_MarkGlueResults, 1, 1, 
/*2808*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC16mi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 7, 
                      // Src: (st (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 32
                      // Dst: (SBC16mi:i16 addr:i16:$dst, (imm:i16):$src)
                    0, // EndSwitchType
/*2819*/          /*Scope*/ 32, /*->2852*/
/*2820*/            OPC_CheckType, MVT::i8,
/*2822*/            OPC_MoveParent,
/*2823*/            OPC_MoveChild, 2,
/*2825*/            OPC_CheckSame, 3,
/*2827*/            OPC_MoveParent,
/*2828*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2830*/            OPC_CheckPredicate, 3, // Predicate_store
/*2832*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*2835*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2839*/            OPC_MarkGlueResults, 1, 1, 
/*2842*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC8mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                    // Src: (st (sube:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (SBC8mr:i16 addr:i16:$dst, GR8:i8:$src)
/*2852*/          /*Scope*/ 32, /*->2885*/
/*2853*/            OPC_CheckType, MVT::i16,
/*2855*/            OPC_MoveParent,
/*2856*/            OPC_MoveChild, 2,
/*2858*/            OPC_CheckSame, 3,
/*2860*/            OPC_MoveParent,
/*2861*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2863*/            OPC_CheckPredicate, 3, // Predicate_store
/*2865*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*2868*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*2872*/            OPC_MarkGlueResults, 1, 1, 
/*2875*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC16mr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                    // Src: (st (sube:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (SBC16mr:i16 addr:i16:$dst, GR16:i16:$src)
/*2885*/          0, /*End of Scope*/
/*2886*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 79|128,2/*335*/,  TARGET_VAL(ISD::ADDC),// ->3226
/*2891*/        OPC_RecordNode, // #1 = 'addc' glue output node
/*2892*/        OPC_Scope, 120|128,1/*248*/, /*->3143*/ // 2 children in Scope
/*2895*/          OPC_MoveChild, 0,
/*2897*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2900*/          OPC_RecordMemRef,
/*2901*/          OPC_RecordNode, // #2 = 'ld' chained node
/*2902*/          OPC_CheckFoldableChainNode,
/*2903*/          OPC_RecordChild1, // #3 = $dst
/*2904*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2906*/          OPC_CheckPredicate, 1, // Predicate_load
/*2908*/          OPC_MoveParent,
/*2909*/          OPC_Scope, 34|128,1/*162*/, /*->3074*/ // 2 children in Scope
/*2912*/            OPC_MoveChild, 1,
/*2914*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*2917*/            OPC_RecordMemRef,
/*2918*/            OPC_RecordNode, // #4 = 'ld' chained node
/*2919*/            OPC_CheckFoldableChainNode,
/*2920*/            OPC_RecordChild1, // #5 = $src
/*2921*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*2923*/            OPC_CheckPredicate, 1, // Predicate_load
/*2925*/            OPC_MoveParent,
/*2926*/            OPC_SwitchType /*2 cases */, 71,  MVT::i16,// ->3000
/*2929*/              OPC_MoveParent,
/*2930*/              OPC_MoveChild, 2,
/*2932*/              OPC_Scope, 32, /*->2966*/ // 2 children in Scope
/*2934*/                OPC_CheckSame, 3,
/*2936*/                OPC_MoveParent,
/*2937*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2939*/                OPC_CheckPredicate, 3, // Predicate_store
/*2941*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*2944*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*2947*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*2952*/                OPC_MarkGlueResults, 1, 1, 
/*2955*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                        // Src: (st (addc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2966*/              /*Scope*/ 32, /*->2999*/
/*2967*/                OPC_CheckSame, 5,
/*2969*/                OPC_MoveParent,
/*2970*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*2972*/                OPC_CheckPredicate, 3, // Predicate_store
/*2974*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*2977*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$dst #8 #9
/*2980*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*2985*/                OPC_MarkGlueResults, 1, 1, 
/*2988*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 8, 9, 6, 7, 
                        // Src: (st (addc:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD16mm:i16 addr:i16:$dst, addr:i16:$src)
/*2999*/              0, /*End of Scope*/
                    /*SwitchType*/ 71,  MVT::i8,// ->3073
/*3002*/              OPC_MoveParent,
/*3003*/              OPC_MoveChild, 2,
/*3005*/              OPC_Scope, 32, /*->3039*/ // 2 children in Scope
/*3007*/                OPC_CheckSame, 3,
/*3009*/                OPC_MoveParent,
/*3010*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3012*/                OPC_CheckPredicate, 3, // Predicate_store
/*3014*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*3017*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*3020*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*3025*/                OPC_MarkGlueResults, 1, 1, 
/*3028*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                        // Src: (st (addc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*3039*/              /*Scope*/ 32, /*->3072*/
/*3040*/                OPC_CheckSame, 5,
/*3042*/                OPC_MoveParent,
/*3043*/                OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3045*/                OPC_CheckPredicate, 3, // Predicate_store
/*3047*/                OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src #6 #7
/*3050*/                OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$dst #8 #9
/*3053*/                OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*3058*/                OPC_MarkGlueResults, 1, 1, 
/*3061*/                OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                            1/*#VTs*/, MVT::i16, 4/*#Ops*/, 8, 9, 6, 7, 
                        // Src: (st (addc:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                        // Dst: (ADD8mm:i16 addr:i16:$dst, addr:i16:$src)
/*3072*/              0, /*End of Scope*/
                    0, // EndSwitchType
/*3074*/          /*Scope*/ 67, /*->3142*/
/*3075*/            OPC_RecordChild1, // #4 = $src
/*3076*/            OPC_SwitchType /*2 cases */, 30,  MVT::i16,// ->3109
/*3079*/              OPC_MoveParent,
/*3080*/              OPC_MoveChild, 2,
/*3082*/              OPC_CheckSame, 3,
/*3084*/              OPC_MoveParent,
/*3085*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3087*/              OPC_CheckPredicate, 3, // Predicate_store
/*3089*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*3092*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*3096*/              OPC_MarkGlueResults, 1, 1, 
/*3099*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                      // Src: (st (addc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
                    /*SwitchType*/ 30,  MVT::i8,// ->3141
/*3111*/              OPC_MoveParent,
/*3112*/              OPC_MoveChild, 2,
/*3114*/              OPC_CheckSame, 3,
/*3116*/              OPC_MoveParent,
/*3117*/              OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3119*/              OPC_CheckPredicate, 3, // Predicate_store
/*3121*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*3124*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*3128*/              OPC_MarkGlueResults, 1, 1, 
/*3131*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                      // Src: (st (addc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                      // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
                    0, // EndSwitchType
/*3142*/          0, /*End of Scope*/
/*3143*/        /*Scope*/ 81, /*->3225*/
/*3144*/          OPC_RecordChild0, // #2 = $src
/*3145*/          OPC_MoveChild, 1,
/*3147*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3150*/          OPC_RecordMemRef,
/*3151*/          OPC_RecordNode, // #3 = 'ld' chained node
/*3152*/          OPC_CheckFoldableChainNode,
/*3153*/          OPC_RecordChild1, // #4 = $dst
/*3154*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3156*/          OPC_CheckPredicate, 1, // Predicate_load
/*3158*/          OPC_MoveParent,
/*3159*/          OPC_SwitchType /*2 cases */, 30,  MVT::i16,// ->3192
/*3162*/            OPC_MoveParent,
/*3163*/            OPC_MoveChild, 2,
/*3165*/            OPC_CheckSame, 4,
/*3167*/            OPC_MoveParent,
/*3168*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3170*/            OPC_CheckPredicate, 3, // Predicate_store
/*3172*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #5 #6
/*3175*/            OPC_EmitMergeInputChains, 2, 0, 3, 
/*3179*/            OPC_MarkGlueResults, 1, 1, 
/*3182*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 2, 
                    // Src: (st (addc:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (ADD16mr:i16 addr:i16:$dst, GR16:i16:$src)
                  /*SwitchType*/ 30,  MVT::i8,// ->3224
/*3194*/            OPC_MoveParent,
/*3195*/            OPC_MoveChild, 2,
/*3197*/            OPC_CheckSame, 4,
/*3199*/            OPC_MoveParent,
/*3200*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3202*/            OPC_CheckPredicate, 3, // Predicate_store
/*3204*/            OPC_CheckComplexPat, /*CP*/0, /*#*/4, // SelectAddr:$dst #5 #6
/*3207*/            OPC_EmitMergeInputChains, 2, 0, 3, 
/*3211*/            OPC_MarkGlueResults, 1, 1, 
/*3214*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 2, 
                    // Src: (st (addc:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (ADD8mr:i16 addr:i16:$dst, GR8:i8:$src)
                  0, // EndSwitchType
/*3225*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 48|128,1/*176*/,  TARGET_VAL(ISD::SUBC),// ->3406
/*3230*/        OPC_RecordNode, // #1 = 'subc' glue output node
/*3231*/        OPC_MoveChild, 0,
/*3233*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3236*/        OPC_RecordMemRef,
/*3237*/        OPC_RecordNode, // #2 = 'ld' chained node
/*3238*/        OPC_CheckFoldableChainNode,
/*3239*/        OPC_RecordChild1, // #3 = $dst
/*3240*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3242*/        OPC_CheckPredicate, 1, // Predicate_load
/*3244*/        OPC_MoveParent,
/*3245*/        OPC_Scope, 90, /*->3337*/ // 2 children in Scope
/*3247*/          OPC_MoveChild, 1,
/*3249*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3252*/          OPC_RecordMemRef,
/*3253*/          OPC_RecordNode, // #4 = 'ld' chained node
/*3254*/          OPC_CheckFoldableChainNode,
/*3255*/          OPC_RecordChild1, // #5 = $src
/*3256*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3258*/          OPC_CheckPredicate, 1, // Predicate_load
/*3260*/          OPC_MoveParent,
/*3261*/          OPC_SwitchType /*2 cases */, 35,  MVT::i16,// ->3299
/*3264*/            OPC_MoveParent,
/*3265*/            OPC_MoveChild, 2,
/*3267*/            OPC_CheckSame, 3,
/*3269*/            OPC_MoveParent,
/*3270*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3272*/            OPC_CheckPredicate, 3, // Predicate_store
/*3274*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*3277*/            OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*3280*/            OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*3285*/            OPC_MarkGlueResults, 1, 1, 
/*3288*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                    // Src: (st (subc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                    // Dst: (SUB16mm:i16 addr:i16:$dst, addr:i16:$src)
                  /*SwitchType*/ 35,  MVT::i8,// ->3336
/*3301*/            OPC_MoveParent,
/*3302*/            OPC_MoveChild, 2,
/*3304*/            OPC_CheckSame, 3,
/*3306*/            OPC_MoveParent,
/*3307*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3309*/            OPC_CheckPredicate, 3, // Predicate_store
/*3311*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*3314*/            OPC_CheckComplexPat, /*CP*/0, /*#*/5, // SelectAddr:$src #8 #9
/*3317*/            OPC_EmitMergeInputChains, 3, 0, 2, 4, 
/*3322*/            OPC_MarkGlueResults, 1, 1, 
/*3325*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 6, 7, 8, 9, 
                    // Src: (st (subc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 42
                    // Dst: (SUB8mm:i16 addr:i16:$dst, addr:i16:$src)
                  0, // EndSwitchType
/*3337*/        /*Scope*/ 67, /*->3405*/
/*3338*/          OPC_RecordChild1, // #4 = $src
/*3339*/          OPC_SwitchType /*2 cases */, 30,  MVT::i16,// ->3372
/*3342*/            OPC_MoveParent,
/*3343*/            OPC_MoveChild, 2,
/*3345*/            OPC_CheckSame, 3,
/*3347*/            OPC_MoveParent,
/*3348*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3350*/            OPC_CheckPredicate, 3, // Predicate_store
/*3352*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*3355*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*3359*/            OPC_MarkGlueResults, 1, 1, 
/*3362*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                    // Src: (st (subc:i16 (ld:i16 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (SUB16mr:i16 addr:i16:$dst, GR16:i16:$src)
                  /*SwitchType*/ 30,  MVT::i8,// ->3404
/*3374*/            OPC_MoveParent,
/*3375*/            OPC_MoveChild, 2,
/*3377*/            OPC_CheckSame, 3,
/*3379*/            OPC_MoveParent,
/*3380*/            OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3382*/            OPC_CheckPredicate, 3, // Predicate_store
/*3384*/            OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #5 #6
/*3387*/            OPC_EmitMergeInputChains, 2, 0, 2, 
/*3391*/            OPC_MarkGlueResults, 1, 1, 
/*3394*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 5, 6, 4, 
                    // Src: (st (subc:i8 (ld:i8 addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 29
                    // Dst: (SUB8mr:i16 addr:i16:$dst, GR8:i8:$src)
                  0, // EndSwitchType
/*3405*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 66,  TARGET_VAL(ISD::LOAD),// ->3475
/*3409*/        OPC_RecordMemRef,
/*3410*/        OPC_RecordNode, // #1 = 'ld' chained node
/*3411*/        OPC_CheckFoldableChainNode,
/*3412*/        OPC_RecordChild1, // #2 = $src
/*3413*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3415*/        OPC_CheckPredicate, 1, // Predicate_load
/*3417*/        OPC_SwitchType /*2 cases */, 26,  MVT::i8,// ->3446
/*3420*/          OPC_MoveParent,
/*3421*/          OPC_RecordChild2, // #3 = $dst
/*3422*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3424*/          OPC_CheckPredicate, 3, // Predicate_store
/*3426*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #4 #5
/*3429*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*3432*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*3436*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV8mm), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 6, 7, 4, 5, 
                  // Src: (st (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 26
                  // Dst: (MOV8mm addr:i16:$dst, addr:i16:$src)
                /*SwitchType*/ 26,  MVT::i16,// ->3474
/*3448*/          OPC_MoveParent,
/*3449*/          OPC_RecordChild2, // #3 = $dst
/*3450*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3452*/          OPC_CheckPredicate, 3, // Predicate_store
/*3454*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #4 #5
/*3457*/          OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$dst #6 #7
/*3460*/          OPC_EmitMergeInputChains, 2, 0, 1, 
/*3464*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16mm), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 4/*#Ops*/, 6, 7, 4, 5, 
                  // Src: (st (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 26
                  // Dst: (MOV16mm addr:i16:$dst, addr:i16:$src)
                0, // EndSwitchType
              /*SwitchOpcode*/ 80,  TARGET_VAL(MSP430ISD::Wrapper),// ->3558
/*3478*/        OPC_RecordChild0, // #1 = $src
/*3479*/        OPC_MoveChild, 0,
/*3481*/        OPC_SwitchOpcode /*3 cases */, 22,  TARGET_VAL(ISD::TargetGlobalAddress),// ->3507
/*3485*/          OPC_MoveParent,
/*3486*/          OPC_CheckType, MVT::i16,
/*3488*/          OPC_MoveParent,
/*3489*/          OPC_RecordChild2, // #2 = $dst
/*3490*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3492*/          OPC_CheckPredicate, 3, // Predicate_store
/*3494*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3497*/          OPC_EmitMergeInputChains1_0,
/*3498*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st (MSP430Wrapper:i16 (tglobaladdr:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (MOV16mi addr:i16:$dst, (tglobaladdr:i16):$src)
                /*SwitchOpcode*/ 22,  TARGET_VAL(ISD::TargetExternalSymbol),// ->3532
/*3510*/          OPC_MoveParent,
/*3511*/          OPC_CheckType, MVT::i16,
/*3513*/          OPC_MoveParent,
/*3514*/          OPC_RecordChild2, // #2 = $dst
/*3515*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3517*/          OPC_CheckPredicate, 3, // Predicate_store
/*3519*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3522*/          OPC_EmitMergeInputChains1_0,
/*3523*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st (MSP430Wrapper:i16 (texternalsym:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (MOV16mi addr:i16:$dst, (texternalsym:i16):$src)
                /*SwitchOpcode*/ 22,  TARGET_VAL(ISD::TargetBlockAddress),// ->3557
/*3535*/          OPC_MoveParent,
/*3536*/          OPC_CheckType, MVT::i16,
/*3538*/          OPC_MoveParent,
/*3539*/          OPC_RecordChild2, // #2 = $dst
/*3540*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3542*/          OPC_CheckPredicate, 3, // Predicate_store
/*3544*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3547*/          OPC_EmitMergeInputChains1_0,
/*3548*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                  // Src: (st (MSP430Wrapper:i16 (tblockaddress:i16):$src), addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 19
                  // Dst: (MOV16mi addr:i16:$dst, (tblockaddress:i16):$src)
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*3559*/    /*Scope*/ 99, /*->3659*/
/*3560*/      OPC_RecordChild1, // #1 = $src
/*3561*/      OPC_Scope, 53, /*->3616*/ // 3 children in Scope
/*3563*/        OPC_MoveChild, 1,
/*3565*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3568*/        OPC_SwitchType /*2 cases */, 21,  MVT::i8,// ->3592
/*3571*/          OPC_MoveParent,
/*3572*/          OPC_RecordChild2, // #2 = $dst
/*3573*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3575*/          OPC_CheckPredicate, 3, // Predicate_store
/*3577*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3580*/          OPC_EmitMergeInputChains1_0,
/*3581*/          OPC_EmitConvertToTarget, 1,
/*3583*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV8mi), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 5, 
                  // Src: (st (imm:i8):$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV8mi addr:i16:$dst, (imm:i8):$src)
                /*SwitchType*/ 21,  MVT::i16,// ->3615
/*3594*/          OPC_MoveParent,
/*3595*/          OPC_RecordChild2, // #2 = $dst
/*3596*/          OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3598*/          OPC_CheckPredicate, 3, // Predicate_store
/*3600*/          OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3603*/          OPC_EmitMergeInputChains1_0,
/*3604*/          OPC_EmitConvertToTarget, 1,
/*3606*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16mi), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 3, 4, 5, 
                  // Src: (st (imm:i16):$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 16
                  // Dst: (MOV16mi addr:i16:$dst, (imm:i16):$src)
                0, // EndSwitchType
/*3616*/      /*Scope*/ 20, /*->3637*/
/*3617*/        OPC_CheckChild1Type, MVT::i8,
/*3619*/        OPC_RecordChild2, // #2 = $dst
/*3620*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3622*/        OPC_CheckPredicate, 3, // Predicate_store
/*3624*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3627*/        OPC_EmitMergeInputChains1_0,
/*3628*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV8mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st GR8:i8:$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (MOV8mr addr:i16:$dst, GR8:i8:$src)
/*3637*/      /*Scope*/ 20, /*->3658*/
/*3638*/        OPC_CheckChild1Type, MVT::i16,
/*3640*/        OPC_RecordChild2, // #2 = $dst
/*3641*/        OPC_CheckPredicate, 2, // Predicate_unindexedstore
/*3643*/        OPC_CheckPredicate, 3, // Predicate_store
/*3645*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*3648*/        OPC_EmitMergeInputChains1_0,
/*3649*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16mr), 0|OPFL_Chain|OPFL_MemRefs,
                    0/*#VTs*/, 3/*#Ops*/, 3, 4, 1, 
                // Src: (st GR16:i16:$src, addr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                // Dst: (MOV16mr addr:i16:$dst, GR16:i16:$src)
/*3658*/      0, /*End of Scope*/
/*3659*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26|128,6/*794*/,  TARGET_VAL(MSP430ISD::CMP),// ->4458
/*3664*/    OPC_Scope, 66|128,3/*450*/, /*->4117*/ // 4 children in Scope
/*3667*/      OPC_MoveChild, 0,
/*3669*/      OPC_SwitchOpcode /*2 cases */, 121|128,2/*377*/,  TARGET_VAL(ISD::AND),// ->4051
/*3674*/        OPC_Scope, 25|128,1/*153*/, /*->3830*/ // 4 children in Scope
/*3677*/          OPC_MoveChild, 0,
/*3679*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3682*/          OPC_RecordMemRef,
/*3683*/          OPC_RecordNode, // #0 = 'ld' chained node
/*3684*/          OPC_CheckFoldableChainNode,
/*3685*/          OPC_RecordChild1, // #1 = $src
/*3686*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3688*/          OPC_CheckPredicate, 1, // Predicate_load
/*3690*/          OPC_MoveParent,
/*3691*/          OPC_Scope, 76, /*->3769*/ // 2 children in Scope
/*3693*/            OPC_MoveChild, 1,
/*3695*/            OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3698*/            OPC_RecordMemRef,
/*3699*/            OPC_RecordNode, // #2 = 'ld' chained node
/*3700*/            OPC_CheckFoldableChainNode,
/*3701*/            OPC_RecordChild1, // #3 = $src2
/*3702*/            OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3704*/            OPC_CheckPredicate, 1, // Predicate_load
/*3706*/            OPC_MoveParent,
/*3707*/            OPC_CheckPredicate, 4, // Predicate_and_su
/*3709*/            OPC_SwitchType /*2 cases */, 27,  MVT::i8,// ->3739
/*3712*/              OPC_MoveParent,
/*3713*/              OPC_MoveChild, 1,
/*3715*/              OPC_CheckInteger, 0, 
/*3717*/              OPC_MoveParent,
/*3718*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #4 #5
/*3721*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src2 #6 #7
/*3724*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*3728*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                      // Src: (MSP430cmp (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i8) - Complexity = 38
                      // Dst: (BIT8mm:i16 addr:i16:$src, addr:i16:$src2)
                    /*SwitchType*/ 27,  MVT::i16,// ->3768
/*3741*/              OPC_MoveParent,
/*3742*/              OPC_MoveChild, 1,
/*3744*/              OPC_CheckInteger, 0, 
/*3746*/              OPC_MoveParent,
/*3747*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #4 #5
/*3750*/              OPC_CheckComplexPat, /*CP*/0, /*#*/3, // SelectAddr:$src2 #6 #7
/*3753*/              OPC_EmitMergeInputChains, 2, 0, 2, 
/*3757*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16mm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 4/*#Ops*/, 4, 5, 6, 7, 
                      // Src: (MSP430cmp (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i16) - Complexity = 38
                      // Dst: (BIT16mm:i16 addr:i16:$src, addr:i16:$src2)
                    0, // EndSwitchType
/*3769*/          /*Scope*/ 59, /*->3829*/
/*3770*/            OPC_RecordChild1, // #2 = $src2
/*3771*/            OPC_MoveChild, 1,
/*3773*/            OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3776*/            OPC_MoveParent,
/*3777*/            OPC_CheckPredicate, 4, // Predicate_and_su
/*3779*/            OPC_SwitchType /*2 cases */, 22,  MVT::i8,// ->3804
/*3782*/              OPC_MoveParent,
/*3783*/              OPC_MoveChild, 1,
/*3785*/              OPC_CheckInteger, 0, 
/*3787*/              OPC_MoveParent,
/*3788*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3791*/              OPC_EmitMergeInputChains1_0,
/*3792*/              OPC_EmitConvertToTarget, 2,
/*3794*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                      // Src: (MSP430cmp (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 28
                      // Dst: (BIT8mi:i16 addr:i16:$src, (imm:i8):$src2)
                    /*SwitchType*/ 22,  MVT::i16,// ->3828
/*3806*/              OPC_MoveParent,
/*3807*/              OPC_MoveChild, 1,
/*3809*/              OPC_CheckInteger, 0, 
/*3811*/              OPC_MoveParent,
/*3812*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3815*/              OPC_EmitMergeInputChains1_0,
/*3816*/              OPC_EmitConvertToTarget, 2,
/*3818*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                      // Src: (MSP430cmp (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 28
                      // Dst: (BIT16mi:i16 addr:i16:$src, (imm:i16):$src2)
                    0, // EndSwitchType
/*3829*/          0, /*End of Scope*/
/*3830*/        /*Scope*/ 63, /*->3894*/
/*3831*/          OPC_RecordChild0, // #0 = $src
/*3832*/          OPC_MoveChild, 1,
/*3834*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3837*/          OPC_RecordMemRef,
/*3838*/          OPC_RecordNode, // #1 = 'ld' chained node
/*3839*/          OPC_CheckFoldableChainNode,
/*3840*/          OPC_RecordChild1, // #2 = $src2
/*3841*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3843*/          OPC_CheckPredicate, 1, // Predicate_load
/*3845*/          OPC_MoveParent,
/*3846*/          OPC_CheckPredicate, 4, // Predicate_and_su
/*3848*/          OPC_SwitchType /*2 cases */, 20,  MVT::i8,// ->3871
/*3851*/            OPC_MoveParent,
/*3852*/            OPC_MoveChild, 1,
/*3854*/            OPC_CheckInteger, 0, 
/*3856*/            OPC_MoveParent,
/*3857*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3860*/            OPC_EmitMergeInputChains1_1,
/*3861*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                    // Src: (MSP430cmp (and:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i8) - Complexity = 25
                    // Dst: (BIT8rm:i16 GR8:i8:$src, addr:i16:$src2)
                  /*SwitchType*/ 20,  MVT::i16,// ->3893
/*3873*/            OPC_MoveParent,
/*3874*/            OPC_MoveChild, 1,
/*3876*/            OPC_CheckInteger, 0, 
/*3878*/            OPC_MoveParent,
/*3879*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*3882*/            OPC_EmitMergeInputChains1_1,
/*3883*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                    // Src: (MSP430cmp (and:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i16) - Complexity = 25
                    // Dst: (BIT16rm:i16 GR16:i16:$src, addr:i16:$src2)
                  0, // EndSwitchType
/*3894*/        /*Scope*/ 91, /*->3986*/
/*3895*/          OPC_MoveChild, 0,
/*3897*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3900*/          OPC_RecordMemRef,
/*3901*/          OPC_RecordNode, // #0 = 'ld' chained node
/*3902*/          OPC_CheckFoldableChainNode,
/*3903*/          OPC_RecordChild1, // #1 = $src
/*3904*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3906*/          OPC_CheckPredicate, 1, // Predicate_load
/*3908*/          OPC_MoveParent,
/*3909*/          OPC_RecordChild1, // #2 = $src2
/*3910*/          OPC_CheckPredicate, 4, // Predicate_and_su
/*3912*/          OPC_SwitchType /*2 cases */, 34,  MVT::i8,// ->3949
/*3915*/            OPC_MoveParent,
/*3916*/            OPC_MoveChild, 1,
/*3918*/            OPC_CheckInteger, 0, 
/*3920*/            OPC_MoveParent,
/*3921*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3924*/            OPC_EmitMergeInputChains1_0,
/*3925*/            OPC_Scope, 10, /*->3937*/ // 2 children in Scope
/*3927*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                      // Src: (MSP430cmp (and:i8 (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 25
                      // Dst: (BIT8mr:i16 addr:i16:$src, GR8:i8:$src2)
/*3937*/            /*Scope*/ 10, /*->3948*/
/*3938*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (MSP430cmp (and:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src)<<P:Predicate_and_su>>, 0:i8) - Complexity = 25
                      // Dst: (BIT8rm:i16 GR8:i8:$src, addr:i16:$src2)
/*3948*/            0, /*End of Scope*/
                  /*SwitchType*/ 34,  MVT::i16,// ->3985
/*3951*/            OPC_MoveParent,
/*3952*/            OPC_MoveChild, 1,
/*3954*/            OPC_CheckInteger, 0, 
/*3956*/            OPC_MoveParent,
/*3957*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*3960*/            OPC_EmitMergeInputChains1_0,
/*3961*/            OPC_Scope, 10, /*->3973*/ // 2 children in Scope
/*3963*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                      // Src: (MSP430cmp (and:i16 (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 25
                      // Dst: (BIT16mr:i16 addr:i16:$src, GR16:i16:$src2)
/*3973*/            /*Scope*/ 10, /*->3984*/
/*3974*/              OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                          1/*#VTs*/, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                      // Src: (MSP430cmp (and:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src)<<P:Predicate_and_su>>, 0:i16) - Complexity = 25
                      // Dst: (BIT16rm:i16 GR16:i16:$src, addr:i16:$src2)
/*3984*/            0, /*End of Scope*/
                  0, // EndSwitchType
/*3986*/        /*Scope*/ 63, /*->4050*/
/*3987*/          OPC_RecordChild0, // #0 = $src2
/*3988*/          OPC_MoveChild, 1,
/*3990*/          OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*3993*/          OPC_RecordMemRef,
/*3994*/          OPC_RecordNode, // #1 = 'ld' chained node
/*3995*/          OPC_CheckFoldableChainNode,
/*3996*/          OPC_RecordChild1, // #2 = $src
/*3997*/          OPC_CheckPredicate, 0, // Predicate_unindexedload
/*3999*/          OPC_CheckPredicate, 1, // Predicate_load
/*4001*/          OPC_MoveParent,
/*4002*/          OPC_CheckPredicate, 4, // Predicate_and_su
/*4004*/          OPC_SwitchType /*2 cases */, 20,  MVT::i8,// ->4027
/*4007*/            OPC_MoveParent,
/*4008*/            OPC_MoveChild, 1,
/*4010*/            OPC_CheckInteger, 0, 
/*4012*/            OPC_MoveParent,
/*4013*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*4016*/            OPC_EmitMergeInputChains1_1,
/*4017*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 0, 
                    // Src: (MSP430cmp (and:i8 GR8:i8:$src2, (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i8) - Complexity = 25
                    // Dst: (BIT8mr:i16 addr:i16:$src, GR8:i8:$src2)
                  /*SwitchType*/ 20,  MVT::i16,// ->4049
/*4029*/            OPC_MoveParent,
/*4030*/            OPC_MoveChild, 1,
/*4032*/            OPC_CheckInteger, 0, 
/*4034*/            OPC_MoveParent,
/*4035*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src #3 #4
/*4038*/            OPC_EmitMergeInputChains1_1,
/*4039*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 0, 
                    // Src: (MSP430cmp (and:i16 GR16:i16:$src2, (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>)<<P:Predicate_and_su>>, 0:i16) - Complexity = 25
                    // Dst: (BIT16mr:i16 addr:i16:$src, GR16:i16:$src2)
                  0, // EndSwitchType
/*4050*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 62,  TARGET_VAL(ISD::LOAD),// ->4116
/*4054*/        OPC_RecordMemRef,
/*4055*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4056*/        OPC_CheckFoldableChainNode,
/*4057*/        OPC_RecordChild1, // #1 = $src
/*4058*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4060*/        OPC_CheckPredicate, 1, // Predicate_load
/*4062*/        OPC_SwitchType /*2 cases */, 24,  MVT::i8,// ->4089
/*4065*/          OPC_MoveParent,
/*4066*/          OPC_RecordChild1, // #2 = $src2
/*4067*/          OPC_MoveChild, 1,
/*4069*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4072*/          OPC_MoveParent,
/*4073*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*4076*/          OPC_EmitMergeInputChains1_0,
/*4077*/          OPC_EmitConvertToTarget, 2,
/*4079*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP8mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                  // Src: (MSP430cmp (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i8):$src2) - Complexity = 19
                  // Dst: (CMP8mi:i16 addr:i16:$src, (imm:i8):$src2)
                /*SwitchType*/ 24,  MVT::i16,// ->4115
/*4091*/          OPC_MoveParent,
/*4092*/          OPC_RecordChild1, // #2 = $src2
/*4093*/          OPC_MoveChild, 1,
/*4095*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4098*/          OPC_MoveParent,
/*4099*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*4102*/          OPC_EmitMergeInputChains1_0,
/*4103*/          OPC_EmitConvertToTarget, 2,
/*4105*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP16mi), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 5, 
                  // Src: (MSP430cmp (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, (imm:i16):$src2) - Complexity = 19
                  // Dst: (CMP16mi:i16 addr:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*4117*/    /*Scope*/ 65, /*->4183*/
/*4118*/      OPC_RecordChild0, // #0 = $src
/*4119*/      OPC_Scope, 30, /*->4151*/ // 2 children in Scope
/*4121*/        OPC_CheckChild0Type, MVT::i8,
/*4123*/        OPC_MoveChild, 1,
/*4125*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4128*/        OPC_RecordMemRef,
/*4129*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4130*/        OPC_CheckFoldableChainNode,
/*4131*/        OPC_RecordChild1, // #2 = $src2
/*4132*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4134*/        OPC_CheckPredicate, 1, // Predicate_load
/*4136*/        OPC_MoveParent,
/*4137*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4140*/        OPC_EmitMergeInputChains1_1,
/*4141*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (MSP430cmp GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (CMP8rm:i16 GR8:i8:$src, addr:i16:$src2)
/*4151*/      /*Scope*/ 30, /*->4182*/
/*4152*/        OPC_CheckChild0Type, MVT::i16,
/*4154*/        OPC_MoveChild, 1,
/*4156*/        OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4159*/        OPC_RecordMemRef,
/*4160*/        OPC_RecordNode, // #1 = 'ld' chained node
/*4161*/        OPC_CheckFoldableChainNode,
/*4162*/        OPC_RecordChild1, // #2 = $src2
/*4163*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4165*/        OPC_CheckPredicate, 1, // Predicate_load
/*4167*/        OPC_MoveParent,
/*4168*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4171*/        OPC_EmitMergeInputChains1_1,
/*4172*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (MSP430cmp GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (CMP16rm:i16 GR16:i16:$src, addr:i16:$src2)
/*4182*/      0, /*End of Scope*/
/*4183*/    /*Scope*/ 72|128,1/*200*/, /*->4385*/
/*4185*/      OPC_MoveChild, 0,
/*4187*/      OPC_SwitchOpcode /*3 cases */, 46,  TARGET_VAL(ISD::LOAD),// ->4237
/*4191*/        OPC_RecordMemRef,
/*4192*/        OPC_RecordNode, // #0 = 'ld' chained node
/*4193*/        OPC_CheckFoldableChainNode,
/*4194*/        OPC_RecordChild1, // #1 = $src
/*4195*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4197*/        OPC_CheckPredicate, 1, // Predicate_load
/*4199*/        OPC_SwitchType /*2 cases */, 16,  MVT::i8,// ->4218
/*4202*/          OPC_MoveParent,
/*4203*/          OPC_RecordChild1, // #2 = $src2
/*4204*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*4207*/          OPC_EmitMergeInputChains1_0,
/*4208*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP8mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (MSP430cmp (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src2) - Complexity = 16
                  // Dst: (CMP8mr:i16 addr:i16:$src, GR8:i8:$src2)
                /*SwitchType*/ 16,  MVT::i16,// ->4236
/*4220*/          OPC_MoveParent,
/*4221*/          OPC_RecordChild1, // #2 = $src2
/*4222*/          OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #3 #4
/*4225*/          OPC_EmitMergeInputChains1_0,
/*4226*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP16mr), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i16, 3/*#Ops*/, 3, 4, 2, 
                  // Src: (MSP430cmp (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src2) - Complexity = 16
                  // Dst: (CMP16mr:i16 addr:i16:$src, GR16:i16:$src2)
                0, // EndSwitchType
              /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::AND),// ->4332
/*4240*/        OPC_RecordChild0, // #0 = $src
/*4241*/        OPC_RecordChild1, // #1 = $src2
/*4242*/        OPC_Scope, 48, /*->4292*/ // 2 children in Scope
/*4244*/          OPC_MoveChild, 1,
/*4246*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4249*/          OPC_MoveParent,
/*4250*/          OPC_CheckPredicate, 4, // Predicate_and_su
/*4252*/          OPC_SwitchType /*2 cases */, 17,  MVT::i8,// ->4272
/*4255*/            OPC_MoveParent,
/*4256*/            OPC_MoveChild, 1,
/*4258*/            OPC_CheckInteger, 0, 
/*4260*/            OPC_MoveParent,
/*4261*/            OPC_EmitConvertToTarget, 1,
/*4263*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8ri), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (MSP430cmp (and:i8 GR8:i8:$src, (imm:i8):$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 15
                    // Dst: (BIT8ri:i16 GR8:i8:$src, (imm:i8):$src2)
                  /*SwitchType*/ 17,  MVT::i16,// ->4291
/*4274*/            OPC_MoveParent,
/*4275*/            OPC_MoveChild, 1,
/*4277*/            OPC_CheckInteger, 0, 
/*4279*/            OPC_MoveParent,
/*4280*/            OPC_EmitConvertToTarget, 1,
/*4282*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16ri), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 2, 
                    // Src: (MSP430cmp (and:i16 GR16:i16:$src, (imm:i16):$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 15
                    // Dst: (BIT16ri:i16 GR16:i16:$src, (imm:i16):$src2)
                  0, // EndSwitchType
/*4292*/        /*Scope*/ 38, /*->4331*/
/*4293*/          OPC_CheckPredicate, 4, // Predicate_and_su
/*4295*/          OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->4313
/*4298*/            OPC_MoveParent,
/*4299*/            OPC_MoveChild, 1,
/*4301*/            OPC_CheckInteger, 0, 
/*4303*/            OPC_MoveParent,
/*4304*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8rr), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
                    // Src: (MSP430cmp (and:i8 GR8:i8:$src, GR8:i8:$src2)<<P:Predicate_and_su>>, 0:i8) - Complexity = 12
                    // Dst: (BIT8rr:i16 GR8:i8:$src, GR8:i8:$src2)
                  /*SwitchType*/ 15,  MVT::i16,// ->4330
/*4315*/            OPC_MoveParent,
/*4316*/            OPC_MoveChild, 1,
/*4318*/            OPC_CheckInteger, 0, 
/*4320*/            OPC_MoveParent,
/*4321*/            OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT16rr), 0|OPFL_GlueOutput,
                        1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
                    // Src: (MSP430cmp (and:i16 GR16:i16:$src, GR16:i16:$src2)<<P:Predicate_and_su>>, 0:i16) - Complexity = 12
                    // Dst: (BIT16rr:i16 GR16:i16:$src, GR16:i16:$src2)
                  0, // EndSwitchType
/*4331*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 49,  TARGET_VAL(ISD::TRUNCATE),// ->4384
/*4335*/        OPC_MoveChild, 0,
/*4337*/        OPC_CheckOpcode, TARGET_VAL(ISD::AND),
/*4340*/        OPC_RecordChild0, // #0 = $src
/*4341*/        OPC_RecordChild1, // #1 = $src2
/*4342*/        OPC_CheckPredicate, 4, // Predicate_and_su
/*4344*/        OPC_MoveParent,
/*4345*/        OPC_MoveParent,
/*4346*/        OPC_MoveChild, 1,
/*4348*/        OPC_CheckInteger, 0, 
/*4350*/        OPC_MoveParent,
/*4351*/        OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*4354*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i8, 2/*#Ops*/, 0, 2,  // Results = #3 
/*4363*/        OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*4366*/        OPC_EmitNode, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                    1/*#VTs*/, MVT::i8, 2/*#Ops*/, 1, 4,  // Results = #5 
/*4375*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIT8rr), 0|OPFL_GlueOutput,
                    1/*#VTs*/, MVT::i16, 2/*#Ops*/, 3, 5, 
                // Src: (MSP430cmp (trunc:i8 (and:i16 GR16:i16:$src, GR16:i16:$src2)<<P:Predicate_and_su>>), 0:i8) - Complexity = 15
                // Dst: (BIT8rr:i16 (EXTRACT_SUBREG:i8 GR16:i16:$src, subreg_8bit:i32), (EXTRACT_SUBREG:i8 GR16:i16:$src2, subreg_8bit:i32))
              0, // EndSwitchOpcode
/*4385*/    /*Scope*/ 71, /*->4457*/
/*4386*/      OPC_RecordChild0, // #0 = $src
/*4387*/      OPC_Scope, 33, /*->4422*/ // 2 children in Scope
/*4389*/        OPC_CheckChild0Type, MVT::i8,
/*4391*/        OPC_RecordChild1, // #1 = $src2
/*4392*/        OPC_Scope, 17, /*->4411*/ // 2 children in Scope
/*4394*/          OPC_MoveChild, 1,
/*4396*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4399*/          OPC_MoveParent,
/*4400*/          OPC_EmitConvertToTarget, 1,
/*4402*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP8ri), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (MSP430cmp GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (CMP8ri:i16 GR8:i8:$src, (imm:i8):$src2)
/*4411*/        /*Scope*/ 9, /*->4421*/
/*4412*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP8rr), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (MSP430cmp GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                  // Dst: (CMP8rr:i16 GR8:i8:$src, GR8:i8:$src2)
/*4421*/        0, /*End of Scope*/
/*4422*/      /*Scope*/ 33, /*->4456*/
/*4423*/        OPC_CheckChild0Type, MVT::i16,
/*4425*/        OPC_RecordChild1, // #1 = $src2
/*4426*/        OPC_Scope, 17, /*->4445*/ // 2 children in Scope
/*4428*/          OPC_MoveChild, 1,
/*4430*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4433*/          OPC_MoveParent,
/*4434*/          OPC_EmitConvertToTarget, 1,
/*4436*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP16ri), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (MSP430cmp GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (CMP16ri:i16 GR16:i16:$src, (imm:i16):$src2)
/*4445*/        /*Scope*/ 9, /*->4455*/
/*4446*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CMP16rr), 0|OPFL_GlueOutput,
                      1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
                  // Src: (MSP430cmp GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                  // Dst: (CMP16rr:i16 GR16:i16:$src, GR16:i16:$src2)
/*4455*/        0, /*End of Scope*/
/*4456*/      0, /*End of Scope*/
/*4457*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,3/*431*/,  TARGET_VAL(ISD::AND),// ->4893
/*4462*/    OPC_Scope, 71, /*->4535*/ // 8 children in Scope
/*4464*/      OPC_RecordChild0, // #0 = $src
/*4465*/      OPC_MoveChild, 1,
/*4467*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4470*/      OPC_MoveChild, 0,
/*4472*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4475*/      OPC_RecordMemRef,
/*4476*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4477*/      OPC_CheckFoldableChainNode,
/*4478*/      OPC_RecordChild1, // #2 = $src2
/*4479*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4481*/      OPC_CheckPredicate, 1, // Predicate_load
/*4483*/      OPC_MoveParent,
/*4484*/      OPC_MoveChild, 1,
/*4486*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4497*/      OPC_MoveParent,
/*4498*/      OPC_MoveParent,
/*4499*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->4517
/*4502*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4505*/        OPC_EmitMergeInputChains1_1,
/*4506*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (and:i8 GR8:i8:$src, (xor:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8)) - Complexity = 24
                // Dst: (BIC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->4534
/*4519*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4522*/        OPC_EmitMergeInputChains1_1,
/*4523*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (and:i16 GR16:i16:$src, (xor:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16)) - Complexity = 24
                // Dst: (BIC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*4535*/    /*Scope*/ 71, /*->4607*/
/*4536*/      OPC_MoveChild, 0,
/*4538*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4541*/      OPC_MoveChild, 0,
/*4543*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4546*/      OPC_RecordMemRef,
/*4547*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4548*/      OPC_CheckFoldableChainNode,
/*4549*/      OPC_RecordChild1, // #1 = $src2
/*4550*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4552*/      OPC_CheckPredicate, 1, // Predicate_load
/*4554*/      OPC_MoveParent,
/*4555*/      OPC_MoveChild, 1,
/*4557*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4568*/      OPC_MoveParent,
/*4569*/      OPC_MoveParent,
/*4570*/      OPC_RecordChild1, // #2 = $src
/*4571*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->4589
/*4574*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4577*/        OPC_EmitMergeInputChains1_0,
/*4578*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (and:i8 (xor:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i8), GR8:i8:$src) - Complexity = 24
                // Dst: (BIC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->4606
/*4591*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4594*/        OPC_EmitMergeInputChains1_0,
/*4595*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (and:i16 (xor:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, -1:i16), GR16:i16:$src) - Complexity = 24
                // Dst: (BIC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*4607*/    /*Scope*/ 51, /*->4659*/
/*4608*/      OPC_RecordChild0, // #0 = $src
/*4609*/      OPC_MoveChild, 1,
/*4611*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4614*/      OPC_RecordMemRef,
/*4615*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4616*/      OPC_CheckFoldableChainNode,
/*4617*/      OPC_RecordChild1, // #2 = $src2
/*4618*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4620*/      OPC_CheckPredicate, 1, // Predicate_load
/*4622*/      OPC_MoveParent,
/*4623*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->4641
/*4626*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4629*/        OPC_EmitMergeInputChains1_1,
/*4630*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (and:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (AND8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->4658
/*4643*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*4646*/        OPC_EmitMergeInputChains1_1,
/*4647*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (and:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (AND16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*4659*/    /*Scope*/ 51, /*->4711*/
/*4660*/      OPC_MoveChild, 0,
/*4662*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4665*/      OPC_RecordMemRef,
/*4666*/      OPC_RecordNode, // #0 = 'ld' chained node
/*4667*/      OPC_CheckFoldableChainNode,
/*4668*/      OPC_RecordChild1, // #1 = $src2
/*4669*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4671*/      OPC_CheckPredicate, 1, // Predicate_load
/*4673*/      OPC_MoveParent,
/*4674*/      OPC_RecordChild1, // #2 = $src
/*4675*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->4693
/*4678*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4681*/        OPC_EmitMergeInputChains1_0,
/*4682*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (and:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                // Dst: (AND8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->4710
/*4695*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*4698*/        OPC_EmitMergeInputChains1_0,
/*4699*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (and:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                // Dst: (AND16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*4711*/    /*Scope*/ 48, /*->4760*/
/*4712*/      OPC_RecordChild0, // #0 = $src
/*4713*/      OPC_MoveChild, 1,
/*4715*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4718*/      OPC_RecordChild0, // #1 = $src2
/*4719*/      OPC_MoveChild, 1,
/*4721*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4732*/      OPC_MoveParent,
/*4733*/      OPC_MoveParent,
/*4734*/      OPC_SwitchType /*2 cases */, 10,  MVT::i8,// ->4747
/*4737*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8rr), 0,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (and:i8 GR8:i8:$src, (xor:i8 GR8:i8:$src2, -1:i8)) - Complexity = 11
                // Dst: (BIC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
              /*SwitchType*/ 10,  MVT::i16,// ->4759
/*4749*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16rr), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (and:i16 GR16:i16:$src, (xor:i16 GR16:i16:$src2, -1:i16)) - Complexity = 11
                // Dst: (BIC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
              0, // EndSwitchType
/*4760*/    /*Scope*/ 48, /*->4809*/
/*4761*/      OPC_MoveChild, 0,
/*4763*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4766*/      OPC_RecordChild0, // #0 = $src2
/*4767*/      OPC_MoveChild, 1,
/*4769*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4780*/      OPC_MoveParent,
/*4781*/      OPC_MoveParent,
/*4782*/      OPC_RecordChild1, // #1 = $src
/*4783*/      OPC_SwitchType /*2 cases */, 10,  MVT::i8,// ->4796
/*4786*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC8rr), 0,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 1, 0, 
                // Src: (and:i8 (xor:i8 GR8:i8:$src2, -1:i8), GR8:i8:$src) - Complexity = 11
                // Dst: (BIC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
              /*SwitchType*/ 10,  MVT::i16,// ->4808
/*4798*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::BIC16rr), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                // Src: (and:i16 (xor:i16 GR16:i16:$src2, -1:i16), GR16:i16:$src) - Complexity = 11
                // Dst: (BIC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
              0, // EndSwitchType
/*4809*/    /*Scope*/ 14, /*->4824*/
/*4810*/      OPC_CheckAndImm, 127|128,1/*255*/, 
/*4813*/      OPC_RecordChild0, // #0 = $src
/*4814*/      OPC_CheckType, MVT::i16,
/*4816*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::ZEXT16r), 0,
                  1/*#VTs*/, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (and:i16 GR16:i16:$src, 255:i16) - Complexity = 8
              // Dst: (ZEXT16r:i16 GR16:i16:$src)
/*4824*/    /*Scope*/ 67, /*->4892*/
/*4825*/      OPC_RecordChild0, // #0 = $src
/*4826*/      OPC_RecordChild1, // #1 = $src2
/*4827*/      OPC_Scope, 36, /*->4865*/ // 3 children in Scope
/*4829*/        OPC_MoveChild, 1,
/*4831*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4834*/        OPC_MoveParent,
/*4835*/        OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->4850
/*4838*/          OPC_EmitConvertToTarget, 1,
/*4840*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8ri), 0,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (AND8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                /*SwitchType*/ 12,  MVT::i16,// ->4864
/*4852*/          OPC_EmitConvertToTarget, 1,
/*4854*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16ri), 0,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (and:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (AND16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
/*4865*/      /*Scope*/ 12, /*->4878*/
/*4866*/        OPC_CheckType, MVT::i8,
/*4868*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::AND8rr), 0,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (and:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (AND8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*4878*/      /*Scope*/ 12, /*->4891*/
/*4879*/        OPC_CheckType, MVT::i16,
/*4881*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::AND16rr), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (and:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (AND16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*4891*/      0, /*End of Scope*/
/*4892*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::BRIND),// ->4959
/*4896*/    OPC_RecordNode,   // #0 = 'brind' chained node
/*4897*/    OPC_Scope, 29, /*->4928*/ // 2 children in Scope
/*4899*/      OPC_MoveChild, 1,
/*4901*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4904*/      OPC_RecordMemRef,
/*4905*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4906*/      OPC_CheckFoldableChainNode,
/*4907*/      OPC_RecordChild1, // #2 = $brdst
/*4908*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4910*/      OPC_CheckPredicate, 1, // Predicate_load
/*4912*/      OPC_MoveParent,
/*4913*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$brdst #3 #4
/*4916*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*4920*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Bm), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 2/*#Ops*/, 3, 4, 
              // Src: (brind (ld:iPTR addr:iPTR:$brdst)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
              // Dst: (Bm addr:i16:$brdst)
/*4928*/    /*Scope*/ 29, /*->4958*/
/*4929*/      OPC_RecordChild1, // #1 = $brdst
/*4930*/      OPC_Scope, 14, /*->4946*/ // 2 children in Scope
/*4932*/        OPC_MoveChild, 1,
/*4934*/        OPC_CheckOpcode, TARGET_VAL(ISD::TargetBlockAddress),
/*4937*/        OPC_MoveParent,
/*4938*/        OPC_EmitMergeInputChains1_0,
/*4939*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::Bi), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind (tblockaddress:iPTR):$brdst) - Complexity = 6
                // Dst: (Bi (tblockaddress:i16):$brdst)
/*4946*/      /*Scope*/ 10, /*->4957*/
/*4947*/        OPC_CheckChild1Type, MVT::i16,
/*4949*/        OPC_EmitMergeInputChains1_0,
/*4950*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::Br), 0|OPFL_Chain,
                    0/*#VTs*/, 1/*#Ops*/, 1, 
                // Src: (brind GR16:i16:$brdst) - Complexity = 3
                // Dst: (Br GR16:i16:$brdst)
/*4957*/      0, /*End of Scope*/
/*4958*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 101,  TARGET_VAL(MSP430ISD::CALL),// ->5063
/*4962*/    OPC_RecordNode,   // #0 = 'MSP430call' chained node
/*4963*/    OPC_CaptureGlueInput,
/*4964*/    OPC_Scope, 30, /*->4996*/ // 2 children in Scope
/*4966*/      OPC_MoveChild, 1,
/*4968*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*4971*/      OPC_RecordMemRef,
/*4972*/      OPC_RecordNode, // #1 = 'ld' chained node
/*4973*/      OPC_CheckFoldableChainNode,
/*4974*/      OPC_RecordChild1, // #2 = $dst
/*4975*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*4977*/      OPC_CheckPredicate, 1, // Predicate_load
/*4979*/      OPC_MoveParent,
/*4980*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$dst #3 #4
/*4983*/      OPC_EmitMergeInputChains, 2, 0, 1, 
/*4987*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::CALLm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs|OPFL_Variadic1,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 3, 4, 
              // Src: (MSP430call (ld:iPTR addr:iPTR:$dst)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
              // Dst: (CALLm:i16 addr:i16:$dst)
/*4996*/    /*Scope*/ 65, /*->5062*/
/*4997*/      OPC_RecordChild1, // #1 = $dst
/*4998*/      OPC_Scope, 49, /*->5049*/ // 2 children in Scope
/*5000*/        OPC_MoveChild, 1,
/*5002*/        OPC_SwitchOpcode /*3 cases */, 12,  TARGET_VAL(ISD::Constant),// ->5018
/*5006*/          OPC_MoveParent,
/*5007*/          OPC_EmitMergeInputChains1_0,
/*5008*/          OPC_EmitConvertToTarget, 1,
/*5010*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i16, 1/*#Ops*/, 2, 
                  // Src: (MSP430call (imm:iPTR):$dst) - Complexity = 6
                  // Dst: (CALLi:i16 (imm:i16):$dst)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5033
/*5021*/          OPC_CheckType, MVT::i16,
/*5023*/          OPC_MoveParent,
/*5024*/          OPC_EmitMergeInputChains1_0,
/*5025*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i16, 1/*#Ops*/, 1, 
                  // Src: (MSP430call (tglobaladdr:i16):$dst) - Complexity = 6
                  // Dst: (CALLi:i16 (tglobaladdr:i16):$dst)
                /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TargetExternalSymbol),// ->5048
/*5036*/          OPC_CheckType, MVT::i16,
/*5038*/          OPC_MoveParent,
/*5039*/          OPC_EmitMergeInputChains1_0,
/*5040*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::CALLi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                      1/*#VTs*/, MVT::i16, 1/*#Ops*/, 1, 
                  // Src: (MSP430call (texternalsym:i16):$dst) - Complexity = 6
                  // Dst: (CALLi:i16 (texternalsym:i16):$dst)
                0, // EndSwitchOpcode
/*5049*/      /*Scope*/ 11, /*->5061*/
/*5050*/        OPC_CheckChild1Type, MVT::i16,
/*5052*/        OPC_EmitMergeInputChains1_0,
/*5053*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::CALLr), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i16, 1/*#Ops*/, 1, 
                // Src: (MSP430call GR16:i16:$dst) - Complexity = 3
                // Dst: (CALLr:i16 GR16:i16:$dst)
/*5061*/      0, /*End of Scope*/
/*5062*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,2/*302*/,  TARGET_VAL(ISD::ADD),// ->5369
/*5067*/    OPC_Scope, 51, /*->5120*/ // 5 children in Scope
/*5069*/      OPC_RecordChild0, // #0 = $src
/*5070*/      OPC_MoveChild, 1,
/*5072*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5075*/      OPC_RecordMemRef,
/*5076*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5077*/      OPC_CheckFoldableChainNode,
/*5078*/      OPC_RecordChild1, // #2 = $src2
/*5079*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5081*/      OPC_CheckPredicate, 1, // Predicate_load
/*5083*/      OPC_MoveParent,
/*5084*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5102
/*5087*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5090*/        OPC_EmitMergeInputChains1_1,
/*5091*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (add:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5119
/*5104*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5107*/        OPC_EmitMergeInputChains1_1,
/*5108*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (add:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5120*/    /*Scope*/ 51, /*->5172*/
/*5121*/      OPC_MoveChild, 0,
/*5123*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5126*/      OPC_RecordMemRef,
/*5127*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5128*/      OPC_CheckFoldableChainNode,
/*5129*/      OPC_RecordChild1, // #1 = $src2
/*5130*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5132*/      OPC_CheckPredicate, 1, // Predicate_load
/*5134*/      OPC_MoveParent,
/*5135*/      OPC_RecordChild1, // #2 = $src
/*5136*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5154
/*5139*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5142*/        OPC_EmitMergeInputChains1_0,
/*5143*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (add:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5171
/*5156*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5159*/        OPC_EmitMergeInputChains1_0,
/*5160*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (add:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5172*/    /*Scope*/ 62, /*->5235*/
/*5173*/      OPC_RecordChild0, // #0 = $src
/*5174*/      OPC_MoveChild, 1,
/*5176*/      OPC_CheckOpcode, TARGET_VAL(MSP430ISD::Wrapper),
/*5179*/      OPC_RecordChild0, // #1 = $src2
/*5180*/      OPC_MoveChild, 0,
/*5182*/      OPC_SwitchOpcode /*3 cases */, 14,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5200
/*5186*/        OPC_MoveParent,
/*5187*/        OPC_MoveParent,
/*5188*/        OPC_CheckType, MVT::i16,
/*5190*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:i16 GR16:i16:$src, (MSP430Wrapper:i16 (tglobaladdr:i16):$src2)) - Complexity = 9
                // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tglobaladdr:i16):$src2)
              /*SwitchOpcode*/ 14,  TARGET_VAL(ISD::TargetExternalSymbol),// ->5217
/*5203*/        OPC_MoveParent,
/*5204*/        OPC_MoveParent,
/*5205*/        OPC_CheckType, MVT::i16,
/*5207*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:i16 GR16:i16:$src, (MSP430Wrapper:i16 (texternalsym:i16):$src2)) - Complexity = 9
                // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (texternalsym:i16):$src2)
              /*SwitchOpcode*/ 14,  TARGET_VAL(ISD::TargetBlockAddress),// ->5234
/*5220*/        OPC_MoveParent,
/*5221*/        OPC_MoveParent,
/*5222*/        OPC_CheckType, MVT::i16,
/*5224*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:i16 GR16:i16:$src, (MSP430Wrapper:i16 (tblockaddress:i16):$src2)) - Complexity = 9
                // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tblockaddress:i16):$src2)
              0, // EndSwitchOpcode
/*5235*/    /*Scope*/ 64, /*->5300*/
/*5236*/      OPC_MoveChild, 0,
/*5238*/      OPC_CheckOpcode, TARGET_VAL(MSP430ISD::Wrapper),
/*5241*/      OPC_RecordChild0, // #0 = $src2
/*5242*/      OPC_MoveChild, 0,
/*5244*/      OPC_SwitchOpcode /*3 cases */, 15,  TARGET_VAL(ISD::TargetBlockAddress),// ->5263
/*5248*/        OPC_MoveParent,
/*5249*/        OPC_MoveParent,
/*5250*/        OPC_RecordChild1, // #1 = $src
/*5251*/        OPC_CheckType, MVT::i16,
/*5253*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                // Src: (add:i16 (MSP430Wrapper:i16 (tblockaddress:i16):$src2), GR16:i16:$src) - Complexity = 9
                // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tblockaddress:i16):$src2)
              /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5281
/*5266*/        OPC_MoveParent,
/*5267*/        OPC_MoveParent,
/*5268*/        OPC_RecordChild1, // #1 = $src
/*5269*/        OPC_CheckType, MVT::i16,
/*5271*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                // Src: (add:i16 (MSP430Wrapper:i16 (tglobaladdr:i16):$src2), GR16:i16:$src) - Complexity = 9
                // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (tglobaladdr:i16):$src2)
              /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::TargetExternalSymbol),// ->5299
/*5284*/        OPC_MoveParent,
/*5285*/        OPC_MoveParent,
/*5286*/        OPC_RecordChild1, // #1 = $src
/*5287*/        OPC_CheckType, MVT::i16,
/*5289*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 1, 0, 
                // Src: (add:i16 (MSP430Wrapper:i16 (texternalsym:i16):$src2), GR16:i16:$src) - Complexity = 9
                // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (texternalsym:i16):$src2)
              0, // EndSwitchOpcode
/*5300*/    /*Scope*/ 67, /*->5368*/
/*5301*/      OPC_RecordChild0, // #0 = $src
/*5302*/      OPC_RecordChild1, // #1 = $src2
/*5303*/      OPC_Scope, 36, /*->5341*/ // 3 children in Scope
/*5305*/        OPC_MoveChild, 1,
/*5307*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5310*/        OPC_MoveParent,
/*5311*/        OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->5326
/*5314*/          OPC_EmitConvertToTarget, 1,
/*5316*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8ri), 0,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (ADD8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                /*SwitchType*/ 12,  MVT::i16,// ->5340
/*5328*/          OPC_EmitConvertToTarget, 1,
/*5330*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
/*5341*/      /*Scope*/ 12, /*->5354*/
/*5342*/        OPC_CheckType, MVT::i8,
/*5344*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8rr), 0,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (ADD8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5354*/      /*Scope*/ 12, /*->5367*/
/*5355*/        OPC_CheckType, MVT::i16,
/*5357*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16rr), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (ADD16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5367*/      0, /*End of Scope*/
/*5368*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47|128,1/*175*/,  TARGET_VAL(ISD::ADDE),// ->5548
/*5373*/    OPC_CaptureGlueInput,
/*5374*/    OPC_Scope, 51, /*->5427*/ // 3 children in Scope
/*5376*/      OPC_RecordChild0, // #0 = $src
/*5377*/      OPC_MoveChild, 1,
/*5379*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5382*/      OPC_RecordMemRef,
/*5383*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5384*/      OPC_CheckFoldableChainNode,
/*5385*/      OPC_RecordChild1, // #2 = $src2
/*5386*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5388*/      OPC_CheckPredicate, 1, // Predicate_load
/*5390*/      OPC_MoveParent,
/*5391*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5409
/*5394*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5397*/        OPC_EmitMergeInputChains1_1,
/*5398*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (adde:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (ADC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5426
/*5411*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5414*/        OPC_EmitMergeInputChains1_1,
/*5415*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (adde:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (ADC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5427*/    /*Scope*/ 51, /*->5479*/
/*5428*/      OPC_MoveChild, 0,
/*5430*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5433*/      OPC_RecordMemRef,
/*5434*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5435*/      OPC_CheckFoldableChainNode,
/*5436*/      OPC_RecordChild1, // #1 = $src2
/*5437*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5439*/      OPC_CheckPredicate, 1, // Predicate_load
/*5441*/      OPC_MoveParent,
/*5442*/      OPC_RecordChild1, // #2 = $src
/*5443*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5461
/*5446*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5449*/        OPC_EmitMergeInputChains1_0,
/*5450*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (adde:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                // Dst: (ADC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5478
/*5463*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5466*/        OPC_EmitMergeInputChains1_0,
/*5467*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (adde:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                // Dst: (ADC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5479*/    /*Scope*/ 67, /*->5547*/
/*5480*/      OPC_RecordChild0, // #0 = $src
/*5481*/      OPC_RecordChild1, // #1 = $src2
/*5482*/      OPC_Scope, 36, /*->5520*/ // 3 children in Scope
/*5484*/        OPC_MoveChild, 1,
/*5486*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5489*/        OPC_MoveParent,
/*5490*/        OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->5505
/*5493*/          OPC_EmitConvertToTarget, 1,
/*5495*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (adde:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (ADC8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                /*SwitchType*/ 12,  MVT::i16,// ->5519
/*5507*/          OPC_EmitConvertToTarget, 1,
/*5509*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (adde:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (ADC16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
/*5520*/      /*Scope*/ 12, /*->5533*/
/*5521*/        OPC_CheckType, MVT::i8,
/*5523*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC8rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (ADC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5533*/      /*Scope*/ 12, /*->5546*/
/*5534*/        OPC_CheckType, MVT::i16,
/*5536*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADC16rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (ADC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5546*/      0, /*End of Scope*/
/*5547*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::OR),// ->5726
/*5552*/    OPC_Scope, 51, /*->5605*/ // 3 children in Scope
/*5554*/      OPC_RecordChild0, // #0 = $src
/*5555*/      OPC_MoveChild, 1,
/*5557*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5560*/      OPC_RecordMemRef,
/*5561*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5562*/      OPC_CheckFoldableChainNode,
/*5563*/      OPC_RecordChild1, // #2 = $src2
/*5564*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5566*/      OPC_CheckPredicate, 1, // Predicate_load
/*5568*/      OPC_MoveParent,
/*5569*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5587
/*5572*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5575*/        OPC_EmitMergeInputChains1_1,
/*5576*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (or:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (OR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5604
/*5589*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5592*/        OPC_EmitMergeInputChains1_1,
/*5593*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (or:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (OR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5605*/    /*Scope*/ 51, /*->5657*/
/*5606*/      OPC_MoveChild, 0,
/*5608*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5611*/      OPC_RecordMemRef,
/*5612*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5613*/      OPC_CheckFoldableChainNode,
/*5614*/      OPC_RecordChild1, // #1 = $src2
/*5615*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5617*/      OPC_CheckPredicate, 1, // Predicate_load
/*5619*/      OPC_MoveParent,
/*5620*/      OPC_RecordChild1, // #2 = $src
/*5621*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5639
/*5624*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5627*/        OPC_EmitMergeInputChains1_0,
/*5628*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (or:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                // Dst: (OR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5656
/*5641*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5644*/        OPC_EmitMergeInputChains1_0,
/*5645*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (or:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                // Dst: (OR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5657*/    /*Scope*/ 67, /*->5725*/
/*5658*/      OPC_RecordChild0, // #0 = $src
/*5659*/      OPC_RecordChild1, // #1 = $src2
/*5660*/      OPC_Scope, 36, /*->5698*/ // 3 children in Scope
/*5662*/        OPC_MoveChild, 1,
/*5664*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5667*/        OPC_MoveParent,
/*5668*/        OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->5683
/*5671*/          OPC_EmitConvertToTarget, 1,
/*5673*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8ri), 0,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (OR8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                /*SwitchType*/ 12,  MVT::i16,// ->5697
/*5685*/          OPC_EmitConvertToTarget, 1,
/*5687*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16ri), 0,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (or:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (OR16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
/*5698*/      /*Scope*/ 12, /*->5711*/
/*5699*/        OPC_CheckType, MVT::i8,
/*5701*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::OR8rr), 0,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (or:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (OR8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5711*/      /*Scope*/ 12, /*->5724*/
/*5712*/        OPC_CheckType, MVT::i16,
/*5714*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::OR16rr), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (or:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (OR16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5724*/      0, /*End of Scope*/
/*5725*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::XOR),// ->5904
/*5730*/    OPC_Scope, 51, /*->5783*/ // 3 children in Scope
/*5732*/      OPC_RecordChild0, // #0 = $src
/*5733*/      OPC_MoveChild, 1,
/*5735*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5738*/      OPC_RecordMemRef,
/*5739*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5740*/      OPC_CheckFoldableChainNode,
/*5741*/      OPC_RecordChild1, // #2 = $src2
/*5742*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5744*/      OPC_CheckPredicate, 1, // Predicate_load
/*5746*/      OPC_MoveParent,
/*5747*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5765
/*5750*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5753*/        OPC_EmitMergeInputChains1_1,
/*5754*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (xor:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (XOR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5782
/*5767*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5770*/        OPC_EmitMergeInputChains1_1,
/*5771*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (xor:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (XOR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5783*/    /*Scope*/ 51, /*->5835*/
/*5784*/      OPC_MoveChild, 0,
/*5786*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5789*/      OPC_RecordMemRef,
/*5790*/      OPC_RecordNode, // #0 = 'ld' chained node
/*5791*/      OPC_CheckFoldableChainNode,
/*5792*/      OPC_RecordChild1, // #1 = $src2
/*5793*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5795*/      OPC_CheckPredicate, 1, // Predicate_load
/*5797*/      OPC_MoveParent,
/*5798*/      OPC_RecordChild1, // #2 = $src
/*5799*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5817
/*5802*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5805*/        OPC_EmitMergeInputChains1_0,
/*5806*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (xor:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                // Dst: (XOR8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5834
/*5819*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*5822*/        OPC_EmitMergeInputChains1_0,
/*5823*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (xor:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                // Dst: (XOR16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5835*/    /*Scope*/ 67, /*->5903*/
/*5836*/      OPC_RecordChild0, // #0 = $src
/*5837*/      OPC_RecordChild1, // #1 = $src2
/*5838*/      OPC_Scope, 36, /*->5876*/ // 3 children in Scope
/*5840*/        OPC_MoveChild, 1,
/*5842*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5845*/        OPC_MoveParent,
/*5846*/        OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->5861
/*5849*/          OPC_EmitConvertToTarget, 1,
/*5851*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8ri), 0,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (XOR8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                /*SwitchType*/ 12,  MVT::i16,// ->5875
/*5863*/          OPC_EmitConvertToTarget, 1,
/*5865*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16ri), 0,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (xor:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (XOR16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
/*5876*/      /*Scope*/ 12, /*->5889*/
/*5877*/        OPC_CheckType, MVT::i8,
/*5879*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR8rr), 0,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (XOR8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*5889*/      /*Scope*/ 12, /*->5902*/
/*5890*/        OPC_CheckType, MVT::i16,
/*5892*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::XOR16rr), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (xor:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (XOR16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*5902*/      0, /*End of Scope*/
/*5903*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(ISD::SUB),// ->6028
/*5907*/    OPC_RecordChild0, // #0 = $src
/*5908*/    OPC_Scope, 50, /*->5960*/ // 2 children in Scope
/*5910*/      OPC_MoveChild, 1,
/*5912*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*5915*/      OPC_RecordMemRef,
/*5916*/      OPC_RecordNode, // #1 = 'ld' chained node
/*5917*/      OPC_CheckFoldableChainNode,
/*5918*/      OPC_RecordChild1, // #2 = $src2
/*5919*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*5921*/      OPC_CheckPredicate, 1, // Predicate_load
/*5923*/      OPC_MoveParent,
/*5924*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->5942
/*5927*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5930*/        OPC_EmitMergeInputChains1_1,
/*5931*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (sub:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (SUB8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->5959
/*5944*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*5947*/        OPC_EmitMergeInputChains1_1,
/*5948*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (sub:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (SUB16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*5960*/    /*Scope*/ 66, /*->6027*/
/*5961*/      OPC_RecordChild1, // #1 = $src2
/*5962*/      OPC_Scope, 36, /*->6000*/ // 3 children in Scope
/*5964*/        OPC_MoveChild, 1,
/*5966*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5969*/        OPC_MoveParent,
/*5970*/        OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->5985
/*5973*/          OPC_EmitConvertToTarget, 1,
/*5975*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8ri), 0,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (SUB8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                /*SwitchType*/ 12,  MVT::i16,// ->5999
/*5987*/          OPC_EmitConvertToTarget, 1,
/*5989*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16ri), 0,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (sub:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (SUB16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
/*6000*/      /*Scope*/ 12, /*->6013*/
/*6001*/        OPC_CheckType, MVT::i8,
/*6003*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8rr), 0,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (SUB8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*6013*/      /*Scope*/ 12, /*->6026*/
/*6014*/        OPC_CheckType, MVT::i16,
/*6016*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16rr), 0,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (sub:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (SUB16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*6026*/      0, /*End of Scope*/
/*6027*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 122,  TARGET_VAL(ISD::SUBE),// ->6153
/*6031*/    OPC_CaptureGlueInput,
/*6032*/    OPC_RecordChild0, // #0 = $src
/*6033*/    OPC_Scope, 50, /*->6085*/ // 2 children in Scope
/*6035*/      OPC_MoveChild, 1,
/*6037*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6040*/      OPC_RecordMemRef,
/*6041*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6042*/      OPC_CheckFoldableChainNode,
/*6043*/      OPC_RecordChild1, // #2 = $src2
/*6044*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6046*/      OPC_CheckPredicate, 1, // Predicate_load
/*6048*/      OPC_MoveParent,
/*6049*/      OPC_SwitchType /*2 cases */, 15,  MVT::i8,// ->6067
/*6052*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*6055*/        OPC_EmitMergeInputChains1_1,
/*6056*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC8rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (sube:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (SBC8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i16,// ->6084
/*6069*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*6072*/        OPC_EmitMergeInputChains1_1,
/*6073*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC16rm), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (sube:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (SBC16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              0, // EndSwitchType
/*6085*/    /*Scope*/ 66, /*->6152*/
/*6086*/      OPC_RecordChild1, // #1 = $src2
/*6087*/      OPC_Scope, 36, /*->6125*/ // 3 children in Scope
/*6089*/        OPC_MoveChild, 1,
/*6091*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6094*/        OPC_MoveParent,
/*6095*/        OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->6110
/*6098*/          OPC_EmitConvertToTarget, 1,
/*6100*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC8ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (sube:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (SBC8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                /*SwitchType*/ 12,  MVT::i16,// ->6124
/*6112*/          OPC_EmitConvertToTarget, 1,
/*6114*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC16ri), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (sube:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (SBC16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                0, // EndSwitchType
/*6125*/      /*Scope*/ 12, /*->6138*/
/*6126*/        OPC_CheckType, MVT::i8,
/*6128*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC8rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (SBC8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*6138*/      /*Scope*/ 12, /*->6151*/
/*6139*/        OPC_CheckType, MVT::i16,
/*6141*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SBC16rr), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (sube:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (SBC16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*6151*/      0, /*End of Scope*/
/*6152*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 46|128,1/*174*/,  TARGET_VAL(ISD::ADDC),// ->6331
/*6157*/    OPC_Scope, 51, /*->6210*/ // 3 children in Scope
/*6159*/      OPC_RecordChild0, // #0 = $src
/*6160*/      OPC_MoveChild, 1,
/*6162*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6165*/      OPC_RecordMemRef,
/*6166*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6167*/      OPC_CheckFoldableChainNode,
/*6168*/      OPC_RecordChild1, // #2 = $src2
/*6169*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6171*/      OPC_CheckPredicate, 1, // Predicate_load
/*6173*/      OPC_MoveParent,
/*6174*/      OPC_SwitchType /*2 cases */, 15,  MVT::i16,// ->6192
/*6177*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*6180*/        OPC_EmitMergeInputChains1_1,
/*6181*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (addc:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i8,// ->6209
/*6194*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*6197*/        OPC_EmitMergeInputChains1_1,
/*6198*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (addc:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              0, // EndSwitchType
/*6210*/    /*Scope*/ 51, /*->6262*/
/*6211*/      OPC_MoveChild, 0,
/*6213*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6216*/      OPC_RecordMemRef,
/*6217*/      OPC_RecordNode, // #0 = 'ld' chained node
/*6218*/      OPC_CheckFoldableChainNode,
/*6219*/      OPC_RecordChild1, // #1 = $src2
/*6220*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6222*/      OPC_CheckPredicate, 1, // Predicate_load
/*6224*/      OPC_MoveParent,
/*6225*/      OPC_RecordChild1, // #2 = $src
/*6226*/      OPC_SwitchType /*2 cases */, 15,  MVT::i16,// ->6244
/*6229*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*6232*/        OPC_EmitMergeInputChains1_0,
/*6233*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (addc:i16 (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR16:i16:$src) - Complexity = 16
                // Dst: (ADD16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i8,// ->6261
/*6246*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src2 #3 #4
/*6249*/        OPC_EmitMergeInputChains1_0,
/*6250*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 2, 3, 4, 
                // Src: (addc:i8 (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>, GR8:i8:$src) - Complexity = 16
                // Dst: (ADD8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              0, // EndSwitchType
/*6262*/    /*Scope*/ 67, /*->6330*/
/*6263*/      OPC_RecordChild0, // #0 = $src
/*6264*/      OPC_RecordChild1, // #1 = $src2
/*6265*/      OPC_Scope, 36, /*->6303*/ // 3 children in Scope
/*6267*/        OPC_MoveChild, 1,
/*6269*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6272*/        OPC_MoveParent,
/*6273*/        OPC_SwitchType /*2 cases */, 12,  MVT::i16,// ->6288
/*6276*/          OPC_EmitConvertToTarget, 1,
/*6278*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16ri), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (addc:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (ADD16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                /*SwitchType*/ 12,  MVT::i8,// ->6302
/*6290*/          OPC_EmitConvertToTarget, 1,
/*6292*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8ri), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (addc:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (ADD8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                0, // EndSwitchType
/*6303*/      /*Scope*/ 12, /*->6316*/
/*6304*/        OPC_CheckType, MVT::i16,
/*6306*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD16rr), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (ADD16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*6316*/      /*Scope*/ 12, /*->6329*/
/*6317*/        OPC_CheckType, MVT::i8,
/*6319*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::ADD8rr), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (addc:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (ADD8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*6329*/      0, /*End of Scope*/
/*6330*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 121,  TARGET_VAL(ISD::SUBC),// ->6455
/*6334*/    OPC_RecordChild0, // #0 = $src
/*6335*/    OPC_Scope, 50, /*->6387*/ // 2 children in Scope
/*6337*/      OPC_MoveChild, 1,
/*6339*/      OPC_CheckOpcode, TARGET_VAL(ISD::LOAD),
/*6342*/      OPC_RecordMemRef,
/*6343*/      OPC_RecordNode, // #1 = 'ld' chained node
/*6344*/      OPC_CheckFoldableChainNode,
/*6345*/      OPC_RecordChild1, // #2 = $src2
/*6346*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6348*/      OPC_CheckPredicate, 1, // Predicate_load
/*6350*/      OPC_MoveParent,
/*6351*/      OPC_SwitchType /*2 cases */, 15,  MVT::i16,// ->6369
/*6354*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*6357*/        OPC_EmitMergeInputChains1_1,
/*6358*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i16, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (subc:i16 GR16:i16:$src, (ld:i16 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (SUB16rm:i16:i16 GR16:i16:$src, addr:i16:$src2)
              /*SwitchType*/ 15,  MVT::i8,// ->6386
/*6371*/        OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddr:$src2 #3 #4
/*6374*/        OPC_EmitMergeInputChains1_1,
/*6375*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8rm), 0|OPFL_Chain|OPFL_GlueOutput|OPFL_MemRefs,
                    2/*#VTs*/, MVT::i8, MVT::i16, 3/*#Ops*/, 0, 3, 4, 
                // Src: (subc:i8 GR8:i8:$src, (ld:i8 addr:iPTR:$src2)<<P:Predicate_unindexedload>><<P:Predicate_load>>) - Complexity = 16
                // Dst: (SUB8rm:i8:i16 GR8:i8:$src, addr:i16:$src2)
              0, // EndSwitchType
/*6387*/    /*Scope*/ 66, /*->6454*/
/*6388*/      OPC_RecordChild1, // #1 = $src2
/*6389*/      OPC_Scope, 36, /*->6427*/ // 3 children in Scope
/*6391*/        OPC_MoveChild, 1,
/*6393*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6396*/        OPC_MoveParent,
/*6397*/        OPC_SwitchType /*2 cases */, 12,  MVT::i16,// ->6412
/*6400*/          OPC_EmitConvertToTarget, 1,
/*6402*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16ri), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (subc:i16 GR16:i16:$src, (imm:i16):$src2) - Complexity = 6
                  // Dst: (SUB16ri:i16:i16 GR16:i16:$src, (imm:i16):$src2)
                /*SwitchType*/ 12,  MVT::i8,// ->6426
/*6414*/          OPC_EmitConvertToTarget, 1,
/*6416*/          OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8ri), 0|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 2, 
                  // Src: (subc:i8 GR8:i8:$src, (imm:i8):$src2) - Complexity = 6
                  // Dst: (SUB8ri:i8:i16 GR8:i8:$src, (imm:i8):$src2)
                0, // EndSwitchType
/*6427*/      /*Scope*/ 12, /*->6440*/
/*6428*/        OPC_CheckType, MVT::i16,
/*6430*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB16rr), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i16 GR16:i16:$src, GR16:i16:$src2) - Complexity = 3
                // Dst: (SUB16rr:i16:i16 GR16:i16:$src, GR16:i16:$src2)
/*6440*/      /*Scope*/ 12, /*->6453*/
/*6441*/        OPC_CheckType, MVT::i8,
/*6443*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::SUB8rr), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
                // Src: (subc:i8 GR8:i8:$src, GR8:i8:$src2) - Complexity = 3
                // Dst: (SUB8rr:i8:i16 GR8:i8:$src, GR8:i8:$src2)
/*6453*/      0, /*End of Scope*/
/*6454*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::LOAD),// ->6540
/*6458*/    OPC_RecordMemRef,
/*6459*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*6460*/    OPC_RecordChild1, // #1 = $src
/*6461*/    OPC_CheckPredicate, 0, // Predicate_unindexedload
/*6463*/    OPC_Scope, 34, /*->6499*/ // 3 children in Scope
/*6465*/      OPC_CheckPredicate, 1, // Predicate_load
/*6467*/      OPC_SwitchType /*2 cases */, 13,  MVT::i8,// ->6483
/*6470*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*6473*/        OPC_EmitMergeInputChains1_0,
/*6474*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV8rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i8, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i8 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (MOV8rm:i8 addr:i16:$src)
              /*SwitchType*/ 13,  MVT::i16,// ->6498
/*6485*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*6488*/        OPC_EmitMergeInputChains1_0,
/*6489*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16rm), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i16, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (MOV16rm:i16 addr:i16:$src)
              0, // EndSwitchType
/*6499*/    /*Scope*/ 19, /*->6519*/
/*6500*/      OPC_CheckPredicate, 5, // Predicate_zextload
/*6502*/      OPC_CheckPredicate, 6, // Predicate_zextloadi8
/*6504*/      OPC_CheckType, MVT::i16,
/*6506*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*6509*/      OPC_EmitMergeInputChains1_0,
/*6510*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::MOVZX16rm8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (MOVZX16rm8:i16 addr:i16:$src)
/*6519*/    /*Scope*/ 19, /*->6539*/
/*6520*/      OPC_CheckPredicate, 7, // Predicate_extload
/*6522*/      OPC_CheckPredicate, 8, // Predicate_extloadi8
/*6524*/      OPC_CheckType, MVT::i16,
/*6526*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddr:$src #2 #3
/*6529*/      OPC_EmitMergeInputChains1_0,
/*6530*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::MOVZX16rm8), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i16 addr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
              // Dst: (MOVZX16rm8:i16 addr:i16:$src)
/*6539*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->6569
/*6543*/    OPC_RecordNode,   // #0 = 'MSP430callseq_end' chained node
/*6544*/    OPC_CaptureGlueInput,
/*6545*/    OPC_RecordChild1, // #1 = $amt1
/*6546*/    OPC_MoveChild, 1,
/*6548*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6551*/    OPC_MoveParent,
/*6552*/    OPC_RecordChild2, // #2 = $amt2
/*6553*/    OPC_MoveChild, 2,
/*6555*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6558*/    OPC_MoveParent,
/*6559*/    OPC_EmitMergeInputChains1_0,
/*6560*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i16, 2/*#Ops*/, 1, 2, 
            // Src: (MSP430callseq_end (timm:i16):$amt1, (timm:i16):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i16 (timm:i16):$amt1, (timm:i16):$amt2)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->6589
/*6572*/    OPC_RecordNode,   // #0 = 'MSP430callseq_start' chained node
/*6573*/    OPC_RecordChild1, // #1 = $amt
/*6574*/    OPC_MoveChild, 1,
/*6576*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*6579*/    OPC_MoveParent,
/*6580*/    OPC_EmitMergeInputChains1_0,
/*6581*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i16, 1/*#Ops*/, 1, 
            // Src: (MSP430callseq_start (timm:i16):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i16 (timm:i16):$amt)
          /*SwitchOpcode*/ 27,  TARGET_VAL(MSP430ISD::BR_CC),// ->6619
/*6592*/    OPC_RecordNode,   // #0 = 'MSP430brcc' chained node
/*6593*/    OPC_CaptureGlueInput,
/*6594*/    OPC_RecordChild1, // #1 = $dst
/*6595*/    OPC_MoveChild, 1,
/*6597*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6600*/    OPC_MoveParent,
/*6601*/    OPC_RecordChild2, // #2 = $cc
/*6602*/    OPC_MoveChild, 2,
/*6604*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6607*/    OPC_MoveParent,
/*6608*/    OPC_EmitMergeInputChains1_0,
/*6609*/    OPC_EmitConvertToTarget, 2,
/*6611*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::JCC), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 2/*#Ops*/, 1, 3, 
            // Src: (MSP430brcc (bb:Other):$dst, (imm:i8):$cc) - Complexity = 6
            // Dst: (JCC (bb:Other):$dst, (imm:i8):$cc)
          /*SwitchOpcode*/ 53,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6675
/*6622*/    OPC_Scope, 15, /*->6639*/ // 2 children in Scope
/*6624*/      OPC_MoveChild, 0,
/*6626*/      OPC_CheckOpcode, TARGET_VAL(ISD::TRUNCATE),
/*6629*/      OPC_RecordChild0, // #0 = $src
/*6630*/      OPC_MoveParent,
/*6631*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::ZEXT16r), 0,
                  1/*#VTs*/, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (zext:i16 (trunc:i8 GR16:i16:$src)) - Complexity = 6
              // Dst: (ZEXT16r:i16 GR16:i16:$src)
/*6639*/    /*Scope*/ 34, /*->6674*/
/*6640*/      OPC_RecordChild0, // #0 = $src
/*6641*/      OPC_Scope, 21, /*->6664*/ // 2 children in Scope
/*6643*/        OPC_MoveChild, 0,
/*6645*/        OPC_CheckPredicate, 9, // Predicate_def8
/*6647*/        OPC_MoveParent,
/*6648*/        OPC_EmitInteger, MVT::i16, 0, 
/*6651*/        OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*6654*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0,
                    1/*#VTs*/, MVT::i16, 3/*#Ops*/, 1, 0, 2, 
                // Src: (zext:i16 GR8:i8<<P:Predicate_def8>>:$src) - Complexity = 4
                // Dst: (SUBREG_TO_REG:i16 0:i16, GR8:i8:$src, subreg_8bit:i32)
/*6664*/      /*Scope*/ 8, /*->6673*/
/*6665*/        OPC_MorphNodeTo, TARGET_VAL(MSP430::MOVZX16rr8), 0,
                    1/*#VTs*/, MVT::i16, 1/*#Ops*/, 0, 
                // Src: (zext:i16 GR8:i8:$src) - Complexity = 3
                // Dst: (MOVZX16rr8:i16 GR8:i8:$src)
/*6673*/      0, /*End of Scope*/
/*6674*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 47,  TARGET_VAL(MSP430ISD::Wrapper),// ->6725
/*6678*/    OPC_RecordChild0, // #0 = $dst
/*6679*/    OPC_MoveChild, 0,
/*6681*/    OPC_SwitchOpcode /*3 cases */, 11,  TARGET_VAL(ISD::TargetGlobalAddress),// ->6696
/*6685*/      OPC_MoveParent,
/*6686*/      OPC_CheckType, MVT::i16,
/*6688*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16ri), 0,
                  1/*#VTs*/, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430Wrapper:i16 (tglobaladdr:i16):$dst) - Complexity = 6
              // Dst: (MOV16ri:i16 (tglobaladdr:i16):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetExternalSymbol),// ->6710
/*6699*/      OPC_MoveParent,
/*6700*/      OPC_CheckType, MVT::i16,
/*6702*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16ri), 0,
                  1/*#VTs*/, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430Wrapper:i16 (texternalsym:i16):$dst) - Complexity = 6
              // Dst: (MOV16ri:i16 (texternalsym:i16):$dst)
            /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::TargetBlockAddress),// ->6724
/*6713*/      OPC_MoveParent,
/*6714*/      OPC_CheckType, MVT::i16,
/*6716*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16ri), 0,
                  1/*#VTs*/, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430Wrapper:i16 (tblockaddress:i16):$dst) - Complexity = 6
              // Dst: (MOV16ri:i16 (tblockaddress:i16):$dst)
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 40,  TARGET_VAL(MSP430ISD::SELECT_CC),// ->6768
/*6728*/    OPC_CaptureGlueInput,
/*6729*/    OPC_RecordChild0, // #0 = $src
/*6730*/    OPC_RecordChild1, // #1 = $src2
/*6731*/    OPC_RecordChild2, // #2 = $cc
/*6732*/    OPC_MoveChild, 2,
/*6734*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6737*/    OPC_MoveParent,
/*6738*/    OPC_SwitchType /*2 cases */, 12,  MVT::i8,// ->6753
/*6741*/      OPC_EmitConvertToTarget, 2,
/*6743*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Select8), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i8, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MSP430selectcc:i8 GR8:i8:$src, GR8:i8:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (Select8:i8 GR8:i8:$src, GR8:i8:$src2, (imm:i8):$cc)
            /*SwitchType*/ 12,  MVT::i16,// ->6767
/*6755*/      OPC_EmitConvertToTarget, 2,
/*6757*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Select16), 0|OPFL_GlueInput,
                  1/*#VTs*/, MVT::i16, 3/*#Ops*/, 0, 1, 3, 
              // Src: (MSP430selectcc:i16 GR16:i16:$src, GR16:i16:$src2, (imm:i8):$cc) - Complexity = 6
              // Dst: (Select16:i16 GR16:i16:$src, GR16:i16:$src2, (imm:i8):$cc)
            0, // EndSwitchType
          /*SwitchOpcode*/ 9,  TARGET_VAL(MSP430ISD::RET_FLAG),// ->6780
/*6771*/    OPC_RecordNode,   // #0 = 'MSP430retflag' chained node
/*6772*/    OPC_CaptureGlueInput,
/*6773*/    OPC_EmitMergeInputChains1_0,
/*6774*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::RET), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (MSP430retflag) - Complexity = 3
            // Dst: (RET)
          /*SwitchOpcode*/ 9,  TARGET_VAL(MSP430ISD::RETI_FLAG),// ->6792
/*6783*/    OPC_RecordNode,   // #0 = 'MSP430retiflag' chained node
/*6784*/    OPC_CaptureGlueInput,
/*6785*/    OPC_EmitMergeInputChains1_0,
/*6786*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::RETI), 0|OPFL_Chain|OPFL_GlueInput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (MSP430retiflag) - Complexity = 3
            // Dst: (RETI)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->6811
/*6795*/    OPC_RecordNode,   // #0 = 'br' chained node
/*6796*/    OPC_RecordChild1, // #1 = $dst
/*6797*/    OPC_MoveChild, 1,
/*6799*/    OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*6802*/    OPC_MoveParent,
/*6803*/    OPC_EmitMergeInputChains1_0,
/*6804*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::JMP), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (JMP (bb:Other):$dst)
          /*SwitchOpcode*/ 27,  TARGET_VAL(ISD::Constant),// ->6841
/*6814*/    OPC_RecordNode,   // #0 = $src
/*6815*/    OPC_SwitchType /*2 cases */, 10,  MVT::i8,// ->6828
/*6818*/      OPC_EmitConvertToTarget, 0,
/*6820*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV8ri), 0,
                  1/*#VTs*/, MVT::i8, 1/*#Ops*/, 1, 
              // Src: (imm:i8):$src - Complexity = 3
              // Dst: (MOV8ri:i8 (imm:i8):$src)
            /*SwitchType*/ 10,  MVT::i16,// ->6840
/*6830*/      OPC_EmitConvertToTarget, 0,
/*6832*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::MOV16ri), 0,
                  1/*#VTs*/, MVT::i16, 1/*#Ops*/, 1, 
              // Src: (imm:i16):$src - Complexity = 3
              // Dst: (MOV16ri:i16 (imm:i16):$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(MSP430ISD::RRA),// ->6869
/*6844*/    OPC_RecordChild0, // #0 = $src
/*6845*/    OPC_SwitchType /*2 cases */, 9,  MVT::i8,// ->6857
/*6848*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::SAR8r1), 0,
                  2/*#VTs*/, MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430rra:i8 GR8:i8:$src) - Complexity = 3
              // Dst: (SAR8r1:i8:i16 GR8:i8:$src)
            /*SwitchType*/ 9,  MVT::i16,// ->6868
/*6859*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::SAR16r1), 0,
                  2/*#VTs*/, MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430rra:i16 GR16:i16:$src) - Complexity = 3
              // Dst: (SAR16r1:i16:i16 GR16:i16:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(MSP430ISD::RLA),// ->6897
/*6872*/    OPC_RecordChild0, // #0 = $src
/*6873*/    OPC_SwitchType /*2 cases */, 9,  MVT::i8,// ->6885
/*6876*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::SHL8r1), 0,
                  2/*#VTs*/, MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430rla:i8 GR8:i8:$src) - Complexity = 3
              // Dst: (SHL8r1:i8:i16 GR8:i8:$src)
            /*SwitchType*/ 9,  MVT::i16,// ->6896
/*6887*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::SHL16r1), 0,
                  2/*#VTs*/, MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430rla:i16 GR16:i16:$src) - Complexity = 3
              // Dst: (SHL16r1:i16:i16 GR16:i16:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 25,  TARGET_VAL(MSP430ISD::RRC),// ->6925
/*6900*/    OPC_RecordChild0, // #0 = $src
/*6901*/    OPC_SwitchType /*2 cases */, 9,  MVT::i8,// ->6913
/*6904*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::SAR8r1c), 0,
                  2/*#VTs*/, MVT::i8, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430rrc:i8 GR8:i8:$src) - Complexity = 3
              // Dst: (SAR8r1c:i8:i16 GR8:i8:$src)
            /*SwitchType*/ 9,  MVT::i16,// ->6924
/*6915*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::SAR16r1c), 0,
                  2/*#VTs*/, MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
              // Src: (MSP430rrc:i16 GR16:i16:$src) - Complexity = 3
              // Dst: (SAR16r1c:i16:i16 GR16:i16:$src)
            0, // EndSwitchType
          /*SwitchOpcode*/ 15,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6943
/*6928*/    OPC_RecordChild0, // #0 = $src
/*6929*/    OPC_MoveChild, 1,
/*6931*/    OPC_CheckValueType, MVT::i8,
/*6933*/    OPC_MoveParent,
/*6934*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::SEXT16r), 0,
                2/*#VTs*/, MVT::i16, MVT::i16, 1/*#Ops*/, 0, 
            // Src: (sext_inreg:i16 GR16:i16:$src, i8:Other) - Complexity = 3
            // Dst: (SEXT16r:i16:i16 GR16:i16:$src)
          /*SwitchOpcode*/ 11,  TARGET_VAL(ISD::BSWAP),// ->6957
/*6946*/    OPC_RecordChild0, // #0 = $src
/*6947*/    OPC_CheckType, MVT::i16,
/*6949*/    OPC_MorphNodeTo, TARGET_VAL(MSP430::SWPB16r), 0,
                1/*#VTs*/, MVT::i16, 1/*#Ops*/, 0, 
            // Src: (bswap:i16 GR16:i16:$src) - Complexity = 3
            // Dst: (SWPB16r:i16 GR16:i16:$src)
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::ANY_EXTEND),// ->6977
/*6960*/    OPC_RecordChild0, // #0 = $src
/*6961*/    OPC_EmitInteger, MVT::i16, 0, 
/*6964*/    OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*6967*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::SUBREG_TO_REG), 0,
                1/*#VTs*/, MVT::i16, 3/*#Ops*/, 1, 0, 2, 
            // Src: (anyext:i16 GR8:i8:$src) - Complexity = 3
            // Dst: (SUBREG_TO_REG:i16 0:i16, GR8:i8:$src, subreg_8bit:i32)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::TRUNCATE),// ->6993
/*6980*/    OPC_RecordChild0, // #0 = $src
/*6981*/    OPC_EmitInteger, MVT::i32, MSP430::subreg_8bit,
/*6984*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::EXTRACT_SUBREG), 0,
                1/*#VTs*/, MVT::i8, 2/*#Ops*/, 0, 1, 
            // Src: (trunc:i8 GR16:i16:$src) - Complexity = 3
            // Dst: (EXTRACT_SUBREG:i8 GR16:i16:$src, subreg_8bit:i32)
          /*SwitchOpcode*/ 28,  TARGET_VAL(MSP430ISD::SHL),// ->7024
/*6996*/    OPC_RecordChild0, // #0 = $src
/*6997*/    OPC_RecordChild1, // #1 = $cnt
/*6998*/    OPC_SwitchType /*2 cases */, 10,  MVT::i8,// ->7011
/*7001*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Shl8), 0,
                  2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (MSP430shl:i8 GR8:i8:$src, GR8:i8:$cnt) - Complexity = 3
              // Dst: (Shl8:i8:i16 GR8:i8:$src, GR8:i8:$cnt)
            /*SwitchType*/ 10,  MVT::i16,// ->7023
/*7013*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Shl16), 0,
                  2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (MSP430shl:i16 GR16:i16:$src, GR8:i8:$cnt) - Complexity = 3
              // Dst: (Shl16:i16:i16 GR16:i16:$src, GR8:i8:$cnt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(MSP430ISD::SRA),// ->7055
/*7027*/    OPC_RecordChild0, // #0 = $src
/*7028*/    OPC_RecordChild1, // #1 = $cnt
/*7029*/    OPC_SwitchType /*2 cases */, 10,  MVT::i8,// ->7042
/*7032*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Sra8), 0,
                  2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (MSP430sra:i8 GR8:i8:$src, GR8:i8:$cnt) - Complexity = 3
              // Dst: (Sra8:i8:i16 GR8:i8:$src, GR8:i8:$cnt)
            /*SwitchType*/ 10,  MVT::i16,// ->7054
/*7044*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Sra16), 0,
                  2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (MSP430sra:i16 GR16:i16:$src, GR8:i8:$cnt) - Complexity = 3
              // Dst: (Sra16:i16:i16 GR16:i16:$src, GR8:i8:$cnt)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(MSP430ISD::SRL),// ->7086
/*7058*/    OPC_RecordChild0, // #0 = $src
/*7059*/    OPC_RecordChild1, // #1 = $cnt
/*7060*/    OPC_SwitchType /*2 cases */, 10,  MVT::i8,// ->7073
/*7063*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Srl8), 0,
                  2/*#VTs*/, MVT::i8, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (MSP430srl:i8 GR8:i8:$src, GR8:i8:$cnt) - Complexity = 3
              // Dst: (Srl8:i8:i16 GR8:i8:$src, GR8:i8:$cnt)
            /*SwitchType*/ 10,  MVT::i16,// ->7085
/*7075*/      OPC_MorphNodeTo, TARGET_VAL(MSP430::Srl16), 0,
                  2/*#VTs*/, MVT::i16, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (MSP430srl:i16 GR16:i16:$src, GR8:i8:$cnt) - Complexity = 3
              // Dst: (Srl16:i16:i16 GR16:i16:$src, GR8:i8:$cnt)
            0, // EndSwitchType
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 7088 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 73
  // #OPC_RecordNode                     = 72
  // #OPC_RecordChild                    = 172
  // #OPC_RecordMemRef                   = 59
  // #OPC_CaptureGlueInput               = 10
  // #OPC_MoveChild                      = 196
  // #OPC_MoveParent                     = 318
  // #OPC_CheckSame                      = 82
  // #OPC_CheckPatternPredicate          = 0
  // #OPC_CheckPredicate                 = 311
  // #OPC_CheckOpcode                    = 91
  // #OPC_SwitchOpcode                   = 11
  // #OPC_CheckType                      = 50
  // #OPC_SwitchType                     = 76
  // #OPC_CheckChildType                 = 8
  // #OPC_CheckInteger                   = 23
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 1
  // #OPC_CheckComplexPat                = 185
  // #OPC_CheckAndImm                    = 1
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 57
  // #OPC_EmitInteger                    = 2
  // #OPC_EmitStringInteger              = 5
  // #OPC_EmitRegister                   = 0
  // #OPC_EmitConvertToTarget            = 48
  // #OPC_EmitMergeInputChains           = 159
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 2
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_MarkGlueResults                = 28
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 243

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
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
  case 2: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 4: { // Predicate_and_su
    SDNode *N = Node;

  return N->hasOneUse();

  }
  case 5: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 6: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 7: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 8: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 9: { // Predicate_def8
    SDNode *N = Node;

  return N->getOpcode() != ISD::TRUNCATE &&
         N->getOpcode() != TargetOpcode::EXTRACT_SUBREG &&
         N->getOpcode() != ISD::CopyFromReg;

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

