//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the PTX target
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
/*0*/     OPC_SwitchOpcode /*16 cases */, 57|128,23/*3001*/,  TARGET_VAL(ISD::LOAD),// ->3006
/*5*/       OPC_RecordMemRef,
/*6*/       OPC_RecordNode,   // #0 = 'ld' chained node
/*7*/       OPC_RecordChild1, // #1 = $a
/*8*/       OPC_Scope, 88|128,11/*1496*/, /*->1507*/ // 2 children in Scope
/*11*/        OPC_CheckChild1Type, MVT::i32,
/*13*/        OPC_CheckPredicate, 0, // Predicate_unindexedload
/*15*/        OPC_CheckPredicate, 1, // Predicate_load
/*17*/        OPC_Scope, 92|128,1/*220*/, /*->240*/ // 8 children in Scope
/*20*/          OPC_CheckPredicate, 2, // Predicate_load_global
/*22*/          OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->95
/*25*/            OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*27*/            OPC_Scope, 21, /*->50*/ // 3 children in Scope
/*29*/              OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*32*/              OPC_EmitMergeInputChains1_0,
/*33*/              OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*36*/              OPC_EmitInteger, MVT::i32, 0, 
/*39*/              OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16rr32:i16 ADDRrr32:i32:$a)
/*50*/            /*Scope*/ 21, /*->72*/
/*51*/              OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*54*/              OPC_EmitMergeInputChains1_0,
/*55*/              OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*58*/              OPC_EmitInteger, MVT::i32, 0, 
/*61*/              OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ri32:i16 ADDRri32:i32:$a)
/*72*/            /*Scope*/ 21, /*->94*/
/*73*/              OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*76*/              OPC_EmitMergeInputChains1_0,
/*77*/              OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*80*/              OPC_EmitInteger, MVT::i32, 0, 
/*83*/              OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ii32:i16 ADDRii32:i32:$a)
/*94*/            0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->167
/*97*/            OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*99*/            OPC_Scope, 21, /*->122*/ // 3 children in Scope
/*101*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*104*/             OPC_EmitMergeInputChains1_0,
/*105*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*108*/             OPC_EmitInteger, MVT::i32, 0, 
/*111*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32rr32:i32 ADDRrr32:i32:$a)
/*122*/           /*Scope*/ 21, /*->144*/
/*123*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*126*/             OPC_EmitMergeInputChains1_0,
/*127*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*130*/             OPC_EmitInteger, MVT::i32, 0, 
/*133*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ri32:i32 ADDRri32:i32:$a)
/*144*/           /*Scope*/ 21, /*->166*/
/*145*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*148*/             OPC_EmitMergeInputChains1_0,
/*149*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*152*/             OPC_EmitInteger, MVT::i32, 0, 
/*155*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ii32:i32 ADDRii32:i32:$a)
/*166*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->239
/*169*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*171*/           OPC_Scope, 21, /*->194*/ // 3 children in Scope
/*173*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*176*/             OPC_EmitMergeInputChains1_0,
/*177*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*180*/             OPC_EmitInteger, MVT::i32, 0, 
/*183*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64rr32:i64 ADDRrr32:i32:$a)
/*194*/           /*Scope*/ 21, /*->216*/
/*195*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*198*/             OPC_EmitMergeInputChains1_0,
/*199*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*202*/             OPC_EmitInteger, MVT::i32, 0, 
/*205*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ri32:i64 ADDRri32:i32:$a)
/*216*/           /*Scope*/ 21, /*->238*/
/*217*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*220*/             OPC_EmitMergeInputChains1_0,
/*221*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*224*/             OPC_EmitInteger, MVT::i32, 0, 
/*227*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ii32:i64 ADDRii32:i32:$a)
/*238*/           0, /*End of Scope*/
                0, // EndSwitchType
/*240*/       /*Scope*/ 92|128,1/*220*/, /*->462*/
/*242*/         OPC_CheckPredicate, 3, // Predicate_load_constant
/*244*/         OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->317
/*247*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*249*/           OPC_Scope, 21, /*->272*/ // 3 children in Scope
/*251*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*254*/             OPC_EmitMergeInputChains1_0,
/*255*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*258*/             OPC_EmitInteger, MVT::i32, 0, 
/*261*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16rr32:i16 ADDRrr32:i32:$a)
/*272*/           /*Scope*/ 21, /*->294*/
/*273*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*276*/             OPC_EmitMergeInputChains1_0,
/*277*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*280*/             OPC_EmitInteger, MVT::i32, 0, 
/*283*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ri32:i16 ADDRri32:i32:$a)
/*294*/           /*Scope*/ 21, /*->316*/
/*295*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*298*/             OPC_EmitMergeInputChains1_0,
/*299*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*302*/             OPC_EmitInteger, MVT::i32, 0, 
/*305*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ii32:i16 ADDRii32:i32:$a)
/*316*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->389
/*319*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*321*/           OPC_Scope, 21, /*->344*/ // 3 children in Scope
/*323*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*326*/             OPC_EmitMergeInputChains1_0,
/*327*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*330*/             OPC_EmitInteger, MVT::i32, 0, 
/*333*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32rr32:i32 ADDRrr32:i32:$a)
/*344*/           /*Scope*/ 21, /*->366*/
/*345*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*348*/             OPC_EmitMergeInputChains1_0,
/*349*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*352*/             OPC_EmitInteger, MVT::i32, 0, 
/*355*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ri32:i32 ADDRri32:i32:$a)
/*366*/           /*Scope*/ 21, /*->388*/
/*367*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*370*/             OPC_EmitMergeInputChains1_0,
/*371*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*374*/             OPC_EmitInteger, MVT::i32, 0, 
/*377*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ii32:i32 ADDRii32:i32:$a)
/*388*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->461
/*391*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*393*/           OPC_Scope, 21, /*->416*/ // 3 children in Scope
/*395*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*398*/             OPC_EmitMergeInputChains1_0,
/*399*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*402*/             OPC_EmitInteger, MVT::i32, 0, 
/*405*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64rr32:i64 ADDRrr32:i32:$a)
/*416*/           /*Scope*/ 21, /*->438*/
/*417*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*420*/             OPC_EmitMergeInputChains1_0,
/*421*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*424*/             OPC_EmitInteger, MVT::i32, 0, 
/*427*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ri32:i64 ADDRri32:i32:$a)
/*438*/           /*Scope*/ 21, /*->460*/
/*439*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*442*/             OPC_EmitMergeInputChains1_0,
/*443*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*446*/             OPC_EmitInteger, MVT::i32, 0, 
/*449*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ii32:i64 ADDRii32:i32:$a)
/*460*/           0, /*End of Scope*/
                0, // EndSwitchType
/*462*/       /*Scope*/ 92|128,1/*220*/, /*->684*/
/*464*/         OPC_CheckPredicate, 4, // Predicate_load_local
/*466*/         OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->539
/*469*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*471*/           OPC_Scope, 21, /*->494*/ // 3 children in Scope
/*473*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*476*/             OPC_EmitMergeInputChains1_0,
/*477*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*480*/             OPC_EmitInteger, MVT::i32, 0, 
/*483*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16rr32:i16 ADDRrr32:i32:$a)
/*494*/           /*Scope*/ 21, /*->516*/
/*495*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*498*/             OPC_EmitMergeInputChains1_0,
/*499*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*502*/             OPC_EmitInteger, MVT::i32, 0, 
/*505*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ri32:i16 ADDRri32:i32:$a)
/*516*/           /*Scope*/ 21, /*->538*/
/*517*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*520*/             OPC_EmitMergeInputChains1_0,
/*521*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*524*/             OPC_EmitInteger, MVT::i32, 0, 
/*527*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ii32:i16 ADDRii32:i32:$a)
/*538*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->611
/*541*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*543*/           OPC_Scope, 21, /*->566*/ // 3 children in Scope
/*545*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*548*/             OPC_EmitMergeInputChains1_0,
/*549*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*552*/             OPC_EmitInteger, MVT::i32, 0, 
/*555*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32rr32:i32 ADDRrr32:i32:$a)
/*566*/           /*Scope*/ 21, /*->588*/
/*567*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*570*/             OPC_EmitMergeInputChains1_0,
/*571*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*574*/             OPC_EmitInteger, MVT::i32, 0, 
/*577*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ri32:i32 ADDRri32:i32:$a)
/*588*/           /*Scope*/ 21, /*->610*/
/*589*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*592*/             OPC_EmitMergeInputChains1_0,
/*593*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*596*/             OPC_EmitInteger, MVT::i32, 0, 
/*599*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ii32:i32 ADDRii32:i32:$a)
/*610*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->683
/*613*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*615*/           OPC_Scope, 21, /*->638*/ // 3 children in Scope
/*617*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*620*/             OPC_EmitMergeInputChains1_0,
/*621*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*624*/             OPC_EmitInteger, MVT::i32, 0, 
/*627*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64rr32:i64 ADDRrr32:i32:$a)
/*638*/           /*Scope*/ 21, /*->660*/
/*639*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*642*/             OPC_EmitMergeInputChains1_0,
/*643*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*646*/             OPC_EmitInteger, MVT::i32, 0, 
/*649*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ri32:i64 ADDRri32:i32:$a)
/*660*/           /*Scope*/ 21, /*->682*/
/*661*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*664*/             OPC_EmitMergeInputChains1_0,
/*665*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*668*/             OPC_EmitInteger, MVT::i32, 0, 
/*671*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ii32:i64 ADDRii32:i32:$a)
/*682*/           0, /*End of Scope*/
                0, // EndSwitchType
/*684*/       /*Scope*/ 92|128,1/*220*/, /*->906*/
/*686*/         OPC_CheckPredicate, 5, // Predicate_load_shared
/*688*/         OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->761
/*691*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*693*/           OPC_Scope, 21, /*->716*/ // 3 children in Scope
/*695*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*698*/             OPC_EmitMergeInputChains1_0,
/*699*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*702*/             OPC_EmitInteger, MVT::i32, 0, 
/*705*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16rr32:i16 ADDRrr32:i32:$a)
/*716*/           /*Scope*/ 21, /*->738*/
/*717*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*720*/             OPC_EmitMergeInputChains1_0,
/*721*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*724*/             OPC_EmitInteger, MVT::i32, 0, 
/*727*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ri32:i16 ADDRri32:i32:$a)
/*738*/           /*Scope*/ 21, /*->760*/
/*739*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*742*/             OPC_EmitMergeInputChains1_0,
/*743*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*746*/             OPC_EmitInteger, MVT::i32, 0, 
/*749*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ii32:i16 ADDRii32:i32:$a)
/*760*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->833
/*763*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*765*/           OPC_Scope, 21, /*->788*/ // 3 children in Scope
/*767*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*770*/             OPC_EmitMergeInputChains1_0,
/*771*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*774*/             OPC_EmitInteger, MVT::i32, 0, 
/*777*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32rr32:i32 ADDRrr32:i32:$a)
/*788*/           /*Scope*/ 21, /*->810*/
/*789*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*792*/             OPC_EmitMergeInputChains1_0,
/*793*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*796*/             OPC_EmitInteger, MVT::i32, 0, 
/*799*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ri32:i32 ADDRri32:i32:$a)
/*810*/           /*Scope*/ 21, /*->832*/
/*811*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*814*/             OPC_EmitMergeInputChains1_0,
/*815*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*818*/             OPC_EmitInteger, MVT::i32, 0, 
/*821*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ii32:i32 ADDRii32:i32:$a)
/*832*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->905
/*835*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*837*/           OPC_Scope, 21, /*->860*/ // 3 children in Scope
/*839*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*842*/             OPC_EmitMergeInputChains1_0,
/*843*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*846*/             OPC_EmitInteger, MVT::i32, 0, 
/*849*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64rr32:i64 ADDRrr32:i32:$a)
/*860*/           /*Scope*/ 21, /*->882*/
/*861*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*864*/             OPC_EmitMergeInputChains1_0,
/*865*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*868*/             OPC_EmitInteger, MVT::i32, 0, 
/*871*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ri32:i64 ADDRri32:i32:$a)
/*882*/           /*Scope*/ 21, /*->904*/
/*883*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*886*/             OPC_EmitMergeInputChains1_0,
/*887*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*890*/             OPC_EmitInteger, MVT::i32, 0, 
/*893*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ii32:i64 ADDRii32:i32:$a)
/*904*/           0, /*End of Scope*/
                0, // EndSwitchType
/*906*/       /*Scope*/ 20|128,1/*148*/, /*->1056*/
/*908*/         OPC_CheckPredicate, 2, // Predicate_load_global
/*910*/         OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->983
/*913*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*915*/           OPC_Scope, 21, /*->938*/ // 3 children in Scope
/*917*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*920*/             OPC_EmitMergeInputChains1_0,
/*921*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*924*/             OPC_EmitInteger, MVT::i32, 0, 
/*927*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32rr32:f32 ADDRrr32:i32:$a)
/*938*/           /*Scope*/ 21, /*->960*/
/*939*/             OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*942*/             OPC_EmitMergeInputChains1_0,
/*943*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*946*/             OPC_EmitInteger, MVT::i32, 0, 
/*949*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ri32:f32 ADDRri32:i32:$a)
/*960*/           /*Scope*/ 21, /*->982*/
/*961*/             OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*964*/             OPC_EmitMergeInputChains1_0,
/*965*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*968*/             OPC_EmitInteger, MVT::i32, 0, 
/*971*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ii32:f32 ADDRii32:i32:$a)
/*982*/           0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1055
/*985*/           OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*987*/           OPC_Scope, 21, /*->1010*/ // 3 children in Scope
/*989*/             OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*992*/             OPC_EmitMergeInputChains1_0,
/*993*/             OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*996*/             OPC_EmitInteger, MVT::i32, 0, 
/*999*/             OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64rr32:f64 ADDRrr32:i32:$a)
/*1010*/          /*Scope*/ 21, /*->1032*/
/*1011*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1014*/            OPC_EmitMergeInputChains1_0,
/*1015*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1018*/            OPC_EmitInteger, MVT::i32, 0, 
/*1021*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ri32:f64 ADDRri32:i32:$a)
/*1032*/          /*Scope*/ 21, /*->1054*/
/*1033*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1036*/            OPC_EmitMergeInputChains1_0,
/*1037*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1040*/            OPC_EmitInteger, MVT::i32, 0, 
/*1043*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ii32:f64 ADDRii32:i32:$a)
/*1054*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1056*/      /*Scope*/ 20|128,1/*148*/, /*->1206*/
/*1058*/        OPC_CheckPredicate, 3, // Predicate_load_constant
/*1060*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->1133
/*1063*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1065*/          OPC_Scope, 21, /*->1088*/ // 3 children in Scope
/*1067*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1070*/            OPC_EmitMergeInputChains1_0,
/*1071*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1074*/            OPC_EmitInteger, MVT::i32, 0, 
/*1077*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32rr32:f32 ADDRrr32:i32:$a)
/*1088*/          /*Scope*/ 21, /*->1110*/
/*1089*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1092*/            OPC_EmitMergeInputChains1_0,
/*1093*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1096*/            OPC_EmitInteger, MVT::i32, 0, 
/*1099*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ri32:f32 ADDRri32:i32:$a)
/*1110*/          /*Scope*/ 21, /*->1132*/
/*1111*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1114*/            OPC_EmitMergeInputChains1_0,
/*1115*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1118*/            OPC_EmitInteger, MVT::i32, 0, 
/*1121*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ii32:f32 ADDRii32:i32:$a)
/*1132*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1205
/*1135*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1137*/          OPC_Scope, 21, /*->1160*/ // 3 children in Scope
/*1139*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1142*/            OPC_EmitMergeInputChains1_0,
/*1143*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1146*/            OPC_EmitInteger, MVT::i32, 0, 
/*1149*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64rr32:f64 ADDRrr32:i32:$a)
/*1160*/          /*Scope*/ 21, /*->1182*/
/*1161*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1164*/            OPC_EmitMergeInputChains1_0,
/*1165*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1168*/            OPC_EmitInteger, MVT::i32, 0, 
/*1171*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ri32:f64 ADDRri32:i32:$a)
/*1182*/          /*Scope*/ 21, /*->1204*/
/*1183*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1186*/            OPC_EmitMergeInputChains1_0,
/*1187*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1190*/            OPC_EmitInteger, MVT::i32, 0, 
/*1193*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ii32:f64 ADDRii32:i32:$a)
/*1204*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1206*/      /*Scope*/ 20|128,1/*148*/, /*->1356*/
/*1208*/        OPC_CheckPredicate, 4, // Predicate_load_local
/*1210*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->1283
/*1213*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1215*/          OPC_Scope, 21, /*->1238*/ // 3 children in Scope
/*1217*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1220*/            OPC_EmitMergeInputChains1_0,
/*1221*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1224*/            OPC_EmitInteger, MVT::i32, 0, 
/*1227*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32rr32:f32 ADDRrr32:i32:$a)
/*1238*/          /*Scope*/ 21, /*->1260*/
/*1239*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1242*/            OPC_EmitMergeInputChains1_0,
/*1243*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1246*/            OPC_EmitInteger, MVT::i32, 0, 
/*1249*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ri32:f32 ADDRri32:i32:$a)
/*1260*/          /*Scope*/ 21, /*->1282*/
/*1261*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1264*/            OPC_EmitMergeInputChains1_0,
/*1265*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1268*/            OPC_EmitInteger, MVT::i32, 0, 
/*1271*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ii32:f32 ADDRii32:i32:$a)
/*1282*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1355
/*1285*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1287*/          OPC_Scope, 21, /*->1310*/ // 3 children in Scope
/*1289*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1292*/            OPC_EmitMergeInputChains1_0,
/*1293*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1296*/            OPC_EmitInteger, MVT::i32, 0, 
/*1299*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64rr32:f64 ADDRrr32:i32:$a)
/*1310*/          /*Scope*/ 21, /*->1332*/
/*1311*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1314*/            OPC_EmitMergeInputChains1_0,
/*1315*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1318*/            OPC_EmitInteger, MVT::i32, 0, 
/*1321*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ri32:f64 ADDRri32:i32:$a)
/*1332*/          /*Scope*/ 21, /*->1354*/
/*1333*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1336*/            OPC_EmitMergeInputChains1_0,
/*1337*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1340*/            OPC_EmitInteger, MVT::i32, 0, 
/*1343*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ii32:f64 ADDRii32:i32:$a)
/*1354*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1356*/      /*Scope*/ 20|128,1/*148*/, /*->1506*/
/*1358*/        OPC_CheckPredicate, 5, // Predicate_load_shared
/*1360*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->1433
/*1363*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1365*/          OPC_Scope, 21, /*->1388*/ // 3 children in Scope
/*1367*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1370*/            OPC_EmitMergeInputChains1_0,
/*1371*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1374*/            OPC_EmitInteger, MVT::i32, 0, 
/*1377*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32rr32:f32 ADDRrr32:i32:$a)
/*1388*/          /*Scope*/ 21, /*->1410*/
/*1389*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1392*/            OPC_EmitMergeInputChains1_0,
/*1393*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1396*/            OPC_EmitInteger, MVT::i32, 0, 
/*1399*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ri32:f32 ADDRri32:i32:$a)
/*1410*/          /*Scope*/ 21, /*->1432*/
/*1411*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1414*/            OPC_EmitMergeInputChains1_0,
/*1415*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1418*/            OPC_EmitInteger, MVT::i32, 0, 
/*1421*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ii32:f32 ADDRii32:i32:$a)
/*1432*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->1505
/*1435*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*1437*/          OPC_Scope, 21, /*->1460*/ // 3 children in Scope
/*1439*/            OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectADDRrr:$a #2 #3
/*1442*/            OPC_EmitMergeInputChains1_0,
/*1443*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1446*/            OPC_EmitInteger, MVT::i32, 0, 
/*1449*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64rr32:f64 ADDRrr32:i32:$a)
/*1460*/          /*Scope*/ 21, /*->1482*/
/*1461*/            OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectADDRri:$a #2 #3
/*1464*/            OPC_EmitMergeInputChains1_0,
/*1465*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1468*/            OPC_EmitInteger, MVT::i32, 0, 
/*1471*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ri32:f64 ADDRri32:i32:$a)
/*1482*/          /*Scope*/ 21, /*->1504*/
/*1483*/            OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectADDRii:$a #2 #3
/*1486*/            OPC_EmitMergeInputChains1_0,
/*1487*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1490*/            OPC_EmitInteger, MVT::i32, 0, 
/*1493*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii32:i32:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ii32:f64 ADDRii32:i32:$a)
/*1504*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1506*/      0, /*End of Scope*/
/*1507*/    /*Scope*/ 88|128,11/*1496*/, /*->3005*/
/*1509*/      OPC_CheckChild1Type, MVT::i64,
/*1511*/      OPC_CheckPredicate, 0, // Predicate_unindexedload
/*1513*/      OPC_CheckPredicate, 1, // Predicate_load
/*1515*/      OPC_Scope, 92|128,1/*220*/, /*->1738*/ // 8 children in Scope
/*1518*/        OPC_CheckPredicate, 2, // Predicate_load_global
/*1520*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->1593
/*1523*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1525*/          OPC_Scope, 21, /*->1548*/ // 3 children in Scope
/*1527*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1530*/            OPC_EmitMergeInputChains1_0,
/*1531*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1534*/            OPC_EmitInteger, MVT::i32, 0, 
/*1537*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16rr64:i16 ADDRrr64:i64:$a)
/*1548*/          /*Scope*/ 21, /*->1570*/
/*1549*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1552*/            OPC_EmitMergeInputChains1_0,
/*1553*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1556*/            OPC_EmitInteger, MVT::i32, 0, 
/*1559*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ri64:i16 ADDRri64:i64:$a)
/*1570*/          /*Scope*/ 21, /*->1592*/
/*1571*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1574*/            OPC_EmitMergeInputChains1_0,
/*1575*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1578*/            OPC_EmitInteger, MVT::i32, 0, 
/*1581*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu16ii64:i16 ADDRii64:i64:$a)
/*1592*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->1665
/*1595*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1597*/          OPC_Scope, 21, /*->1620*/ // 3 children in Scope
/*1599*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1602*/            OPC_EmitMergeInputChains1_0,
/*1603*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1606*/            OPC_EmitInteger, MVT::i32, 0, 
/*1609*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32rr64:i32 ADDRrr64:i64:$a)
/*1620*/          /*Scope*/ 21, /*->1642*/
/*1621*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1624*/            OPC_EmitMergeInputChains1_0,
/*1625*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1628*/            OPC_EmitInteger, MVT::i32, 0, 
/*1631*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ri64:i32 ADDRri64:i64:$a)
/*1642*/          /*Scope*/ 21, /*->1664*/
/*1643*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1646*/            OPC_EmitMergeInputChains1_0,
/*1647*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1650*/            OPC_EmitInteger, MVT::i32, 0, 
/*1653*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu32ii64:i32 ADDRii64:i64:$a)
/*1664*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->1737
/*1667*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1669*/          OPC_Scope, 21, /*->1692*/ // 3 children in Scope
/*1671*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1674*/            OPC_EmitMergeInputChains1_0,
/*1675*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1678*/            OPC_EmitInteger, MVT::i32, 0, 
/*1681*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64rr64:i64 ADDRrr64:i64:$a)
/*1692*/          /*Scope*/ 21, /*->1714*/
/*1693*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1696*/            OPC_EmitMergeInputChains1_0,
/*1697*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1700*/            OPC_EmitInteger, MVT::i32, 0, 
/*1703*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ri64:i64 ADDRri64:i64:$a)
/*1714*/          /*Scope*/ 21, /*->1736*/
/*1715*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1718*/            OPC_EmitMergeInputChains1_0,
/*1719*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1722*/            OPC_EmitInteger, MVT::i32, 0, 
/*1725*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgu64ii64:i64 ADDRii64:i64:$a)
/*1736*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1738*/      /*Scope*/ 92|128,1/*220*/, /*->1960*/
/*1740*/        OPC_CheckPredicate, 3, // Predicate_load_constant
/*1742*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->1815
/*1745*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1747*/          OPC_Scope, 21, /*->1770*/ // 3 children in Scope
/*1749*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1752*/            OPC_EmitMergeInputChains1_0,
/*1753*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1756*/            OPC_EmitInteger, MVT::i32, 0, 
/*1759*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16rr64:i16 ADDRrr64:i64:$a)
/*1770*/          /*Scope*/ 21, /*->1792*/
/*1771*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1774*/            OPC_EmitMergeInputChains1_0,
/*1775*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1778*/            OPC_EmitInteger, MVT::i32, 0, 
/*1781*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ri64:i16 ADDRri64:i64:$a)
/*1792*/          /*Scope*/ 21, /*->1814*/
/*1793*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1796*/            OPC_EmitMergeInputChains1_0,
/*1797*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1800*/            OPC_EmitInteger, MVT::i32, 0, 
/*1803*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu16ii64:i16 ADDRii64:i64:$a)
/*1814*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->1887
/*1817*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1819*/          OPC_Scope, 21, /*->1842*/ // 3 children in Scope
/*1821*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1824*/            OPC_EmitMergeInputChains1_0,
/*1825*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1828*/            OPC_EmitInteger, MVT::i32, 0, 
/*1831*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32rr64:i32 ADDRrr64:i64:$a)
/*1842*/          /*Scope*/ 21, /*->1864*/
/*1843*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1846*/            OPC_EmitMergeInputChains1_0,
/*1847*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1850*/            OPC_EmitInteger, MVT::i32, 0, 
/*1853*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ri64:i32 ADDRri64:i64:$a)
/*1864*/          /*Scope*/ 21, /*->1886*/
/*1865*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1868*/            OPC_EmitMergeInputChains1_0,
/*1869*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1872*/            OPC_EmitInteger, MVT::i32, 0, 
/*1875*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu32ii64:i32 ADDRii64:i64:$a)
/*1886*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->1959
/*1889*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1891*/          OPC_Scope, 21, /*->1914*/ // 3 children in Scope
/*1893*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1896*/            OPC_EmitMergeInputChains1_0,
/*1897*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1900*/            OPC_EmitInteger, MVT::i32, 0, 
/*1903*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64rr64:i64 ADDRrr64:i64:$a)
/*1914*/          /*Scope*/ 21, /*->1936*/
/*1915*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1918*/            OPC_EmitMergeInputChains1_0,
/*1919*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1922*/            OPC_EmitInteger, MVT::i32, 0, 
/*1925*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ri64:i64 ADDRri64:i64:$a)
/*1936*/          /*Scope*/ 21, /*->1958*/
/*1937*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*1940*/            OPC_EmitMergeInputChains1_0,
/*1941*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1944*/            OPC_EmitInteger, MVT::i32, 0, 
/*1947*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcu64ii64:i64 ADDRii64:i64:$a)
/*1958*/          0, /*End of Scope*/
                0, // EndSwitchType
/*1960*/      /*Scope*/ 92|128,1/*220*/, /*->2182*/
/*1962*/        OPC_CheckPredicate, 4, // Predicate_load_local
/*1964*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->2037
/*1967*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*1969*/          OPC_Scope, 21, /*->1992*/ // 3 children in Scope
/*1971*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*1974*/            OPC_EmitMergeInputChains1_0,
/*1975*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*1978*/            OPC_EmitInteger, MVT::i32, 0, 
/*1981*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16rr64:i16 ADDRrr64:i64:$a)
/*1992*/          /*Scope*/ 21, /*->2014*/
/*1993*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*1996*/            OPC_EmitMergeInputChains1_0,
/*1997*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2000*/            OPC_EmitInteger, MVT::i32, 0, 
/*2003*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ri64:i16 ADDRri64:i64:$a)
/*2014*/          /*Scope*/ 21, /*->2036*/
/*2015*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2018*/            OPC_EmitMergeInputChains1_0,
/*2019*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2022*/            OPC_EmitInteger, MVT::i32, 0, 
/*2025*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu16ii64:i16 ADDRii64:i64:$a)
/*2036*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->2109
/*2039*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2041*/          OPC_Scope, 21, /*->2064*/ // 3 children in Scope
/*2043*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2046*/            OPC_EmitMergeInputChains1_0,
/*2047*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2050*/            OPC_EmitInteger, MVT::i32, 0, 
/*2053*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32rr64:i32 ADDRrr64:i64:$a)
/*2064*/          /*Scope*/ 21, /*->2086*/
/*2065*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2068*/            OPC_EmitMergeInputChains1_0,
/*2069*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2072*/            OPC_EmitInteger, MVT::i32, 0, 
/*2075*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ri64:i32 ADDRri64:i64:$a)
/*2086*/          /*Scope*/ 21, /*->2108*/
/*2087*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2090*/            OPC_EmitMergeInputChains1_0,
/*2091*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2094*/            OPC_EmitInteger, MVT::i32, 0, 
/*2097*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu32ii64:i32 ADDRii64:i64:$a)
/*2108*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->2181
/*2111*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2113*/          OPC_Scope, 21, /*->2136*/ // 3 children in Scope
/*2115*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2118*/            OPC_EmitMergeInputChains1_0,
/*2119*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2122*/            OPC_EmitInteger, MVT::i32, 0, 
/*2125*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64rr64:i64 ADDRrr64:i64:$a)
/*2136*/          /*Scope*/ 21, /*->2158*/
/*2137*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2140*/            OPC_EmitMergeInputChains1_0,
/*2141*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2144*/            OPC_EmitInteger, MVT::i32, 0, 
/*2147*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ri64:i64 ADDRri64:i64:$a)
/*2158*/          /*Scope*/ 21, /*->2180*/
/*2159*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2162*/            OPC_EmitMergeInputChains1_0,
/*2163*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2166*/            OPC_EmitInteger, MVT::i32, 0, 
/*2169*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlu64ii64:i64 ADDRii64:i64:$a)
/*2180*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2182*/      /*Scope*/ 92|128,1/*220*/, /*->2404*/
/*2184*/        OPC_CheckPredicate, 5, // Predicate_load_shared
/*2186*/        OPC_SwitchType /*3 cases */, 70,  MVT::i16,// ->2259
/*2189*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2191*/          OPC_Scope, 21, /*->2214*/ // 3 children in Scope
/*2193*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2196*/            OPC_EmitMergeInputChains1_0,
/*2197*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2200*/            OPC_EmitInteger, MVT::i32, 0, 
/*2203*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16rr64:i16 ADDRrr64:i64:$a)
/*2214*/          /*Scope*/ 21, /*->2236*/
/*2215*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2218*/            OPC_EmitMergeInputChains1_0,
/*2219*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2222*/            OPC_EmitInteger, MVT::i32, 0, 
/*2225*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ri64:i16 ADDRri64:i64:$a)
/*2236*/          /*Scope*/ 21, /*->2258*/
/*2237*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2240*/            OPC_EmitMergeInputChains1_0,
/*2241*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2244*/            OPC_EmitInteger, MVT::i32, 0, 
/*2247*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i16, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i16 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu16ii64:i16 ADDRii64:i64:$a)
/*2258*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i32,// ->2331
/*2261*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2263*/          OPC_Scope, 21, /*->2286*/ // 3 children in Scope
/*2265*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2268*/            OPC_EmitMergeInputChains1_0,
/*2269*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2272*/            OPC_EmitInteger, MVT::i32, 0, 
/*2275*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32rr64:i32 ADDRrr64:i64:$a)
/*2286*/          /*Scope*/ 21, /*->2308*/
/*2287*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2290*/            OPC_EmitMergeInputChains1_0,
/*2291*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2294*/            OPC_EmitInteger, MVT::i32, 0, 
/*2297*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ri64:i32 ADDRri64:i64:$a)
/*2308*/          /*Scope*/ 21, /*->2330*/
/*2309*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2312*/            OPC_EmitMergeInputChains1_0,
/*2313*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2316*/            OPC_EmitInteger, MVT::i32, 0, 
/*2319*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu32ii64:i32 ADDRii64:i64:$a)
/*2330*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::i64,// ->2403
/*2333*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2335*/          OPC_Scope, 21, /*->2358*/ // 3 children in Scope
/*2337*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2340*/            OPC_EmitMergeInputChains1_0,
/*2341*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2344*/            OPC_EmitInteger, MVT::i32, 0, 
/*2347*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64rr64:i64 ADDRrr64:i64:$a)
/*2358*/          /*Scope*/ 21, /*->2380*/
/*2359*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2362*/            OPC_EmitMergeInputChains1_0,
/*2363*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2366*/            OPC_EmitInteger, MVT::i32, 0, 
/*2369*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ri64:i64 ADDRri64:i64:$a)
/*2380*/          /*Scope*/ 21, /*->2402*/
/*2381*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2384*/            OPC_EmitMergeInputChains1_0,
/*2385*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2388*/            OPC_EmitInteger, MVT::i32, 0, 
/*2391*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::i64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:i64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsu64ii64:i64 ADDRii64:i64:$a)
/*2402*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2404*/      /*Scope*/ 20|128,1/*148*/, /*->2554*/
/*2406*/        OPC_CheckPredicate, 2, // Predicate_load_global
/*2408*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2481
/*2411*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2413*/          OPC_Scope, 21, /*->2436*/ // 3 children in Scope
/*2415*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2418*/            OPC_EmitMergeInputChains1_0,
/*2419*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2422*/            OPC_EmitInteger, MVT::i32, 0, 
/*2425*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32rr64:f32 ADDRrr64:i64:$a)
/*2436*/          /*Scope*/ 21, /*->2458*/
/*2437*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2440*/            OPC_EmitMergeInputChains1_0,
/*2441*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2444*/            OPC_EmitInteger, MVT::i32, 0, 
/*2447*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ri64:f32 ADDRri64:i64:$a)
/*2458*/          /*Scope*/ 21, /*->2480*/
/*2459*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2462*/            OPC_EmitMergeInputChains1_0,
/*2463*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2466*/            OPC_EmitInteger, MVT::i32, 0, 
/*2469*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf32ii64:f32 ADDRii64:i64:$a)
/*2480*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->2553
/*2483*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2485*/          OPC_Scope, 21, /*->2508*/ // 3 children in Scope
/*2487*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2490*/            OPC_EmitMergeInputChains1_0,
/*2491*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2494*/            OPC_EmitInteger, MVT::i32, 0, 
/*2497*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64rr64:f64 ADDRrr64:i64:$a)
/*2508*/          /*Scope*/ 21, /*->2530*/
/*2509*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2512*/            OPC_EmitMergeInputChains1_0,
/*2513*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2516*/            OPC_EmitInteger, MVT::i32, 0, 
/*2519*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ri64:f64 ADDRri64:i64:$a)
/*2530*/          /*Scope*/ 21, /*->2552*/
/*2531*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2534*/            OPC_EmitMergeInputChains1_0,
/*2535*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2538*/            OPC_EmitInteger, MVT::i32, 0, 
/*2541*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDgf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_global>> - Complexity = 13
                    // Dst: (LDgf64ii64:f64 ADDRii64:i64:$a)
/*2552*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2554*/      /*Scope*/ 20|128,1/*148*/, /*->2704*/
/*2556*/        OPC_CheckPredicate, 3, // Predicate_load_constant
/*2558*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2631
/*2561*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2563*/          OPC_Scope, 21, /*->2586*/ // 3 children in Scope
/*2565*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2568*/            OPC_EmitMergeInputChains1_0,
/*2569*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2572*/            OPC_EmitInteger, MVT::i32, 0, 
/*2575*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32rr64:f32 ADDRrr64:i64:$a)
/*2586*/          /*Scope*/ 21, /*->2608*/
/*2587*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2590*/            OPC_EmitMergeInputChains1_0,
/*2591*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2594*/            OPC_EmitInteger, MVT::i32, 0, 
/*2597*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ri64:f32 ADDRri64:i64:$a)
/*2608*/          /*Scope*/ 21, /*->2630*/
/*2609*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2612*/            OPC_EmitMergeInputChains1_0,
/*2613*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2616*/            OPC_EmitInteger, MVT::i32, 0, 
/*2619*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf32ii64:f32 ADDRii64:i64:$a)
/*2630*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->2703
/*2633*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2635*/          OPC_Scope, 21, /*->2658*/ // 3 children in Scope
/*2637*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2640*/            OPC_EmitMergeInputChains1_0,
/*2641*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2644*/            OPC_EmitInteger, MVT::i32, 0, 
/*2647*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64rr64:f64 ADDRrr64:i64:$a)
/*2658*/          /*Scope*/ 21, /*->2680*/
/*2659*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2662*/            OPC_EmitMergeInputChains1_0,
/*2663*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2666*/            OPC_EmitInteger, MVT::i32, 0, 
/*2669*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ri64:f64 ADDRri64:i64:$a)
/*2680*/          /*Scope*/ 21, /*->2702*/
/*2681*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2684*/            OPC_EmitMergeInputChains1_0,
/*2685*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2688*/            OPC_EmitInteger, MVT::i32, 0, 
/*2691*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDcf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_constant>> - Complexity = 13
                    // Dst: (LDcf64ii64:f64 ADDRii64:i64:$a)
/*2702*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2704*/      /*Scope*/ 20|128,1/*148*/, /*->2854*/
/*2706*/        OPC_CheckPredicate, 4, // Predicate_load_local
/*2708*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2781
/*2711*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2713*/          OPC_Scope, 21, /*->2736*/ // 3 children in Scope
/*2715*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2718*/            OPC_EmitMergeInputChains1_0,
/*2719*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2722*/            OPC_EmitInteger, MVT::i32, 0, 
/*2725*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32rr64:f32 ADDRrr64:i64:$a)
/*2736*/          /*Scope*/ 21, /*->2758*/
/*2737*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2740*/            OPC_EmitMergeInputChains1_0,
/*2741*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2744*/            OPC_EmitInteger, MVT::i32, 0, 
/*2747*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ri64:f32 ADDRri64:i64:$a)
/*2758*/          /*Scope*/ 21, /*->2780*/
/*2759*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2762*/            OPC_EmitMergeInputChains1_0,
/*2763*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2766*/            OPC_EmitInteger, MVT::i32, 0, 
/*2769*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf32ii64:f32 ADDRii64:i64:$a)
/*2780*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->2853
/*2783*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2785*/          OPC_Scope, 21, /*->2808*/ // 3 children in Scope
/*2787*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2790*/            OPC_EmitMergeInputChains1_0,
/*2791*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2794*/            OPC_EmitInteger, MVT::i32, 0, 
/*2797*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64rr64:f64 ADDRrr64:i64:$a)
/*2808*/          /*Scope*/ 21, /*->2830*/
/*2809*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2812*/            OPC_EmitMergeInputChains1_0,
/*2813*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2816*/            OPC_EmitInteger, MVT::i32, 0, 
/*2819*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ri64:f64 ADDRri64:i64:$a)
/*2830*/          /*Scope*/ 21, /*->2852*/
/*2831*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2834*/            OPC_EmitMergeInputChains1_0,
/*2835*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2838*/            OPC_EmitInteger, MVT::i32, 0, 
/*2841*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDlf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_local>> - Complexity = 13
                    // Dst: (LDlf64ii64:f64 ADDRii64:i64:$a)
/*2852*/          0, /*End of Scope*/
                0, // EndSwitchType
/*2854*/      /*Scope*/ 20|128,1/*148*/, /*->3004*/
/*2856*/        OPC_CheckPredicate, 5, // Predicate_load_shared
/*2858*/        OPC_SwitchType /*2 cases */, 70,  MVT::f32,// ->2931
/*2861*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2863*/          OPC_Scope, 21, /*->2886*/ // 3 children in Scope
/*2865*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2868*/            OPC_EmitMergeInputChains1_0,
/*2869*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2872*/            OPC_EmitInteger, MVT::i32, 0, 
/*2875*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32rr64:f32 ADDRrr64:i64:$a)
/*2886*/          /*Scope*/ 21, /*->2908*/
/*2887*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2890*/            OPC_EmitMergeInputChains1_0,
/*2891*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2894*/            OPC_EmitInteger, MVT::i32, 0, 
/*2897*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ri64:f32 ADDRri64:i64:$a)
/*2908*/          /*Scope*/ 21, /*->2930*/
/*2909*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2912*/            OPC_EmitMergeInputChains1_0,
/*2913*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2916*/            OPC_EmitInteger, MVT::i32, 0, 
/*2919*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f32, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f32 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf32ii64:f32 ADDRii64:i64:$a)
/*2930*/          0, /*End of Scope*/
                /*SwitchType*/ 70,  MVT::f64,// ->3003
/*2933*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*2935*/          OPC_Scope, 21, /*->2958*/ // 3 children in Scope
/*2937*/            OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectADDRrr:$a #2 #3
/*2940*/            OPC_EmitMergeInputChains1_0,
/*2941*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2944*/            OPC_EmitInteger, MVT::i32, 0, 
/*2947*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRrr64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64rr64:f64 ADDRrr64:i64:$a)
/*2958*/          /*Scope*/ 21, /*->2980*/
/*2959*/            OPC_CheckComplexPat, /*CP*/4, /*#*/1, // SelectADDRri:$a #2 #3
/*2962*/            OPC_EmitMergeInputChains1_0,
/*2963*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2966*/            OPC_EmitInteger, MVT::i32, 0, 
/*2969*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRri64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ri64:f64 ADDRri64:i64:$a)
/*2980*/          /*Scope*/ 21, /*->3002*/
/*2981*/            OPC_CheckComplexPat, /*CP*/5, /*#*/1, // SelectADDRii:$a #2 #3
/*2984*/            OPC_EmitMergeInputChains1_0,
/*2985*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*2988*/            OPC_EmitInteger, MVT::i32, 0, 
/*2991*/            OPC_MorphNodeTo, TARGET_VAL(PTX::LDsf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::f64, 4/*#Ops*/, 2, 3, 4, 5, 
                    // Src: (ld:f64 ADDRii64:i64:$a)<<P:Predicate_unindexedload>><<P:Predicate_load>><<P:Predicate_load_shared>> - Complexity = 13
                    // Dst: (LDsf64ii64:f64 ADDRii64:i64:$a)
/*3002*/          0, /*End of Scope*/
                0, // EndSwitchType
/*3004*/      0, /*End of Scope*/
/*3005*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->3113
/*3009*/    OPC_MoveChild, 0,
/*3011*/    OPC_Scope, 19, /*->3032*/ // 5 children in Scope
/*3013*/      OPC_CheckInteger, 82|128,2/*338*/, 
/*3016*/      OPC_MoveParent,
/*3017*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3020*/      OPC_EmitInteger, MVT::i32, 0, 
/*3023*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_R64), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i64 338:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_R64:i64)
/*3032*/    /*Scope*/ 19, /*->3052*/
/*3033*/      OPC_CheckInteger, 85|128,2/*341*/, 
/*3036*/      OPC_MoveParent,
/*3037*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3040*/      OPC_EmitInteger, MVT::i32, 0, 
/*3043*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_X), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 341:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_X:i16)
/*3052*/    /*Scope*/ 19, /*->3072*/
/*3053*/      OPC_CheckInteger, 86|128,2/*342*/, 
/*3056*/      OPC_MoveParent,
/*3057*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3060*/      OPC_EmitInteger, MVT::i32, 0, 
/*3063*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_Y), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 342:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_Y:i16)
/*3072*/    /*Scope*/ 19, /*->3092*/
/*3073*/      OPC_CheckInteger, 87|128,2/*343*/, 
/*3076*/      OPC_MoveParent,
/*3077*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3080*/      OPC_EmitInteger, MVT::i32, 0, 
/*3083*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_Z), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 343:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_Z:i16)
/*3092*/    /*Scope*/ 19, /*->3112*/
/*3093*/      OPC_CheckInteger, 84|128,2/*340*/, 
/*3096*/      OPC_MoveParent,
/*3097*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3100*/      OPC_EmitInteger, MVT::i32, 0, 
/*3103*/      OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_READ_TID_W), 0,
                  1/*#VTs*/, MVT::i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:i16 340:iPTR) - Complexity = 8
              // Dst: (PTX_READ_TID_W:i16)
/*3112*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 8|128,1/*136*/,  TARGET_VAL(ISD::ADD),// ->3253
/*3117*/    OPC_RecordChild0, // #0 = $a
/*3118*/    OPC_RecordChild1, // #1 = $b
/*3119*/    OPC_Scope, 71, /*->3192*/ // 4 children in Scope
/*3121*/      OPC_MoveChild, 1,
/*3123*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3126*/      OPC_MoveParent,
/*3127*/      OPC_SwitchType /*3 cases */, 19,  MVT::i16,// ->3149
/*3130*/        OPC_EmitConvertToTarget, 1,
/*3132*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3135*/        OPC_EmitInteger, MVT::i32, 0, 
/*3138*/        OPC_MorphNodeTo, TARGET_VAL(PTX::ADDri16), 0,
                    1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (add:i16 RRegu16:i16:$a, (imm:i16):$b) - Complexity = 6
                // Dst: (ADDri16:i16 RRegu16:i16:$a, (imm:i16):$b)
              /*SwitchType*/ 19,  MVT::i32,// ->3170
/*3151*/        OPC_EmitConvertToTarget, 1,
/*3153*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3156*/        OPC_EmitInteger, MVT::i32, 0, 
/*3159*/        OPC_MorphNodeTo, TARGET_VAL(PTX::ADDri32), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (add:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
                // Dst: (ADDri32:i32 RRegu32:i32:$a, (imm:i32):$b)
              /*SwitchType*/ 19,  MVT::i64,// ->3191
/*3172*/        OPC_EmitConvertToTarget, 1,
/*3174*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3177*/        OPC_EmitInteger, MVT::i32, 0, 
/*3180*/        OPC_MorphNodeTo, TARGET_VAL(PTX::ADDri64), 0,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (add:i64 RRegu64:i64:$a, (imm:i64):$b) - Complexity = 6
                // Dst: (ADDri64:i64 RRegu64:i64:$a, (imm:i64):$b)
              0, // EndSwitchType
/*3192*/    /*Scope*/ 19, /*->3212*/
/*3193*/      OPC_CheckType, MVT::i16,
/*3195*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3198*/      OPC_EmitInteger, MVT::i32, 0, 
/*3201*/      OPC_MorphNodeTo, TARGET_VAL(PTX::ADDrr16), 0,
                  1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (add:i16 RRegu16:i16:$a, RRegu16:i16:$b) - Complexity = 3
              // Dst: (ADDrr16:i16 RRegu16:i16:$a, RRegu16:i16:$b)
/*3212*/    /*Scope*/ 19, /*->3232*/
/*3213*/      OPC_CheckType, MVT::i32,
/*3215*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3218*/      OPC_EmitInteger, MVT::i32, 0, 
/*3221*/      OPC_MorphNodeTo, TARGET_VAL(PTX::ADDrr32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (add:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (ADDrr32:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*3232*/    /*Scope*/ 19, /*->3252*/
/*3233*/      OPC_CheckType, MVT::i64,
/*3235*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3238*/      OPC_EmitInteger, MVT::i32, 0, 
/*3241*/      OPC_MorphNodeTo, TARGET_VAL(PTX::ADDrr64), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (add:i64 RRegu64:i64:$a, RRegu64:i64:$b) - Complexity = 3
              // Dst: (ADDrr64:i64 RRegu64:i64:$a, RRegu64:i64:$b)
/*3252*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 8|128,1/*136*/,  TARGET_VAL(ISD::SUB),// ->3393
/*3257*/    OPC_RecordChild0, // #0 = $a
/*3258*/    OPC_RecordChild1, // #1 = $b
/*3259*/    OPC_Scope, 71, /*->3332*/ // 4 children in Scope
/*3261*/      OPC_MoveChild, 1,
/*3263*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3266*/      OPC_MoveParent,
/*3267*/      OPC_SwitchType /*3 cases */, 19,  MVT::i16,// ->3289
/*3270*/        OPC_EmitConvertToTarget, 1,
/*3272*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3275*/        OPC_EmitInteger, MVT::i32, 0, 
/*3278*/        OPC_MorphNodeTo, TARGET_VAL(PTX::SUBri16), 0,
                    1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (sub:i16 RRegu16:i16:$a, (imm:i16):$b) - Complexity = 6
                // Dst: (SUBri16:i16 RRegu16:i16:$a, (imm:i16):$b)
              /*SwitchType*/ 19,  MVT::i32,// ->3310
/*3291*/        OPC_EmitConvertToTarget, 1,
/*3293*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3296*/        OPC_EmitInteger, MVT::i32, 0, 
/*3299*/        OPC_MorphNodeTo, TARGET_VAL(PTX::SUBri32), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (sub:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
                // Dst: (SUBri32:i32 RRegu32:i32:$a, (imm:i32):$b)
              /*SwitchType*/ 19,  MVT::i64,// ->3331
/*3312*/        OPC_EmitConvertToTarget, 1,
/*3314*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3317*/        OPC_EmitInteger, MVT::i32, 0, 
/*3320*/        OPC_MorphNodeTo, TARGET_VAL(PTX::SUBri64), 0,
                    1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (sub:i64 RRegu64:i64:$a, (imm:i64):$b) - Complexity = 6
                // Dst: (SUBri64:i64 RRegu64:i64:$a, (imm:i64):$b)
              0, // EndSwitchType
/*3332*/    /*Scope*/ 19, /*->3352*/
/*3333*/      OPC_CheckType, MVT::i16,
/*3335*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3338*/      OPC_EmitInteger, MVT::i32, 0, 
/*3341*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SUBrr16), 0,
                  1/*#VTs*/, MVT::i16, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (sub:i16 RRegu16:i16:$a, RRegu16:i16:$b) - Complexity = 3
              // Dst: (SUBrr16:i16 RRegu16:i16:$a, RRegu16:i16:$b)
/*3352*/    /*Scope*/ 19, /*->3372*/
/*3353*/      OPC_CheckType, MVT::i32,
/*3355*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3358*/      OPC_EmitInteger, MVT::i32, 0, 
/*3361*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SUBrr32), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (sub:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SUBrr32:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*3372*/    /*Scope*/ 19, /*->3392*/
/*3373*/      OPC_CheckType, MVT::i64,
/*3375*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3378*/      OPC_EmitInteger, MVT::i32, 0, 
/*3381*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SUBrr64), 0,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (sub:i64 RRegu64:i64:$a, RRegu64:i64:$b) - Complexity = 3
              // Dst: (SUBrr64:i64 RRegu64:i64:$a, RRegu64:i64:$b)
/*3392*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::SHL),// ->3478
/*3396*/    OPC_RecordChild0, // #0 = $a
/*3397*/    OPC_Scope, 28, /*->3427*/ // 3 children in Scope
/*3399*/      OPC_RecordChild1, // #1 = $b
/*3400*/      OPC_MoveChild, 1,
/*3402*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3405*/      OPC_MoveParent,
/*3406*/      OPC_CheckType, MVT::i32,
/*3408*/      OPC_EmitConvertToTarget, 1,
/*3410*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3413*/      OPC_EmitInteger, MVT::i32, 0, 
/*3416*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SHLri), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
              // Src: (PTXshl:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
              // Dst: (SHLri:i32 RRegu32:i32:$a, (imm:i32):$b)
/*3427*/    /*Scope*/ 28, /*->3456*/
/*3428*/      OPC_MoveChild, 0,
/*3430*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3433*/      OPC_MoveParent,
/*3434*/      OPC_RecordChild1, // #1 = $b
/*3435*/      OPC_CheckType, MVT::i32,
/*3437*/      OPC_EmitConvertToTarget, 0,
/*3439*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3442*/      OPC_EmitInteger, MVT::i32, 0, 
/*3445*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SHLir), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 1, 3, 4, 
              // Src: (PTXshl:i32 (imm:i32):$a, RRegu32:i32:$b) - Complexity = 6
              // Dst: (SHLir:i32 (imm:i32):$a, RRegu32:i32:$b)
/*3456*/    /*Scope*/ 20, /*->3477*/
/*3457*/      OPC_RecordChild1, // #1 = $b
/*3458*/      OPC_CheckType, MVT::i32,
/*3460*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3463*/      OPC_EmitInteger, MVT::i32, 0, 
/*3466*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SHLrr), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (PTXshl:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SHLrr:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*3477*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::SRL),// ->3563
/*3481*/    OPC_RecordChild0, // #0 = $a
/*3482*/    OPC_Scope, 28, /*->3512*/ // 3 children in Scope
/*3484*/      OPC_RecordChild1, // #1 = $b
/*3485*/      OPC_MoveChild, 1,
/*3487*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3490*/      OPC_MoveParent,
/*3491*/      OPC_CheckType, MVT::i32,
/*3493*/      OPC_EmitConvertToTarget, 1,
/*3495*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3498*/      OPC_EmitInteger, MVT::i32, 0, 
/*3501*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRLri), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
              // Src: (PTXsrl:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
              // Dst: (SRLri:i32 RRegu32:i32:$a, (imm:i32):$b)
/*3512*/    /*Scope*/ 28, /*->3541*/
/*3513*/      OPC_MoveChild, 0,
/*3515*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3518*/      OPC_MoveParent,
/*3519*/      OPC_RecordChild1, // #1 = $b
/*3520*/      OPC_CheckType, MVT::i32,
/*3522*/      OPC_EmitConvertToTarget, 0,
/*3524*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3527*/      OPC_EmitInteger, MVT::i32, 0, 
/*3530*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRLir), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 1, 3, 4, 
              // Src: (PTXsrl:i32 (imm:i32):$a, RRegu32:i32:$b) - Complexity = 6
              // Dst: (SRLir:i32 (imm:i32):$a, RRegu32:i32:$b)
/*3541*/    /*Scope*/ 20, /*->3562*/
/*3542*/      OPC_RecordChild1, // #1 = $b
/*3543*/      OPC_CheckType, MVT::i32,
/*3545*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3548*/      OPC_EmitInteger, MVT::i32, 0, 
/*3551*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRLrr), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (PTXsrl:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SRLrr:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*3562*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 82,  TARGET_VAL(ISD::SRA),// ->3648
/*3566*/    OPC_RecordChild0, // #0 = $a
/*3567*/    OPC_Scope, 28, /*->3597*/ // 3 children in Scope
/*3569*/      OPC_RecordChild1, // #1 = $b
/*3570*/      OPC_MoveChild, 1,
/*3572*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3575*/      OPC_MoveParent,
/*3576*/      OPC_CheckType, MVT::i32,
/*3578*/      OPC_EmitConvertToTarget, 1,
/*3580*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3583*/      OPC_EmitInteger, MVT::i32, 0, 
/*3586*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRAri), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
              // Src: (PTXsra:i32 RRegu32:i32:$a, (imm:i32):$b) - Complexity = 6
              // Dst: (SRAri:i32 RRegu32:i32:$a, (imm:i32):$b)
/*3597*/    /*Scope*/ 28, /*->3626*/
/*3598*/      OPC_MoveChild, 0,
/*3600*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3603*/      OPC_MoveParent,
/*3604*/      OPC_RecordChild1, // #1 = $b
/*3605*/      OPC_CheckType, MVT::i32,
/*3607*/      OPC_EmitConvertToTarget, 0,
/*3609*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3612*/      OPC_EmitInteger, MVT::i32, 0, 
/*3615*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRAir), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 2, 1, 3, 4, 
              // Src: (PTXsra:i32 (imm:i32):$a, RRegu32:i32:$b) - Complexity = 6
              // Dst: (SRAir:i32 (imm:i32):$a, RRegu32:i32:$b)
/*3626*/    /*Scope*/ 20, /*->3647*/
/*3627*/      OPC_RecordChild1, // #1 = $b
/*3628*/      OPC_CheckType, MVT::i32,
/*3630*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3633*/      OPC_EmitInteger, MVT::i32, 0, 
/*3636*/      OPC_MorphNodeTo, TARGET_VAL(PTX::SRArr), 0,
                  1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (PTXsra:i32 RRegu32:i32:$a, RRegu32:i32:$b) - Complexity = 3
              // Dst: (SRArr:i32 RRegu32:i32:$a, RRegu32:i32:$b)
/*3647*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::Constant),// ->3734
/*3651*/    OPC_RecordNode,   // #0 = $a
/*3652*/    OPC_SwitchType /*4 cases */, 18,  MVT::i1,// ->3673
/*3655*/      OPC_EmitConvertToTarget, 0,
/*3657*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3660*/      OPC_EmitInteger, MVT::i32, 0, 
/*3663*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVPREDri), 0,
                  1/*#VTs*/, MVT::i1, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i1):$a - Complexity = 3
              // Dst: (MOVPREDri:i1 (imm:i1):$a)
            /*SwitchType*/ 18,  MVT::i16,// ->3693
/*3675*/      OPC_EmitConvertToTarget, 0,
/*3677*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3680*/      OPC_EmitInteger, MVT::i32, 0, 
/*3683*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVU16ri), 0,
                  1/*#VTs*/, MVT::i16, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i16):$a - Complexity = 3
              // Dst: (MOVU16ri:i16 (imm:i16):$a)
            /*SwitchType*/ 18,  MVT::i32,// ->3713
/*3695*/      OPC_EmitConvertToTarget, 0,
/*3697*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3700*/      OPC_EmitInteger, MVT::i32, 0, 
/*3703*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVU32ri), 0,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i32):$a - Complexity = 3
              // Dst: (MOVU32ri:i32 (imm:i32):$a)
            /*SwitchType*/ 18,  MVT::i64,// ->3733
/*3715*/      OPC_EmitConvertToTarget, 0,
/*3717*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3720*/      OPC_EmitInteger, MVT::i32, 0, 
/*3723*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVU164ri), 0,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
              // Src: (imm:i64):$a - Complexity = 3
              // Dst: (MOVU164ri:i64 (imm:i64):$a)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26|128,18/*2330*/,  TARGET_VAL(ISD::STORE),// ->6068
/*3738*/    OPC_RecordMemRef,
/*3739*/    OPC_RecordNode,   // #0 = 'st' chained node
/*3740*/    OPC_RecordChild1, // #1 = $d
/*3741*/    OPC_Scope, 79|128,3/*463*/, /*->4207*/ // 5 children in Scope
/*3744*/      OPC_CheckChild1Type, MVT::i16,
/*3746*/      OPC_RecordChild2, // #2 = $a
/*3747*/      OPC_Scope, 99|128,1/*227*/, /*->3977*/ // 2 children in Scope
/*3750*/        OPC_CheckChild2Type, MVT::i32,
/*3752*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*3754*/        OPC_CheckPredicate, 7, // Predicate_store
/*3756*/        OPC_Scope, 72, /*->3830*/ // 3 children in Scope
/*3758*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*3760*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3762*/          OPC_Scope, 21, /*->3785*/ // 3 children in Scope
/*3764*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3767*/            OPC_EmitMergeInputChains1_0,
/*3768*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3771*/            OPC_EmitInteger, MVT::i32, 0, 
/*3774*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16rr32 RRegu16:i16:$d, ADDRrr32:i32:$a)
/*3785*/          /*Scope*/ 21, /*->3807*/
/*3786*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3789*/            OPC_EmitMergeInputChains1_0,
/*3790*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3793*/            OPC_EmitInteger, MVT::i32, 0, 
/*3796*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ri32 RRegu16:i16:$d, ADDRri32:i32:$a)
/*3807*/          /*Scope*/ 21, /*->3829*/
/*3808*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3811*/            OPC_EmitMergeInputChains1_0,
/*3812*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3815*/            OPC_EmitInteger, MVT::i32, 0, 
/*3818*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ii32 RRegu16:i16:$d, ADDRii32:i32:$a)
/*3829*/          0, /*End of Scope*/
/*3830*/        /*Scope*/ 72, /*->3903*/
/*3831*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*3833*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3835*/          OPC_Scope, 21, /*->3858*/ // 3 children in Scope
/*3837*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3840*/            OPC_EmitMergeInputChains1_0,
/*3841*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3844*/            OPC_EmitInteger, MVT::i32, 0, 
/*3847*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16rr32 RRegu16:i16:$d, ADDRrr32:i32:$a)
/*3858*/          /*Scope*/ 21, /*->3880*/
/*3859*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3862*/            OPC_EmitMergeInputChains1_0,
/*3863*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3866*/            OPC_EmitInteger, MVT::i32, 0, 
/*3869*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ri32 RRegu16:i16:$d, ADDRri32:i32:$a)
/*3880*/          /*Scope*/ 21, /*->3902*/
/*3881*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3884*/            OPC_EmitMergeInputChains1_0,
/*3885*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3888*/            OPC_EmitInteger, MVT::i32, 0, 
/*3891*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ii32 RRegu16:i16:$d, ADDRii32:i32:$a)
/*3902*/          0, /*End of Scope*/
/*3903*/        /*Scope*/ 72, /*->3976*/
/*3904*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*3906*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*3908*/          OPC_Scope, 21, /*->3931*/ // 3 children in Scope
/*3910*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*3913*/            OPC_EmitMergeInputChains1_0,
/*3914*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3917*/            OPC_EmitInteger, MVT::i32, 0, 
/*3920*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16rr32 RRegu16:i16:$d, ADDRrr32:i32:$a)
/*3931*/          /*Scope*/ 21, /*->3953*/
/*3932*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*3935*/            OPC_EmitMergeInputChains1_0,
/*3936*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3939*/            OPC_EmitInteger, MVT::i32, 0, 
/*3942*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ri32 RRegu16:i16:$d, ADDRri32:i32:$a)
/*3953*/          /*Scope*/ 21, /*->3975*/
/*3954*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*3957*/            OPC_EmitMergeInputChains1_0,
/*3958*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*3961*/            OPC_EmitInteger, MVT::i32, 0, 
/*3964*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ii32 RRegu16:i16:$d, ADDRii32:i32:$a)
/*3975*/          0, /*End of Scope*/
/*3976*/        0, /*End of Scope*/
/*3977*/      /*Scope*/ 99|128,1/*227*/, /*->4206*/
/*3979*/        OPC_CheckChild2Type, MVT::i64,
/*3981*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*3983*/        OPC_CheckPredicate, 7, // Predicate_store
/*3985*/        OPC_Scope, 72, /*->4059*/ // 3 children in Scope
/*3987*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*3989*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*3991*/          OPC_Scope, 21, /*->4014*/ // 3 children in Scope
/*3993*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*3996*/            OPC_EmitMergeInputChains1_0,
/*3997*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4000*/            OPC_EmitInteger, MVT::i32, 0, 
/*4003*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16rr64 RRegu16:i16:$d, ADDRrr64:i64:$a)
/*4014*/          /*Scope*/ 21, /*->4036*/
/*4015*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4018*/            OPC_EmitMergeInputChains1_0,
/*4019*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4022*/            OPC_EmitInteger, MVT::i32, 0, 
/*4025*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ri64 RRegu16:i16:$d, ADDRri64:i64:$a)
/*4036*/          /*Scope*/ 21, /*->4058*/
/*4037*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4040*/            OPC_EmitMergeInputChains1_0,
/*4041*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4044*/            OPC_EmitInteger, MVT::i32, 0, 
/*4047*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu16ii64 RRegu16:i16:$d, ADDRii64:i64:$a)
/*4058*/          0, /*End of Scope*/
/*4059*/        /*Scope*/ 72, /*->4132*/
/*4060*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4062*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4064*/          OPC_Scope, 21, /*->4087*/ // 3 children in Scope
/*4066*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4069*/            OPC_EmitMergeInputChains1_0,
/*4070*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4073*/            OPC_EmitInteger, MVT::i32, 0, 
/*4076*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16rr64 RRegu16:i16:$d, ADDRrr64:i64:$a)
/*4087*/          /*Scope*/ 21, /*->4109*/
/*4088*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4091*/            OPC_EmitMergeInputChains1_0,
/*4092*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4095*/            OPC_EmitInteger, MVT::i32, 0, 
/*4098*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ri64 RRegu16:i16:$d, ADDRri64:i64:$a)
/*4109*/          /*Scope*/ 21, /*->4131*/
/*4110*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4113*/            OPC_EmitMergeInputChains1_0,
/*4114*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4117*/            OPC_EmitInteger, MVT::i32, 0, 
/*4120*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu16ii64 RRegu16:i16:$d, ADDRii64:i64:$a)
/*4131*/          0, /*End of Scope*/
/*4132*/        /*Scope*/ 72, /*->4205*/
/*4133*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4135*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4137*/          OPC_Scope, 21, /*->4160*/ // 3 children in Scope
/*4139*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4142*/            OPC_EmitMergeInputChains1_0,
/*4143*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4146*/            OPC_EmitInteger, MVT::i32, 0, 
/*4149*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16rr64 RRegu16:i16:$d, ADDRrr64:i64:$a)
/*4160*/          /*Scope*/ 21, /*->4182*/
/*4161*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4164*/            OPC_EmitMergeInputChains1_0,
/*4165*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4168*/            OPC_EmitInteger, MVT::i32, 0, 
/*4171*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ri64 RRegu16:i16:$d, ADDRri64:i64:$a)
/*4182*/          /*Scope*/ 21, /*->4204*/
/*4183*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4186*/            OPC_EmitMergeInputChains1_0,
/*4187*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4190*/            OPC_EmitInteger, MVT::i32, 0, 
/*4193*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu16ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu16:i16:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu16ii64 RRegu16:i16:$d, ADDRii64:i64:$a)
/*4204*/          0, /*End of Scope*/
/*4205*/        0, /*End of Scope*/
/*4206*/      0, /*End of Scope*/
/*4207*/    /*Scope*/ 79|128,3/*463*/, /*->4672*/
/*4209*/      OPC_CheckChild1Type, MVT::i32,
/*4211*/      OPC_RecordChild2, // #2 = $a
/*4212*/      OPC_Scope, 99|128,1/*227*/, /*->4442*/ // 2 children in Scope
/*4215*/        OPC_CheckChild2Type, MVT::i32,
/*4217*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4219*/        OPC_CheckPredicate, 7, // Predicate_store
/*4221*/        OPC_Scope, 72, /*->4295*/ // 3 children in Scope
/*4223*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4225*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4227*/          OPC_Scope, 21, /*->4250*/ // 3 children in Scope
/*4229*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4232*/            OPC_EmitMergeInputChains1_0,
/*4233*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4236*/            OPC_EmitInteger, MVT::i32, 0, 
/*4239*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32rr32 RRegu32:i32:$d, ADDRrr32:i32:$a)
/*4250*/          /*Scope*/ 21, /*->4272*/
/*4251*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4254*/            OPC_EmitMergeInputChains1_0,
/*4255*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4258*/            OPC_EmitInteger, MVT::i32, 0, 
/*4261*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ri32 RRegu32:i32:$d, ADDRri32:i32:$a)
/*4272*/          /*Scope*/ 21, /*->4294*/
/*4273*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4276*/            OPC_EmitMergeInputChains1_0,
/*4277*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4280*/            OPC_EmitInteger, MVT::i32, 0, 
/*4283*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ii32 RRegu32:i32:$d, ADDRii32:i32:$a)
/*4294*/          0, /*End of Scope*/
/*4295*/        /*Scope*/ 72, /*->4368*/
/*4296*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4298*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4300*/          OPC_Scope, 21, /*->4323*/ // 3 children in Scope
/*4302*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4305*/            OPC_EmitMergeInputChains1_0,
/*4306*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4309*/            OPC_EmitInteger, MVT::i32, 0, 
/*4312*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32rr32 RRegu32:i32:$d, ADDRrr32:i32:$a)
/*4323*/          /*Scope*/ 21, /*->4345*/
/*4324*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4327*/            OPC_EmitMergeInputChains1_0,
/*4328*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4331*/            OPC_EmitInteger, MVT::i32, 0, 
/*4334*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ri32 RRegu32:i32:$d, ADDRri32:i32:$a)
/*4345*/          /*Scope*/ 21, /*->4367*/
/*4346*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4349*/            OPC_EmitMergeInputChains1_0,
/*4350*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4353*/            OPC_EmitInteger, MVT::i32, 0, 
/*4356*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ii32 RRegu32:i32:$d, ADDRii32:i32:$a)
/*4367*/          0, /*End of Scope*/
/*4368*/        /*Scope*/ 72, /*->4441*/
/*4369*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4371*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4373*/          OPC_Scope, 21, /*->4396*/ // 3 children in Scope
/*4375*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4378*/            OPC_EmitMergeInputChains1_0,
/*4379*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4382*/            OPC_EmitInteger, MVT::i32, 0, 
/*4385*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32rr32 RRegu32:i32:$d, ADDRrr32:i32:$a)
/*4396*/          /*Scope*/ 21, /*->4418*/
/*4397*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4400*/            OPC_EmitMergeInputChains1_0,
/*4401*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4404*/            OPC_EmitInteger, MVT::i32, 0, 
/*4407*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ri32 RRegu32:i32:$d, ADDRri32:i32:$a)
/*4418*/          /*Scope*/ 21, /*->4440*/
/*4419*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4422*/            OPC_EmitMergeInputChains1_0,
/*4423*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4426*/            OPC_EmitInteger, MVT::i32, 0, 
/*4429*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ii32 RRegu32:i32:$d, ADDRii32:i32:$a)
/*4440*/          0, /*End of Scope*/
/*4441*/        0, /*End of Scope*/
/*4442*/      /*Scope*/ 99|128,1/*227*/, /*->4671*/
/*4444*/        OPC_CheckChild2Type, MVT::i64,
/*4446*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4448*/        OPC_CheckPredicate, 7, // Predicate_store
/*4450*/        OPC_Scope, 72, /*->4524*/ // 3 children in Scope
/*4452*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4454*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4456*/          OPC_Scope, 21, /*->4479*/ // 3 children in Scope
/*4458*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4461*/            OPC_EmitMergeInputChains1_0,
/*4462*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4465*/            OPC_EmitInteger, MVT::i32, 0, 
/*4468*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32rr64 RRegu32:i32:$d, ADDRrr64:i64:$a)
/*4479*/          /*Scope*/ 21, /*->4501*/
/*4480*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4483*/            OPC_EmitMergeInputChains1_0,
/*4484*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4487*/            OPC_EmitInteger, MVT::i32, 0, 
/*4490*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ri64 RRegu32:i32:$d, ADDRri64:i64:$a)
/*4501*/          /*Scope*/ 21, /*->4523*/
/*4502*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4505*/            OPC_EmitMergeInputChains1_0,
/*4506*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4509*/            OPC_EmitInteger, MVT::i32, 0, 
/*4512*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu32ii64 RRegu32:i32:$d, ADDRii64:i64:$a)
/*4523*/          0, /*End of Scope*/
/*4524*/        /*Scope*/ 72, /*->4597*/
/*4525*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4527*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4529*/          OPC_Scope, 21, /*->4552*/ // 3 children in Scope
/*4531*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4534*/            OPC_EmitMergeInputChains1_0,
/*4535*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4538*/            OPC_EmitInteger, MVT::i32, 0, 
/*4541*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32rr64 RRegu32:i32:$d, ADDRrr64:i64:$a)
/*4552*/          /*Scope*/ 21, /*->4574*/
/*4553*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4556*/            OPC_EmitMergeInputChains1_0,
/*4557*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4560*/            OPC_EmitInteger, MVT::i32, 0, 
/*4563*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ri64 RRegu32:i32:$d, ADDRri64:i64:$a)
/*4574*/          /*Scope*/ 21, /*->4596*/
/*4575*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4578*/            OPC_EmitMergeInputChains1_0,
/*4579*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4582*/            OPC_EmitInteger, MVT::i32, 0, 
/*4585*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu32ii64 RRegu32:i32:$d, ADDRii64:i64:$a)
/*4596*/          0, /*End of Scope*/
/*4597*/        /*Scope*/ 72, /*->4670*/
/*4598*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4600*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4602*/          OPC_Scope, 21, /*->4625*/ // 3 children in Scope
/*4604*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4607*/            OPC_EmitMergeInputChains1_0,
/*4608*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4611*/            OPC_EmitInteger, MVT::i32, 0, 
/*4614*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32rr64 RRegu32:i32:$d, ADDRrr64:i64:$a)
/*4625*/          /*Scope*/ 21, /*->4647*/
/*4626*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4629*/            OPC_EmitMergeInputChains1_0,
/*4630*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4633*/            OPC_EmitInteger, MVT::i32, 0, 
/*4636*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ri64 RRegu32:i32:$d, ADDRri64:i64:$a)
/*4647*/          /*Scope*/ 21, /*->4669*/
/*4648*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4651*/            OPC_EmitMergeInputChains1_0,
/*4652*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4655*/            OPC_EmitInteger, MVT::i32, 0, 
/*4658*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu32:i32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu32ii64 RRegu32:i32:$d, ADDRii64:i64:$a)
/*4669*/          0, /*End of Scope*/
/*4670*/        0, /*End of Scope*/
/*4671*/      0, /*End of Scope*/
/*4672*/    /*Scope*/ 79|128,3/*463*/, /*->5137*/
/*4674*/      OPC_CheckChild1Type, MVT::i64,
/*4676*/      OPC_RecordChild2, // #2 = $a
/*4677*/      OPC_Scope, 99|128,1/*227*/, /*->4907*/ // 2 children in Scope
/*4680*/        OPC_CheckChild2Type, MVT::i32,
/*4682*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4684*/        OPC_CheckPredicate, 7, // Predicate_store
/*4686*/        OPC_Scope, 72, /*->4760*/ // 3 children in Scope
/*4688*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4690*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4692*/          OPC_Scope, 21, /*->4715*/ // 3 children in Scope
/*4694*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4697*/            OPC_EmitMergeInputChains1_0,
/*4698*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4701*/            OPC_EmitInteger, MVT::i32, 0, 
/*4704*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64rr32 RRegu64:i64:$d, ADDRrr32:i32:$a)
/*4715*/          /*Scope*/ 21, /*->4737*/
/*4716*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4719*/            OPC_EmitMergeInputChains1_0,
/*4720*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4723*/            OPC_EmitInteger, MVT::i32, 0, 
/*4726*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ri32 RRegu64:i64:$d, ADDRri32:i32:$a)
/*4737*/          /*Scope*/ 21, /*->4759*/
/*4738*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4741*/            OPC_EmitMergeInputChains1_0,
/*4742*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4745*/            OPC_EmitInteger, MVT::i32, 0, 
/*4748*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ii32 RRegu64:i64:$d, ADDRii32:i32:$a)
/*4759*/          0, /*End of Scope*/
/*4760*/        /*Scope*/ 72, /*->4833*/
/*4761*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4763*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4765*/          OPC_Scope, 21, /*->4788*/ // 3 children in Scope
/*4767*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4770*/            OPC_EmitMergeInputChains1_0,
/*4771*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4774*/            OPC_EmitInteger, MVT::i32, 0, 
/*4777*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64rr32 RRegu64:i64:$d, ADDRrr32:i32:$a)
/*4788*/          /*Scope*/ 21, /*->4810*/
/*4789*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4792*/            OPC_EmitMergeInputChains1_0,
/*4793*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4796*/            OPC_EmitInteger, MVT::i32, 0, 
/*4799*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ri32 RRegu64:i64:$d, ADDRri32:i32:$a)
/*4810*/          /*Scope*/ 21, /*->4832*/
/*4811*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4814*/            OPC_EmitMergeInputChains1_0,
/*4815*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4818*/            OPC_EmitInteger, MVT::i32, 0, 
/*4821*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ii32 RRegu64:i64:$d, ADDRii32:i32:$a)
/*4832*/          0, /*End of Scope*/
/*4833*/        /*Scope*/ 72, /*->4906*/
/*4834*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*4836*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*4838*/          OPC_Scope, 21, /*->4861*/ // 3 children in Scope
/*4840*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*4843*/            OPC_EmitMergeInputChains1_0,
/*4844*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4847*/            OPC_EmitInteger, MVT::i32, 0, 
/*4850*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64rr32 RRegu64:i64:$d, ADDRrr32:i32:$a)
/*4861*/          /*Scope*/ 21, /*->4883*/
/*4862*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*4865*/            OPC_EmitMergeInputChains1_0,
/*4866*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4869*/            OPC_EmitInteger, MVT::i32, 0, 
/*4872*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ri32 RRegu64:i64:$d, ADDRri32:i32:$a)
/*4883*/          /*Scope*/ 21, /*->4905*/
/*4884*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*4887*/            OPC_EmitMergeInputChains1_0,
/*4888*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4891*/            OPC_EmitInteger, MVT::i32, 0, 
/*4894*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ii32 RRegu64:i64:$d, ADDRii32:i32:$a)
/*4905*/          0, /*End of Scope*/
/*4906*/        0, /*End of Scope*/
/*4907*/      /*Scope*/ 99|128,1/*227*/, /*->5136*/
/*4909*/        OPC_CheckChild2Type, MVT::i64,
/*4911*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*4913*/        OPC_CheckPredicate, 7, // Predicate_store
/*4915*/        OPC_Scope, 72, /*->4989*/ // 3 children in Scope
/*4917*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*4919*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4921*/          OPC_Scope, 21, /*->4944*/ // 3 children in Scope
/*4923*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4926*/            OPC_EmitMergeInputChains1_0,
/*4927*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4930*/            OPC_EmitInteger, MVT::i32, 0, 
/*4933*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64rr64 RRegu64:i64:$d, ADDRrr64:i64:$a)
/*4944*/          /*Scope*/ 21, /*->4966*/
/*4945*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*4948*/            OPC_EmitMergeInputChains1_0,
/*4949*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4952*/            OPC_EmitInteger, MVT::i32, 0, 
/*4955*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ri64 RRegu64:i64:$d, ADDRri64:i64:$a)
/*4966*/          /*Scope*/ 21, /*->4988*/
/*4967*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*4970*/            OPC_EmitMergeInputChains1_0,
/*4971*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*4974*/            OPC_EmitInteger, MVT::i32, 0, 
/*4977*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgu64ii64 RRegu64:i64:$d, ADDRii64:i64:$a)
/*4988*/          0, /*End of Scope*/
/*4989*/        /*Scope*/ 72, /*->5062*/
/*4990*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*4992*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*4994*/          OPC_Scope, 21, /*->5017*/ // 3 children in Scope
/*4996*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*4999*/            OPC_EmitMergeInputChains1_0,
/*5000*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5003*/            OPC_EmitInteger, MVT::i32, 0, 
/*5006*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64rr64 RRegu64:i64:$d, ADDRrr64:i64:$a)
/*5017*/          /*Scope*/ 21, /*->5039*/
/*5018*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5021*/            OPC_EmitMergeInputChains1_0,
/*5022*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5025*/            OPC_EmitInteger, MVT::i32, 0, 
/*5028*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ri64 RRegu64:i64:$d, ADDRri64:i64:$a)
/*5039*/          /*Scope*/ 21, /*->5061*/
/*5040*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5043*/            OPC_EmitMergeInputChains1_0,
/*5044*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5047*/            OPC_EmitInteger, MVT::i32, 0, 
/*5050*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlu64ii64 RRegu64:i64:$d, ADDRii64:i64:$a)
/*5061*/          0, /*End of Scope*/
/*5062*/        /*Scope*/ 72, /*->5135*/
/*5063*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*5065*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5067*/          OPC_Scope, 21, /*->5090*/ // 3 children in Scope
/*5069*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5072*/            OPC_EmitMergeInputChains1_0,
/*5073*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5076*/            OPC_EmitInteger, MVT::i32, 0, 
/*5079*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64rr64 RRegu64:i64:$d, ADDRrr64:i64:$a)
/*5090*/          /*Scope*/ 21, /*->5112*/
/*5091*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5094*/            OPC_EmitMergeInputChains1_0,
/*5095*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5098*/            OPC_EmitInteger, MVT::i32, 0, 
/*5101*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ri64 RRegu64:i64:$d, ADDRri64:i64:$a)
/*5112*/          /*Scope*/ 21, /*->5134*/
/*5113*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5116*/            OPC_EmitMergeInputChains1_0,
/*5117*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5120*/            OPC_EmitInteger, MVT::i32, 0, 
/*5123*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsu64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegu64:i64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsu64ii64 RRegu64:i64:$d, ADDRii64:i64:$a)
/*5134*/          0, /*End of Scope*/
/*5135*/        0, /*End of Scope*/
/*5136*/      0, /*End of Scope*/
/*5137*/    /*Scope*/ 79|128,3/*463*/, /*->5602*/
/*5139*/      OPC_CheckChild1Type, MVT::f32,
/*5141*/      OPC_RecordChild2, // #2 = $a
/*5142*/      OPC_Scope, 99|128,1/*227*/, /*->5372*/ // 2 children in Scope
/*5145*/        OPC_CheckChild2Type, MVT::i32,
/*5147*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*5149*/        OPC_CheckPredicate, 7, // Predicate_store
/*5151*/        OPC_Scope, 72, /*->5225*/ // 3 children in Scope
/*5153*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*5155*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*5157*/          OPC_Scope, 21, /*->5180*/ // 3 children in Scope
/*5159*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*5162*/            OPC_EmitMergeInputChains1_0,
/*5163*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5166*/            OPC_EmitInteger, MVT::i32, 0, 
/*5169*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32rr32 RRegf32:f32:$d, ADDRrr32:i32:$a)
/*5180*/          /*Scope*/ 21, /*->5202*/
/*5181*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*5184*/            OPC_EmitMergeInputChains1_0,
/*5185*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5188*/            OPC_EmitInteger, MVT::i32, 0, 
/*5191*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ri32 RRegf32:f32:$d, ADDRri32:i32:$a)
/*5202*/          /*Scope*/ 21, /*->5224*/
/*5203*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5206*/            OPC_EmitMergeInputChains1_0,
/*5207*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5210*/            OPC_EmitInteger, MVT::i32, 0, 
/*5213*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ii32 RRegf32:f32:$d, ADDRii32:i32:$a)
/*5224*/          0, /*End of Scope*/
/*5225*/        /*Scope*/ 72, /*->5298*/
/*5226*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*5228*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*5230*/          OPC_Scope, 21, /*->5253*/ // 3 children in Scope
/*5232*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*5235*/            OPC_EmitMergeInputChains1_0,
/*5236*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5239*/            OPC_EmitInteger, MVT::i32, 0, 
/*5242*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32rr32 RRegf32:f32:$d, ADDRrr32:i32:$a)
/*5253*/          /*Scope*/ 21, /*->5275*/
/*5254*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*5257*/            OPC_EmitMergeInputChains1_0,
/*5258*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5261*/            OPC_EmitInteger, MVT::i32, 0, 
/*5264*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ri32 RRegf32:f32:$d, ADDRri32:i32:$a)
/*5275*/          /*Scope*/ 21, /*->5297*/
/*5276*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5279*/            OPC_EmitMergeInputChains1_0,
/*5280*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5283*/            OPC_EmitInteger, MVT::i32, 0, 
/*5286*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ii32 RRegf32:f32:$d, ADDRii32:i32:$a)
/*5297*/          0, /*End of Scope*/
/*5298*/        /*Scope*/ 72, /*->5371*/
/*5299*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*5301*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*5303*/          OPC_Scope, 21, /*->5326*/ // 3 children in Scope
/*5305*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*5308*/            OPC_EmitMergeInputChains1_0,
/*5309*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5312*/            OPC_EmitInteger, MVT::i32, 0, 
/*5315*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32rr32 RRegf32:f32:$d, ADDRrr32:i32:$a)
/*5326*/          /*Scope*/ 21, /*->5348*/
/*5327*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*5330*/            OPC_EmitMergeInputChains1_0,
/*5331*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5334*/            OPC_EmitInteger, MVT::i32, 0, 
/*5337*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ri32 RRegf32:f32:$d, ADDRri32:i32:$a)
/*5348*/          /*Scope*/ 21, /*->5370*/
/*5349*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5352*/            OPC_EmitMergeInputChains1_0,
/*5353*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5356*/            OPC_EmitInteger, MVT::i32, 0, 
/*5359*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ii32 RRegf32:f32:$d, ADDRii32:i32:$a)
/*5370*/          0, /*End of Scope*/
/*5371*/        0, /*End of Scope*/
/*5372*/      /*Scope*/ 99|128,1/*227*/, /*->5601*/
/*5374*/        OPC_CheckChild2Type, MVT::i64,
/*5376*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*5378*/        OPC_CheckPredicate, 7, // Predicate_store
/*5380*/        OPC_Scope, 72, /*->5454*/ // 3 children in Scope
/*5382*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*5384*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5386*/          OPC_Scope, 21, /*->5409*/ // 3 children in Scope
/*5388*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5391*/            OPC_EmitMergeInputChains1_0,
/*5392*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5395*/            OPC_EmitInteger, MVT::i32, 0, 
/*5398*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32rr64 RRegf32:f32:$d, ADDRrr64:i64:$a)
/*5409*/          /*Scope*/ 21, /*->5431*/
/*5410*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5413*/            OPC_EmitMergeInputChains1_0,
/*5414*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5417*/            OPC_EmitInteger, MVT::i32, 0, 
/*5420*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ri64 RRegf32:f32:$d, ADDRri64:i64:$a)
/*5431*/          /*Scope*/ 21, /*->5453*/
/*5432*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5435*/            OPC_EmitMergeInputChains1_0,
/*5436*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5439*/            OPC_EmitInteger, MVT::i32, 0, 
/*5442*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf32ii64 RRegf32:f32:$d, ADDRii64:i64:$a)
/*5453*/          0, /*End of Scope*/
/*5454*/        /*Scope*/ 72, /*->5527*/
/*5455*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*5457*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5459*/          OPC_Scope, 21, /*->5482*/ // 3 children in Scope
/*5461*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5464*/            OPC_EmitMergeInputChains1_0,
/*5465*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5468*/            OPC_EmitInteger, MVT::i32, 0, 
/*5471*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32rr64 RRegf32:f32:$d, ADDRrr64:i64:$a)
/*5482*/          /*Scope*/ 21, /*->5504*/
/*5483*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5486*/            OPC_EmitMergeInputChains1_0,
/*5487*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5490*/            OPC_EmitInteger, MVT::i32, 0, 
/*5493*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ri64 RRegf32:f32:$d, ADDRri64:i64:$a)
/*5504*/          /*Scope*/ 21, /*->5526*/
/*5505*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5508*/            OPC_EmitMergeInputChains1_0,
/*5509*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5512*/            OPC_EmitInteger, MVT::i32, 0, 
/*5515*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf32ii64 RRegf32:f32:$d, ADDRii64:i64:$a)
/*5526*/          0, /*End of Scope*/
/*5527*/        /*Scope*/ 72, /*->5600*/
/*5528*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*5530*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5532*/          OPC_Scope, 21, /*->5555*/ // 3 children in Scope
/*5534*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5537*/            OPC_EmitMergeInputChains1_0,
/*5538*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5541*/            OPC_EmitInteger, MVT::i32, 0, 
/*5544*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32rr64 RRegf32:f32:$d, ADDRrr64:i64:$a)
/*5555*/          /*Scope*/ 21, /*->5577*/
/*5556*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5559*/            OPC_EmitMergeInputChains1_0,
/*5560*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5563*/            OPC_EmitInteger, MVT::i32, 0, 
/*5566*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ri64 RRegf32:f32:$d, ADDRri64:i64:$a)
/*5577*/          /*Scope*/ 21, /*->5599*/
/*5578*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5581*/            OPC_EmitMergeInputChains1_0,
/*5582*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5585*/            OPC_EmitInteger, MVT::i32, 0, 
/*5588*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf32ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf32:f32:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf32ii64 RRegf32:f32:$d, ADDRii64:i64:$a)
/*5599*/          0, /*End of Scope*/
/*5600*/        0, /*End of Scope*/
/*5601*/      0, /*End of Scope*/
/*5602*/    /*Scope*/ 79|128,3/*463*/, /*->6067*/
/*5604*/      OPC_CheckChild1Type, MVT::f64,
/*5606*/      OPC_RecordChild2, // #2 = $a
/*5607*/      OPC_Scope, 99|128,1/*227*/, /*->5837*/ // 2 children in Scope
/*5610*/        OPC_CheckChild2Type, MVT::i32,
/*5612*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*5614*/        OPC_CheckPredicate, 7, // Predicate_store
/*5616*/        OPC_Scope, 72, /*->5690*/ // 3 children in Scope
/*5618*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*5620*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*5622*/          OPC_Scope, 21, /*->5645*/ // 3 children in Scope
/*5624*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*5627*/            OPC_EmitMergeInputChains1_0,
/*5628*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5631*/            OPC_EmitInteger, MVT::i32, 0, 
/*5634*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64rr32 RRegf64:f64:$d, ADDRrr32:i32:$a)
/*5645*/          /*Scope*/ 21, /*->5667*/
/*5646*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*5649*/            OPC_EmitMergeInputChains1_0,
/*5650*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5653*/            OPC_EmitInteger, MVT::i32, 0, 
/*5656*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ri32 RRegf64:f64:$d, ADDRri32:i32:$a)
/*5667*/          /*Scope*/ 21, /*->5689*/
/*5668*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5671*/            OPC_EmitMergeInputChains1_0,
/*5672*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5675*/            OPC_EmitInteger, MVT::i32, 0, 
/*5678*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ii32 RRegf64:f64:$d, ADDRii32:i32:$a)
/*5689*/          0, /*End of Scope*/
/*5690*/        /*Scope*/ 72, /*->5763*/
/*5691*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*5693*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*5695*/          OPC_Scope, 21, /*->5718*/ // 3 children in Scope
/*5697*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*5700*/            OPC_EmitMergeInputChains1_0,
/*5701*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5704*/            OPC_EmitInteger, MVT::i32, 0, 
/*5707*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64rr32 RRegf64:f64:$d, ADDRrr32:i32:$a)
/*5718*/          /*Scope*/ 21, /*->5740*/
/*5719*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*5722*/            OPC_EmitMergeInputChains1_0,
/*5723*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5726*/            OPC_EmitInteger, MVT::i32, 0, 
/*5729*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ri32 RRegf64:f64:$d, ADDRri32:i32:$a)
/*5740*/          /*Scope*/ 21, /*->5762*/
/*5741*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5744*/            OPC_EmitMergeInputChains1_0,
/*5745*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5748*/            OPC_EmitInteger, MVT::i32, 0, 
/*5751*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ii32 RRegf64:f64:$d, ADDRii32:i32:$a)
/*5762*/          0, /*End of Scope*/
/*5763*/        /*Scope*/ 72, /*->5836*/
/*5764*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*5766*/          OPC_CheckPatternPredicate, 0, // (!getSubtarget().use64BitAddresses())
/*5768*/          OPC_Scope, 21, /*->5791*/ // 3 children in Scope
/*5770*/            OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectADDRrr:$a #3 #4
/*5773*/            OPC_EmitMergeInputChains1_0,
/*5774*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5777*/            OPC_EmitInteger, MVT::i32, 0, 
/*5780*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64rr32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64rr32 RRegf64:f64:$d, ADDRrr32:i32:$a)
/*5791*/          /*Scope*/ 21, /*->5813*/
/*5792*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectADDRri:$a #3 #4
/*5795*/            OPC_EmitMergeInputChains1_0,
/*5796*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5799*/            OPC_EmitInteger, MVT::i32, 0, 
/*5802*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ri32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ri32 RRegf64:f64:$d, ADDRri32:i32:$a)
/*5813*/          /*Scope*/ 21, /*->5835*/
/*5814*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectADDRii:$a #3 #4
/*5817*/            OPC_EmitMergeInputChains1_0,
/*5818*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5821*/            OPC_EmitInteger, MVT::i32, 0, 
/*5824*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ii32), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii32:i32:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ii32 RRegf64:f64:$d, ADDRii32:i32:$a)
/*5835*/          0, /*End of Scope*/
/*5836*/        0, /*End of Scope*/
/*5837*/      /*Scope*/ 99|128,1/*227*/, /*->6066*/
/*5839*/        OPC_CheckChild2Type, MVT::i64,
/*5841*/        OPC_CheckPredicate, 6, // Predicate_unindexedstore
/*5843*/        OPC_CheckPredicate, 7, // Predicate_store
/*5845*/        OPC_Scope, 72, /*->5919*/ // 3 children in Scope
/*5847*/          OPC_CheckPredicate, 8, // Predicate_store_global
/*5849*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5851*/          OPC_Scope, 21, /*->5874*/ // 3 children in Scope
/*5853*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5856*/            OPC_EmitMergeInputChains1_0,
/*5857*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5860*/            OPC_EmitInteger, MVT::i32, 0, 
/*5863*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64rr64 RRegf64:f64:$d, ADDRrr64:i64:$a)
/*5874*/          /*Scope*/ 21, /*->5896*/
/*5875*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5878*/            OPC_EmitMergeInputChains1_0,
/*5879*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5882*/            OPC_EmitInteger, MVT::i32, 0, 
/*5885*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ri64 RRegf64:f64:$d, ADDRri64:i64:$a)
/*5896*/          /*Scope*/ 21, /*->5918*/
/*5897*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5900*/            OPC_EmitMergeInputChains1_0,
/*5901*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5904*/            OPC_EmitInteger, MVT::i32, 0, 
/*5907*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STgf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_global>> - Complexity = 13
                    // Dst: (STgf64ii64 RRegf64:f64:$d, ADDRii64:i64:$a)
/*5918*/          0, /*End of Scope*/
/*5919*/        /*Scope*/ 72, /*->5992*/
/*5920*/          OPC_CheckPredicate, 9, // Predicate_store_local
/*5922*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5924*/          OPC_Scope, 21, /*->5947*/ // 3 children in Scope
/*5926*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*5929*/            OPC_EmitMergeInputChains1_0,
/*5930*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5933*/            OPC_EmitInteger, MVT::i32, 0, 
/*5936*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64rr64 RRegf64:f64:$d, ADDRrr64:i64:$a)
/*5947*/          /*Scope*/ 21, /*->5969*/
/*5948*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*5951*/            OPC_EmitMergeInputChains1_0,
/*5952*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5955*/            OPC_EmitInteger, MVT::i32, 0, 
/*5958*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ri64 RRegf64:f64:$d, ADDRri64:i64:$a)
/*5969*/          /*Scope*/ 21, /*->5991*/
/*5970*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*5973*/            OPC_EmitMergeInputChains1_0,
/*5974*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*5977*/            OPC_EmitInteger, MVT::i32, 0, 
/*5980*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STlf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_local>> - Complexity = 13
                    // Dst: (STlf64ii64 RRegf64:f64:$d, ADDRii64:i64:$a)
/*5991*/          0, /*End of Scope*/
/*5992*/        /*Scope*/ 72, /*->6065*/
/*5993*/          OPC_CheckPredicate, 10, // Predicate_store_shared
/*5995*/          OPC_CheckPatternPredicate, 1, // (getSubtarget().use64BitAddresses())
/*5997*/          OPC_Scope, 21, /*->6020*/ // 3 children in Scope
/*5999*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectADDRrr:$a #3 #4
/*6002*/            OPC_EmitMergeInputChains1_0,
/*6003*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6006*/            OPC_EmitInteger, MVT::i32, 0, 
/*6009*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64rr64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRrr64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64rr64 RRegf64:f64:$d, ADDRrr64:i64:$a)
/*6020*/          /*Scope*/ 21, /*->6042*/
/*6021*/            OPC_CheckComplexPat, /*CP*/4, /*#*/2, // SelectADDRri:$a #3 #4
/*6024*/            OPC_EmitMergeInputChains1_0,
/*6025*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6028*/            OPC_EmitInteger, MVT::i32, 0, 
/*6031*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ri64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRri64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ri64 RRegf64:f64:$d, ADDRri64:i64:$a)
/*6042*/          /*Scope*/ 21, /*->6064*/
/*6043*/            OPC_CheckComplexPat, /*CP*/5, /*#*/2, // SelectADDRii:$a #3 #4
/*6046*/            OPC_EmitMergeInputChains1_0,
/*6047*/            OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6050*/            OPC_EmitInteger, MVT::i32, 0, 
/*6053*/            OPC_MorphNodeTo, TARGET_VAL(PTX::STsf64ii64), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 5/*#Ops*/, 1, 3, 4, 5, 6, 
                    // Src: (st RRegf64:f64:$d, ADDRii64:i64:$a)<<P:Predicate_unindexedstore>><<P:Predicate_store>><<P:Predicate_store_shared>> - Complexity = 13
                    // Dst: (STsf64ii64 RRegf64:f64:$d, ADDRii64:i64:$a)
/*6064*/          0, /*End of Scope*/
/*6065*/        0, /*End of Scope*/
/*6066*/      0, /*End of Scope*/
/*6067*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->6103
/*6071*/    OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*6072*/    OPC_MoveChild, 1,
/*6074*/    OPC_CheckInteger, 81|128,2/*337*/, 
/*6077*/    OPC_MoveParent,
/*6078*/    OPC_RecordChild2, // #1 = $i
/*6079*/    OPC_MoveChild, 2,
/*6081*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6084*/    OPC_MoveParent,
/*6085*/    OPC_EmitMergeInputChains1_0,
/*6086*/    OPC_EmitConvertToTarget, 1,
/*6088*/    OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6091*/    OPC_EmitInteger, MVT::i32, 0, 
/*6094*/    OPC_MorphNodeTo, TARGET_VAL(PTX::PTX_BAR_SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 2, 3, 4, 
            // Src: (intrinsic_void 337:iPTR, (imm:i32):$i) - Complexity = 11
            // Dst: (PTX_BAR_SYNC (imm:i32):$i)
          /*SwitchOpcode*/ 21|128,1/*149*/,  TARGET_VAL(ISD::FADD),// ->6256
/*6107*/    OPC_RecordChild0, // #0 = $a
/*6108*/    OPC_Scope, 51, /*->6161*/ // 3 children in Scope
/*6110*/      OPC_RecordChild1, // #1 = $b
/*6111*/      OPC_MoveChild, 1,
/*6113*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6116*/      OPC_MoveParent,
/*6117*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6139
/*6120*/        OPC_EmitConvertToTarget, 1,
/*6122*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6125*/        OPC_EmitInteger, MVT::i32, 0, 
/*6128*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fadd:f32 RRegf32:f32:$a, (fpimm:f32):$b) - Complexity = 6
                // Dst: (FADDri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6160
/*6141*/        OPC_EmitConvertToTarget, 1,
/*6143*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6146*/        OPC_EmitInteger, MVT::i32, 0, 
/*6149*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fadd:f64 RRegf64:f64:$a, (fpimm:f64):$b) - Complexity = 6
                // Dst: (FADDri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6161*/    /*Scope*/ 51, /*->6213*/
/*6162*/      OPC_MoveChild, 0,
/*6164*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6167*/      OPC_MoveParent,
/*6168*/      OPC_RecordChild1, // #1 = $a
/*6169*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6191
/*6172*/        OPC_EmitConvertToTarget, 0,
/*6174*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6177*/        OPC_EmitInteger, MVT::i32, 0, 
/*6180*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fadd:f32 (fpimm:f32):$b, RRegf32:f32:$a) - Complexity = 6
                // Dst: (FADDri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6212
/*6193*/        OPC_EmitConvertToTarget, 0,
/*6195*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6198*/        OPC_EmitInteger, MVT::i32, 0, 
/*6201*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fadd:f64 (fpimm:f64):$b, RRegf64:f64:$a) - Complexity = 6
                // Dst: (FADDri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6213*/    /*Scope*/ 41, /*->6255*/
/*6214*/      OPC_RecordChild1, // #1 = $b
/*6215*/      OPC_SwitchType /*2 cases */, 17,  MVT::f32,// ->6235
/*6218*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6221*/        OPC_EmitInteger, MVT::i32, 0, 
/*6224*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDrr32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fadd:f32 RRegf32:f32:$a, RRegf32:f32:$b) - Complexity = 3
                // Dst: (FADDrr32:f32 RRegf32:f32:$a, RRegf32:f32:$b)
              /*SwitchType*/ 17,  MVT::f64,// ->6254
/*6237*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6240*/        OPC_EmitInteger, MVT::i32, 0, 
/*6243*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FADDrr64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fadd:f64 RRegf64:f64:$a, RRegf64:f64:$b) - Complexity = 3
                // Dst: (FADDrr64:f64 RRegf64:f64:$a, RRegf64:f64:$b)
              0, // EndSwitchType
/*6255*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 95,  TARGET_VAL(ISD::FSUB),// ->6354
/*6259*/    OPC_RecordChild0, // #0 = $a
/*6260*/    OPC_RecordChild1, // #1 = $b
/*6261*/    OPC_Scope, 50, /*->6313*/ // 3 children in Scope
/*6263*/      OPC_MoveChild, 1,
/*6265*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6268*/      OPC_MoveParent,
/*6269*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6291
/*6272*/        OPC_EmitConvertToTarget, 1,
/*6274*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6277*/        OPC_EmitInteger, MVT::i32, 0, 
/*6280*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fsub:f32 RRegf32:f32:$a, (fpimm:f32):$b) - Complexity = 6
                // Dst: (FSUBri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6312
/*6293*/        OPC_EmitConvertToTarget, 1,
/*6295*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6298*/        OPC_EmitInteger, MVT::i32, 0, 
/*6301*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fsub:f64 RRegf64:f64:$a, (fpimm:f64):$b) - Complexity = 6
                // Dst: (FSUBri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6313*/    /*Scope*/ 19, /*->6333*/
/*6314*/      OPC_CheckType, MVT::f32,
/*6316*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6319*/      OPC_EmitInteger, MVT::i32, 0, 
/*6322*/      OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBrr32), 0,
                  1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (fsub:f32 RRegf32:f32:$a, RRegf32:f32:$b) - Complexity = 3
              // Dst: (FSUBrr32:f32 RRegf32:f32:$a, RRegf32:f32:$b)
/*6333*/    /*Scope*/ 19, /*->6353*/
/*6334*/      OPC_CheckType, MVT::f64,
/*6336*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6339*/      OPC_EmitInteger, MVT::i32, 0, 
/*6342*/      OPC_MorphNodeTo, TARGET_VAL(PTX::FSUBrr64), 0,
                  1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 1, 2, 3, 
              // Src: (fsub:f64 RRegf64:f64:$a, RRegf64:f64:$b) - Complexity = 3
              // Dst: (FSUBrr64:f64 RRegf64:f64:$a, RRegf64:f64:$b)
/*6353*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 21|128,1/*149*/,  TARGET_VAL(ISD::FMUL),// ->6507
/*6358*/    OPC_RecordChild0, // #0 = $a
/*6359*/    OPC_Scope, 51, /*->6412*/ // 3 children in Scope
/*6361*/      OPC_RecordChild1, // #1 = $b
/*6362*/      OPC_MoveChild, 1,
/*6364*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6367*/      OPC_MoveParent,
/*6368*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6390
/*6371*/        OPC_EmitConvertToTarget, 1,
/*6373*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6376*/        OPC_EmitInteger, MVT::i32, 0, 
/*6379*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fmul:f32 RRegf32:f32:$a, (fpimm:f32):$b) - Complexity = 6
                // Dst: (FMULri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6411
/*6392*/        OPC_EmitConvertToTarget, 1,
/*6394*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6397*/        OPC_EmitInteger, MVT::i32, 0, 
/*6400*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (fmul:f64 RRegf64:f64:$a, (fpimm:f64):$b) - Complexity = 6
                // Dst: (FMULri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6412*/    /*Scope*/ 51, /*->6464*/
/*6413*/      OPC_MoveChild, 0,
/*6415*/      OPC_CheckOpcode, TARGET_VAL(ISD::ConstantFP),
/*6418*/      OPC_MoveParent,
/*6419*/      OPC_RecordChild1, // #1 = $a
/*6420*/      OPC_SwitchType /*2 cases */, 19,  MVT::f32,// ->6442
/*6423*/        OPC_EmitConvertToTarget, 0,
/*6425*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6428*/        OPC_EmitInteger, MVT::i32, 0, 
/*6431*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fmul:f32 (fpimm:f32):$b, RRegf32:f32:$a) - Complexity = 6
                // Dst: (FMULri32:f32 RRegf32:f32:$a, (fpimm:f32):$b)
              /*SwitchType*/ 19,  MVT::f64,// ->6463
/*6444*/        OPC_EmitConvertToTarget, 0,
/*6446*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6449*/        OPC_EmitInteger, MVT::i32, 0, 
/*6452*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULri64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 1, 2, 3, 4, 
                // Src: (fmul:f64 (fpimm:f64):$b, RRegf64:f64:$a) - Complexity = 6
                // Dst: (FMULri64:f64 RRegf64:f64:$a, (fpimm:f64):$b)
              0, // EndSwitchType
/*6464*/    /*Scope*/ 41, /*->6506*/
/*6465*/      OPC_RecordChild1, // #1 = $b
/*6466*/      OPC_SwitchType /*2 cases */, 17,  MVT::f32,// ->6486
/*6469*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6472*/        OPC_EmitInteger, MVT::i32, 0, 
/*6475*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULrr32), 0,
                    1/*#VTs*/, MVT::f32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fmul:f32 RRegf32:f32:$a, RRegf32:f32:$b) - Complexity = 3
                // Dst: (FMULrr32:f32 RRegf32:f32:$a, RRegf32:f32:$b)
              /*SwitchType*/ 17,  MVT::f64,// ->6505
/*6488*/        OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6491*/        OPC_EmitInteger, MVT::i32, 0, 
/*6494*/        OPC_MorphNodeTo, TARGET_VAL(PTX::FMULrr64), 0,
                    1/*#VTs*/, MVT::f64, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (fmul:f64 RRegf64:f64:$a, RRegf64:f64:$b) - Complexity = 3
                // Dst: (FMULrr64:f64 RRegf64:f64:$a, RRegf64:f64:$b)
              0, // EndSwitchType
/*6506*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 43,  TARGET_VAL(ISD::ConstantFP),// ->6553
/*6510*/    OPC_RecordNode,   // #0 = $a
/*6511*/    OPC_SwitchType /*2 cases */, 18,  MVT::f32,// ->6532
/*6514*/      OPC_EmitConvertToTarget, 0,
/*6516*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6519*/      OPC_EmitInteger, MVT::i32, 0, 
/*6522*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVF32ri), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 3, 
              // Src: (fpimm:f32):$a - Complexity = 3
              // Dst: (MOVF32ri:f32 (fpimm:f32):$a)
            /*SwitchType*/ 18,  MVT::f64,// ->6552
/*6534*/      OPC_EmitConvertToTarget, 0,
/*6536*/      OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6539*/      OPC_EmitInteger, MVT::i32, 0, 
/*6542*/      OPC_MorphNodeTo, TARGET_VAL(PTX::MOVF64ri), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 3, 
              // Src: (fpimm:f64):$a - Complexity = 3
              // Dst: (MOVF64ri:f64 (fpimm:f64):$a)
            0, // EndSwitchType
          /*SwitchOpcode*/ 16,  TARGET_VAL(PTXISD::EXIT),// ->6572
/*6556*/    OPC_RecordNode,   // #0 = 'PTXexit' chained node
/*6557*/    OPC_EmitMergeInputChains1_0,
/*6558*/    OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6561*/    OPC_EmitInteger, MVT::i32, 0, 
/*6564*/    OPC_MorphNodeTo, TARGET_VAL(PTX::EXIT), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (PTXexit) - Complexity = 3
            // Dst: (EXIT)
          /*SwitchOpcode*/ 16,  TARGET_VAL(PTXISD::RET),// ->6591
/*6575*/    OPC_RecordNode,   // #0 = 'PTXret' chained node
/*6576*/    OPC_EmitMergeInputChains1_0,
/*6577*/    OPC_EmitRegister, MVT::i1, 0 /*zero_reg*/,
/*6580*/    OPC_EmitInteger, MVT::i32, 0, 
/*6583*/    OPC_MorphNodeTo, TARGET_VAL(PTX::RET), 0|OPFL_Chain,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (PTXret) - Complexity = 3
            // Dst: (RET)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 6593 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 98
  // #OPC_RecordNode                     = 7
  // #OPC_RecordChild                    = 34
  // #OPC_RecordMemRef                   = 2
  // #OPC_CaptureGlueInput               = 0
  // #OPC_MoveChild                      = 16
  // #OPC_MoveParent                     = 20
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 70
  // #OPC_CheckPredicate                 = 70
  // #OPC_CheckOpcode                    = 14
  // #OPC_SwitchOpcode                   = 1
  // #OPC_CheckType                      = 17
  // #OPC_SwitchType                     = 27
  // #OPC_CheckChildType                 = 17
  // #OPC_CheckInteger                   = 6
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 0
  // #OPC_CheckComplexPat                = 210
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 261
  // #OPC_EmitStringInteger              = 0
  // #OPC_EmitRegister                   = 261
  // #OPC_EmitConvertToTarget            = 29
  // #OPC_EmitMergeInputChains           = 213
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 0
  // #OPC_EmitNodeXForm                  = 0
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 0
  // #OPC_MorphNodeTo                    = 261

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (!getSubtarget().use64BitAddresses());
  case 1: return (getSubtarget().use64BitAddresses());
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
  case 2: { // Predicate_load_global
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::GLOBAL;
  return false;

  }
  case 3: { // Predicate_load_constant
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::CONSTANT;
  return false;

  }
  case 4: { // Predicate_load_local
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::LOCAL;
  return false;

  }
  case 5: { // Predicate_load_shared
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<LoadSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::SHARED;
  return false;

  }
  case 6: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 7: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 8: { // Predicate_store_global
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<StoreSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::GLOBAL;
  return false;

  }
  case 9: { // Predicate_store_local
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<StoreSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::LOCAL;
  return false;

  }
  case 10: { // Predicate_store_shared
    SDNode *N = Node;

  const Value *Src;
  const PointerType *PT;
  if ((Src = cast<StoreSDNode>(N)->getSrcValue()) &&
      (PT = dyn_cast<PointerType>(Src->getType())))
    return PT->getAddressSpace() == PTX::SHARED;
  return false;

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
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectADDRii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectADDRrr(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+2);
    return SelectADDRri(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 5:
    Result.resize(NextRes+2);
    return SelectADDRii(N, Result[NextRes+0].first, Result[NextRes+1].first);
  }
}

