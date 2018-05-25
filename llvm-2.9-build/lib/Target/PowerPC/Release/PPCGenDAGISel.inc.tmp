//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// DAG Instruction Selector for the PPC target
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
/*0*/     OPC_SwitchOpcode /*94 cases */, 40,  TARGET_VAL(ISD::MEMBARRIER),// ->44
/*4*/       OPC_RecordNode,   // #0 = 'membarrier' chained node
/*5*/       OPC_MoveChild, 1,
/*7*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10*/      OPC_CheckType, MVT::i32,
/*12*/      OPC_MoveParent,
/*13*/      OPC_MoveChild, 2,
/*15*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*18*/      OPC_MoveParent,
/*19*/      OPC_MoveChild, 3,
/*21*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*24*/      OPC_MoveParent,
/*25*/      OPC_MoveChild, 4,
/*27*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*30*/      OPC_MoveParent,
/*31*/      OPC_MoveChild, 5,
/*33*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*36*/      OPC_MoveParent,
/*37*/      OPC_EmitMergeInputChains1_0,
/*38*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (membarrier (imm:i32), (imm:i32), (imm:i32), (imm:i32), (imm:i32)) - Complexity = 18
            // Dst: (SYNC)
          /*SwitchOpcode*/ 73|128,4/*585*/,  TARGET_VAL(ISD::INTRINSIC_VOID),// ->633
/*48*/      OPC_RecordNode,   // #0 = 'intrinsic_void' chained node
/*49*/      OPC_MoveChild, 1,
/*51*/      OPC_Scope, 17, /*->70*/ // 21 children in Scope
/*53*/        OPC_CheckInteger, 70|128,2/*326*/, 
/*56*/        OPC_MoveParent,
/*57*/        OPC_RecordChild2, // #1 = $dst
/*58*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*61*/        OPC_EmitMergeInputChains1_0,
/*62*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBA), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 326:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBA xoaddr:iPTR:$dst)
/*70*/      /*Scope*/ 17, /*->88*/
/*71*/        OPC_CheckInteger, 71|128,2/*327*/, 
/*74*/        OPC_MoveParent,
/*75*/        OPC_RecordChild2, // #1 = $dst
/*76*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*79*/        OPC_EmitMergeInputChains1_0,
/*80*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBF), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 327:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBF xoaddr:iPTR:$dst)
/*88*/      /*Scope*/ 17, /*->106*/
/*89*/        OPC_CheckInteger, 72|128,2/*328*/, 
/*92*/        OPC_MoveParent,
/*93*/        OPC_RecordChild2, // #1 = $dst
/*94*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*97*/        OPC_EmitMergeInputChains1_0,
/*98*/        OPC_MorphNodeTo, TARGET_VAL(PPC::DCBI), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 328:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBI xoaddr:iPTR:$dst)
/*106*/     /*Scope*/ 17, /*->124*/
/*107*/       OPC_CheckInteger, 73|128,2/*329*/, 
/*110*/       OPC_MoveParent,
/*111*/       OPC_RecordChild2, // #1 = $dst
/*112*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*115*/       OPC_EmitMergeInputChains1_0,
/*116*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 329:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBST xoaddr:iPTR:$dst)
/*124*/     /*Scope*/ 17, /*->142*/
/*125*/       OPC_CheckInteger, 74|128,2/*330*/, 
/*128*/       OPC_MoveParent,
/*129*/       OPC_RecordChild2, // #1 = $dst
/*130*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*133*/       OPC_EmitMergeInputChains1_0,
/*134*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBT), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 330:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBT xoaddr:iPTR:$dst)
/*142*/     /*Scope*/ 17, /*->160*/
/*143*/       OPC_CheckInteger, 75|128,2/*331*/, 
/*146*/       OPC_MoveParent,
/*147*/       OPC_RecordChild2, // #1 = $dst
/*148*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*151*/       OPC_EmitMergeInputChains1_0,
/*152*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBTST), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 331:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBTST xoaddr:iPTR:$dst)
/*160*/     /*Scope*/ 17, /*->178*/
/*161*/       OPC_CheckInteger, 76|128,2/*332*/, 
/*164*/       OPC_MoveParent,
/*165*/       OPC_RecordChild2, // #1 = $dst
/*166*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*169*/       OPC_EmitMergeInputChains1_0,
/*170*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZ), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 332:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZ xoaddr:iPTR:$dst)
/*178*/     /*Scope*/ 17, /*->196*/
/*179*/       OPC_CheckInteger, 77|128,2/*333*/, 
/*182*/       OPC_MoveParent,
/*183*/       OPC_RecordChild2, // #1 = $dst
/*184*/       OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$dst #2 #3
/*187*/       OPC_EmitMergeInputChains1_0,
/*188*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DCBZL), 0|OPFL_Chain,
                  0/*#VTs*/, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_void 333:iPTR, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (DCBZL xoaddr:iPTR:$dst)
/*196*/     /*Scope*/ 19, /*->216*/
/*197*/       OPC_CheckInteger, 66|128,1/*194*/, 
/*200*/       OPC_MoveParent,
/*201*/       OPC_RecordChild2, // #1 = $rS
/*202*/       OPC_RecordChild3, // #2 = $dst
/*203*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*206*/       OPC_EmitMergeInputChains1_0,
/*207*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEBX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 194:iPTR, VRRC:v16i8:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEBX VRRC:v16i8:$rS, xoaddr:iPTR:$dst)
/*216*/     /*Scope*/ 19, /*->236*/
/*217*/       OPC_CheckInteger, 67|128,1/*195*/, 
/*220*/       OPC_MoveParent,
/*221*/       OPC_RecordChild2, // #1 = $rS
/*222*/       OPC_RecordChild3, // #2 = $dst
/*223*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*226*/       OPC_EmitMergeInputChains1_0,
/*227*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEHX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 195:iPTR, VRRC:v8i16:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEHX VRRC:v8i16:$rS, xoaddr:iPTR:$dst)
/*236*/     /*Scope*/ 19, /*->256*/
/*237*/       OPC_CheckInteger, 68|128,1/*196*/, 
/*240*/       OPC_MoveParent,
/*241*/       OPC_RecordChild2, // #1 = $rS
/*242*/       OPC_RecordChild3, // #2 = $dst
/*243*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*246*/       OPC_EmitMergeInputChains1_0,
/*247*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVEWX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 196:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVEWX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*256*/     /*Scope*/ 19, /*->276*/
/*257*/       OPC_CheckInteger, 69|128,1/*197*/, 
/*260*/       OPC_MoveParent,
/*261*/       OPC_RecordChild2, // #1 = $rS
/*262*/       OPC_RecordChild3, // #2 = $dst
/*263*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*266*/       OPC_EmitMergeInputChains1_0,
/*267*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 197:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*276*/     /*Scope*/ 19, /*->296*/
/*277*/       OPC_CheckInteger, 70|128,1/*198*/, 
/*280*/       OPC_MoveParent,
/*281*/       OPC_RecordChild2, // #1 = $rS
/*282*/       OPC_RecordChild3, // #2 = $dst
/*283*/       OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*286*/       OPC_EmitMergeInputChains1_0,
/*287*/       OPC_MorphNodeTo, TARGET_VAL(PPC::STVXL), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (intrinsic_void 198:iPTR, VRRC:v4i32:$rS, xoaddr:iPTR:$dst) - Complexity = 17
              // Dst: (STVXL VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*296*/     /*Scope*/ 33, /*->330*/
/*297*/       OPC_CheckInteger, 51|128,1/*179*/, 
/*300*/       OPC_MoveParent,
/*301*/       OPC_RecordChild2, // #1 = $STRM
/*302*/       OPC_MoveChild, 2,
/*304*/       OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*307*/       OPC_MoveParent,
/*308*/       OPC_EmitMergeInputChains1_0,
/*309*/       OPC_EmitInteger, MVT::i32, 0, 
/*312*/       OPC_EmitConvertToTarget, 1,
/*314*/       OPC_EmitInteger, MVT::i32, 0, 
/*317*/       OPC_EmitInteger, MVT::i32, 0, 
/*320*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSS), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 2, 3, 4, 5, 
              // Src: (intrinsic_void 179:iPTR, (imm:i32):$STRM) - Complexity = 11
              // Dst: (DSS 0:i32, (imm:i32):$STRM, 0:i32, 0:i32)
/*330*/     /*Scope*/ 61, /*->392*/
/*331*/       OPC_CheckInteger, 53|128,1/*181*/, 
/*334*/       OPC_MoveParent,
/*335*/       OPC_RecordChild2, // #1 = $rA
/*336*/       OPC_Scope, 26, /*->364*/ // 2 children in Scope
/*338*/         OPC_CheckChild2Type, MVT::i32,
/*340*/         OPC_RecordChild3, // #2 = $rB
/*341*/         OPC_RecordChild4, // #3 = $STRM
/*342*/         OPC_MoveChild, 4,
/*344*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*347*/         OPC_MoveParent,
/*348*/         OPC_EmitMergeInputChains1_0,
/*349*/         OPC_EmitInteger, MVT::i32, 0, 
/*352*/         OPC_EmitConvertToTarget, 3,
/*354*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 181:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*364*/       /*Scope*/ 26, /*->391*/
/*365*/         OPC_CheckChild2Type, MVT::i64,
/*367*/         OPC_RecordChild3, // #2 = $rB
/*368*/         OPC_RecordChild4, // #3 = $STRM
/*369*/         OPC_MoveChild, 4,
/*371*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*374*/         OPC_MoveParent,
/*375*/         OPC_EmitMergeInputChains1_0,
/*376*/         OPC_EmitInteger, MVT::i32, 0, 
/*379*/         OPC_EmitConvertToTarget, 3,
/*381*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 181:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*391*/       0, /*End of Scope*/
/*392*/     /*Scope*/ 61, /*->454*/
/*393*/       OPC_CheckInteger, 56|128,1/*184*/, 
/*396*/       OPC_MoveParent,
/*397*/       OPC_RecordChild2, // #1 = $rA
/*398*/       OPC_Scope, 26, /*->426*/ // 2 children in Scope
/*400*/         OPC_CheckChild2Type, MVT::i32,
/*402*/         OPC_RecordChild3, // #2 = $rB
/*403*/         OPC_RecordChild4, // #3 = $STRM
/*404*/         OPC_MoveChild, 4,
/*406*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*409*/         OPC_MoveParent,
/*410*/         OPC_EmitMergeInputChains1_0,
/*411*/         OPC_EmitInteger, MVT::i32, 1, 
/*414*/         OPC_EmitConvertToTarget, 3,
/*416*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 184:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*426*/       /*Scope*/ 26, /*->453*/
/*427*/         OPC_CheckChild2Type, MVT::i64,
/*429*/         OPC_RecordChild3, // #2 = $rB
/*430*/         OPC_RecordChild4, // #3 = $STRM
/*431*/         OPC_MoveChild, 4,
/*433*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*436*/         OPC_MoveParent,
/*437*/         OPC_EmitMergeInputChains1_0,
/*438*/         OPC_EmitInteger, MVT::i32, 1, 
/*441*/         OPC_EmitConvertToTarget, 3,
/*443*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 184:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*453*/       0, /*End of Scope*/
/*454*/     /*Scope*/ 61, /*->516*/
/*455*/       OPC_CheckInteger, 54|128,1/*182*/, 
/*458*/       OPC_MoveParent,
/*459*/       OPC_RecordChild2, // #1 = $rA
/*460*/       OPC_Scope, 26, /*->488*/ // 2 children in Scope
/*462*/         OPC_CheckChild2Type, MVT::i32,
/*464*/         OPC_RecordChild3, // #2 = $rB
/*465*/         OPC_RecordChild4, // #3 = $STRM
/*466*/         OPC_MoveChild, 4,
/*468*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*471*/         OPC_MoveParent,
/*472*/         OPC_EmitMergeInputChains1_0,
/*473*/         OPC_EmitInteger, MVT::i32, 0, 
/*476*/         OPC_EmitConvertToTarget, 3,
/*478*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 182:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST 0:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*488*/       /*Scope*/ 26, /*->515*/
/*489*/         OPC_CheckChild2Type, MVT::i64,
/*491*/         OPC_RecordChild3, // #2 = $rB
/*492*/         OPC_RecordChild4, // #3 = $STRM
/*493*/         OPC_MoveChild, 4,
/*495*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*498*/         OPC_MoveParent,
/*499*/         OPC_EmitMergeInputChains1_0,
/*500*/         OPC_EmitInteger, MVT::i32, 0, 
/*503*/         OPC_EmitConvertToTarget, 3,
/*505*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTST64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 182:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTST64 0:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*515*/       0, /*End of Scope*/
/*516*/     /*Scope*/ 61, /*->578*/
/*517*/       OPC_CheckInteger, 55|128,1/*183*/, 
/*520*/       OPC_MoveParent,
/*521*/       OPC_RecordChild2, // #1 = $rA
/*522*/       OPC_Scope, 26, /*->550*/ // 2 children in Scope
/*524*/         OPC_CheckChild2Type, MVT::i32,
/*526*/         OPC_RecordChild3, // #2 = $rB
/*527*/         OPC_RecordChild4, // #3 = $STRM
/*528*/         OPC_MoveChild, 4,
/*530*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*533*/         OPC_MoveParent,
/*534*/         OPC_EmitMergeInputChains1_0,
/*535*/         OPC_EmitInteger, MVT::i32, 1, 
/*538*/         OPC_EmitConvertToTarget, 3,
/*540*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 183:iPTR, GPRC:i32:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT 1:i32, (imm:i32):$STRM, GPRC:i32:$rA, GPRC:i32:$rB)
/*550*/       /*Scope*/ 26, /*->577*/
/*551*/         OPC_CheckChild2Type, MVT::i64,
/*553*/         OPC_RecordChild3, // #2 = $rB
/*554*/         OPC_RecordChild4, // #3 = $STRM
/*555*/         OPC_MoveChild, 4,
/*557*/         OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*560*/         OPC_MoveParent,
/*561*/         OPC_EmitMergeInputChains1_0,
/*562*/         OPC_EmitInteger, MVT::i32, 1, 
/*565*/         OPC_EmitConvertToTarget, 3,
/*567*/         OPC_MorphNodeTo, TARGET_VAL(PPC::DSTSTT64), 0|OPFL_Chain,
                    0/*#VTs*/, 4/*#Ops*/, 4, 5, 1, 2, 
                // Src: (intrinsic_void 183:iPTR, G8RC:i64:$rA, GPRC:i32:$rB, (imm:i32):$STRM) - Complexity = 11
                // Dst: (DSTSTT64 1:i32, (imm:i32):$STRM, G8RC:i64:$rA, GPRC:i32:$rB)
/*577*/       0, /*End of Scope*/
/*578*/     /*Scope*/ 11, /*->590*/
/*579*/       OPC_CheckInteger, 78|128,2/*334*/, 
/*582*/       OPC_MoveParent,
/*583*/       OPC_EmitMergeInputChains1_0,
/*584*/       OPC_MorphNodeTo, TARGET_VAL(PPC::SYNC), 0|OPFL_Chain,
                  0/*#VTs*/, 0/*#Ops*/, 
              // Src: (intrinsic_void 334:iPTR) - Complexity = 8
              // Dst: (SYNC)
/*590*/     /*Scope*/ 13, /*->604*/
/*591*/       OPC_CheckInteger, 65|128,1/*193*/, 
/*594*/       OPC_MoveParent,
/*595*/       OPC_RecordChild2, // #1 = $vB
/*596*/       OPC_EmitMergeInputChains1_0,
/*597*/       OPC_MorphNodeTo, TARGET_VAL(PPC::MTVSCR), 0|OPFL_Chain,
                  0/*#VTs*/, 1/*#Ops*/, 1, 
              // Src: (intrinsic_void 193:iPTR, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (MTVSCR VRRC:v4i32:$vB)
/*604*/     /*Scope*/ 27, /*->632*/
/*605*/       OPC_CheckInteger, 52|128,1/*180*/, 
/*608*/       OPC_MoveParent,
/*609*/       OPC_EmitMergeInputChains1_0,
/*610*/       OPC_EmitInteger, MVT::i32, 1, 
/*613*/       OPC_EmitInteger, MVT::i32, 0, 
/*616*/       OPC_EmitInteger, MVT::i32, 0, 
/*619*/       OPC_EmitInteger, MVT::i32, 0, 
/*622*/       OPC_MorphNodeTo, TARGET_VAL(PPC::DSSALL), 0|OPFL_Chain,
                  0/*#VTs*/, 4/*#Ops*/, 1, 2, 3, 4, 
              // Src: (intrinsic_void 180:iPTR) - Complexity = 8
              // Dst: (DSSALL 1:i32, 0:i32, 0:i32, 0:i32)
/*632*/     0, /*End of Scope*/
          /*SwitchOpcode*/ 32|128,4/*544*/,  TARGET_VAL(ISD::ADD),// ->1181
/*637*/     OPC_Scope, 49|128,1/*177*/, /*->817*/ // 3 children in Scope
/*640*/       OPC_RecordChild0, // #0 = $rA
/*641*/       OPC_MoveChild, 1,
/*643*/       OPC_SwitchOpcode /*2 cases */, 24,  TARGET_VAL(PPCISD::Lo),// ->671
/*647*/         OPC_RecordChild0, // #1 = $sym
/*648*/         OPC_MoveChild, 0,
/*650*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*653*/         OPC_MoveParent,
/*654*/         OPC_MoveChild, 1,
/*656*/         OPC_CheckInteger, 0, 
/*658*/         OPC_MoveParent,
/*659*/         OPC_MoveParent,
/*660*/         OPC_CheckType, MVT::i32,
/*662*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32)) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 13|128,1/*141*/,  TARGET_VAL(PPCISD::Hi),// ->816
/*675*/         OPC_RecordChild0, // #1 = $g
/*676*/         OPC_MoveChild, 0,
/*678*/         OPC_SwitchOpcode /*4 cases */, 31,  TARGET_VAL(ISD::TargetGlobalAddress),// ->713
/*682*/           OPC_MoveParent,
/*683*/           OPC_MoveChild, 1,
/*685*/           OPC_CheckInteger, 0, 
/*687*/           OPC_MoveParent,
/*688*/           OPC_MoveParent,
/*689*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->701
/*692*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tglobaladdr:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->712
/*703*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tglobaladdr:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetConstantPool),// ->747
/*716*/           OPC_MoveParent,
/*717*/           OPC_MoveChild, 1,
/*719*/           OPC_CheckInteger, 0, 
/*721*/           OPC_MoveParent,
/*722*/           OPC_MoveParent,
/*723*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->735
/*726*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tconstpool:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->746
/*737*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tconstpool:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetJumpTable),// ->781
/*750*/           OPC_MoveParent,
/*751*/           OPC_MoveChild, 1,
/*753*/           OPC_CheckInteger, 0, 
/*755*/           OPC_MoveParent,
/*756*/           OPC_MoveParent,
/*757*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->769
/*760*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tjumptable:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->780
/*771*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tjumptable:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 31,  TARGET_VAL(ISD::TargetBlockAddress),// ->815
/*784*/           OPC_MoveParent,
/*785*/           OPC_MoveChild, 1,
/*787*/           OPC_CheckInteger, 0, 
/*789*/           OPC_MoveParent,
/*790*/           OPC_MoveParent,
/*791*/           OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->803
/*794*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i32 GPRC:i32:$in, (PPChi:i32 (tblockaddress:i32):$g, 0:i32)) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  /*SwitchType*/ 9,  MVT::i64,// ->814
/*805*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (add:i64 G8RC:i64:$in, (PPChi:i64 (tblockaddress:i64):$g, 0:i64)) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*817*/     /*Scope*/ 53|128,1/*181*/, /*->1000*/
/*819*/       OPC_MoveChild, 0,
/*821*/       OPC_SwitchOpcode /*2 cases */, 25,  TARGET_VAL(PPCISD::Lo),// ->850
/*825*/         OPC_RecordChild0, // #0 = $sym
/*826*/         OPC_MoveChild, 0,
/*828*/         OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*831*/         OPC_MoveParent,
/*832*/         OPC_MoveChild, 1,
/*834*/         OPC_CheckInteger, 0, 
/*836*/         OPC_MoveParent,
/*837*/         OPC_MoveParent,
/*838*/         OPC_RecordChild1, // #1 = $rA
/*839*/         OPC_CheckType, MVT::i32,
/*841*/         OPC_MorphNodeTo, TARGET_VAL(PPC::LA), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (add:i32 (PPClo:i32 (tglobaladdr:i32):$sym, 0:i32), GPRC:i32:$rA) - Complexity = 14
                // Dst: (LA:i32 GPRC:i32:$rA, (tglobaladdr:i32):$sym)
              /*SwitchOpcode*/ 17|128,1/*145*/,  TARGET_VAL(PPCISD::Hi),// ->999
/*854*/         OPC_RecordChild0, // #0 = $g
/*855*/         OPC_MoveChild, 0,
/*857*/         OPC_SwitchOpcode /*4 cases */, 32,  TARGET_VAL(ISD::TargetGlobalAddress),// ->893
/*861*/           OPC_MoveParent,
/*862*/           OPC_MoveChild, 1,
/*864*/           OPC_CheckInteger, 0, 
/*866*/           OPC_MoveParent,
/*867*/           OPC_MoveParent,
/*868*/           OPC_RecordChild1, // #1 = $in
/*869*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->881
/*872*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tglobaladdr:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tglobaladdr:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->892
/*883*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tglobaladdr:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tglobaladdr:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetConstantPool),// ->928
/*896*/           OPC_MoveParent,
/*897*/           OPC_MoveChild, 1,
/*899*/           OPC_CheckInteger, 0, 
/*901*/           OPC_MoveParent,
/*902*/           OPC_MoveParent,
/*903*/           OPC_RecordChild1, // #1 = $in
/*904*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->916
/*907*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tconstpool:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tconstpool:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->927
/*918*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tconstpool:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tconstpool:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetJumpTable),// ->963
/*931*/           OPC_MoveParent,
/*932*/           OPC_MoveChild, 1,
/*934*/           OPC_CheckInteger, 0, 
/*936*/           OPC_MoveParent,
/*937*/           OPC_MoveParent,
/*938*/           OPC_RecordChild1, // #1 = $in
/*939*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->951
/*942*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tjumptable:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tjumptable:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->962
/*953*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tjumptable:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tjumptable:i32):$g)
                  0, // EndSwitchType
                /*SwitchOpcode*/ 32,  TARGET_VAL(ISD::TargetBlockAddress),// ->998
/*966*/           OPC_MoveParent,
/*967*/           OPC_MoveChild, 1,
/*969*/           OPC_CheckInteger, 0, 
/*971*/           OPC_MoveParent,
/*972*/           OPC_MoveParent,
/*973*/           OPC_RecordChild1, // #1 = $in
/*974*/           OPC_SwitchType /*2 cases */, 9,  MVT::i64,// ->986
/*977*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i64 (PPChi:i64 (tblockaddress:i64):$g, 0:i64), G8RC:i64:$in) - Complexity = 14
                    // Dst: (ADDIS8:i64 G8RC:i64:$in, (tblockaddress:i64):$g)
                  /*SwitchType*/ 9,  MVT::i32,// ->997
/*988*/             OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                    // Src: (add:i32 (PPChi:i32 (tblockaddress:i32):$g, 0:i32), GPRC:i32:$in) - Complexity = 14
                    // Dst: (ADDIS:i32 GPRC:i32:$in, (tblockaddress:i32):$g)
                  0, // EndSwitchType
                0, // EndSwitchOpcode
              0, // EndSwitchOpcode
/*1000*/    /*Scope*/ 50|128,1/*178*/, /*->1180*/
/*1002*/      OPC_RecordChild0, // #0 = $rA
/*1003*/      OPC_RecordChild1, // #1 = $imm
/*1004*/      OPC_Scope, 113, /*->1119*/ // 6 children in Scope
/*1006*/        OPC_MoveChild, 1,
/*1008*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*1011*/        OPC_Scope, 16, /*->1029*/ // 5 children in Scope
/*1013*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1015*/          OPC_MoveParent,
/*1016*/          OPC_CheckType, MVT::i32,
/*1018*/          OPC_EmitConvertToTarget, 1,
/*1020*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (ADDI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*1029*/        /*Scope*/ 19, /*->1049*/
/*1030*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1032*/          OPC_MoveParent,
/*1033*/          OPC_CheckType, MVT::i32,
/*1035*/          OPC_EmitConvertToTarget, 1,
/*1037*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1040*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS:i32 GPRC:i32:$rA, (HI16:i32 (imm:i32):$imm))
/*1049*/        /*Scope*/ 16, /*->1066*/
/*1050*/          OPC_CheckPredicate, 0, // Predicate_immSExt16
/*1052*/          OPC_MoveParent,
/*1053*/          OPC_CheckType, MVT::i64,
/*1055*/          OPC_EmitConvertToTarget, 1,
/*1057*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 2, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                  // Dst: (ADDI8:i64 G8RC:i64:$rA, (imm:i64):$imm)
/*1066*/        /*Scope*/ 19, /*->1086*/
/*1067*/          OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*1069*/          OPC_MoveParent,
/*1070*/          OPC_CheckType, MVT::i64,
/*1072*/          OPC_EmitConvertToTarget, 1,
/*1074*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*1077*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (add:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm) - Complexity = 7
                  // Dst: (ADDIS8:i64 G8RC:i64:$rA, (HI16:i64 (imm:i64):$imm))
/*1086*/        /*Scope*/ 31, /*->1118*/
/*1087*/          OPC_MoveParent,
/*1088*/          OPC_CheckType, MVT::i32,
/*1090*/          OPC_EmitConvertToTarget, 1,
/*1092*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*1095*/          OPC_EmitNode, TARGET_VAL(PPC::ADDI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*1104*/          OPC_EmitConvertToTarget, 1,
/*1106*/          OPC_EmitNodeXForm, 2, 5, // HA16
/*1109*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (add:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ADDIS:i32 (ADDI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HA16:i32 (imm:i32):$imm))
/*1118*/        0, /*End of Scope*/
/*1119*/      /*Scope*/ 11, /*->1131*/
/*1120*/        OPC_CheckType, MVT::i32,
/*1122*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD4), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADD4:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*1131*/      /*Scope*/ 11, /*->1143*/
/*1132*/        OPC_CheckType, MVT::i64,
/*1134*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADD8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (add:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADD8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*1143*/      /*Scope*/ 11, /*->1155*/
/*1144*/        OPC_CheckType, MVT::v16i8,
/*1146*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (add:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                // Dst: (VADDUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*1155*/      /*Scope*/ 11, /*->1167*/
/*1156*/        OPC_CheckType, MVT::v8i16,
/*1158*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHM), 0,
                    1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                // Src: (add:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                // Dst: (VADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*1167*/      /*Scope*/ 11, /*->1179*/
/*1168*/        OPC_CheckType, MVT::v4i32,
/*1170*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWM), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (add:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VADDUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*1179*/      0, /*End of Scope*/
/*1180*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 72|128,6/*840*/,  TARGET_VAL(ISD::LOAD),// ->2025
/*1185*/    OPC_RecordMemRef,
/*1186*/    OPC_RecordNode,   // #0 = 'ld' chained node
/*1187*/    OPC_RecordChild1, // #1 = $src
/*1188*/    OPC_CheckPredicate, 2, // Predicate_unindexedload
/*1190*/    OPC_Scope, 19, /*->1211*/ // 18 children in Scope
/*1192*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1194*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1196*/      OPC_CheckType, MVT::i32,
/*1198*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1201*/      OPC_EmitMergeInputChains1_0,
/*1202*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1211*/    /*Scope*/ 19, /*->1231*/
/*1212*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1214*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1216*/      OPC_CheckType, MVT::i32,
/*1218*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1221*/      OPC_EmitMergeInputChains1_0,
/*1222*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHA), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHA:i32 iaddr:iPTR:$src)
/*1231*/    /*Scope*/ 19, /*->1251*/
/*1232*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1234*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1236*/      OPC_CheckType, MVT::i32,
/*1238*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1241*/      OPC_EmitMergeInputChains1_0,
/*1242*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1251*/    /*Scope*/ 17, /*->1269*/
/*1252*/      OPC_CheckPredicate, 8, // Predicate_load
/*1254*/      OPC_CheckType, MVT::i32,
/*1256*/      OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1259*/      OPC_EmitMergeInputChains1_0,
/*1260*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZ:i32 iaddr:iPTR:$src)
/*1269*/    /*Scope*/ 19, /*->1289*/
/*1270*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1272*/      OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1274*/      OPC_CheckType, MVT::i32,
/*1276*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1279*/      OPC_EmitMergeInputChains1_0,
/*1280*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
              // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1289*/    /*Scope*/ 19, /*->1309*/
/*1290*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1292*/      OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1294*/      OPC_CheckType, MVT::i32,
/*1296*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1299*/      OPC_EmitMergeInputChains1_0,
/*1300*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
              // Dst: (LHAX:i32 xaddr:iPTR:$src)
/*1309*/    /*Scope*/ 19, /*->1329*/
/*1310*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1312*/      OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1314*/      OPC_CheckType, MVT::i32,
/*1316*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1319*/      OPC_EmitMergeInputChains1_0,
/*1320*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
              // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1329*/    /*Scope*/ 17, /*->1347*/
/*1330*/      OPC_CheckPredicate, 8, // Predicate_load
/*1332*/      OPC_CheckType, MVT::i32,
/*1334*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1337*/      OPC_EmitMergeInputChains1_0,
/*1338*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LWZX:i32 xaddr:iPTR:$src)
/*1347*/    /*Scope*/ 36, /*->1384*/
/*1348*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1350*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1352*/      OPC_CheckType, MVT::i32,
/*1354*/      OPC_Scope, 13, /*->1369*/ // 2 children in Scope
/*1356*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1359*/        OPC_EmitMergeInputChains1_0,
/*1360*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1369*/      /*Scope*/ 13, /*->1383*/
/*1370*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1373*/        OPC_EmitMergeInputChains1_0,
/*1374*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1383*/      0, /*End of Scope*/
/*1384*/    /*Scope*/ 105, /*->1490*/
/*1385*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1387*/      OPC_CheckType, MVT::i32,
/*1389*/      OPC_Scope, 32, /*->1423*/ // 3 children in Scope
/*1391*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1393*/        OPC_Scope, 13, /*->1408*/ // 2 children in Scope
/*1395*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1398*/          OPC_EmitMergeInputChains1_0,
/*1399*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1408*/        /*Scope*/ 13, /*->1422*/
/*1409*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1412*/          OPC_EmitMergeInputChains1_0,
/*1413*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1422*/        0, /*End of Scope*/
/*1423*/      /*Scope*/ 32, /*->1456*/
/*1424*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1426*/        OPC_Scope, 13, /*->1441*/ // 2 children in Scope
/*1428*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1431*/          OPC_EmitMergeInputChains1_0,
/*1432*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ:i32 iaddr:iPTR:$src)
/*1441*/        /*Scope*/ 13, /*->1455*/
/*1442*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1445*/          OPC_EmitMergeInputChains1_0,
/*1446*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX:i32 xaddr:iPTR:$src)
/*1455*/        0, /*End of Scope*/
/*1456*/      /*Scope*/ 32, /*->1489*/
/*1457*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1459*/        OPC_Scope, 13, /*->1474*/ // 2 children in Scope
/*1461*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1464*/          OPC_EmitMergeInputChains1_0,
/*1465*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ:i32 iaddr:iPTR:$src)
/*1474*/        /*Scope*/ 13, /*->1488*/
/*1475*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1478*/          OPC_EmitMergeInputChains1_0,
/*1479*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX:i32 xaddr:iPTR:$src)
/*1488*/        0, /*End of Scope*/
/*1489*/      0, /*End of Scope*/
/*1490*/    /*Scope*/ 70, /*->1561*/
/*1491*/      OPC_CheckPredicate, 5, // Predicate_sextload
/*1493*/      OPC_CheckType, MVT::i64,
/*1495*/      OPC_Scope, 15, /*->1512*/ // 4 children in Scope
/*1497*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1499*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1502*/        OPC_EmitMergeInputChains1_0,
/*1503*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHA8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHA8:i64 iaddr:iPTR:$src)
/*1512*/      /*Scope*/ 15, /*->1528*/
/*1513*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1515*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1518*/        OPC_EmitMergeInputChains1_0,
/*1519*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWA), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWA:i64 ixaddr:iPTR:$src)
/*1528*/      /*Scope*/ 15, /*->1544*/
/*1529*/        OPC_CheckPredicate, 6, // Predicate_sextloadi16
/*1531*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1534*/        OPC_EmitMergeInputChains1_0,
/*1535*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHAX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi16>> - Complexity = 13
                // Dst: (LHAX8:i64 xaddr:iPTR:$src)
/*1544*/      /*Scope*/ 15, /*->1560*/
/*1545*/        OPC_CheckPredicate, 14, // Predicate_sextloadi32
/*1547*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1550*/        OPC_EmitMergeInputChains1_0,
/*1551*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWAX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_sextload>><<P:Predicate_sextloadi32>> - Complexity = 13
                // Dst: (LWAX:i64 xaddr:iPTR:$src)
/*1560*/      0, /*End of Scope*/
/*1561*/    /*Scope*/ 102, /*->1664*/
/*1562*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1564*/      OPC_CheckType, MVT::i64,
/*1566*/      OPC_Scope, 15, /*->1583*/ // 6 children in Scope
/*1568*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1570*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1573*/        OPC_EmitMergeInputChains1_0,
/*1574*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1583*/      /*Scope*/ 15, /*->1599*/
/*1584*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1586*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1589*/        OPC_EmitMergeInputChains1_0,
/*1590*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1599*/      /*Scope*/ 15, /*->1615*/
/*1600*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1602*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1605*/        OPC_EmitMergeInputChains1_0,
/*1606*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1615*/      /*Scope*/ 15, /*->1631*/
/*1616*/        OPC_CheckPredicate, 4, // Predicate_zextloadi8
/*1618*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1621*/        OPC_EmitMergeInputChains1_0,
/*1622*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi8>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1631*/      /*Scope*/ 15, /*->1647*/
/*1632*/        OPC_CheckPredicate, 7, // Predicate_zextloadi16
/*1634*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1637*/        OPC_EmitMergeInputChains1_0,
/*1638*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi16>> - Complexity = 13
                // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1647*/      /*Scope*/ 15, /*->1663*/
/*1648*/        OPC_CheckPredicate, 15, // Predicate_zextloadi32
/*1650*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1653*/        OPC_EmitMergeInputChains1_0,
/*1654*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi32>> - Complexity = 13
                // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1663*/      0, /*End of Scope*/
/*1664*/    /*Scope*/ 34, /*->1699*/
/*1665*/      OPC_CheckPredicate, 8, // Predicate_load
/*1667*/      OPC_CheckType, MVT::i64,
/*1669*/      OPC_Scope, 13, /*->1684*/ // 2 children in Scope
/*1671*/        OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*1674*/        OPC_EmitMergeInputChains1_0,
/*1675*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 ixaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LD:i64 ixaddr:iPTR:$src)
/*1684*/      /*Scope*/ 13, /*->1698*/
/*1685*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1688*/        OPC_EmitMergeInputChains1_0,
/*1689*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                // Dst: (LDX:i64 xaddr:iPTR:$src)
/*1698*/      0, /*End of Scope*/
/*1699*/    /*Scope*/ 36, /*->1736*/
/*1700*/      OPC_CheckPredicate, 3, // Predicate_zextload
/*1702*/      OPC_CheckPredicate, 9, // Predicate_zextloadi1
/*1704*/      OPC_CheckType, MVT::i64,
/*1706*/      OPC_Scope, 13, /*->1721*/ // 2 children in Scope
/*1708*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1711*/        OPC_EmitMergeInputChains1_0,
/*1712*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1721*/      /*Scope*/ 13, /*->1735*/
/*1722*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1725*/        OPC_EmitMergeInputChains1_0,
/*1726*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_zextload>><<P:Predicate_zextloadi1>> - Complexity = 13
                // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1735*/      0, /*End of Scope*/
/*1736*/    /*Scope*/ 10|128,1/*138*/, /*->1876*/
/*1738*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1740*/      OPC_CheckType, MVT::i64,
/*1742*/      OPC_Scope, 32, /*->1776*/ // 4 children in Scope
/*1744*/        OPC_CheckPredicate, 11, // Predicate_extloadi1
/*1746*/        OPC_Scope, 13, /*->1761*/ // 2 children in Scope
/*1748*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1751*/          OPC_EmitMergeInputChains1_0,
/*1752*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1761*/        /*Scope*/ 13, /*->1775*/
/*1762*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1765*/          OPC_EmitMergeInputChains1_0,
/*1766*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi1>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1775*/        0, /*End of Scope*/
/*1776*/      /*Scope*/ 32, /*->1809*/
/*1777*/        OPC_CheckPredicate, 12, // Predicate_extloadi8
/*1779*/        OPC_Scope, 13, /*->1794*/ // 2 children in Scope
/*1781*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1784*/          OPC_EmitMergeInputChains1_0,
/*1785*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZ8:i64 iaddr:iPTR:$src)
/*1794*/        /*Scope*/ 13, /*->1808*/
/*1795*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1798*/          OPC_EmitMergeInputChains1_0,
/*1799*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LBZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi8>> - Complexity = 13
                  // Dst: (LBZX8:i64 xaddr:iPTR:$src)
/*1808*/        0, /*End of Scope*/
/*1809*/      /*Scope*/ 32, /*->1842*/
/*1810*/        OPC_CheckPredicate, 13, // Predicate_extloadi16
/*1812*/        OPC_Scope, 13, /*->1827*/ // 2 children in Scope
/*1814*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1817*/          OPC_EmitMergeInputChains1_0,
/*1818*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZ8:i64 iaddr:iPTR:$src)
/*1827*/        /*Scope*/ 13, /*->1841*/
/*1828*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1831*/          OPC_EmitMergeInputChains1_0,
/*1832*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LHZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi16>> - Complexity = 13
                  // Dst: (LHZX8:i64 xaddr:iPTR:$src)
/*1841*/        0, /*End of Scope*/
/*1842*/      /*Scope*/ 32, /*->1875*/
/*1843*/        OPC_CheckPredicate, 16, // Predicate_extloadi32
/*1845*/        OPC_Scope, 13, /*->1860*/ // 2 children in Scope
/*1847*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1850*/          OPC_EmitMergeInputChains1_0,
/*1851*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZ8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZ8:i64 iaddr:iPTR:$src)
/*1860*/        /*Scope*/ 13, /*->1874*/
/*1861*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1864*/          OPC_EmitMergeInputChains1_0,
/*1865*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LWZX8), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:i64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadi32>> - Complexity = 13
                  // Dst: (LWZX8:i64 xaddr:iPTR:$src)
/*1874*/        0, /*End of Scope*/
/*1875*/      0, /*End of Scope*/
/*1876*/    /*Scope*/ 68, /*->1945*/
/*1877*/      OPC_CheckPredicate, 8, // Predicate_load
/*1879*/      OPC_SwitchType /*2 cases */, 30,  MVT::f32,// ->1912
/*1882*/        OPC_Scope, 13, /*->1897*/ // 2 children in Scope
/*1884*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1887*/          OPC_EmitMergeInputChains1_0,
/*1888*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFS), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFS:f32 iaddr:iPTR:$src)
/*1897*/        /*Scope*/ 13, /*->1911*/
/*1898*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1901*/          OPC_EmitMergeInputChains1_0,
/*1902*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f32 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFSX:f32 xaddr:iPTR:$src)
/*1911*/        0, /*End of Scope*/
              /*SwitchType*/ 30,  MVT::f64,// ->1944
/*1914*/        OPC_Scope, 13, /*->1929*/ // 2 children in Scope
/*1916*/          OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1919*/          OPC_EmitMergeInputChains1_0,
/*1920*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFD), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFD:f64 iaddr:iPTR:$src)
/*1929*/        /*Scope*/ 13, /*->1943*/
/*1930*/          OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1933*/          OPC_EmitMergeInputChains1_0,
/*1934*/          OPC_MorphNodeTo, TARGET_VAL(PPC::LFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 2, 3, 
                  // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
                  // Dst: (LFDX:f64 xaddr:iPTR:$src)
/*1943*/        0, /*End of Scope*/
              0, // EndSwitchType
/*1945*/    /*Scope*/ 60, /*->2006*/
/*1946*/      OPC_CheckPredicate, 10, // Predicate_extload
/*1948*/      OPC_CheckPredicate, 17, // Predicate_extloadf32
/*1950*/      OPC_CheckType, MVT::f64,
/*1952*/      OPC_Scope, 25, /*->1979*/ // 2 children in Scope
/*1954*/        OPC_CheckComplexPat, /*CP*/1, /*#*/1, // SelectAddrImm:$src #2 #3
/*1957*/        OPC_EmitMergeInputChains1_0,
/*1958*/        OPC_EmitNode, TARGET_VAL(PPC::LFS), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*1967*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*1970*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 iaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFS:f32 iaddr:iPTR:$src), F8RC:f64)
/*1979*/      /*Scope*/ 25, /*->2005*/
/*1980*/        OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*1983*/        OPC_EmitMergeInputChains1_0,
/*1984*/        OPC_EmitNode, TARGET_VAL(PPC::LFSX), 0|OPFL_Chain,
                    1/*#VTs*/, MVT::f32, 2/*#Ops*/, 2, 3,  // Results = #4 
/*1993*/        OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*1996*/        OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::f64, 2/*#Ops*/, 4, 5, 
                // Src: (ld:f64 xaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_extload>><<P:Predicate_extloadf32>> - Complexity = 13
                // Dst: (COPY_TO_REGCLASS:f64 (LFSX:f32 xaddr:iPTR:$src), F8RC:f64)
/*2005*/      0, /*End of Scope*/
/*2006*/    /*Scope*/ 17, /*->2024*/
/*2007*/      OPC_CheckPredicate, 8, // Predicate_load
/*2009*/      OPC_CheckType, MVT::v4i32,
/*2011*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*2014*/      OPC_EmitMergeInputChains1_0,
/*2015*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (ld:v4i32 xoaddr:iPTR:$src)<<P:Predicate_unindexedload>><<P:Predicate_load>> - Complexity = 13
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*2024*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 29|128,4/*541*/,  TARGET_VAL(ISD::STORE),// ->2570
/*2029*/    OPC_RecordMemRef,
/*2030*/    OPC_RecordNode,   // #0 = 'st' chained node
/*2031*/    OPC_RecordChild1, // #1 = $rS
/*2032*/    OPC_Scope, 52|128,1/*180*/, /*->2215*/ // 5 children in Scope
/*2035*/      OPC_CheckChild1Type, MVT::i32,
/*2037*/      OPC_RecordChild2, // #2 = $src
/*2038*/      OPC_Scope, 110, /*->2150*/ // 2 children in Scope
/*2040*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2042*/        OPC_Scope, 36, /*->2080*/ // 4 children in Scope
/*2044*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2046*/          OPC_Scope, 15, /*->2063*/ // 2 children in Scope
/*2048*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2050*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2053*/            OPC_EmitMergeInputChains1_0,
/*2054*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB GPRC:i32:$rS, iaddr:iPTR:$src)
/*2063*/          /*Scope*/ 15, /*->2079*/
/*2064*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2066*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2069*/            OPC_EmitMergeInputChains1_0,
/*2070*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH GPRC:i32:$rS, iaddr:iPTR:$src)
/*2079*/          0, /*End of Scope*/
/*2080*/        /*Scope*/ 15, /*->2096*/
/*2081*/          OPC_CheckPredicate, 22, // Predicate_store
/*2083*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2086*/          OPC_EmitMergeInputChains1_0,
/*2087*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STW), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STW GPRC:i32:$rS, iaddr:iPTR:$src)
/*2096*/        /*Scope*/ 36, /*->2133*/
/*2097*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2099*/          OPC_Scope, 15, /*->2116*/ // 2 children in Scope
/*2101*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2103*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2106*/            OPC_EmitMergeInputChains1_0,
/*2107*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2116*/          /*Scope*/ 15, /*->2132*/
/*2117*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2119*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2122*/            OPC_EmitMergeInputChains1_0,
/*2123*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2132*/          0, /*End of Scope*/
/*2133*/        /*Scope*/ 15, /*->2149*/
/*2134*/          OPC_CheckPredicate, 22, // Predicate_store
/*2136*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2139*/          OPC_EmitMergeInputChains1_0,
/*2140*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st GPRC:i32:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STWX GPRC:i32:$rS, xaddr:iPTR:$dst)
/*2149*/        0, /*End of Scope*/
/*2150*/      /*Scope*/ 63, /*->2214*/
/*2151*/        OPC_RecordChild3, // #3 = $ptroff
/*2152*/        OPC_Scope, 40, /*->2194*/ // 2 children in Scope
/*2154*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2156*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2158*/          OPC_Scope, 16, /*->2176*/ // 2 children in Scope
/*2160*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2162*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2165*/            OPC_EmitMergeInputChains1_0,
/*2166*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2176*/          /*Scope*/ 16, /*->2193*/
/*2177*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2179*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2182*/            OPC_EmitMergeInputChains1_0,
/*2183*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2193*/          0, /*End of Scope*/
/*2194*/        /*Scope*/ 18, /*->2213*/
/*2195*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2197*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2199*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2202*/          OPC_EmitMergeInputChains1_0,
/*2203*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STWU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR GPRC:i32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STWU:iPTR GPRC:i32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2213*/        0, /*End of Scope*/
/*2214*/      0, /*End of Scope*/
/*2215*/    /*Scope*/ 60, /*->2276*/
/*2216*/      OPC_CheckChild1Type, MVT::f32,
/*2218*/      OPC_RecordChild2, // #2 = $dst
/*2219*/      OPC_Scope, 34, /*->2255*/ // 2 children in Scope
/*2221*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2223*/        OPC_CheckPredicate, 22, // Predicate_store
/*2225*/        OPC_Scope, 13, /*->2240*/ // 2 children in Scope
/*2227*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2230*/          OPC_EmitMergeInputChains1_0,
/*2231*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFS), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFS F4RC:f32:$rS, iaddr:iPTR:$dst)
/*2240*/        /*Scope*/ 13, /*->2254*/
/*2241*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2244*/          OPC_EmitMergeInputChains1_0,
/*2245*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFSX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F4RC:f32:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFSX F4RC:f32:$frS, xaddr:iPTR:$dst)
/*2254*/        0, /*End of Scope*/
/*2255*/      /*Scope*/ 19, /*->2275*/
/*2256*/        OPC_RecordChild3, // #3 = $ptroff
/*2257*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2259*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2261*/        OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2264*/        OPC_EmitMergeInputChains1_0,
/*2265*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STFSU), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                // Src: (ist:iPTR F4RC:f32:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                // Dst: (STFSU:iPTR F4RC:f32:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2275*/      0, /*End of Scope*/
/*2276*/    /*Scope*/ 60, /*->2337*/
/*2277*/      OPC_CheckChild1Type, MVT::f64,
/*2279*/      OPC_RecordChild2, // #2 = $dst
/*2280*/      OPC_Scope, 34, /*->2316*/ // 2 children in Scope
/*2282*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2284*/        OPC_CheckPredicate, 22, // Predicate_store
/*2286*/        OPC_Scope, 13, /*->2301*/ // 2 children in Scope
/*2288*/          OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$dst #3 #4
/*2291*/          OPC_EmitMergeInputChains1_0,
/*2292*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFD), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$rS, iaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFD F8RC:f64:$rS, iaddr:iPTR:$dst)
/*2301*/        /*Scope*/ 13, /*->2315*/
/*2302*/          OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2305*/          OPC_EmitMergeInputChains1_0,
/*2306*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STFDX), 0|OPFL_Chain|OPFL_MemRefs,
                      0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                  // Src: (st F8RC:f64:$frS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                  // Dst: (STFDX F8RC:f64:$frS, xaddr:iPTR:$dst)
/*2315*/        0, /*End of Scope*/
/*2316*/      /*Scope*/ 19, /*->2336*/
/*2317*/        OPC_RecordChild3, // #3 = $ptroff
/*2318*/        OPC_CheckPredicate, 27, // Predicate_istore
/*2320*/        OPC_CheckPredicate, 28, // Predicate_pre_store
/*2322*/        OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2325*/        OPC_EmitMergeInputChains1_0,
/*2326*/        OPC_MorphNodeTo, TARGET_VAL(PPC::STFDU), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                // Src: (ist:iPTR F8RC:f64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                // Dst: (STFDU:iPTR F8RC:f64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2336*/      0, /*End of Scope*/
/*2337*/    /*Scope*/ 20, /*->2358*/
/*2338*/      OPC_CheckChild1Type, MVT::v4i32,
/*2340*/      OPC_RecordChild2, // #2 = $dst
/*2341*/      OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2343*/      OPC_CheckPredicate, 22, // Predicate_store
/*2345*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*2348*/      OPC_EmitMergeInputChains1_0,
/*2349*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STVX), 0|OPFL_Chain|OPFL_MemRefs,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (st VRRC:v4i32:$rS, xoaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
              // Dst: (STVX VRRC:v4i32:$rS, xoaddr:iPTR:$dst)
/*2358*/    /*Scope*/ 81|128,1/*209*/, /*->2569*/
/*2360*/      OPC_CheckChild1Type, MVT::i64,
/*2362*/      OPC_RecordChild2, // #2 = $src
/*2363*/      OPC_Scope, 10|128,1/*138*/, /*->2504*/ // 2 children in Scope
/*2366*/        OPC_CheckPredicate, 18, // Predicate_unindexedstore
/*2368*/        OPC_Scope, 100, /*->2470*/ // 2 children in Scope
/*2370*/          OPC_CheckPredicate, 19, // Predicate_truncstore
/*2372*/          OPC_Scope, 15, /*->2389*/ // 6 children in Scope
/*2374*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2376*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2379*/            OPC_EmitMergeInputChains1_0,
/*2380*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STB8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STB8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2389*/          /*Scope*/ 15, /*->2405*/
/*2390*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2392*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2395*/            OPC_EmitMergeInputChains1_0,
/*2396*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STH8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STH8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2405*/          /*Scope*/ 15, /*->2421*/
/*2406*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2408*/            OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$src #3 #4
/*2411*/            OPC_EmitMergeInputChains1_0,
/*2412*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STW8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, iaddr:iPTR:$src)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STW8 G8RC:i64:$rS, iaddr:iPTR:$src)
/*2421*/          /*Scope*/ 15, /*->2437*/
/*2422*/            OPC_CheckPredicate, 20, // Predicate_truncstorei8
/*2424*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2427*/            OPC_EmitMergeInputChains1_0,
/*2428*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei8>> - Complexity = 13
                    // Dst: (STBX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2437*/          /*Scope*/ 15, /*->2453*/
/*2438*/            OPC_CheckPredicate, 21, // Predicate_truncstorei16
/*2440*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2443*/            OPC_EmitMergeInputChains1_0,
/*2444*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei16>> - Complexity = 13
                    // Dst: (STHX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2453*/          /*Scope*/ 15, /*->2469*/
/*2454*/            OPC_CheckPredicate, 29, // Predicate_truncstorei32
/*2456*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2459*/            OPC_EmitMergeInputChains1_0,
/*2460*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STWX8), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_truncstore>><<P:Predicate_truncstorei32>> - Complexity = 13
                    // Dst: (STWX8 G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2469*/          0, /*End of Scope*/
/*2470*/        /*Scope*/ 32, /*->2503*/
/*2471*/          OPC_CheckPredicate, 22, // Predicate_store
/*2473*/          OPC_Scope, 13, /*->2488*/ // 2 children in Scope
/*2475*/            OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*2478*/            OPC_EmitMergeInputChains1_0,
/*2479*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STD), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, ixaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STD G8RC:i64:$rS, ixaddr:iPTR:$dst)
/*2488*/          /*Scope*/ 13, /*->2502*/
/*2489*/            OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*2492*/            OPC_EmitMergeInputChains1_0,
/*2493*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STDX), 0|OPFL_Chain|OPFL_MemRefs,
                        0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
                    // Src: (st G8RC:i64:$rS, xaddr:iPTR:$dst)<<P:Predicate_unindexedstore>><<P:Predicate_store>> - Complexity = 13
                    // Dst: (STDX G8RC:i64:$rS, xaddr:iPTR:$dst)
/*2502*/          0, /*End of Scope*/
/*2503*/        0, /*End of Scope*/
/*2504*/      /*Scope*/ 63, /*->2568*/
/*2505*/        OPC_RecordChild3, // #3 = $ptroff
/*2506*/        OPC_Scope, 40, /*->2548*/ // 2 children in Scope
/*2508*/          OPC_CheckPredicate, 23, // Predicate_itruncstore
/*2510*/          OPC_CheckPredicate, 24, // Predicate_pre_truncst
/*2512*/          OPC_Scope, 16, /*->2530*/ // 2 children in Scope
/*2514*/            OPC_CheckPredicate, 25, // Predicate_pre_truncsti8
/*2516*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2519*/            OPC_EmitMergeInputChains1_0,
/*2520*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STBU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti8>> - Complexity = 10
                    // Dst: (STBU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2530*/          /*Scope*/ 16, /*->2547*/
/*2531*/            OPC_CheckPredicate, 26, // Predicate_pre_truncsti16
/*2533*/            OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2536*/            OPC_EmitMergeInputChains1_0,
/*2537*/            OPC_MorphNodeTo, TARGET_VAL(PPC::STHU8), 0|OPFL_Chain|OPFL_MemRefs,
                        1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                    // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_itruncstore>><<P:Predicate_pre_truncst>><<P:Predicate_pre_truncsti16>> - Complexity = 10
                    // Dst: (STHU8:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2547*/          0, /*End of Scope*/
/*2548*/        /*Scope*/ 18, /*->2567*/
/*2549*/          OPC_CheckPredicate, 27, // Predicate_istore
/*2551*/          OPC_CheckPredicate, 28, // Predicate_pre_store
/*2553*/          OPC_CheckComplexPat, /*CP*/4, /*#*/3, // SelectAddrImmOffs:$ptroff #4
/*2556*/          OPC_EmitMergeInputChains1_0,
/*2557*/          OPC_MorphNodeTo, TARGET_VAL(PPC::STDU), 0|OPFL_Chain|OPFL_MemRefs,
                      1/*#VTs*/, MVT::iPTR, 3/*#Ops*/, 1, 4, 2, 
                  // Src: (ist:iPTR G8RC:i64:$rS, ptr_rc:iPTR:$ptrreg, iaddroff:iPTR:$ptroff)<<P:Predicate_istore>><<P:Predicate_pre_store>> - Complexity = 10
                  // Dst: (STDU:iPTR G8RC:i64:$rS, iaddroff:i32:$ptroff, ptr_rc:iPTR:$ptrreg)
/*2567*/        0, /*End of Scope*/
/*2568*/      0, /*End of Scope*/
/*2569*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_ADD),// ->2652
/*2573*/    OPC_RecordMemRef,
/*2574*/    OPC_RecordNode,   // #0 = 'atomic_load_add' chained node
/*2575*/    OPC_RecordChild1, // #1 = $ptr
/*2576*/    OPC_RecordChild2, // #2 = $incr
/*2577*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2633
/*2580*/      OPC_Scope, 16, /*->2598*/ // 3 children in Scope
/*2582*/        OPC_CheckPredicate, 30, // Predicate_atomic_load_add_8
/*2584*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2587*/        OPC_EmitMergeInputChains1_0,
/*2588*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2598*/      /*Scope*/ 16, /*->2615*/
/*2599*/        OPC_CheckPredicate, 31, // Predicate_atomic_load_add_16
/*2601*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2604*/        OPC_EmitMergeInputChains1_0,
/*2605*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2615*/      /*Scope*/ 16, /*->2632*/
/*2616*/        OPC_CheckPredicate, 32, // Predicate_atomic_load_add_32
/*2618*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2621*/        OPC_EmitMergeInputChains1_0,
/*2622*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_add:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_add_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_ADD_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2632*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2651
/*2635*/      OPC_CheckPredicate, 33, // Predicate_atomic_load_add_64
/*2637*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2640*/      OPC_EmitMergeInputChains1_0,
/*2641*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_ADD_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_add:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_add_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_ADD_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_SUB),// ->2734
/*2655*/    OPC_RecordMemRef,
/*2656*/    OPC_RecordNode,   // #0 = 'atomic_load_sub' chained node
/*2657*/    OPC_RecordChild1, // #1 = $ptr
/*2658*/    OPC_RecordChild2, // #2 = $incr
/*2659*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2715
/*2662*/      OPC_Scope, 16, /*->2680*/ // 3 children in Scope
/*2664*/        OPC_CheckPredicate, 34, // Predicate_atomic_load_sub_8
/*2666*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2669*/        OPC_EmitMergeInputChains1_0,
/*2670*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2680*/      /*Scope*/ 16, /*->2697*/
/*2681*/        OPC_CheckPredicate, 35, // Predicate_atomic_load_sub_16
/*2683*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2686*/        OPC_EmitMergeInputChains1_0,
/*2687*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2697*/      /*Scope*/ 16, /*->2714*/
/*2698*/        OPC_CheckPredicate, 36, // Predicate_atomic_load_sub_32
/*2700*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2703*/        OPC_EmitMergeInputChains1_0,
/*2704*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_sub:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_sub_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_SUB_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2714*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2733
/*2717*/      OPC_CheckPredicate, 37, // Predicate_atomic_load_sub_64
/*2719*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2722*/      OPC_EmitMergeInputChains1_0,
/*2723*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_SUB_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_sub:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_sub_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_SUB_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_AND),// ->2816
/*2737*/    OPC_RecordMemRef,
/*2738*/    OPC_RecordNode,   // #0 = 'atomic_load_and' chained node
/*2739*/    OPC_RecordChild1, // #1 = $ptr
/*2740*/    OPC_RecordChild2, // #2 = $incr
/*2741*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2797
/*2744*/      OPC_Scope, 16, /*->2762*/ // 3 children in Scope
/*2746*/        OPC_CheckPredicate, 38, // Predicate_atomic_load_and_8
/*2748*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2751*/        OPC_EmitMergeInputChains1_0,
/*2752*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2762*/      /*Scope*/ 16, /*->2779*/
/*2763*/        OPC_CheckPredicate, 39, // Predicate_atomic_load_and_16
/*2765*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2768*/        OPC_EmitMergeInputChains1_0,
/*2769*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2779*/      /*Scope*/ 16, /*->2796*/
/*2780*/        OPC_CheckPredicate, 40, // Predicate_atomic_load_and_32
/*2782*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2785*/        OPC_EmitMergeInputChains1_0,
/*2786*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_and:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_and_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_AND_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2796*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2815
/*2799*/      OPC_CheckPredicate, 41, // Predicate_atomic_load_and_64
/*2801*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2804*/      OPC_EmitMergeInputChains1_0,
/*2805*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_AND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_and:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_and_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_AND_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_OR),// ->2898
/*2819*/    OPC_RecordMemRef,
/*2820*/    OPC_RecordNode,   // #0 = 'atomic_load_or' chained node
/*2821*/    OPC_RecordChild1, // #1 = $ptr
/*2822*/    OPC_RecordChild2, // #2 = $incr
/*2823*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2879
/*2826*/      OPC_Scope, 16, /*->2844*/ // 3 children in Scope
/*2828*/        OPC_CheckPredicate, 42, // Predicate_atomic_load_or_8
/*2830*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2833*/        OPC_EmitMergeInputChains1_0,
/*2834*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2844*/      /*Scope*/ 16, /*->2861*/
/*2845*/        OPC_CheckPredicate, 43, // Predicate_atomic_load_or_16
/*2847*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2850*/        OPC_EmitMergeInputChains1_0,
/*2851*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2861*/      /*Scope*/ 16, /*->2878*/
/*2862*/        OPC_CheckPredicate, 44, // Predicate_atomic_load_or_32
/*2864*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2867*/        OPC_EmitMergeInputChains1_0,
/*2868*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_or:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_or_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_OR_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2878*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2897
/*2881*/      OPC_CheckPredicate, 45, // Predicate_atomic_load_or_64
/*2883*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2886*/      OPC_EmitMergeInputChains1_0,
/*2887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_OR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_or:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_or_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_OR_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_XOR),// ->2980
/*2901*/    OPC_RecordMemRef,
/*2902*/    OPC_RecordNode,   // #0 = 'atomic_load_xor' chained node
/*2903*/    OPC_RecordChild1, // #1 = $ptr
/*2904*/    OPC_RecordChild2, // #2 = $incr
/*2905*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->2961
/*2908*/      OPC_Scope, 16, /*->2926*/ // 3 children in Scope
/*2910*/        OPC_CheckPredicate, 46, // Predicate_atomic_load_xor_8
/*2912*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2915*/        OPC_EmitMergeInputChains1_0,
/*2916*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2926*/      /*Scope*/ 16, /*->2943*/
/*2927*/        OPC_CheckPredicate, 47, // Predicate_atomic_load_xor_16
/*2929*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2932*/        OPC_EmitMergeInputChains1_0,
/*2933*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2943*/      /*Scope*/ 16, /*->2960*/
/*2944*/        OPC_CheckPredicate, 48, // Predicate_atomic_load_xor_32
/*2946*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2949*/        OPC_EmitMergeInputChains1_0,
/*2950*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_xor:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_xor_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_XOR_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*2960*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->2979
/*2963*/      OPC_CheckPredicate, 49, // Predicate_atomic_load_xor_64
/*2965*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2968*/      OPC_EmitMergeInputChains1_0,
/*2969*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_XOR_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_xor:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_xor_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_XOR_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_LOAD_NAND),// ->3062
/*2983*/    OPC_RecordMemRef,
/*2984*/    OPC_RecordNode,   // #0 = 'atomic_load_nand' chained node
/*2985*/    OPC_RecordChild1, // #1 = $ptr
/*2986*/    OPC_RecordChild2, // #2 = $incr
/*2987*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->3043
/*2990*/      OPC_Scope, 16, /*->3008*/ // 3 children in Scope
/*2992*/        OPC_CheckPredicate, 50, // Predicate_atomic_load_nand_8
/*2994*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*2997*/        OPC_EmitMergeInputChains1_0,
/*2998*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_8>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3008*/      /*Scope*/ 16, /*->3025*/
/*3009*/        OPC_CheckPredicate, 51, // Predicate_atomic_load_nand_16
/*3011*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3014*/        OPC_EmitMergeInputChains1_0,
/*3015*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_16>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3025*/      /*Scope*/ 16, /*->3042*/
/*3026*/        OPC_CheckPredicate, 52, // Predicate_atomic_load_nand_32
/*3028*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3031*/        OPC_EmitMergeInputChains1_0,
/*3032*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_load_nand:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)<<P:Predicate_atomic_load_nand_32>> - Complexity = 13
                // Dst: (ATOMIC_LOAD_NAND_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$incr)
/*3042*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->3061
/*3045*/      OPC_CheckPredicate, 53, // Predicate_atomic_load_nand_64
/*3047*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3050*/      OPC_EmitMergeInputChains1_0,
/*3051*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_LOAD_NAND_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_load_nand:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)<<P:Predicate_atomic_load_nand_64>> - Complexity = 13
              // Dst: (ATOMIC_LOAD_NAND_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$incr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 84,  TARGET_VAL(ISD::ATOMIC_CMP_SWAP),// ->3149
/*3065*/    OPC_RecordMemRef,
/*3066*/    OPC_RecordNode,   // #0 = 'atomic_cmp_swap' chained node
/*3067*/    OPC_RecordChild1, // #1 = $ptr
/*3068*/    OPC_RecordChild2, // #2 = $old
/*3069*/    OPC_RecordChild3, // #3 = $new
/*3070*/    OPC_SwitchType /*2 cases */, 56,  MVT::i32,// ->3129
/*3073*/      OPC_Scope, 17, /*->3092*/ // 3 children in Scope
/*3075*/        OPC_CheckPredicate, 54, // Predicate_atomic_cmp_swap_8
/*3077*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3080*/        OPC_EmitMergeInputChains1_0,
/*3081*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3092*/      /*Scope*/ 17, /*->3110*/
/*3093*/        OPC_CheckPredicate, 55, // Predicate_atomic_cmp_swap_16
/*3095*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3098*/        OPC_EmitMergeInputChains1_0,
/*3099*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3110*/      /*Scope*/ 17, /*->3128*/
/*3111*/        OPC_CheckPredicate, 56, // Predicate_atomic_cmp_swap_32
/*3113*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3116*/        OPC_EmitMergeInputChains1_0,
/*3117*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 4, 5, 2, 3, 
                // Src: (atomic_cmp_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)<<P:Predicate_atomic_cmp_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_CMP_SWAP_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$old, GPRC:i32:$new)
/*3128*/      0, /*End of Scope*/
            /*SwitchType*/ 17,  MVT::i64,// ->3148
/*3131*/      OPC_CheckPredicate, 57, // Predicate_atomic_cmp_swap_64
/*3133*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #4 #5
/*3136*/      OPC_EmitMergeInputChains1_0,
/*3137*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_CMP_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 4/*#Ops*/, 4, 5, 2, 3, 
              // Src: (atomic_cmp_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)<<P:Predicate_atomic_cmp_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_CMP_SWAP_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$old, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 79,  TARGET_VAL(ISD::ATOMIC_SWAP),// ->3231
/*3152*/    OPC_RecordMemRef,
/*3153*/    OPC_RecordNode,   // #0 = 'atomic_swap' chained node
/*3154*/    OPC_RecordChild1, // #1 = $ptr
/*3155*/    OPC_RecordChild2, // #2 = $new
/*3156*/    OPC_SwitchType /*2 cases */, 53,  MVT::i32,// ->3212
/*3159*/      OPC_Scope, 16, /*->3177*/ // 3 children in Scope
/*3161*/        OPC_CheckPredicate, 58, // Predicate_atomic_swap_8
/*3163*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3166*/        OPC_EmitMergeInputChains1_0,
/*3167*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I8), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_8>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I8:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3177*/      /*Scope*/ 16, /*->3194*/
/*3178*/        OPC_CheckPredicate, 59, // Predicate_atomic_swap_16
/*3180*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3183*/        OPC_EmitMergeInputChains1_0,
/*3184*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I16), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_16>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I16:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3194*/      /*Scope*/ 16, /*->3211*/
/*3195*/        OPC_CheckPredicate, 60, // Predicate_atomic_swap_32
/*3197*/        OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3200*/        OPC_EmitMergeInputChains1_0,
/*3201*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I32), 0|OPFL_Chain|OPFL_MemRefs,
                    1/*#VTs*/, MVT::i32, 3/*#Ops*/, 3, 4, 2, 
                // Src: (atomic_swap:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)<<P:Predicate_atomic_swap_32>> - Complexity = 13
                // Dst: (ATOMIC_SWAP_I32:i32 xoaddr:iPTR:$ptr, GPRC:i32:$new)
/*3211*/      0, /*End of Scope*/
            /*SwitchType*/ 16,  MVT::i64,// ->3230
/*3214*/      OPC_CheckPredicate, 61, // Predicate_atomic_swap_64
/*3216*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #3 #4
/*3219*/      OPC_EmitMergeInputChains1_0,
/*3220*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ATOMIC_SWAP_I64), 0|OPFL_Chain|OPFL_MemRefs,
                  1/*#VTs*/, MVT::i64, 3/*#Ops*/, 3, 4, 2, 
              // Src: (atomic_swap:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)<<P:Predicate_atomic_swap_64>> - Complexity = 13
              // Dst: (ATOMIC_SWAP_I64:i64 xoaddr:iPTR:$ptr, G8RC:i64:$new)
            0, // EndSwitchType
          /*SwitchOpcode*/ 48,  TARGET_VAL(PPCISD::DYNALLOC),// ->3282
/*3234*/    OPC_RecordNode,   // #0 = 'PPCdynalloc' chained node
/*3235*/    OPC_RecordChild1, // #1 = $negsize
/*3236*/    OPC_SwitchType /*2 cases */, 20,  MVT::i32,// ->3259
/*3239*/      OPC_CheckChild1Type, MVT::i32,
/*3241*/      OPC_RecordChild2, // #2 = $fpsi
/*3242*/      OPC_CheckChild2Type, MVT::iPTR,
/*3244*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3247*/      OPC_EmitMergeInputChains1_0,
/*3248*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i32, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC:i32:i32 GPRC:i32:$negsize, iaddr:iPTR:$fpsi)
            /*SwitchType*/ 20,  MVT::i64,// ->3281
/*3261*/      OPC_CheckChild1Type, MVT::i64,
/*3263*/      OPC_RecordChild2, // #2 = $fpsi
/*3264*/      OPC_CheckChild2Type, MVT::iPTR,
/*3266*/      OPC_CheckComplexPat, /*CP*/1, /*#*/2, // SelectAddrImm:$fpsi #3 #4
/*3269*/      OPC_EmitMergeInputChains1_0,
/*3270*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DYNALLOC8), 0|OPFL_Chain,
                  2/*#VTs*/, MVT::i64, MVT::i64, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCdynalloc:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi) - Complexity = 12
              // Dst: (DYNALLOC8:i64:i64 G8RC:i64:$negsize, iaddr:iPTR:$fpsi)
            0, // EndSwitchType
          /*SwitchOpcode*/ 34,  TARGET_VAL(PPCISD::LARX),// ->3319
/*3285*/    OPC_RecordNode,   // #0 = 'PPClarx' chained node
/*3286*/    OPC_RecordChild1, // #1 = $src
/*3287*/    OPC_SwitchType /*2 cases */, 13,  MVT::i32,// ->3303
/*3290*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3293*/      OPC_EmitMergeInputChains1_0,
/*3294*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i32 xoaddr:iPTR:$src) - Complexity = 12
              // Dst: (LWARX:i32 xoaddr:iPTR:$src)
            /*SwitchType*/ 13,  MVT::i64,// ->3318
/*3305*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$ptr #2 #3
/*3308*/      OPC_EmitMergeInputChains1_0,
/*3309*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDARX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPClarx:i64 xoaddr:iPTR:$ptr) - Complexity = 12
              // Dst: (LDARX:i64 xoaddr:iPTR:$ptr)
            0, // EndSwitchType
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::STCX),// ->3362
/*3322*/    OPC_RecordNode,   // #0 = 'PPCstcx' chained node
/*3323*/    OPC_RecordChild1, // #1 = $rS
/*3324*/    OPC_Scope, 17, /*->3343*/ // 2 children in Scope
/*3326*/      OPC_CheckChild1Type, MVT::i32,
/*3328*/      OPC_RecordChild2, // #2 = $dst
/*3329*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3332*/      OPC_EmitMergeInputChains1_0,
/*3333*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx GPRC:i32:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STWCX:i32 GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3343*/    /*Scope*/ 17, /*->3361*/
/*3344*/      OPC_CheckChild1Type, MVT::i64,
/*3346*/      OPC_RecordChild2, // #2 = $dst
/*3347*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3350*/      OPC_EmitMergeInputChains1_0,
/*3351*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDCX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstcx G8RC:i64:$rS, xoaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDCX:i32 G8RC:i64:$rS, xoaddr:iPTR:$dst)
/*3361*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 40,  TARGET_VAL(PPCISD::LBRX),// ->3405
/*3365*/    OPC_RecordNode,   // #0 = 'PPClbrx' chained node
/*3366*/    OPC_RecordChild1, // #1 = $src
/*3367*/    OPC_MoveChild, 2,
/*3369*/    OPC_Scope, 16, /*->3387*/ // 2 children in Scope
/*3371*/      OPC_CheckValueType, MVT::i16,
/*3373*/      OPC_MoveParent,
/*3374*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3377*/      OPC_EmitMergeInputChains1_0,
/*3378*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LHBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i16:Other) - Complexity = 12
              // Dst: (LHBRX:i32 xoaddr:iPTR:$src)
/*3387*/    /*Scope*/ 16, /*->3404*/
/*3388*/      OPC_CheckValueType, MVT::i32,
/*3390*/      OPC_MoveParent,
/*3391*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*3394*/      OPC_EmitMergeInputChains1_0,
/*3395*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LWBRX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 2, 3, 
              // Src: (PPClbrx:i32 xoaddr:iPTR:$src, i32:Other) - Complexity = 12
              // Dst: (LWBRX:i32 xoaddr:iPTR:$src)
/*3404*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 41,  TARGET_VAL(PPCISD::STBRX),// ->3449
/*3408*/    OPC_RecordNode,   // #0 = 'PPCstbrx' chained node
/*3409*/    OPC_RecordChild1, // #1 = $rS
/*3410*/    OPC_RecordChild2, // #2 = $dst
/*3411*/    OPC_MoveChild, 3,
/*3413*/    OPC_Scope, 16, /*->3431*/ // 2 children in Scope
/*3415*/      OPC_CheckValueType, MVT::i16,
/*3417*/      OPC_MoveParent,
/*3418*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3421*/      OPC_EmitMergeInputChains1_0,
/*3422*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STHBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i16:Other) - Complexity = 12
              // Dst: (STHBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3431*/    /*Scope*/ 16, /*->3448*/
/*3432*/      OPC_CheckValueType, MVT::i32,
/*3434*/      OPC_MoveParent,
/*3435*/      OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3438*/      OPC_EmitMergeInputChains1_0,
/*3439*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STWBRX), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstbrx GPRC:i32:$rS, xoaddr:iPTR:$dst, i32:Other) - Complexity = 12
              // Dst: (STWBRX GPRC:i32:$rS, xoaddr:iPTR:$dst)
/*3448*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 16,  TARGET_VAL(PPCISD::STFIWX),// ->3468
/*3452*/    OPC_RecordNode,   // #0 = 'PPCstfiwx' chained node
/*3453*/    OPC_RecordChild1, // #1 = $frS
/*3454*/    OPC_RecordChild2, // #2 = $dst
/*3455*/    OPC_CheckComplexPat, /*CP*/0, /*#*/2, // SelectAddrIdxOnly:$dst #3 #4
/*3458*/    OPC_EmitMergeInputChains1_0,
/*3459*/    OPC_MorphNodeTo, TARGET_VAL(PPC::STFIWX), 0|OPFL_Chain,
                0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
            // Src: (PPCstfiwx F8RC:f64:$frS, xoaddr:iPTR:$dst) - Complexity = 12
            // Dst: (STFIWX F8RC:f64:$frS, xoaddr:iPTR:$dst)
          /*SwitchOpcode*/ 37,  TARGET_VAL(PPCISD::LOAD),// ->3508
/*3471*/    OPC_RecordNode,   // #0 = 'PPCload' chained node
/*3472*/    OPC_CaptureGlueInput,
/*3473*/    OPC_RecordChild1, // #1 = $src
/*3474*/    OPC_CheckChild1Type, MVT::iPTR,
/*3476*/    OPC_CheckType, MVT::i64,
/*3478*/    OPC_Scope, 13, /*->3493*/ // 2 children in Scope
/*3480*/      OPC_CheckComplexPat, /*CP*/3, /*#*/1, // SelectAddrImmShift:$src #2 #3
/*3483*/      OPC_EmitMergeInputChains1_0,
/*3484*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LD), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 ixaddr:iPTR:$src) - Complexity = 12
              // Dst: (LD:i64 ixaddr:iPTR:$src)
/*3493*/    /*Scope*/ 13, /*->3507*/
/*3494*/      OPC_CheckComplexPat, /*CP*/2, /*#*/1, // SelectAddrIdx:$src #2 #3
/*3497*/      OPC_EmitMergeInputChains1_0,
/*3498*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LDX), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 2, 3, 
              // Src: (PPCload:i64 xaddr:iPTR:$src) - Complexity = 12
              // Dst: (LDX:i64 xaddr:iPTR:$src)
/*3507*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35,  TARGET_VAL(PPCISD::STD_32),// ->3546
/*3511*/    OPC_RecordNode,   // #0 = 'PPCstd_32' chained node
/*3512*/    OPC_RecordChild1, // #1 = $rT
/*3513*/    OPC_CheckChild1Type, MVT::i32,
/*3515*/    OPC_RecordChild2, // #2 = $dst
/*3516*/    OPC_Scope, 13, /*->3531*/ // 2 children in Scope
/*3518*/      OPC_CheckComplexPat, /*CP*/3, /*#*/2, // SelectAddrImmShift:$dst #3 #4
/*3521*/      OPC_EmitMergeInputChains1_0,
/*3522*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STD_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, ixaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STD_32 GPRC:i32:$rT, ixaddr:iPTR:$dst)
/*3531*/    /*Scope*/ 13, /*->3545*/
/*3532*/      OPC_CheckComplexPat, /*CP*/2, /*#*/2, // SelectAddrIdx:$dst #3 #4
/*3535*/      OPC_EmitMergeInputChains1_0,
/*3536*/      OPC_MorphNodeTo, TARGET_VAL(PPC::STDX_32), 0|OPFL_Chain,
                  0/*#VTs*/, 3/*#Ops*/, 1, 3, 4, 
              // Src: (PPCstd_32 GPRC:i32:$rT, xaddr:iPTR:$dst) - Complexity = 12
              // Dst: (STDX_32 GPRC:i32:$rT, xaddr:iPTR:$dst)
/*3545*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,4/*596*/,  TARGET_VAL(ISD::XOR),// ->4146
/*3550*/    OPC_Scope, 39|128,1/*167*/, /*->3720*/ // 8 children in Scope
/*3553*/      OPC_MoveChild, 0,
/*3555*/      OPC_SwitchOpcode /*3 cases */, 41,  TARGET_VAL(ISD::AND),// ->3600
/*3559*/        OPC_RecordChild0, // #0 = $rS
/*3560*/        OPC_RecordChild1, // #1 = $rB
/*3561*/        OPC_MoveParent,
/*3562*/        OPC_MoveChild, 1,
/*3564*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3575*/        OPC_MoveParent,
/*3576*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3588
/*3579*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (and:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NAND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3599
/*3590*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NAND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (and:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NAND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 41,  TARGET_VAL(ISD::OR),// ->3644
/*3603*/        OPC_RecordChild0, // #0 = $rS
/*3604*/        OPC_RecordChild1, // #1 = $rB
/*3605*/        OPC_MoveParent,
/*3606*/        OPC_MoveChild, 1,
/*3608*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3619*/        OPC_MoveParent,
/*3620*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3632
/*3623*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (or:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                  // Dst: (NOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->3643
/*3634*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 (or:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                  // Dst: (NOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 72,  TARGET_VAL(ISD::XOR),// ->3719
/*3647*/        OPC_RecordChild0, // #0 = $rS
/*3648*/        OPC_Scope, 40, /*->3690*/ // 2 children in Scope
/*3650*/          OPC_RecordChild1, // #1 = $rB
/*3651*/          OPC_MoveParent,
/*3652*/          OPC_MoveChild, 1,
/*3654*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3665*/          OPC_MoveParent,
/*3666*/          OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->3678
/*3669*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB), -1:i32) - Complexity = 11
                    // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                  /*SwitchType*/ 9,  MVT::i64,// ->3689
/*3680*/            OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                    // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB), -1:i64) - Complexity = 11
                    // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                  0, // EndSwitchType
/*3690*/        /*Scope*/ 27, /*->3718*/
/*3691*/          OPC_MoveChild, 1,
/*3693*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3704*/          OPC_MoveParent,
/*3705*/          OPC_MoveParent,
/*3706*/          OPC_RecordChild1, // #1 = $rB
/*3707*/          OPC_CheckType, MVT::i32,
/*3709*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 (xor:i32 GPRC:i32:$rS, -1:i32), GPRC:i32:$rB) - Complexity = 11
                  // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3718*/        0, /*End of Scope*/
              0, // EndSwitchOpcode
/*3720*/    /*Scope*/ 33, /*->3754*/
/*3721*/      OPC_RecordChild0, // #0 = $rB
/*3722*/      OPC_MoveChild, 1,
/*3724*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3727*/      OPC_RecordChild0, // #1 = $rS
/*3728*/      OPC_MoveChild, 1,
/*3730*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3741*/      OPC_MoveParent,
/*3742*/      OPC_MoveParent,
/*3743*/      OPC_CheckType, MVT::i32,
/*3745*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
              // Src: (xor:i32 GPRC:i32:$rB, (xor:i32 GPRC:i32:$rS, -1:i32)) - Complexity = 11
              // Dst: (EQV:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3754*/    /*Scope*/ 33, /*->3788*/
/*3755*/      OPC_MoveChild, 0,
/*3757*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3760*/      OPC_RecordChild0, // #0 = $rS
/*3761*/      OPC_MoveChild, 1,
/*3763*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3774*/      OPC_MoveParent,
/*3775*/      OPC_MoveParent,
/*3776*/      OPC_RecordChild1, // #1 = $rB
/*3777*/      OPC_CheckType, MVT::i64,
/*3779*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (xor:i64 (xor:i64 G8RC:i64:$rS, -1:i64), G8RC:i64:$rB) - Complexity = 11
              // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3788*/    /*Scope*/ 84|128,1/*212*/, /*->4002*/
/*3790*/      OPC_RecordChild0, // #0 = $rB
/*3791*/      OPC_Scope, 59, /*->3852*/ // 2 children in Scope
/*3793*/        OPC_MoveChild, 1,
/*3795*/        OPC_Scope, 30, /*->3827*/ // 2 children in Scope
/*3797*/          OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*3800*/          OPC_RecordChild0, // #1 = $rS
/*3801*/          OPC_MoveChild, 1,
/*3803*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3814*/          OPC_MoveParent,
/*3815*/          OPC_MoveParent,
/*3816*/          OPC_CheckType, MVT::i64,
/*3818*/          OPC_MorphNodeTo, TARGET_VAL(PPC::EQV8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (xor:i64 G8RC:i64:$rB, (xor:i64 G8RC:i64:$rS, -1:i64)) - Complexity = 11
                  // Dst: (EQV8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*3827*/        /*Scope*/ 23, /*->3851*/
/*3828*/          OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*3839*/          OPC_MoveParent,
/*3840*/          OPC_CheckType, MVT::i32,
/*3842*/          OPC_MorphNodeTo, TARGET_VAL(PPC::NOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
                  // Src: (xor:i32 GPRC:i32:$in, -1:i32) - Complexity = 8
                  // Dst: (NOR:i32 GPRC:i32:$in, GPRC:i32:$in)
/*3851*/        0, /*End of Scope*/
/*3852*/      /*Scope*/ 19|128,1/*147*/, /*->4001*/
/*3854*/        OPC_RecordChild1, // #1 = $src2
/*3855*/        OPC_Scope, 119, /*->3976*/ // 3 children in Scope
/*3857*/          OPC_MoveChild, 1,
/*3859*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*3862*/          OPC_Scope, 19, /*->3883*/ // 5 children in Scope
/*3864*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*3866*/            OPC_MoveParent,
/*3867*/            OPC_CheckType, MVT::i32,
/*3869*/            OPC_EmitConvertToTarget, 1,
/*3871*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3874*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*3883*/          /*Scope*/ 19, /*->3903*/
/*3884*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*3886*/            OPC_MoveParent,
/*3887*/            OPC_CheckType, MVT::i32,
/*3889*/            OPC_EmitConvertToTarget, 1,
/*3891*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*3894*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*3903*/          /*Scope*/ 19, /*->3923*/
/*3904*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*3906*/            OPC_MoveParent,
/*3907*/            OPC_CheckType, MVT::i64,
/*3909*/            OPC_EmitConvertToTarget, 1,
/*3911*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3914*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORI8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (XORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*3923*/          /*Scope*/ 19, /*->3943*/
/*3924*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*3926*/            OPC_MoveParent,
/*3927*/            OPC_CheckType, MVT::i64,
/*3929*/            OPC_EmitConvertToTarget, 1,
/*3931*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*3934*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS8), 0,
                        1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                    // Src: (xor:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (XORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*3943*/          /*Scope*/ 31, /*->3975*/
/*3944*/            OPC_MoveParent,
/*3945*/            OPC_CheckType, MVT::i32,
/*3947*/            OPC_EmitConvertToTarget, 1,
/*3949*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*3952*/            OPC_EmitNode, TARGET_VAL(PPC::XORI), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*3961*/            OPC_EmitConvertToTarget, 1,
/*3963*/            OPC_EmitNodeXForm, 0, 5, // HI16
/*3966*/            OPC_MorphNodeTo, TARGET_VAL(PPC::XORIS), 0,
                        1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                    // Src: (xor:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                    // Dst: (XORIS:i32 (XORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*3975*/          0, /*End of Scope*/
/*3976*/        /*Scope*/ 11, /*->3988*/
/*3977*/          OPC_CheckType, MVT::i32,
/*3979*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (XOR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*3988*/        /*Scope*/ 11, /*->4000*/
/*3989*/          OPC_CheckType, MVT::i64,
/*3991*/          OPC_MorphNodeTo, TARGET_VAL(PPC::XOR8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (xor:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (XOR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4000*/        0, /*End of Scope*/
/*4001*/      0, /*End of Scope*/
/*4002*/    /*Scope*/ 70, /*->4073*/
/*4003*/      OPC_MoveChild, 0,
/*4005*/      OPC_SwitchOpcode /*2 cases */, 30,  TARGET_VAL(ISD::OR),// ->4039
/*4009*/        OPC_RecordChild0, // #0 = $vA
/*4010*/        OPC_RecordChild1, // #1 = $vB
/*4011*/        OPC_MoveParent,
/*4012*/        OPC_MoveChild, 1,
/*4014*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4017*/        OPC_MoveChild, 0,
/*4019*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4022*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4024*/        OPC_CheckType, MVT::v16i8,
/*4026*/        OPC_MoveParent,
/*4027*/        OPC_MoveParent,
/*4028*/        OPC_CheckType, MVT::v4i32,
/*4030*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB), (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::BITCAST),// ->4072
/*4042*/        OPC_MoveChild, 0,
/*4044*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4047*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4049*/        OPC_CheckType, MVT::v16i8,
/*4051*/        OPC_MoveParent,
/*4052*/        OPC_MoveParent,
/*4053*/        OPC_MoveChild, 1,
/*4055*/        OPC_CheckOpcode, TARGET_VAL(ISD::OR),
/*4058*/        OPC_RecordChild0, // #0 = $vA
/*4059*/        OPC_RecordChild1, // #1 = $vB
/*4060*/        OPC_MoveParent,
/*4061*/        OPC_CheckType, MVT::v4i32,
/*4063*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)) - Complexity = 13
                // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
              0, // EndSwitchOpcode
/*4073*/    /*Scope*/ 28, /*->4102*/
/*4074*/      OPC_RecordChild0, // #0 = $vA
/*4075*/      OPC_MoveChild, 1,
/*4077*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4080*/      OPC_MoveChild, 0,
/*4082*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4085*/      OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4087*/      OPC_CheckType, MVT::v16i8,
/*4089*/      OPC_MoveParent,
/*4090*/      OPC_MoveParent,
/*4091*/      OPC_CheckType, MVT::v4i32,
/*4093*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4102*/    /*Scope*/ 28, /*->4131*/
/*4103*/      OPC_MoveChild, 0,
/*4105*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4108*/      OPC_MoveChild, 0,
/*4110*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4113*/      OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4115*/      OPC_CheckType, MVT::v16i8,
/*4117*/      OPC_MoveParent,
/*4118*/      OPC_MoveParent,
/*4119*/      OPC_RecordChild1, // #0 = $vA
/*4120*/      OPC_CheckType, MVT::v4i32,
/*4122*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 0, 
              // Src: (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vA) - Complexity = 10
              // Dst: (VNOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vA)
/*4131*/    /*Scope*/ 13, /*->4145*/
/*4132*/      OPC_RecordChild0, // #0 = $vA
/*4133*/      OPC_RecordChild1, // #1 = $vB
/*4134*/      OPC_CheckType, MVT::v4i32,
/*4136*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VXOR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (xor:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VXOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4145*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 9|128,4/*521*/,  TARGET_VAL(ISD::AND),// ->4671
/*4150*/    OPC_Scope, 46, /*->4198*/ // 7 children in Scope
/*4152*/      OPC_RecordChild0, // #0 = $rS
/*4153*/      OPC_MoveChild, 1,
/*4155*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4158*/      OPC_RecordChild0, // #1 = $rB
/*4159*/      OPC_MoveChild, 1,
/*4161*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4172*/      OPC_MoveParent,
/*4173*/      OPC_MoveParent,
/*4174*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4186
/*4177*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (and:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4197
/*4188*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (and:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4198*/    /*Scope*/ 88, /*->4287*/
/*4199*/      OPC_MoveChild, 0,
/*4201*/      OPC_SwitchOpcode /*2 cases */, 41,  TARGET_VAL(ISD::XOR),// ->4246
/*4205*/        OPC_RecordChild0, // #0 = $rB
/*4206*/        OPC_MoveChild, 1,
/*4208*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4219*/        OPC_MoveParent,
/*4220*/        OPC_MoveParent,
/*4221*/        OPC_RecordChild1, // #1 = $rS
/*4222*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4234
/*4225*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                  // Dst: (ANDC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->4245
/*4236*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ANDC8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (and:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                  // Dst: (ANDC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 37,  TARGET_VAL(ISD::ROTL),// ->4286
/*4249*/        OPC_RecordChild0, // #0 = $in
/*4250*/        OPC_RecordChild1, // #1 = $sh
/*4251*/        OPC_CheckChild1Type, MVT::i32,
/*4253*/        OPC_MoveParent,
/*4254*/        OPC_RecordChild1, // #2 = $imm
/*4255*/        OPC_MoveChild, 1,
/*4257*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4260*/        OPC_CheckPredicate, 65, // Predicate_maskimm32
/*4262*/        OPC_MoveParent,
/*4263*/        OPC_CheckType, MVT::i32,
/*4265*/        OPC_EmitConvertToTarget, 2,
/*4267*/        OPC_EmitNodeXForm, 3, 3, // MB
/*4270*/        OPC_EmitConvertToTarget, 2,
/*4272*/        OPC_EmitNodeXForm, 4, 5, // ME
/*4275*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 4, 6, 
                // Src: (and:i32 (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh), (imm:i32)<<P:Predicate_maskimm32>>:$imm) - Complexity = 10
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, (MB:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm), (ME:i32 (imm:i32)<<P:Predicate_maskimm32>>:$imm))
              0, // EndSwitchOpcode
/*4287*/    /*Scope*/ 63|128,1/*191*/, /*->4480*/
/*4289*/      OPC_RecordChild0, // #0 = $src1
/*4290*/      OPC_Scope, 119, /*->4411*/ // 2 children in Scope
/*4292*/        OPC_RecordChild1, // #1 = $src2
/*4293*/        OPC_Scope, 91, /*->4386*/ // 3 children in Scope
/*4295*/          OPC_MoveChild, 1,
/*4297*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4300*/          OPC_Scope, 20, /*->4322*/ // 4 children in Scope
/*4302*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4304*/            OPC_MoveParent,
/*4305*/            OPC_CheckType, MVT::i32,
/*4307*/            OPC_EmitConvertToTarget, 1,
/*4309*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4312*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo:i32:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4322*/          /*Scope*/ 20, /*->4343*/
/*4323*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4325*/            OPC_MoveParent,
/*4326*/            OPC_CheckType, MVT::i32,
/*4328*/            OPC_EmitConvertToTarget, 1,
/*4330*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4333*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo), 0,
                        2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo:i32:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4343*/          /*Scope*/ 20, /*->4364*/
/*4344*/            OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4346*/            OPC_MoveParent,
/*4347*/            OPC_CheckType, MVT::i64,
/*4349*/            OPC_EmitConvertToTarget, 1,
/*4351*/            OPC_EmitNodeXForm, 1, 2, // LO16
/*4354*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDIo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                    // Dst: (ANDIo8:i64:i32 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4364*/          /*Scope*/ 20, /*->4385*/
/*4365*/            OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4367*/            OPC_MoveParent,
/*4368*/            OPC_CheckType, MVT::i64,
/*4370*/            OPC_EmitConvertToTarget, 1,
/*4372*/            OPC_EmitNodeXForm, 0, 2, // HI16
/*4375*/            OPC_MorphNodeTo, TARGET_VAL(PPC::ANDISo8), 0,
                        2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 3, 
                    // Src: (and:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                    // Dst: (ANDISo8:i64:i32 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4385*/          0, /*End of Scope*/
/*4386*/        /*Scope*/ 11, /*->4398*/
/*4387*/          OPC_CheckType, MVT::i32,
/*4389*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                  // Dst: (AND:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4398*/        /*Scope*/ 11, /*->4410*/
/*4399*/          OPC_CheckType, MVT::i64,
/*4401*/          OPC_MorphNodeTo, TARGET_VAL(PPC::AND8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                  // Src: (and:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                  // Dst: (AND8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4410*/        0, /*End of Scope*/
/*4411*/      /*Scope*/ 67, /*->4479*/
/*4412*/        OPC_MoveChild, 1,
/*4414*/        OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4417*/        OPC_Scope, 29, /*->4448*/ // 2 children in Scope
/*4419*/          OPC_RecordChild0, // #1 = $vB
/*4420*/          OPC_MoveChild, 1,
/*4422*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4425*/          OPC_MoveChild, 0,
/*4427*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4430*/          OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4432*/          OPC_CheckType, MVT::v16i8,
/*4434*/          OPC_MoveParent,
/*4435*/          OPC_MoveParent,
/*4436*/          OPC_MoveParent,
/*4437*/          OPC_CheckType, MVT::v4i32,
/*4439*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>))) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4448*/        /*Scope*/ 29, /*->4478*/
/*4449*/          OPC_MoveChild, 0,
/*4451*/          OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4454*/          OPC_MoveChild, 0,
/*4456*/          OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4459*/          OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4461*/          OPC_CheckType, MVT::v16i8,
/*4463*/          OPC_MoveParent,
/*4464*/          OPC_MoveParent,
/*4465*/          OPC_RecordChild1, // #1 = $vB
/*4466*/          OPC_MoveParent,
/*4467*/          OPC_CheckType, MVT::v4i32,
/*4469*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (and:v4i32 VRRC:v4i32:$vA, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB)) - Complexity = 13
                  // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4478*/        0, /*End of Scope*/
/*4479*/      0, /*End of Scope*/
/*4480*/    /*Scope*/ 69, /*->4550*/
/*4481*/      OPC_MoveChild, 0,
/*4483*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4486*/      OPC_Scope, 30, /*->4518*/ // 2 children in Scope
/*4488*/        OPC_RecordChild0, // #0 = $vB
/*4489*/        OPC_MoveChild, 1,
/*4491*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4494*/        OPC_MoveChild, 0,
/*4496*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4499*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4501*/        OPC_CheckType, MVT::v16i8,
/*4503*/        OPC_MoveParent,
/*4504*/        OPC_MoveParent,
/*4505*/        OPC_MoveParent,
/*4506*/        OPC_RecordChild1, // #1 = $vA
/*4507*/        OPC_CheckType, MVT::v4i32,
/*4509*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$vB, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4518*/      /*Scope*/ 30, /*->4549*/
/*4519*/        OPC_MoveChild, 0,
/*4521*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4524*/        OPC_MoveChild, 0,
/*4526*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4529*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4531*/        OPC_CheckType, MVT::v16i8,
/*4533*/        OPC_MoveParent,
/*4534*/        OPC_MoveParent,
/*4535*/        OPC_RecordChild1, // #0 = $vB
/*4536*/        OPC_MoveParent,
/*4537*/        OPC_RecordChild1, // #1 = $vA
/*4538*/        OPC_CheckType, MVT::v4i32,
/*4540*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$vB), VRRC:v4i32:$vA) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4549*/      0, /*End of Scope*/
/*4550*/    /*Scope*/ 35, /*->4586*/
/*4551*/      OPC_RecordChild0, // #0 = $A
/*4552*/      OPC_MoveChild, 1,
/*4554*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4557*/      OPC_MoveChild, 0,
/*4559*/      OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4562*/      OPC_MoveChild, 0,
/*4564*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4567*/      OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4569*/      OPC_CheckType, MVT::v16i8,
/*4571*/      OPC_MoveParent,
/*4572*/      OPC_MoveParent,
/*4573*/      OPC_RecordChild1, // #1 = $B
/*4574*/      OPC_MoveParent,
/*4575*/      OPC_CheckType, MVT::v4i32,
/*4577*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 VRRC:v4i32:$A, (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$B)) - Complexity = 13
              // Dst: (VANDC:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B)
/*4586*/    /*Scope*/ 69, /*->4656*/
/*4587*/      OPC_MoveChild, 0,
/*4589*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4592*/      OPC_Scope, 30, /*->4624*/ // 2 children in Scope
/*4594*/        OPC_RecordChild0, // #0 = $B
/*4595*/        OPC_MoveChild, 1,
/*4597*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4600*/        OPC_MoveChild, 0,
/*4602*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4605*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4607*/        OPC_CheckType, MVT::v16i8,
/*4609*/        OPC_MoveParent,
/*4610*/        OPC_MoveParent,
/*4611*/        OPC_MoveParent,
/*4612*/        OPC_RecordChild1, // #1 = $A
/*4613*/        OPC_CheckType, MVT::v4i32,
/*4615*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 VRRC:v4i32:$B, (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>)), VRRC:v4i32:$A) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B)
/*4624*/      /*Scope*/ 30, /*->4655*/
/*4625*/        OPC_MoveChild, 0,
/*4627*/        OPC_CheckOpcode, TARGET_VAL(ISD::BITCAST),
/*4630*/        OPC_MoveChild, 0,
/*4632*/        OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*4635*/        OPC_CheckPredicate, 64, // Predicate_immAllOnesV
/*4637*/        OPC_CheckType, MVT::v16i8,
/*4639*/        OPC_MoveParent,
/*4640*/        OPC_MoveParent,
/*4641*/        OPC_RecordChild1, // #0 = $B
/*4642*/        OPC_MoveParent,
/*4643*/        OPC_RecordChild1, // #1 = $A
/*4644*/        OPC_CheckType, MVT::v4i32,
/*4646*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VANDC), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 1, 0, 
                // Src: (and:v4i32 (xor:v4i32 (bitconvert:v4i32 (build_vector:v16i8)<<P:Predicate_immAllOnesV>>), VRRC:v4i32:$B), VRRC:v4i32:$A) - Complexity = 13
                // Dst: (VANDC:v4i32 VRRC:v4i32:$A, VRRC:v4i32:$B)
/*4655*/      0, /*End of Scope*/
/*4656*/    /*Scope*/ 13, /*->4670*/
/*4657*/      OPC_RecordChild0, // #0 = $vA
/*4658*/      OPC_RecordChild1, // #1 = $vB
/*4659*/      OPC_CheckType, MVT::v4i32,
/*4661*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAND), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (and:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VAND:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4670*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 2|128,2/*258*/,  TARGET_VAL(ISD::OR),// ->4933
/*4675*/    OPC_Scope, 46, /*->4723*/ // 3 children in Scope
/*4677*/      OPC_RecordChild0, // #0 = $rS
/*4678*/      OPC_MoveChild, 1,
/*4680*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4683*/      OPC_RecordChild0, // #1 = $rB
/*4684*/      OPC_MoveChild, 1,
/*4686*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4697*/      OPC_MoveParent,
/*4698*/      OPC_MoveParent,
/*4699*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4711
/*4702*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, (xor:i32 GPRC:i32:$rB, -1:i32)) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4722
/*4713*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, (xor:i64 G8RC:i64:$rB, -1:i64)) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4723*/    /*Scope*/ 46, /*->4770*/
/*4724*/      OPC_MoveChild, 0,
/*4726*/      OPC_CheckOpcode, TARGET_VAL(ISD::XOR),
/*4729*/      OPC_RecordChild0, // #0 = $rB
/*4730*/      OPC_MoveChild, 1,
/*4732*/      OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*4743*/      OPC_MoveParent,
/*4744*/      OPC_MoveParent,
/*4745*/      OPC_RecordChild1, // #1 = $rS
/*4746*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->4758
/*4749*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (or:i32 (xor:i32 GPRC:i32:$rB, -1:i32), GPRC:i32:$rS) - Complexity = 11
                // Dst: (ORC:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->4769
/*4760*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORC8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                // Src: (or:i64 (xor:i64 G8RC:i64:$rB, -1:i64), G8RC:i64:$rS) - Complexity = 11
                // Dst: (ORC8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
              0, // EndSwitchType
/*4770*/    /*Scope*/ 32|128,1/*160*/, /*->4932*/
/*4772*/      OPC_RecordChild0, // #0 = $src1
/*4773*/      OPC_RecordChild1, // #1 = $src2
/*4774*/      OPC_Scope, 119, /*->4895*/ // 4 children in Scope
/*4776*/        OPC_MoveChild, 1,
/*4778*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*4781*/        OPC_Scope, 19, /*->4802*/ // 5 children in Scope
/*4783*/          OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4785*/          OPC_MoveParent,
/*4786*/          OPC_CheckType, MVT::i32,
/*4788*/          OPC_EmitConvertToTarget, 1,
/*4790*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4793*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI:i32 GPRC:i32:$src1, (LO16:i32 (imm:i32):$src2))
/*4802*/        /*Scope*/ 19, /*->4822*/
/*4803*/          OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4805*/          OPC_MoveParent,
/*4806*/          OPC_CheckType, MVT::i32,
/*4808*/          OPC_EmitConvertToTarget, 1,
/*4810*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4813*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i32 GPRC:i32:$src1, (imm:i32)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS:i32 GPRC:i32:$src1, (HI16:i32 (imm:i32):$src2))
/*4822*/        /*Scope*/ 19, /*->4842*/
/*4823*/          OPC_CheckPredicate, 62, // Predicate_immZExt16
/*4825*/          OPC_MoveParent,
/*4826*/          OPC_CheckType, MVT::i64,
/*4828*/          OPC_EmitConvertToTarget, 1,
/*4830*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4833*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORI8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_immZExt16>><<X:LO16>>:$src2) - Complexity = 7
                  // Dst: (ORI8:i64 G8RC:i64:$src1, (LO16:i32 (imm:i64):$src2))
/*4842*/        /*Scope*/ 19, /*->4862*/
/*4843*/          OPC_CheckPredicate, 63, // Predicate_imm16ShiftedZExt
/*4845*/          OPC_MoveParent,
/*4846*/          OPC_CheckType, MVT::i64,
/*4848*/          OPC_EmitConvertToTarget, 1,
/*4850*/          OPC_EmitNodeXForm, 0, 2, // HI16
/*4853*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 3, 
                  // Src: (or:i64 G8RC:i64:$src1, (imm:i64)<<P:Predicate_imm16ShiftedZExt>><<X:HI16>>:$src2) - Complexity = 7
                  // Dst: (ORIS8:i64 G8RC:i64:$src1, (HI16:i32 (imm:i64):$src2))
/*4862*/        /*Scope*/ 31, /*->4894*/
/*4863*/          OPC_MoveParent,
/*4864*/          OPC_CheckType, MVT::i32,
/*4866*/          OPC_EmitConvertToTarget, 1,
/*4868*/          OPC_EmitNodeXForm, 1, 2, // LO16
/*4871*/          OPC_EmitNode, TARGET_VAL(PPC::ORI), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 3,  // Results = #4 
/*4880*/          OPC_EmitConvertToTarget, 1,
/*4882*/          OPC_EmitNodeXForm, 0, 5, // HI16
/*4885*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ORIS), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 4, 6, 
                  // Src: (or:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                  // Dst: (ORIS:i32 (ORI:i32 GPRC:i32:$in, (LO16:i32 (imm:i32):$imm)), (HI16:i32 (imm:i32):$imm))
/*4894*/        0, /*End of Scope*/
/*4895*/      /*Scope*/ 11, /*->4907*/
/*4896*/        OPC_CheckType, MVT::i32,
/*4898*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (OR:i32 GPRC:i32:$rS, GPRC:i32:$rB)
/*4907*/      /*Scope*/ 11, /*->4919*/
/*4908*/        OPC_CheckType, MVT::i64,
/*4910*/        OPC_MorphNodeTo, TARGET_VAL(PPC::OR8), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (or:i64 G8RC:i64:$rS, G8RC:i64:$rB) - Complexity = 3
                // Dst: (OR8:i64 G8RC:i64:$rS, G8RC:i64:$rB)
/*4919*/      /*Scope*/ 11, /*->4931*/
/*4920*/        OPC_CheckType, MVT::v4i32,
/*4922*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VOR), 0,
                    1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                // Src: (or:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                // Dst: (VOR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*4931*/      0, /*End of Scope*/
/*4932*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 1|128,1/*129*/,  TARGET_VAL(PPCISD::Hi),// ->5066
/*4937*/    OPC_RecordChild0, // #0 = $in
/*4938*/    OPC_MoveChild, 0,
/*4940*/    OPC_SwitchOpcode /*4 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->4972
/*4944*/      OPC_MoveParent,
/*4945*/      OPC_MoveChild, 1,
/*4947*/      OPC_CheckInteger, 0, 
/*4949*/      OPC_MoveParent,
/*4950*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4961
/*4953*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->4971
/*4963*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5003
/*4975*/      OPC_MoveParent,
/*4976*/      OPC_MoveChild, 1,
/*4978*/      OPC_CheckInteger, 0, 
/*4980*/      OPC_MoveParent,
/*4981*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->4992
/*4984*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5002
/*4994*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5034
/*5006*/      OPC_MoveParent,
/*5007*/      OPC_MoveChild, 1,
/*5009*/      OPC_CheckInteger, 0, 
/*5011*/      OPC_MoveParent,
/*5012*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5023
/*5015*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5033
/*5025*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5065
/*5037*/      OPC_MoveParent,
/*5038*/      OPC_MoveChild, 1,
/*5040*/      OPC_CheckInteger, 0, 
/*5042*/      OPC_MoveParent,
/*5043*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5054
/*5046*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPChi:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LIS:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5064
/*5056*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPChi:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LIS8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 1|128,1/*129*/,  TARGET_VAL(PPCISD::Lo),// ->5199
/*5070*/    OPC_RecordChild0, // #0 = $in
/*5071*/    OPC_MoveChild, 0,
/*5073*/    OPC_SwitchOpcode /*4 cases */, 28,  TARGET_VAL(ISD::TargetGlobalAddress),// ->5105
/*5077*/      OPC_MoveParent,
/*5078*/      OPC_MoveChild, 1,
/*5080*/      OPC_CheckInteger, 0, 
/*5082*/      OPC_MoveParent,
/*5083*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5094
/*5086*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tglobaladdr:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tglobaladdr:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5104
/*5096*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tglobaladdr:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tglobaladdr:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetConstantPool),// ->5136
/*5108*/      OPC_MoveParent,
/*5109*/      OPC_MoveChild, 1,
/*5111*/      OPC_CheckInteger, 0, 
/*5113*/      OPC_MoveParent,
/*5114*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5125
/*5117*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tconstpool:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tconstpool:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5135
/*5127*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tconstpool:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tconstpool:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetJumpTable),// ->5167
/*5139*/      OPC_MoveParent,
/*5140*/      OPC_MoveChild, 1,
/*5142*/      OPC_CheckInteger, 0, 
/*5144*/      OPC_MoveParent,
/*5145*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5156
/*5148*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tjumptable:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tjumptable:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5166
/*5158*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tjumptable:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tjumptable:i64):$in)
              0, // EndSwitchType
            /*SwitchOpcode*/ 28,  TARGET_VAL(ISD::TargetBlockAddress),// ->5198
/*5170*/      OPC_MoveParent,
/*5171*/      OPC_MoveChild, 1,
/*5173*/      OPC_CheckInteger, 0, 
/*5175*/      OPC_MoveParent,
/*5176*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5187
/*5179*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (PPClo:i32 (tblockaddress:i32):$in, 0:i32) - Complexity = 11
                // Dst: (LI:i32 (tblockaddress:i32):$in)
              /*SwitchType*/ 8,  MVT::i64,// ->5197
/*5189*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (PPClo:i64 (tblockaddress:i64):$in, 0:i64) - Complexity = 11
                // Dst: (LI8:i64 (tblockaddress:i64):$in)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 118,  TARGET_VAL(ISD::SUB),// ->5320
/*5202*/    OPC_Scope, 28, /*->5232*/ // 2 children in Scope
/*5204*/      OPC_MoveChild, 0,
/*5206*/      OPC_CheckInteger, 0, 
/*5208*/      OPC_MoveParent,
/*5209*/      OPC_RecordChild1, // #0 = $rA
/*5210*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->5221
/*5213*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sub:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                // Dst: (NEG:i32 GPRC:i32:$rA)
              /*SwitchType*/ 8,  MVT::i64,// ->5231
/*5223*/        OPC_MorphNodeTo, TARGET_VAL(PPC::NEG8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sub:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                // Dst: (NEG8:i64 G8RC:i64:$rA)
              0, // EndSwitchType
/*5232*/    /*Scope*/ 86, /*->5319*/
/*5233*/      OPC_RecordChild0, // #0 = $imm
/*5234*/      OPC_Scope, 23, /*->5259*/ // 2 children in Scope
/*5236*/        OPC_MoveChild, 0,
/*5238*/        OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5241*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5243*/        OPC_MoveParent,
/*5244*/        OPC_RecordChild1, // #1 = $in
/*5245*/        OPC_CheckType, MVT::i32,
/*5247*/        OPC_EmitConvertToTarget, 0,
/*5249*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (sub:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$in) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$in, (imm:i32):$imm)
/*5259*/      /*Scope*/ 58, /*->5318*/
/*5260*/        OPC_RecordChild1, // #1 = $rA
/*5261*/        OPC_SwitchType /*5 cases */, 9,  MVT::i32,// ->5273
/*5264*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF), 0,
                      1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                  // Dst: (SUBF:i32 GPRC:i32:$rA, GPRC:i32:$rB)
                /*SwitchType*/ 9,  MVT::i64,// ->5284
/*5275*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBF8), 0,
                      1/*#VTs*/, MVT::i64, 2/*#Ops*/, 1, 0, 
                  // Src: (sub:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                  // Dst: (SUBF8:i64 G8RC:i64:$rA, G8RC:i64:$rB)
                /*SwitchType*/ 9,  MVT::v16i8,// ->5295
/*5286*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBM), 0,
                      1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
                  // Dst: (VSUBUBM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
                /*SwitchType*/ 9,  MVT::v8i16,// ->5306
/*5297*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHM), 0,
                      1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
                  // Dst: (VSUBUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
                /*SwitchType*/ 9,  MVT::v4i32,// ->5317
/*5308*/          OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWM), 0,
                      1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
                  // Src: (sub:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
                  // Dst: (VSUBUWM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
                0, // EndSwitchType
/*5318*/      0, /*End of Scope*/
/*5319*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 102,  TARGET_VAL(ISD::ADDE),// ->5425
/*5323*/    OPC_CaptureGlueInput,
/*5324*/    OPC_RecordChild0, // #0 = $rA
/*5325*/    OPC_Scope, 69, /*->5396*/ // 2 children in Scope
/*5327*/      OPC_MoveChild, 1,
/*5329*/      OPC_Scope, 36, /*->5367*/ // 2 children in Scope
/*5331*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5342*/        OPC_MoveParent,
/*5343*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5355
/*5346*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, -1:i32) - Complexity = 8
                  // Dst: (ADDME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5366
/*5357*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, -1:i64) - Complexity = 8
                  // Dst: (ADDME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5367*/      /*Scope*/ 27, /*->5395*/
/*5368*/        OPC_CheckInteger, 0, 
/*5370*/        OPC_MoveParent,
/*5371*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5383
/*5374*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i32 GPRC:i32:$rA, 0:i32) - Complexity = 8
                  // Dst: (ADDZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5394
/*5385*/          OPC_MorphNodeTo, TARGET_VAL(PPC::ADDZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (adde:i64 G8RC:i64:$rA, 0:i64) - Complexity = 8
                  // Dst: (ADDZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5395*/      0, /*End of Scope*/
/*5396*/    /*Scope*/ 27, /*->5424*/
/*5397*/      OPC_RecordChild1, // #1 = $rB
/*5398*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5411
/*5401*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
                // Dst: (ADDE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5423
/*5413*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (adde:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
                // Dst: (ADDE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5424*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 104,  TARGET_VAL(ISD::SUBE),// ->5532
/*5428*/    OPC_CaptureGlueInput,
/*5429*/    OPC_Scope, 71, /*->5502*/ // 2 children in Scope
/*5431*/      OPC_MoveChild, 0,
/*5433*/      OPC_Scope, 37, /*->5472*/ // 2 children in Scope
/*5435*/        OPC_CheckInteger, 127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,127|128,1/*18446744073709551615*/, 
/*5446*/        OPC_MoveParent,
/*5447*/        OPC_RecordChild1, // #0 = $rA
/*5448*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5460
/*5451*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 -1:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFME:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5471
/*5462*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFME8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 -1:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFME8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5472*/      /*Scope*/ 28, /*->5501*/
/*5473*/        OPC_CheckInteger, 0, 
/*5475*/        OPC_MoveParent,
/*5476*/        OPC_RecordChild1, // #0 = $rA
/*5477*/        OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5489
/*5480*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i32, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i32 0:i32, GPRC:i32:$rA) - Complexity = 8
                  // Dst: (SUBFZE:i32:i32 GPRC:i32:$rA)
                /*SwitchType*/ 9,  MVT::i64,// ->5500
/*5491*/          OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFZE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                      2/*#VTs*/, MVT::i64, MVT::i32, 1/*#Ops*/, 0, 
                  // Src: (sube:i64 0:i64, G8RC:i64:$rA) - Complexity = 8
                  // Dst: (SUBFZE8:i64:i32 G8RC:i64:$rA)
                0, // EndSwitchType
/*5501*/      0, /*End of Scope*/
/*5502*/    /*Scope*/ 28, /*->5531*/
/*5503*/      OPC_RecordChild0, // #0 = $rB
/*5504*/      OPC_RecordChild1, // #1 = $rA
/*5505*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5518
/*5508*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFE:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5530
/*5520*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFE8), 0|OPFL_GlueInput|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (sube:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFE8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5531*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::ADDC),// ->5604
/*5535*/    OPC_RecordChild0, // #0 = $rA
/*5536*/    OPC_RecordChild1, // #1 = $imm
/*5537*/    OPC_Scope, 38, /*->5577*/ // 3 children in Scope
/*5539*/      OPC_MoveChild, 1,
/*5541*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5544*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5546*/      OPC_MoveParent,
/*5547*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5562
/*5550*/        OPC_EmitConvertToTarget, 1,
/*5552*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->5576
/*5564*/        OPC_EmitConvertToTarget, 1,
/*5566*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ADDIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (addc:i64 G8RC:i64:$rA, (imm:i64)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
                // Dst: (ADDIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*5577*/    /*Scope*/ 12, /*->5590*/
/*5578*/      OPC_CheckType, MVT::i32,
/*5580*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (ADDC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*5590*/    /*Scope*/ 12, /*->5603*/
/*5591*/      OPC_CheckType, MVT::i64,
/*5593*/      OPC_MorphNodeTo, TARGET_VAL(PPC::ADDC8), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (addc:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (ADDC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
/*5603*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 50,  TARGET_VAL(ISD::MUL),// ->5657
/*5607*/    OPC_RecordChild0, // #0 = $rA
/*5608*/    OPC_RecordChild1, // #1 = $imm
/*5609*/    OPC_Scope, 21, /*->5632*/ // 3 children in Scope
/*5611*/      OPC_MoveChild, 1,
/*5613*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5616*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5618*/      OPC_MoveParent,
/*5619*/      OPC_CheckType, MVT::i32,
/*5621*/      OPC_EmitConvertToTarget, 1,
/*5623*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLI), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 2, 
              // Src: (mul:i32 GPRC:i32:$rA, (imm:i32)<<P:Predicate_immSExt16>>:$imm) - Complexity = 7
              // Dst: (MULLI:i32 GPRC:i32:$rA, (imm:i32):$imm)
/*5632*/    /*Scope*/ 11, /*->5644*/
/*5633*/      OPC_CheckType, MVT::i32,
/*5635*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULLW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
/*5644*/    /*Scope*/ 11, /*->5656*/
/*5645*/      OPC_CheckType, MVT::i64,
/*5647*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mul:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULLD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
/*5656*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 71,  TARGET_VAL(ISD::SUBC),// ->5731
/*5660*/    OPC_RecordChild0, // #0 = $imm
/*5661*/    OPC_Scope, 39, /*->5702*/ // 2 children in Scope
/*5663*/      OPC_MoveChild, 0,
/*5665*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5668*/      OPC_CheckPredicate, 0, // Predicate_immSExt16
/*5670*/      OPC_MoveParent,
/*5671*/      OPC_RecordChild1, // #1 = $rA
/*5672*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5687
/*5675*/        OPC_EmitConvertToTarget, 0,
/*5677*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i32 (imm:i32)<<P:Predicate_immSExt16>>:$imm, GPRC:i32:$rA) - Complexity = 7
                // Dst: (SUBFIC:i32:i32 GPRC:i32:$rA, (imm:i32):$imm)
              /*SwitchType*/ 12,  MVT::i64,// ->5701
/*5689*/        OPC_EmitConvertToTarget, 0,
/*5691*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFIC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 2, 
                // Src: (subc:i64 (imm:i64)<<P:Predicate_immSExt16>>:$imm, G8RC:i64:$rA) - Complexity = 7
                // Dst: (SUBFIC8:i64:i32 G8RC:i64:$rA, (imm:i64):$imm)
              0, // EndSwitchType
/*5702*/    /*Scope*/ 27, /*->5730*/
/*5703*/      OPC_RecordChild1, // #1 = $rA
/*5704*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5717
/*5707*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i32 GPRC:i32:$rB, GPRC:i32:$rA) - Complexity = 3
                // Dst: (SUBFC:i32:i32 GPRC:i32:$rA, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5729
/*5719*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SUBFC8), 0|OPFL_GlueOutput,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 1, 0, 
                // Src: (subc:i64 G8RC:i64:$rB, G8RC:i64:$rA) - Complexity = 3
                // Dst: (SUBFC8:i64:i32 G8RC:i64:$rA, G8RC:i64:$rB)
              0, // EndSwitchType
/*5730*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 114,  TARGET_VAL(ISD::SRA),// ->5848
/*5734*/    OPC_RecordChild0, // #0 = $rS
/*5735*/    OPC_RecordChild1, // #1 = $SH
/*5736*/    OPC_Scope, 38, /*->5776*/ // 5 children in Scope
/*5738*/      OPC_MoveChild, 1,
/*5740*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5743*/      OPC_CheckType, MVT::i32,
/*5745*/      OPC_MoveParent,
/*5746*/      OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->5761
/*5749*/        OPC_EmitConvertToTarget, 1,
/*5751*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAWI), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i32 GPRC:i32:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRAWI:i32:i32 GPRC:i32:$rS, (imm:i32):$SH)
              /*SwitchType*/ 12,  MVT::i64,// ->5775
/*5763*/        OPC_EmitConvertToTarget, 1,
/*5765*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRADI), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 2, 
                // Src: (sra:i64 G8RC:i64:$rS, (imm:i32):$SH) - Complexity = 6
                // Dst: (SRADI:i64:i32 G8RC:i64:$rS, (imm:i32):$SH)
              0, // EndSwitchType
/*5776*/    /*Scope*/ 28, /*->5805*/
/*5777*/      OPC_CheckChild1Type, MVT::i32,
/*5779*/      OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->5792
/*5782*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                    2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 10,  MVT::i64,// ->5804
/*5794*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                    2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (sra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*5805*/    /*Scope*/ 13, /*->5819*/
/*5806*/      OPC_CheckChild1Type, MVT::v16i8,
/*5808*/      OPC_CheckType, MVT::v16i8,
/*5810*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5819*/    /*Scope*/ 13, /*->5833*/
/*5820*/      OPC_CheckChild1Type, MVT::v8i16,
/*5822*/      OPC_CheckType, MVT::v8i16,
/*5824*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5833*/    /*Scope*/ 13, /*->5847*/
/*5834*/      OPC_CheckChild1Type, MVT::v4i32,
/*5836*/      OPC_CheckType, MVT::v4i32,
/*5838*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (sra:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5847*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SHL),// ->5977
/*5851*/    OPC_RecordChild0, // #0 = $in
/*5852*/    OPC_RecordChild1, // #1 = $imm
/*5853*/    OPC_Scope, 52, /*->5907*/ // 5 children in Scope
/*5855*/      OPC_MoveChild, 1,
/*5857*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5860*/      OPC_CheckType, MVT::i32,
/*5862*/      OPC_MoveParent,
/*5863*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->5887
/*5866*/        OPC_EmitConvertToTarget, 1,
/*5868*/        OPC_EmitInteger, MVT::i32, 0, 
/*5871*/        OPC_EmitConvertToTarget, 1,
/*5873*/        OPC_EmitNodeXForm, 5, 4, // SHL32
/*5876*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 5, 
                // Src: (shl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, (SHL32:i32 (imm:i32):$imm))
              /*SwitchType*/ 17,  MVT::i64,// ->5906
/*5889*/        OPC_EmitConvertToTarget, 1,
/*5891*/        OPC_EmitConvertToTarget, 1,
/*5893*/        OPC_EmitNodeXForm, 6, 3, // SHL64
/*5896*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICR), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 4, 
                // Src: (shl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICR:i64 G8RC:i64:$in, (imm:i32):$imm, (SHL64:i32 (imm:i32):$imm))
              0, // EndSwitchType
/*5907*/    /*Scope*/ 26, /*->5934*/
/*5908*/      OPC_CheckChild1Type, MVT::i32,
/*5910*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->5922
/*5913*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->5933
/*5924*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (shl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*5934*/    /*Scope*/ 13, /*->5948*/
/*5935*/      OPC_CheckChild1Type, MVT::v16i8,
/*5937*/      OPC_CheckType, MVT::v16i8,
/*5939*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*5948*/    /*Scope*/ 13, /*->5962*/
/*5949*/      OPC_CheckChild1Type, MVT::v8i16,
/*5951*/      OPC_CheckType, MVT::v8i16,
/*5953*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*5962*/    /*Scope*/ 13, /*->5976*/
/*5963*/      OPC_CheckChild1Type, MVT::v4i32,
/*5965*/      OPC_CheckType, MVT::v4i32,
/*5967*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (shl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*5976*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 126,  TARGET_VAL(ISD::SRL),// ->6106
/*5980*/    OPC_RecordChild0, // #0 = $in
/*5981*/    OPC_RecordChild1, // #1 = $imm
/*5982*/    OPC_Scope, 52, /*->6036*/ // 5 children in Scope
/*5984*/      OPC_MoveChild, 1,
/*5986*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*5989*/      OPC_CheckType, MVT::i32,
/*5991*/      OPC_MoveParent,
/*5992*/      OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->6016
/*5995*/        OPC_EmitConvertToTarget, 1,
/*5997*/        OPC_EmitNodeXForm, 7, 2, // SRL32
/*6000*/        OPC_EmitConvertToTarget, 1,
/*6002*/        OPC_EmitInteger, MVT::i32, 31, 
/*6005*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 3, 4, 5, 
                // Src: (srl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (SRL32:i32 (imm:i32):$imm), (imm:i32):$imm, 31:i32)
              /*SwitchType*/ 17,  MVT::i64,// ->6035
/*6018*/        OPC_EmitConvertToTarget, 1,
/*6020*/        OPC_EmitNodeXForm, 8, 2, // SRL64
/*6023*/        OPC_EmitConvertToTarget, 1,
/*6025*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 3, 4, 
                // Src: (srl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (SRL64:i32 (imm:i32):$imm), (imm:i32):$imm)
              0, // EndSwitchType
/*6036*/    /*Scope*/ 26, /*->6063*/
/*6037*/      OPC_CheckChild1Type, MVT::i32,
/*6039*/      OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6051
/*6042*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
              /*SwitchType*/ 9,  MVT::i64,// ->6062
/*6053*/        OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                    1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
                // Src: (srl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
                // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
              0, // EndSwitchType
/*6063*/    /*Scope*/ 13, /*->6077*/
/*6064*/      OPC_CheckChild1Type, MVT::v16i8,
/*6066*/      OPC_CheckType, MVT::v16i8,
/*6068*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 3
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*6077*/    /*Scope*/ 13, /*->6091*/
/*6078*/      OPC_CheckChild1Type, MVT::v8i16,
/*6080*/      OPC_CheckType, MVT::v8i16,
/*6082*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 3
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*6091*/    /*Scope*/ 13, /*->6105*/
/*6092*/      OPC_CheckChild1Type, MVT::v4i32,
/*6094*/      OPC_CheckType, MVT::v4i32,
/*6096*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (srl:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 3
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*6105*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 92,  TARGET_VAL(ISD::ROTL),// ->6201
/*6109*/    OPC_RecordChild0, // #0 = $in
/*6110*/    OPC_RecordChild1, // #1 = $imm
/*6111*/    OPC_Scope, 48, /*->6161*/ // 2 children in Scope
/*6113*/      OPC_MoveChild, 1,
/*6115*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6118*/      OPC_CheckType, MVT::i32,
/*6120*/      OPC_MoveParent,
/*6121*/      OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->6143
/*6124*/        OPC_EmitConvertToTarget, 1,
/*6126*/        OPC_EmitInteger, MVT::i32, 0, 
/*6129*/        OPC_EmitInteger, MVT::i32, 31, 
/*6132*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWINM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 2, 3, 4, 
                // Src: (rotl:i32 GPRC:i32:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLWINM:i32 GPRC:i32:$in, (imm:i32):$imm, 0:i32, 31:i32)
              /*SwitchType*/ 15,  MVT::i64,// ->6160
/*6145*/        OPC_EmitConvertToTarget, 1,
/*6147*/        OPC_EmitInteger, MVT::i32, 0, 
/*6150*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 2, 3, 
                // Src: (rotl:i64 G8RC:i64:$in, (imm:i32):$imm) - Complexity = 6
                // Dst: (RLDICL:i64 G8RC:i64:$in, (imm:i32):$imm, 0:i32)
              0, // EndSwitchType
/*6161*/    /*Scope*/ 38, /*->6200*/
/*6162*/      OPC_CheckChild1Type, MVT::i32,
/*6164*/      OPC_SwitchType /*2 cases */, 17,  MVT::i32,// ->6184
/*6167*/        OPC_EmitInteger, MVT::i32, 0, 
/*6170*/        OPC_EmitInteger, MVT::i32, 31, 
/*6173*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLWNM), 0,
                    1/*#VTs*/, MVT::i32, 4/*#Ops*/, 0, 1, 2, 3, 
                // Src: (rotl:i32 GPRC:i32:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLWNM:i32 GPRC:i32:$in, GPRC:i32:$sh, 0:i32, 31:i32)
              /*SwitchType*/ 13,  MVT::i64,// ->6199
/*6186*/        OPC_EmitInteger, MVT::i32, 0, 
/*6189*/        OPC_MorphNodeTo, TARGET_VAL(PPC::RLDCL), 0,
                    1/*#VTs*/, MVT::i64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (rotl:i64 G8RC:i64:$in, GPRC:i32:$sh) - Complexity = 3
                // Dst: (RLDCL:i64 G8RC:i64:$in, GPRC:i32:$sh, 0:i32)
              0, // EndSwitchType
/*6200*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::TOC_ENTRY),// ->6223
/*6204*/    OPC_RecordChild0, // #0 = $disp
/*6205*/    OPC_MoveChild, 0,
/*6207*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetGlobalAddress),
/*6210*/    OPC_MoveParent,
/*6211*/    OPC_RecordChild1, // #1 = $reg
/*6212*/    OPC_CheckType, MVT::i64,
/*6214*/    OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCtoc_entry:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg) - Complexity = 6
            // Dst: (LDtoc:i64 (tglobaladdr:i64):$disp, G8RC:i64:$reg)
          /*SwitchOpcode*/ 97,  TARGET_VAL(ISD::Constant),// ->6323
/*6226*/    OPC_RecordNode,   // #0 = $imm
/*6227*/    OPC_SwitchType /*2 cases */, 59,  MVT::i32,// ->6289
/*6230*/      OPC_Scope, 12, /*->6244*/ // 3 children in Scope
/*6232*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6234*/        OPC_EmitConvertToTarget, 0,
/*6236*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (imm:i32)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI:i32 (imm:i32):$imm)
/*6244*/      /*Scope*/ 15, /*->6260*/
/*6245*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6247*/        OPC_EmitConvertToTarget, 0,
/*6249*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6252*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (imm:i32)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS:i32 (HI16:i32 (imm:i32):$imm))
/*6260*/      /*Scope*/ 27, /*->6288*/
/*6261*/        OPC_EmitConvertToTarget, 0,
/*6263*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6266*/        OPC_EmitNode, TARGET_VAL(PPC::LIS), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2,  // Results = #3 
/*6274*/        OPC_EmitConvertToTarget, 0,
/*6276*/        OPC_EmitNodeXForm, 1, 4, // LO16
/*6279*/        OPC_MorphNodeTo, TARGET_VAL(PPC::ORI), 0,
                    1/*#VTs*/, MVT::i32, 2/*#Ops*/, 3, 5, 
                // Src: (imm:i32):$imm - Complexity = 3
                // Dst: (ORI:i32 (LIS:i32 (HI16:i32 (imm:i32):$imm)), (LO16:i32 (imm:i32):$imm))
/*6288*/      0, /*End of Scope*/
            /*SwitchType*/ 31,  MVT::i64,// ->6322
/*6291*/      OPC_Scope, 12, /*->6305*/ // 2 children in Scope
/*6293*/        OPC_CheckPredicate, 0, // Predicate_immSExt16
/*6295*/        OPC_EmitConvertToTarget, 0,
/*6297*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LI8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (imm:i64)<<P:Predicate_immSExt16>>:$imm - Complexity = 4
                // Dst: (LI8:i64 (imm:i64):$imm)
/*6305*/      /*Scope*/ 15, /*->6321*/
/*6306*/        OPC_CheckPredicate, 1, // Predicate_imm16ShiftedSExt
/*6308*/        OPC_EmitConvertToTarget, 0,
/*6310*/        OPC_EmitNodeXForm, 0, 1, // HI16
/*6313*/        OPC_MorphNodeTo, TARGET_VAL(PPC::LIS8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (imm:i64)<<P:Predicate_imm16ShiftedSExt>><<X:HI16>>:$imm - Complexity = 4
                // Dst: (LIS8:i64 (HI16:i64 (imm:i64):$imm))
/*6321*/      0, /*End of Scope*/
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SHL),// ->6354
/*6326*/    OPC_RecordChild0, // #0 = $rS
/*6327*/    OPC_RecordChild1, // #1 = $rB
/*6328*/    OPC_CheckChild1Type, MVT::i32,
/*6330*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6342
/*6333*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6353
/*6344*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SLD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCshl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SLD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 28,  TARGET_VAL(PPCISD::SRL),// ->6385
/*6357*/    OPC_RecordChild0, // #0 = $rS
/*6358*/    OPC_RecordChild1, // #1 = $rB
/*6359*/    OPC_CheckChild1Type, MVT::i32,
/*6361*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6373
/*6364*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRW:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6384
/*6375*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsrl:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRD:i64 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 30,  TARGET_VAL(PPCISD::SRA),// ->6418
/*6388*/    OPC_RecordChild0, // #0 = $rS
/*6389*/    OPC_RecordChild1, // #1 = $rB
/*6390*/    OPC_CheckChild1Type, MVT::i32,
/*6392*/    OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->6405
/*6395*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAW), 0,
                  2/*#VTs*/, MVT::i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i32 GPRC:i32:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAW:i32:i32 GPRC:i32:$rS, GPRC:i32:$rB)
            /*SwitchType*/ 10,  MVT::i64,// ->6417
/*6407*/      OPC_MorphNodeTo, TARGET_VAL(PPC::SRAD), 0,
                  2/*#VTs*/, MVT::i64, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCsra:i64 G8RC:i64:$rS, GPRC:i32:$rB) - Complexity = 3
              // Dst: (SRAD:i64:i32 G8RC:i64:$rS, GPRC:i32:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::CTLZ),// ->6444
/*6421*/    OPC_RecordChild0, // #0 = $rS
/*6422*/    OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6433
/*6425*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZW), 0,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
              // Src: (ctlz:i32 GPRC:i32:$rS) - Complexity = 3
              // Dst: (CNTLZW:i32 GPRC:i32:$rS)
            /*SwitchType*/ 8,  MVT::i64,// ->6443
/*6435*/      OPC_MorphNodeTo, TARGET_VAL(PPC::CNTLZD), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (ctlz:i64 G8RC:i64:$rS) - Complexity = 3
              // Dst: (CNTLZD:i64 G8RC:i64:$rS)
            0, // EndSwitchType
          /*SwitchOpcode*/ 69,  TARGET_VAL(ISD::SIGN_EXTEND_INREG),// ->6516
/*6447*/    OPC_RecordChild0, // #0 = $rS
/*6448*/    OPC_MoveChild, 1,
/*6450*/    OPC_Scope, 25, /*->6477*/ // 3 children in Scope
/*6452*/      OPC_CheckValueType, MVT::i8,
/*6454*/      OPC_MoveParent,
/*6455*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6466
/*6458*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->6476
/*6468*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSB8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i8:Other) - Complexity = 3
                // Dst: (EXTSB8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*6477*/    /*Scope*/ 25, /*->6503*/
/*6478*/      OPC_CheckValueType, MVT::i16,
/*6480*/      OPC_MoveParent,
/*6481*/      OPC_SwitchType /*2 cases */, 8,  MVT::i32,// ->6492
/*6484*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH), 0,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i32 GPRC:i32:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH:i32 GPRC:i32:$rS)
              /*SwitchType*/ 8,  MVT::i64,// ->6502
/*6494*/        OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSH8), 0,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
                // Src: (sext_inreg:i64 G8RC:i64:$rS, i16:Other) - Complexity = 3
                // Dst: (EXTSH8:i64 G8RC:i64:$rS)
              0, // EndSwitchType
/*6503*/    /*Scope*/ 11, /*->6515*/
/*6504*/      OPC_CheckValueType, MVT::i32,
/*6506*/      OPC_MoveParent,
/*6507*/      OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW), 0,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
              // Src: (sext_inreg:i64 G8RC:i64:$rS, i32:Other) - Complexity = 3
              // Dst: (EXTSW:i64 G8RC:i64:$rS)
/*6515*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::SDIV),// ->6545
/*6519*/    OPC_RecordChild0, // #0 = $rA
/*6520*/    OPC_RecordChild1, // #1 = $rB
/*6521*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6533
/*6524*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6544
/*6535*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (sdiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::UDIV),// ->6574
/*6548*/    OPC_RecordChild0, // #0 = $rA
/*6549*/    OPC_RecordChild1, // #1 = $rB
/*6550*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6562
/*6553*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (DIVWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6573
/*6564*/      OPC_MorphNodeTo, TARGET_VAL(PPC::DIVDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (udiv:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (DIVDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHS),// ->6603
/*6577*/    OPC_RecordChild0, // #0 = $rA
/*6578*/    OPC_RecordChild1, // #1 = $rB
/*6579*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6591
/*6582*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHW), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHW:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6602
/*6593*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHD), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhs:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHD:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::MULHU),// ->6632
/*6606*/    OPC_RecordChild0, // #0 = $rA
/*6607*/    OPC_RecordChild1, // #1 = $rB
/*6608*/    OPC_SwitchType /*2 cases */, 9,  MVT::i32,// ->6620
/*6611*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHWU), 0,
                  1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i32 GPRC:i32:$rA, GPRC:i32:$rB) - Complexity = 3
              // Dst: (MULHWU:i32 GPRC:i32:$rA, GPRC:i32:$rB)
            /*SwitchType*/ 9,  MVT::i64,// ->6631
/*6622*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MULHDU), 0,
                  1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 1, 
              // Src: (mulhu:i64 G8RC:i64:$rA, G8RC:i64:$rB) - Complexity = 3
              // Dst: (MULHDU:i64 G8RC:i64:$rA, G8RC:i64:$rB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::EXTSW_32),// ->6646
/*6635*/    OPC_RecordChild0, // #0 = $rS
/*6636*/    OPC_CheckType, MVT::i32,
/*6638*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32), 0,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 0, 
            // Src: (PPCextsw_32:i32 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32:i32 GPRC:i32:$rS)
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::SIGN_EXTEND),// ->6662
/*6649*/    OPC_RecordChild0, // #0 = $rS
/*6650*/    OPC_CheckChild0Type, MVT::i32,
/*6652*/    OPC_CheckType, MVT::i64,
/*6654*/    OPC_MorphNodeTo, TARGET_VAL(PPC::EXTSW_32_64), 0,
                1/*#VTs*/, MVT::i64, 1/*#Ops*/, 0, 
            // Src: (sext:i64 GPRC:i32:$rS) - Complexity = 3
            // Dst: (EXTSW_32_64:i64 GPRC:i32:$rS)
          /*SwitchOpcode*/ 14,  TARGET_VAL(ISD::ANY_EXTEND),// ->6679
/*6665*/    OPC_RecordChild0, // #0 = $in
/*6666*/    OPC_CheckChild0Type, MVT::i32,
/*6668*/    OPC_CheckType, MVT::i64,
/*6670*/    OPC_MorphNodeTo, TARGET_VAL(PPC::OR4To8), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 0, 
            // Src: (anyext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (OR4To8:i64 GPRC:i32:$in, GPRC:i32:$in)
          /*SwitchOpcode*/ 12,  TARGET_VAL(ISD::TRUNCATE),// ->6694
/*6682*/    OPC_RecordChild0, // #0 = $in
/*6683*/    OPC_CheckType, MVT::i32,
/*6685*/    OPC_MorphNodeTo, TARGET_VAL(PPC::OR8To4), 0,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 0, 0, 
            // Src: (trunc:i32 G8RC:i64:$in) - Complexity = 3
            // Dst: (OR8To4:i32 G8RC:i64:$in, G8RC:i64:$in)
          /*SwitchOpcode*/ 30,  TARGET_VAL(ISD::ZERO_EXTEND),// ->6727
/*6697*/    OPC_RecordChild0, // #0 = $in
/*6698*/    OPC_CheckChild0Type, MVT::i32,
/*6700*/    OPC_CheckType, MVT::i64,
/*6702*/    OPC_EmitNode, TARGET_VAL(PPC::OR4To8), 0,
                1/*#VTs*/, MVT::i64, 2/*#Ops*/, 0, 0,  // Results = #1 
/*6711*/    OPC_EmitInteger, MVT::i32, 0, 
/*6714*/    OPC_EmitInteger, MVT::i32, 32, 
/*6717*/    OPC_MorphNodeTo, TARGET_VAL(PPC::RLDICL), 0,
                1/*#VTs*/, MVT::i64, 3/*#Ops*/, 1, 2, 3, 
            // Src: (zext:i64 GPRC:i32:$in) - Complexity = 3
            // Dst: (RLDICL:i64 (OR4To8:i64 GPRC:i32:$in, GPRC:i32:$in), 0:i32, 32:i32)
          /*SwitchOpcode*/ 61|128,1/*189*/,  TARGET_VAL(ISD::FNEG),// ->6920
/*6731*/    OPC_Scope, 33|128,1/*161*/, /*->6895*/ // 2 children in Scope
/*6734*/      OPC_MoveChild, 0,
/*6736*/      OPC_SwitchOpcode /*3 cases */, 84,  TARGET_VAL(ISD::FADD),// ->6824
/*6740*/        OPC_Scope, 40, /*->6782*/ // 2 children in Scope
/*6742*/          OPC_MoveChild, 0,
/*6744*/          OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6747*/          OPC_RecordChild0, // #0 = $FRA
/*6748*/          OPC_RecordChild1, // #1 = $FRC
/*6749*/          OPC_MoveParent,
/*6750*/          OPC_RecordChild1, // #2 = $FRB
/*6751*/          OPC_MoveParent,
/*6752*/          OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6767
/*6755*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6757*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f64 (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)) - Complexity = 9
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 12,  MVT::f32,// ->6781
/*6769*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6771*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                    // Src: (fneg:f32 (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)) - Complexity = 9
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*6782*/        /*Scope*/ 40, /*->6823*/
/*6783*/          OPC_RecordChild0, // #0 = $FRB
/*6784*/          OPC_MoveChild, 1,
/*6786*/          OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6789*/          OPC_RecordChild0, // #1 = $FRA
/*6790*/          OPC_RecordChild1, // #2 = $FRC
/*6791*/          OPC_MoveParent,
/*6792*/          OPC_MoveParent,
/*6793*/          OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6808
/*6796*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6798*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADD), 0,
                        1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (fneg:f64 (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC))) - Complexity = 9
                    // Dst: (FNMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                  /*SwitchType*/ 12,  MVT::f32,// ->6822
/*6810*/            OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6812*/            OPC_MorphNodeTo, TARGET_VAL(PPC::FNMADDS), 0,
                        1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                    // Src: (fneg:f32 (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC))) - Complexity = 9
                    // Dst: (FNMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                  0, // EndSwitchType
/*6823*/        0, /*End of Scope*/
              /*SwitchOpcode*/ 40,  TARGET_VAL(ISD::FSUB),// ->6867
/*6827*/        OPC_MoveChild, 0,
/*6829*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6832*/        OPC_RecordChild0, // #0 = $FRA
/*6833*/        OPC_RecordChild1, // #1 = $FRC
/*6834*/        OPC_MoveParent,
/*6835*/        OPC_RecordChild1, // #2 = $FRB
/*6836*/        OPC_MoveParent,
/*6837*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6852
/*6840*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6842*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fneg:f64 (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB)) - Complexity = 9
                  // Dst: (FNMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                /*SwitchType*/ 12,  MVT::f32,// ->6866
/*6854*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6856*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                  // Src: (fneg:f32 (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB)) - Complexity = 9
                  // Dst: (FNMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                0, // EndSwitchType
              /*SwitchOpcode*/ 24,  TARGET_VAL(ISD::FABS),// ->6894
/*6870*/        OPC_RecordChild0, // #0 = $frB
/*6871*/        OPC_MoveParent,
/*6872*/        OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->6883
/*6875*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSS), 0,
                      1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                  // Src: (fneg:f32 (fabs:f32 F4RC:f32:$frB)) - Complexity = 6
                  // Dst: (FNABSS:f32 F4RC:f32:$frB)
                /*SwitchType*/ 8,  MVT::f64,// ->6893
/*6885*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNABSD), 0,
                      1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                  // Src: (fneg:f64 (fabs:f64 F8RC:f64:$frB)) - Complexity = 6
                  // Dst: (FNABSD:f64 F8RC:f64:$frB)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*6895*/    /*Scope*/ 23, /*->6919*/
/*6896*/      OPC_RecordChild0, // #0 = $frB
/*6897*/      OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->6908
/*6900*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGS), 0,
                    1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
                // Src: (fneg:f32 F4RC:f32:$frB) - Complexity = 3
                // Dst: (FNEGS:f32 F4RC:f32:$frB)
              /*SwitchType*/ 8,  MVT::f64,// ->6918
/*6910*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FNEGD), 0,
                    1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
                // Src: (fneg:f64 F8RC:f64:$frB) - Complexity = 3
                // Dst: (FNEGD:f64 F8RC:f64:$frB)
              0, // EndSwitchType
/*6919*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 24,  TARGET_VAL(PPCISD::MTFSF),// ->6947
/*6923*/    OPC_CaptureGlueInput,
/*6924*/    OPC_RecordChild0, // #0 = $FM
/*6925*/    OPC_MoveChild, 0,
/*6927*/    OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*6930*/    OPC_CheckType, MVT::i32,
/*6932*/    OPC_MoveParent,
/*6933*/    OPC_RecordChild1, // #1 = $rT
/*6934*/    OPC_RecordChild2, // #2 = $FRB
/*6935*/    OPC_EmitConvertToTarget, 0,
/*6937*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSF), 0|OPFL_GlueInput,
                1/*#VTs*/, MVT::f64, 3/*#Ops*/, 3, 1, 2, 
            // Src: (PPCmtfsf:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB) - Complexity = 6
            // Dst: (MTFSF:f64 (imm:i32):$FM, F8RC:f64:$rT, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 47|128,1/*175*/,  TARGET_VAL(ISD::FADD),// ->7126
/*6951*/    OPC_Scope, 39, /*->6992*/ // 4 children in Scope
/*6953*/      OPC_MoveChild, 0,
/*6955*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*6958*/      OPC_RecordChild0, // #0 = $FRA
/*6959*/      OPC_RecordChild1, // #1 = $FRC
/*6960*/      OPC_MoveParent,
/*6961*/      OPC_RecordChild1, // #2 = $FRB
/*6962*/      OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->6977
/*6965*/        OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6967*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fadd:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB) - Complexity = 6
                // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 12,  MVT::f32,// ->6991
/*6979*/        OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*6981*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fadd:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB) - Complexity = 6
                // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*6992*/    /*Scope*/ 68, /*->7061*/
/*6993*/      OPC_RecordChild0, // #0 = $FRB
/*6994*/      OPC_Scope, 38, /*->7034*/ // 2 children in Scope
/*6996*/        OPC_MoveChild, 1,
/*6998*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7001*/        OPC_RecordChild0, // #1 = $FRA
/*7002*/        OPC_RecordChild1, // #2 = $FRC
/*7003*/        OPC_MoveParent,
/*7004*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7019
/*7007*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7009*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADD), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fadd:f64 F8RC:f64:$FRB, (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC)) - Complexity = 6
                  // Dst: (FMADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
                /*SwitchType*/ 12,  MVT::f32,// ->7033
/*7021*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7023*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FMADDS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fadd:f32 F4RC:f32:$FRB, (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC)) - Complexity = 6
                  // Dst: (FMADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
                0, // EndSwitchType
/*7034*/      /*Scope*/ 25, /*->7060*/
/*7035*/        OPC_RecordChild1, // #1 = $FRB
/*7036*/        OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7048
/*7039*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FADD), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
                  // Dst: (FADD:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
                /*SwitchType*/ 9,  MVT::f32,// ->7059
/*7050*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FADDS), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fadd:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
                  // Dst: (FADDS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
                0, // EndSwitchType
/*7060*/      0, /*End of Scope*/
/*7061*/    /*Scope*/ 23, /*->7085*/
/*7062*/      OPC_MoveChild, 0,
/*7064*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7067*/      OPC_RecordChild0, // #0 = $vA
/*7068*/      OPC_RecordChild1, // #1 = $vC
/*7069*/      OPC_MoveParent,
/*7070*/      OPC_RecordChild1, // #2 = $vB
/*7071*/      OPC_CheckType, MVT::v4f32,
/*7073*/      OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7075*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fadd:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB) - Complexity = 6
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7085*/    /*Scope*/ 39, /*->7125*/
/*7086*/      OPC_RecordChild0, // #0 = $vB
/*7087*/      OPC_Scope, 22, /*->7111*/ // 2 children in Scope
/*7089*/        OPC_MoveChild, 1,
/*7091*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7094*/        OPC_RecordChild0, // #1 = $vA
/*7095*/        OPC_RecordChild1, // #2 = $vC
/*7096*/        OPC_MoveParent,
/*7097*/        OPC_CheckType, MVT::v4f32,
/*7099*/        OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7101*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 1, 2, 0, 
                // Src: (fadd:v4f32 VRRC:v4f32:$vB, (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC)) - Complexity = 6
                // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7111*/      /*Scope*/ 12, /*->7124*/
/*7112*/        OPC_RecordChild1, // #1 = $vB
/*7113*/        OPC_CheckType, MVT::v4f32,
/*7115*/        OPC_MorphNodeTo, TARGET_VAL(PPC::VADDFP), 0,
                    1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
                // Src: (fadd:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
                // Dst: (VADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*7124*/      0, /*End of Scope*/
/*7125*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 35|128,1/*163*/,  TARGET_VAL(ISD::FSUB),// ->7293
/*7130*/    OPC_Scope, 39, /*->7171*/ // 4 children in Scope
/*7132*/      OPC_MoveChild, 0,
/*7134*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7137*/      OPC_RecordChild0, // #0 = $FRA
/*7138*/      OPC_RecordChild1, // #1 = $FRC
/*7139*/      OPC_MoveParent,
/*7140*/      OPC_RecordChild1, // #2 = $FRB
/*7141*/      OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7156
/*7144*/        OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7146*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUB), 0,
                    1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fsub:f64 (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRC), F8RC:f64:$FRB) - Complexity = 6
                // Dst: (FMSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
              /*SwitchType*/ 12,  MVT::f32,// ->7170
/*7158*/        OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7160*/        OPC_MorphNodeTo, TARGET_VAL(PPC::FMSUBS), 0,
                    1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
                // Src: (fsub:f32 (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRC), F4RC:f32:$FRB) - Complexity = 6
                // Dst: (FMSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
              0, // EndSwitchType
/*7171*/    /*Scope*/ 68, /*->7240*/
/*7172*/      OPC_RecordChild0, // #0 = $B
/*7173*/      OPC_Scope, 38, /*->7213*/ // 2 children in Scope
/*7175*/        OPC_MoveChild, 1,
/*7177*/        OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7180*/        OPC_RecordChild0, // #1 = $A
/*7181*/        OPC_RecordChild1, // #2 = $C
/*7182*/        OPC_MoveParent,
/*7183*/        OPC_SwitchType /*2 cases */, 12,  MVT::f64,// ->7198
/*7186*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7188*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUB), 0,
                      1/*#VTs*/, MVT::f64, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fsub:f64 F8RC:f64:$B, (fmul:f64 F8RC:f64:$A, F8RC:f64:$C)) - Complexity = 6
                  // Dst: (FNMSUB:f64 F8RC:f64:$A, F8RC:f64:$C, F8RC:f64:$B)
                /*SwitchType*/ 12,  MVT::f32,// ->7212
/*7200*/          OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7202*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FNMSUBS), 0,
                      1/*#VTs*/, MVT::f32, 3/*#Ops*/, 1, 2, 0, 
                  // Src: (fsub:f32 F4RC:f32:$B, (fmul:f32 F4RC:f32:$A, F4RC:f32:$C)) - Complexity = 6
                  // Dst: (FNMSUBS:f32 F4RC:f32:$A, F4RC:f32:$C, F4RC:f32:$B)
                0, // EndSwitchType
/*7213*/      /*Scope*/ 25, /*->7239*/
/*7214*/        OPC_RecordChild1, // #1 = $FRB
/*7215*/        OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7227
/*7218*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FSUB), 0,
                      1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
                  // Dst: (FSUB:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
                /*SwitchType*/ 9,  MVT::f32,// ->7238
/*7229*/          OPC_MorphNodeTo, TARGET_VAL(PPC::FSUBS), 0,
                      1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
                  // Src: (fsub:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
                  // Dst: (FSUBS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
                0, // EndSwitchType
/*7239*/      0, /*End of Scope*/
/*7240*/    /*Scope*/ 37, /*->7278*/
/*7241*/      OPC_MoveChild, 0,
/*7243*/      OPC_CheckOpcode, TARGET_VAL(ISD::BUILD_VECTOR),
/*7246*/      OPC_CheckPredicate, 66, // Predicate_V_immneg0
/*7248*/      OPC_MoveParent,
/*7249*/      OPC_MoveChild, 1,
/*7251*/      OPC_CheckOpcode, TARGET_VAL(ISD::FSUB),
/*7254*/      OPC_MoveChild, 0,
/*7256*/      OPC_CheckOpcode, TARGET_VAL(ISD::FMUL),
/*7259*/      OPC_RecordChild0, // #0 = $vA
/*7260*/      OPC_RecordChild1, // #1 = $vC
/*7261*/      OPC_MoveParent,
/*7262*/      OPC_RecordChild1, // #2 = $vB
/*7263*/      OPC_MoveParent,
/*7264*/      OPC_CheckType, MVT::v4f32,
/*7266*/      OPC_CheckPatternPredicate, 0, // (!NoExcessFPPrecision)
/*7268*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fsub:v4f32 (build_vector:v4f32)<<P:Predicate_V_immneg0>>, (fsub:v4f32 (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC), VRRC:v4f32:$vB)) - Complexity = 13
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vC, VRRC:v4f32:$vB)
/*7278*/    /*Scope*/ 13, /*->7292*/
/*7279*/      OPC_RecordChild0, // #0 = $vA
/*7280*/      OPC_RecordChild1, // #1 = $vB
/*7281*/      OPC_CheckType, MVT::v4f32,
/*7283*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (fsub:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VSUBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*7292*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIWZ),// ->7307
/*7296*/    OPC_RecordChild0, // #0 = $frB
/*7297*/    OPC_CheckType, MVT::f64,
/*7299*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIWZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctiwz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIWZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 9,  TARGET_VAL(ISD::FP_ROUND),// ->7319
/*7310*/    OPC_RecordChild0, // #0 = $frB
/*7311*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FRSP), 0,
                1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
            // Src: (fround:f32 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FRSP:f32 F8RC:f64:$frB)
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FSQRT),// ->7345
/*7322*/    OPC_RecordChild0, // #0 = $frB
/*7323*/    OPC_SwitchType /*2 cases */, 8,  MVT::f64,// ->7334
/*7326*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRT), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FSQRT:f64 F8RC:f64:$frB)
            /*SwitchType*/ 8,  MVT::f32,// ->7344
/*7336*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSQRTS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fsqrt:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FSQRTS:f32 F4RC:f32:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 23,  TARGET_VAL(ISD::FABS),// ->7371
/*7348*/    OPC_RecordChild0, // #0 = $frB
/*7349*/    OPC_SwitchType /*2 cases */, 8,  MVT::f32,// ->7360
/*7352*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSS), 0,
                  1/*#VTs*/, MVT::f32, 1/*#Ops*/, 0, 
              // Src: (fabs:f32 F4RC:f32:$frB) - Complexity = 3
              // Dst: (FABSS:f32 F4RC:f32:$frB)
            /*SwitchType*/ 8,  MVT::f64,// ->7370
/*7362*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FABSD), 0,
                  1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
              // Src: (fabs:f64 F8RC:f64:$frB) - Complexity = 3
              // Dst: (FABSD:f64 F8RC:f64:$frB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::MFFS),// ->7381
/*7374*/    OPC_MorphNodeTo, TARGET_VAL(PPC::MFFS), 0|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 0/*#Ops*/, 
            // Src: (PPCmffs:f64) - Complexity = 3
            // Dst: (MFFS:f64)
          /*SwitchOpcode*/ 14,  TARGET_VAL(PPCISD::FADDRTZ),// ->7398
/*7384*/    OPC_CaptureGlueInput,
/*7385*/    OPC_RecordChild0, // #0 = $FRA
/*7386*/    OPC_RecordChild1, // #1 = $FRB
/*7387*/    OPC_CheckType, MVT::f64,
/*7389*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FADDrtz), 0|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (PPCfaddrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
            // Dst: (FADDrtz:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::FSEL),// ->7430
/*7401*/    OPC_RecordChild0, // #0 = $FRA
/*7402*/    OPC_RecordChild1, // #1 = $FRC
/*7403*/    OPC_RecordChild2, // #2 = $FRB
/*7404*/    OPC_SwitchType /*2 cases */, 10,  MVT::f64,// ->7417
/*7407*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELD), 0,
                  1/*#VTs*/, MVT::f64, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FSELD:f64 F8RC:f64:$FRA, F8RC:f64:$FRC, F8RC:f64:$FRB)
            /*SwitchType*/ 10,  MVT::f32,// ->7429
/*7419*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FSELS), 0,
                  1/*#VTs*/, MVT::f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (PPCfsel:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FSELS:f32 F8RC:f64:$FRA, F4RC:f32:$FRC, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::FDIV),// ->7459
/*7433*/    OPC_RecordChild0, // #0 = $FRA
/*7434*/    OPC_RecordChild1, // #1 = $FRB
/*7435*/    OPC_SwitchType /*2 cases */, 9,  MVT::f64,// ->7447
/*7438*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIV), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FDIV:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7458
/*7449*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FDIVS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fdiv:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FDIVS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            0, // EndSwitchType
          /*SwitchOpcode*/ 45,  TARGET_VAL(ISD::FMUL),// ->7507
/*7462*/    OPC_RecordChild0, // #0 = $FRA
/*7463*/    OPC_RecordChild1, // #1 = $FRB
/*7464*/    OPC_SwitchType /*3 cases */, 9,  MVT::f64,// ->7476
/*7467*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMUL), 0,
                  1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f64 F8RC:f64:$FRA, F8RC:f64:$FRB) - Complexity = 3
              // Dst: (FMUL:f64 F8RC:f64:$FRA, F8RC:f64:$FRB)
            /*SwitchType*/ 9,  MVT::f32,// ->7487
/*7478*/      OPC_MorphNodeTo, TARGET_VAL(PPC::FMULS), 0,
                  1/*#VTs*/, MVT::f32, 2/*#Ops*/, 0, 1, 
              // Src: (fmul:f32 F4RC:f32:$FRA, F4RC:f32:$FRB) - Complexity = 3
              // Dst: (FMULS:f32 F4RC:f32:$FRA, F4RC:f32:$FRB)
            /*SwitchType*/ 17,  MVT::v4f32,// ->7506
/*7489*/      OPC_EmitNode, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/,  // Results = #2 
/*7496*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (fmul:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 3
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, (V_SET0:v4i32))
            0, // EndSwitchType
          /*SwitchOpcode*/ 13,  TARGET_VAL(ISD::FP_EXTEND),// ->7523
/*7510*/    OPC_RecordChild0, // #0 = $src
/*7511*/    OPC_EmitInteger, MVT::i32, PPC::F8RCRegClassID,
/*7514*/    OPC_MorphNodeTo, TARGET_VAL(TargetOpcode::COPY_TO_REGCLASS), 0,
                1/*#VTs*/, MVT::f64, 2/*#Ops*/, 0, 1, 
            // Src: (fextend:f64 F4RC:f32:$src) - Complexity = 3
            // Dst: (COPY_TO_REGCLASS:f64 F4RC:f32:$src, F8RC:f64)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCFID),// ->7537
/*7526*/    OPC_RecordChild0, // #0 = $frB
/*7527*/    OPC_CheckType, MVT::f64,
/*7529*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCFID), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfcfid:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCFID:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 11,  TARGET_VAL(PPCISD::FCTIDZ),// ->7551
/*7540*/    OPC_RecordChild0, // #0 = $frB
/*7541*/    OPC_CheckType, MVT::f64,
/*7543*/    OPC_MorphNodeTo, TARGET_VAL(PPC::FCTIDZ), 0,
                1/*#VTs*/, MVT::f64, 1/*#Ops*/, 0, 
            // Src: (PPCfctidz:f64 F8RC:f64:$frB) - Complexity = 3
            // Dst: (FCTIDZ:f64 F8RC:f64:$frB)
          /*SwitchOpcode*/ 113,  TARGET_VAL(ISD::INTRINSIC_W_CHAIN),// ->7667
/*7554*/    OPC_RecordNode,   // #0 = 'intrinsic_w_chain' chained node
/*7555*/    OPC_MoveChild, 1,
/*7557*/    OPC_Scope, 18, /*->7577*/ // 6 children in Scope
/*7559*/      OPC_CheckInteger, 57|128,1/*185*/, 
/*7562*/      OPC_MoveParent,
/*7563*/      OPC_RecordChild2, // #1 = $src
/*7564*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7567*/      OPC_EmitMergeInputChains1_0,
/*7568*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEBX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v16i8 185:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEBX:v16i8 xoaddr:iPTR:$src)
/*7577*/    /*Scope*/ 18, /*->7596*/
/*7578*/      OPC_CheckInteger, 58|128,1/*186*/, 
/*7581*/      OPC_MoveParent,
/*7582*/      OPC_RecordChild2, // #1 = $src
/*7583*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7586*/      OPC_EmitMergeInputChains1_0,
/*7587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEHX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v8i16 186:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEHX:v8i16 xoaddr:iPTR:$src)
/*7596*/    /*Scope*/ 18, /*->7615*/
/*7597*/      OPC_CheckInteger, 59|128,1/*187*/, 
/*7600*/      OPC_MoveParent,
/*7601*/      OPC_RecordChild2, // #1 = $src
/*7602*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7605*/      OPC_EmitMergeInputChains1_0,
/*7606*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVEWX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 187:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVEWX:v4i32 xoaddr:iPTR:$src)
/*7615*/    /*Scope*/ 18, /*->7634*/
/*7616*/      OPC_CheckInteger, 62|128,1/*190*/, 
/*7619*/      OPC_MoveParent,
/*7620*/      OPC_RecordChild2, // #1 = $src
/*7621*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7624*/      OPC_EmitMergeInputChains1_0,
/*7625*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVX), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 190:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVX:v4i32 xoaddr:iPTR:$src)
/*7634*/    /*Scope*/ 18, /*->7653*/
/*7635*/      OPC_CheckInteger, 63|128,1/*191*/, 
/*7638*/      OPC_MoveParent,
/*7639*/      OPC_RecordChild2, // #1 = $src
/*7640*/      OPC_CheckComplexPat, /*CP*/0, /*#*/1, // SelectAddrIdxOnly:$src #2 #3
/*7643*/      OPC_EmitMergeInputChains1_0,
/*7644*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVXL), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 3, 
              // Src: (intrinsic_w_chain:v4i32 191:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVXL:v4i32 xoaddr:iPTR:$src)
/*7653*/    /*Scope*/ 12, /*->7666*/
/*7654*/      OPC_CheckInteger, 64|128,1/*192*/, 
/*7657*/      OPC_MoveParent,
/*7658*/      OPC_EmitMergeInputChains1_0,
/*7659*/      OPC_MorphNodeTo, TARGET_VAL(PPC::MFVSCR), 0|OPFL_Chain,
                  1/*#VTs*/, MVT::v8i16, 0/*#Ops*/, 
              // Src: (intrinsic_w_chain:v8i16 192:iPTR) - Complexity = 8
              // Dst: (MFVSCR:v8i16)
/*7666*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 22|128,13/*1686*/,  TARGET_VAL(ISD::INTRINSIC_WO_CHAIN),// ->9357
/*7671*/    OPC_MoveChild, 0,
/*7673*/    OPC_Scope, 17, /*->7692*/ // 103 children in Scope
/*7675*/      OPC_CheckInteger, 60|128,1/*188*/, 
/*7678*/      OPC_MoveParent,
/*7679*/      OPC_RecordChild1, // #0 = $src
/*7680*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*7683*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSL), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 188:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSL:v16i8 xoaddr:iPTR:$src)
/*7692*/    /*Scope*/ 17, /*->7710*/
/*7693*/      OPC_CheckInteger, 61|128,1/*189*/, 
/*7696*/      OPC_MoveParent,
/*7697*/      OPC_RecordChild1, // #0 = $src
/*7698*/      OPC_CheckComplexPat, /*CP*/0, /*#*/0, // SelectAddrIdxOnly:$src #1 #2
/*7701*/      OPC_MorphNodeTo, TARGET_VAL(PPC::LVSR), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 1, 2, 
              // Src: (intrinsic_wo_chain:v16i8 189:iPTR, xoaddr:iPTR:$src) - Complexity = 17
              // Dst: (LVSR:v16i8 xoaddr:iPTR:$src)
/*7710*/    /*Scope*/ 23, /*->7734*/
/*7711*/      OPC_CheckInteger, 112|128,1/*240*/, 
/*7714*/      OPC_MoveParent,
/*7715*/      OPC_RecordChild1, // #0 = $vB
/*7716*/      OPC_RecordChild2, // #1 = $UIMM
/*7717*/      OPC_MoveChild, 2,
/*7719*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7722*/      OPC_MoveParent,
/*7723*/      OPC_EmitConvertToTarget, 1,
/*7725*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCTSXS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4i32 240:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCTSXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*7734*/    /*Scope*/ 23, /*->7758*/
/*7735*/      OPC_CheckInteger, 113|128,1/*241*/, 
/*7738*/      OPC_MoveParent,
/*7739*/      OPC_RecordChild1, // #0 = $vB
/*7740*/      OPC_RecordChild2, // #1 = $UIMM
/*7741*/      OPC_MoveChild, 2,
/*7743*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*7746*/      OPC_MoveParent,
/*7747*/      OPC_EmitConvertToTarget, 1,
/*7749*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCTUXS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4i32 241:iPTR, VRRC:v4f32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCTUXS:v4i32 (imm:i32):$UIMM, VRRC:v4f32:$vB)
/*7758*/    /*Scope*/ 17, /*->7776*/
/*7759*/      OPC_CheckInteger, 124|128,1/*252*/, 
/*7762*/      OPC_MoveParent,
/*7763*/      OPC_RecordChild1, // #0 = $vA
/*7764*/      OPC_RecordChild2, // #1 = $vB
/*7765*/      OPC_RecordChild3, // #2 = $vC
/*7766*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 252:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*7776*/    /*Scope*/ 17, /*->7794*/
/*7777*/      OPC_CheckInteger, 125|128,1/*253*/, 
/*7780*/      OPC_MoveParent,
/*7781*/      OPC_RecordChild1, // #0 = $vA
/*7782*/      OPC_RecordChild2, // #1 = $vB
/*7783*/      OPC_RecordChild3, // #2 = $vC
/*7784*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMHRADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 253:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMHRADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*7794*/    /*Scope*/ 17, /*->7812*/
/*7795*/      OPC_CheckInteger, 5|128,2/*261*/, 
/*7798*/      OPC_MoveParent,
/*7799*/      OPC_RecordChild1, // #0 = $vA
/*7800*/      OPC_RecordChild2, // #1 = $vB
/*7801*/      OPC_RecordChild3, // #2 = $vC
/*7802*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMLADDUHM), 0,
                  1/*#VTs*/, MVT::v8i16, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v8i16 261:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC) - Complexity = 8
              // Dst: (VMLADDUHM:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v8i16:$vC)
/*7812*/    /*Scope*/ 17, /*->7830*/
/*7813*/      OPC_CheckInteger, 21|128,2/*277*/, 
/*7816*/      OPC_MoveParent,
/*7817*/      OPC_RecordChild1, // #0 = $vA
/*7818*/      OPC_RecordChild2, // #1 = $vB
/*7819*/      OPC_RecordChild3, // #2 = $vC
/*7820*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 277:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC) - Complexity = 8
              // Dst: (VPERM:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v16i8:$vC)
/*7830*/    /*Scope*/ 17, /*->7848*/
/*7831*/      OPC_CheckInteger, 38|128,2/*294*/, 
/*7834*/      OPC_MoveParent,
/*7835*/      OPC_RecordChild1, // #0 = $vA
/*7836*/      OPC_RecordChild2, // #1 = $vB
/*7837*/      OPC_RecordChild3, // #2 = $vC
/*7838*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSEL), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 294:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VSEL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, VRRC:v4i32:$vC)
/*7848*/    /*Scope*/ 15, /*->7864*/
/*7849*/      OPC_CheckInteger, 71|128,1/*199*/, 
/*7852*/      OPC_MoveParent,
/*7853*/      OPC_RecordChild1, // #0 = $vA
/*7854*/      OPC_RecordChild2, // #1 = $vB
/*7855*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 199:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*7864*/    /*Scope*/ 15, /*->7880*/
/*7865*/      OPC_CheckInteger, 72|128,1/*200*/, 
/*7868*/      OPC_MoveParent,
/*7869*/      OPC_RecordChild1, // #0 = $vA
/*7870*/      OPC_RecordChild2, // #1 = $vB
/*7871*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 200:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*7880*/    /*Scope*/ 15, /*->7896*/
/*7881*/      OPC_CheckInteger, 73|128,1/*201*/, 
/*7884*/      OPC_MoveParent,
/*7885*/      OPC_RecordChild1, // #0 = $vA
/*7886*/      OPC_RecordChild2, // #1 = $vB
/*7887*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 201:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*7896*/    /*Scope*/ 15, /*->7912*/
/*7897*/      OPC_CheckInteger, 74|128,1/*202*/, 
/*7900*/      OPC_MoveParent,
/*7901*/      OPC_RecordChild1, // #0 = $vA
/*7902*/      OPC_RecordChild2, // #1 = $vB
/*7903*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 202:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*7912*/    /*Scope*/ 15, /*->7928*/
/*7913*/      OPC_CheckInteger, 75|128,1/*203*/, 
/*7916*/      OPC_MoveParent,
/*7917*/      OPC_RecordChild1, // #0 = $vA
/*7918*/      OPC_RecordChild2, // #1 = $vB
/*7919*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 203:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VADDUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*7928*/    /*Scope*/ 15, /*->7944*/
/*7929*/      OPC_CheckInteger, 76|128,1/*204*/, 
/*7932*/      OPC_MoveParent,
/*7933*/      OPC_RecordChild1, // #0 = $vA
/*7934*/      OPC_RecordChild2, // #1 = $vB
/*7935*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 204:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VADDUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*7944*/    /*Scope*/ 15, /*->7960*/
/*7945*/      OPC_CheckInteger, 77|128,1/*205*/, 
/*7948*/      OPC_MoveParent,
/*7949*/      OPC_RecordChild1, // #0 = $vA
/*7950*/      OPC_RecordChild2, // #1 = $vB
/*7951*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VADDUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 205:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VADDUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*7960*/    /*Scope*/ 15, /*->7976*/
/*7961*/      OPC_CheckInteger, 78|128,1/*206*/, 
/*7964*/      OPC_MoveParent,
/*7965*/      OPC_RecordChild1, // #0 = $vA
/*7966*/      OPC_RecordChild2, // #1 = $vB
/*7967*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 206:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*7976*/    /*Scope*/ 15, /*->7992*/
/*7977*/      OPC_CheckInteger, 79|128,1/*207*/, 
/*7980*/      OPC_MoveParent,
/*7981*/      OPC_RecordChild1, // #0 = $vA
/*7982*/      OPC_RecordChild2, // #1 = $vB
/*7983*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 207:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*7992*/    /*Scope*/ 15, /*->8008*/
/*7993*/      OPC_CheckInteger, 80|128,1/*208*/, 
/*7996*/      OPC_MoveParent,
/*7997*/      OPC_RecordChild1, // #0 = $vA
/*7998*/      OPC_RecordChild2, // #1 = $vB
/*7999*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 208:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8008*/    /*Scope*/ 15, /*->8024*/
/*8009*/      OPC_CheckInteger, 81|128,1/*209*/, 
/*8012*/      OPC_MoveParent,
/*8013*/      OPC_RecordChild1, // #0 = $vA
/*8014*/      OPC_RecordChild2, // #1 = $vB
/*8015*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 209:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VAVGUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8024*/    /*Scope*/ 15, /*->8040*/
/*8025*/      OPC_CheckInteger, 82|128,1/*210*/, 
/*8028*/      OPC_MoveParent,
/*8029*/      OPC_RecordChild1, // #0 = $vA
/*8030*/      OPC_RecordChild2, // #1 = $vB
/*8031*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 210:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VAVGUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8040*/    /*Scope*/ 15, /*->8056*/
/*8041*/      OPC_CheckInteger, 83|128,1/*211*/, 
/*8044*/      OPC_MoveParent,
/*8045*/      OPC_RecordChild1, // #0 = $vA
/*8046*/      OPC_RecordChild2, // #1 = $vB
/*8047*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VAVGUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 211:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VAVGUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8056*/    /*Scope*/ 15, /*->8072*/
/*8057*/      OPC_CheckInteger, 118|128,1/*246*/, 
/*8060*/      OPC_MoveParent,
/*8061*/      OPC_RecordChild1, // #0 = $vA
/*8062*/      OPC_RecordChild2, // #1 = $vB
/*8063*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 246:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8072*/    /*Scope*/ 15, /*->8088*/
/*8073*/      OPC_CheckInteger, 119|128,1/*247*/, 
/*8076*/      OPC_MoveParent,
/*8077*/      OPC_RecordChild1, // #0 = $vA
/*8078*/      OPC_RecordChild2, // #1 = $vB
/*8079*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 247:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8088*/    /*Scope*/ 15, /*->8104*/
/*8089*/      OPC_CheckInteger, 120|128,1/*248*/, 
/*8092*/      OPC_MoveParent,
/*8093*/      OPC_RecordChild1, // #0 = $vA
/*8094*/      OPC_RecordChild2, // #1 = $vB
/*8095*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 248:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8104*/    /*Scope*/ 15, /*->8120*/
/*8105*/      OPC_CheckInteger, 121|128,1/*249*/, 
/*8108*/      OPC_MoveParent,
/*8109*/      OPC_RecordChild1, // #0 = $vA
/*8110*/      OPC_RecordChild2, // #1 = $vB
/*8111*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 249:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMAXUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8120*/    /*Scope*/ 15, /*->8136*/
/*8121*/      OPC_CheckInteger, 122|128,1/*250*/, 
/*8124*/      OPC_MoveParent,
/*8125*/      OPC_RecordChild1, // #0 = $vA
/*8126*/      OPC_RecordChild2, // #1 = $vB
/*8127*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 250:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMAXUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8136*/    /*Scope*/ 15, /*->8152*/
/*8137*/      OPC_CheckInteger, 123|128,1/*251*/, 
/*8140*/      OPC_MoveParent,
/*8141*/      OPC_RecordChild1, // #0 = $vA
/*8142*/      OPC_RecordChild2, // #1 = $vB
/*8143*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 251:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMAXUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8152*/    /*Scope*/ 15, /*->8168*/
/*8153*/      OPC_CheckInteger, 127|128,1/*255*/, 
/*8156*/      OPC_MoveParent,
/*8157*/      OPC_RecordChild1, // #0 = $vA
/*8158*/      OPC_RecordChild2, // #1 = $vB
/*8159*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 255:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8168*/    /*Scope*/ 15, /*->8184*/
/*8169*/      OPC_CheckInteger, 0|128,2/*256*/, 
/*8172*/      OPC_MoveParent,
/*8173*/      OPC_RecordChild1, // #0 = $vA
/*8174*/      OPC_RecordChild2, // #1 = $vB
/*8175*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 256:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8184*/    /*Scope*/ 15, /*->8200*/
/*8185*/      OPC_CheckInteger, 1|128,2/*257*/, 
/*8188*/      OPC_MoveParent,
/*8189*/      OPC_RecordChild1, // #0 = $vA
/*8190*/      OPC_RecordChild2, // #1 = $vB
/*8191*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 257:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8200*/    /*Scope*/ 15, /*->8216*/
/*8201*/      OPC_CheckInteger, 2|128,2/*258*/, 
/*8204*/      OPC_MoveParent,
/*8205*/      OPC_RecordChild1, // #0 = $vA
/*8206*/      OPC_RecordChild2, // #1 = $vB
/*8207*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 258:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMINUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8216*/    /*Scope*/ 15, /*->8232*/
/*8217*/      OPC_CheckInteger, 3|128,2/*259*/, 
/*8220*/      OPC_MoveParent,
/*8221*/      OPC_RecordChild1, // #0 = $vA
/*8222*/      OPC_RecordChild2, // #1 = $vB
/*8223*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 259:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMINUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8232*/    /*Scope*/ 15, /*->8248*/
/*8233*/      OPC_CheckInteger, 4|128,2/*260*/, 
/*8236*/      OPC_MoveParent,
/*8237*/      OPC_RecordChild1, // #0 = $vA
/*8238*/      OPC_RecordChild2, // #1 = $vB
/*8239*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 260:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VMINUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8248*/    /*Scope*/ 17, /*->8266*/
/*8249*/      OPC_CheckInteger, 6|128,2/*262*/, 
/*8252*/      OPC_MoveParent,
/*8253*/      OPC_RecordChild1, // #0 = $vA
/*8254*/      OPC_RecordChild2, // #1 = $vB
/*8255*/      OPC_RecordChild3, // #2 = $vC
/*8256*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMMBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 262:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMMBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8266*/    /*Scope*/ 17, /*->8284*/
/*8267*/      OPC_CheckInteger, 7|128,2/*263*/, 
/*8270*/      OPC_MoveParent,
/*8271*/      OPC_RecordChild1, // #0 = $vA
/*8272*/      OPC_RecordChild2, // #1 = $vB
/*8273*/      OPC_RecordChild3, // #2 = $vC
/*8274*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 263:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8284*/    /*Scope*/ 17, /*->8302*/
/*8285*/      OPC_CheckInteger, 8|128,2/*264*/, 
/*8288*/      OPC_MoveParent,
/*8289*/      OPC_RecordChild1, // #0 = $vA
/*8290*/      OPC_RecordChild2, // #1 = $vB
/*8291*/      OPC_RecordChild3, // #2 = $vC
/*8292*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMSHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 264:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMSHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8302*/    /*Scope*/ 17, /*->8320*/
/*8303*/      OPC_CheckInteger, 9|128,2/*265*/, 
/*8306*/      OPC_MoveParent,
/*8307*/      OPC_RecordChild1, // #0 = $vA
/*8308*/      OPC_RecordChild2, // #1 = $vB
/*8309*/      OPC_RecordChild3, // #2 = $vC
/*8310*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUBM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 265:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUBM:v4i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v4i32:$vC)
/*8320*/    /*Scope*/ 17, /*->8338*/
/*8321*/      OPC_CheckInteger, 10|128,2/*266*/, 
/*8324*/      OPC_MoveParent,
/*8325*/      OPC_RecordChild1, // #0 = $vA
/*8326*/      OPC_RecordChild2, // #1 = $vB
/*8327*/      OPC_RecordChild3, // #2 = $vC
/*8328*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHM), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 266:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHM:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8338*/    /*Scope*/ 17, /*->8356*/
/*8339*/      OPC_CheckInteger, 11|128,2/*267*/, 
/*8342*/      OPC_MoveParent,
/*8343*/      OPC_RecordChild1, // #0 = $vA
/*8344*/      OPC_RecordChild2, // #1 = $vB
/*8345*/      OPC_RecordChild3, // #2 = $vC
/*8346*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMSUMUHS), 0,
                  1/*#VTs*/, MVT::v4i32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4i32 267:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC) - Complexity = 8
              // Dst: (VMSUMUHS:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB, VRRC:v4i32:$vC)
/*8356*/    /*Scope*/ 15, /*->8372*/
/*8357*/      OPC_CheckInteger, 12|128,2/*268*/, 
/*8360*/      OPC_MoveParent,
/*8361*/      OPC_RecordChild1, // #0 = $vA
/*8362*/      OPC_RecordChild2, // #1 = $vB
/*8363*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 268:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULESB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8372*/    /*Scope*/ 15, /*->8388*/
/*8373*/      OPC_CheckInteger, 13|128,2/*269*/, 
/*8376*/      OPC_MoveParent,
/*8377*/      OPC_RecordChild1, // #0 = $vA
/*8378*/      OPC_RecordChild2, // #1 = $vB
/*8379*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULESH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 269:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULESH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8388*/    /*Scope*/ 15, /*->8404*/
/*8389*/      OPC_CheckInteger, 14|128,2/*270*/, 
/*8392*/      OPC_MoveParent,
/*8393*/      OPC_RecordChild1, // #0 = $vA
/*8394*/      OPC_RecordChild2, // #1 = $vB
/*8395*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 270:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULEUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8404*/    /*Scope*/ 15, /*->8420*/
/*8405*/      OPC_CheckInteger, 15|128,2/*271*/, 
/*8408*/      OPC_MoveParent,
/*8409*/      OPC_RecordChild1, // #0 = $vA
/*8410*/      OPC_RecordChild2, // #1 = $vB
/*8411*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULEUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 271:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULEUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8420*/    /*Scope*/ 15, /*->8436*/
/*8421*/      OPC_CheckInteger, 16|128,2/*272*/, 
/*8424*/      OPC_MoveParent,
/*8425*/      OPC_RecordChild1, // #0 = $vA
/*8426*/      OPC_RecordChild2, // #1 = $vB
/*8427*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 272:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOSB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8436*/    /*Scope*/ 15, /*->8452*/
/*8437*/      OPC_CheckInteger, 17|128,2/*273*/, 
/*8440*/      OPC_MoveParent,
/*8441*/      OPC_RecordChild1, // #0 = $vA
/*8442*/      OPC_RecordChild2, // #1 = $vB
/*8443*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOSH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 273:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOSH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8452*/    /*Scope*/ 15, /*->8468*/
/*8453*/      OPC_CheckInteger, 18|128,2/*274*/, 
/*8456*/      OPC_MoveParent,
/*8457*/      OPC_RecordChild1, // #0 = $vA
/*8458*/      OPC_RecordChild2, // #1 = $vB
/*8459*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUB), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 274:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VMULOUB:v8i16 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8468*/    /*Scope*/ 15, /*->8484*/
/*8469*/      OPC_CheckInteger, 19|128,2/*275*/, 
/*8472*/      OPC_MoveParent,
/*8473*/      OPC_RecordChild1, // #0 = $vA
/*8474*/      OPC_RecordChild2, // #1 = $vB
/*8475*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMULOUH), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 275:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VMULOUH:v4i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8484*/    /*Scope*/ 15, /*->8500*/
/*8485*/      OPC_CheckInteger, 52|128,2/*308*/, 
/*8488*/      OPC_MoveParent,
/*8489*/      OPC_RecordChild1, // #0 = $vA
/*8490*/      OPC_RecordChild2, // #1 = $vB
/*8491*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBCUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 308:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBCUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8500*/    /*Scope*/ 15, /*->8516*/
/*8501*/      OPC_CheckInteger, 53|128,2/*309*/, 
/*8504*/      OPC_MoveParent,
/*8505*/      OPC_RecordChild1, // #0 = $vA
/*8506*/      OPC_RecordChild2, // #1 = $vB
/*8507*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 309:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBSBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8516*/    /*Scope*/ 15, /*->8532*/
/*8517*/      OPC_CheckInteger, 54|128,2/*310*/, 
/*8520*/      OPC_MoveParent,
/*8521*/      OPC_RecordChild1, // #0 = $vA
/*8522*/      OPC_RecordChild2, // #1 = $vB
/*8523*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 310:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBSHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8532*/    /*Scope*/ 15, /*->8548*/
/*8533*/      OPC_CheckInteger, 55|128,2/*311*/, 
/*8536*/      OPC_MoveParent,
/*8537*/      OPC_RecordChild1, // #0 = $vA
/*8538*/      OPC_RecordChild2, // #1 = $vB
/*8539*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 311:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8548*/    /*Scope*/ 15, /*->8564*/
/*8549*/      OPC_CheckInteger, 56|128,2/*312*/, 
/*8552*/      OPC_MoveParent,
/*8553*/      OPC_RecordChild1, // #0 = $vA
/*8554*/      OPC_RecordChild2, // #1 = $vB
/*8555*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUBS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 312:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSUBUBS:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8564*/    /*Scope*/ 15, /*->8580*/
/*8565*/      OPC_CheckInteger, 57|128,2/*313*/, 
/*8568*/      OPC_MoveParent,
/*8569*/      OPC_RecordChild1, // #0 = $vA
/*8570*/      OPC_RecordChild2, // #1 = $vB
/*8571*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUHS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 313:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSUBUHS:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8580*/    /*Scope*/ 15, /*->8596*/
/*8581*/      OPC_CheckInteger, 58|128,2/*314*/, 
/*8584*/      OPC_MoveParent,
/*8585*/      OPC_RecordChild1, // #0 = $vA
/*8586*/      OPC_RecordChild2, // #1 = $vB
/*8587*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUBUWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 314:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUBUWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8596*/    /*Scope*/ 15, /*->8612*/
/*8597*/      OPC_CheckInteger, 63|128,2/*319*/, 
/*8600*/      OPC_MoveParent,
/*8601*/      OPC_RecordChild1, // #0 = $vA
/*8602*/      OPC_RecordChild2, // #1 = $vB
/*8603*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUMSWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 319:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUMSWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8612*/    /*Scope*/ 15, /*->8628*/
/*8613*/      OPC_CheckInteger, 59|128,2/*315*/, 
/*8616*/      OPC_MoveParent,
/*8617*/      OPC_RecordChild1, // #0 = $vA
/*8618*/      OPC_RecordChild2, // #1 = $vB
/*8619*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM2SWS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 315:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM2SWS:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8628*/    /*Scope*/ 15, /*->8644*/
/*8629*/      OPC_CheckInteger, 60|128,2/*316*/, 
/*8632*/      OPC_MoveParent,
/*8633*/      OPC_RecordChild1, // #0 = $vA
/*8634*/      OPC_RecordChild2, // #1 = $vB
/*8635*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 316:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*8644*/    /*Scope*/ 15, /*->8660*/
/*8645*/      OPC_CheckInteger, 61|128,2/*317*/, 
/*8648*/      OPC_MoveParent,
/*8649*/      OPC_RecordChild1, // #0 = $vA
/*8650*/      OPC_RecordChild2, // #1 = $vB
/*8651*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4SHS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 317:iPTR, VRRC:v8i16:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4SHS:v4i32 VRRC:v8i16:$vA, VRRC:v4i32:$vB)
/*8660*/    /*Scope*/ 15, /*->8676*/
/*8661*/      OPC_CheckInteger, 62|128,2/*318*/, 
/*8664*/      OPC_MoveParent,
/*8665*/      OPC_RecordChild1, // #0 = $vA
/*8666*/      OPC_RecordChild2, // #1 = $vB
/*8667*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSUM4UBS), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 318:iPTR, VRRC:v16i8:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSUM4UBS:v4i32 VRRC:v16i8:$vA, VRRC:v4i32:$vB)
/*8676*/    /*Scope*/ 15, /*->8692*/
/*8677*/      OPC_CheckInteger, 34|128,2/*290*/, 
/*8680*/      OPC_MoveParent,
/*8681*/      OPC_RecordChild1, // #0 = $vA
/*8682*/      OPC_RecordChild2, // #1 = $vB
/*8683*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 290:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VRLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8692*/    /*Scope*/ 15, /*->8708*/
/*8693*/      OPC_CheckInteger, 35|128,2/*291*/, 
/*8696*/      OPC_MoveParent,
/*8697*/      OPC_RecordChild1, // #0 = $vA
/*8698*/      OPC_RecordChild2, // #1 = $vB
/*8699*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 291:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VRLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8708*/    /*Scope*/ 15, /*->8724*/
/*8709*/      OPC_CheckInteger, 36|128,2/*292*/, 
/*8712*/      OPC_MoveParent,
/*8713*/      OPC_RecordChild1, // #0 = $vA
/*8714*/      OPC_RecordChild2, // #1 = $vB
/*8715*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 292:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VRLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8724*/    /*Scope*/ 15, /*->8740*/
/*8725*/      OPC_CheckInteger, 39|128,2/*295*/, 
/*8728*/      OPC_MoveParent,
/*8729*/      OPC_RecordChild1, // #0 = $vA
/*8730*/      OPC_RecordChild2, // #1 = $vB
/*8731*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSL), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 295:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSL:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8740*/    /*Scope*/ 15, /*->8756*/
/*8741*/      OPC_CheckInteger, 42|128,2/*298*/, 
/*8744*/      OPC_MoveParent,
/*8745*/      OPC_RecordChild1, // #0 = $vA
/*8746*/      OPC_RecordChild2, // #1 = $vB
/*8747*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 298:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8756*/    /*Scope*/ 15, /*->8772*/
/*8757*/      OPC_CheckInteger, 40|128,2/*296*/, 
/*8760*/      OPC_MoveParent,
/*8761*/      OPC_RecordChild1, // #0 = $vA
/*8762*/      OPC_RecordChild2, // #1 = $vB
/*8763*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 296:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8772*/    /*Scope*/ 15, /*->8788*/
/*8773*/      OPC_CheckInteger, 41|128,2/*297*/, 
/*8776*/      OPC_MoveParent,
/*8777*/      OPC_RecordChild1, // #0 = $vA
/*8778*/      OPC_RecordChild2, // #1 = $vB
/*8779*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 297:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSLH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8788*/    /*Scope*/ 15, /*->8804*/
/*8789*/      OPC_CheckInteger, 43|128,2/*299*/, 
/*8792*/      OPC_MoveParent,
/*8793*/      OPC_RecordChild1, // #0 = $vA
/*8794*/      OPC_RecordChild2, // #1 = $vB
/*8795*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSLW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 299:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSLW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8804*/    /*Scope*/ 15, /*->8820*/
/*8805*/      OPC_CheckInteger, 44|128,2/*300*/, 
/*8808*/      OPC_MoveParent,
/*8809*/      OPC_RecordChild1, // #0 = $vA
/*8810*/      OPC_RecordChild2, // #1 = $vB
/*8811*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSR), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 300:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSR:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8820*/    /*Scope*/ 15, /*->8836*/
/*8821*/      OPC_CheckInteger, 50|128,2/*306*/, 
/*8824*/      OPC_MoveParent,
/*8825*/      OPC_RecordChild1, // #0 = $vA
/*8826*/      OPC_RecordChild2, // #1 = $vB
/*8827*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRO), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 306:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRO:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8836*/    /*Scope*/ 15, /*->8852*/
/*8837*/      OPC_CheckInteger, 45|128,2/*301*/, 
/*8840*/      OPC_MoveParent,
/*8841*/      OPC_RecordChild1, // #0 = $vA
/*8842*/      OPC_RecordChild2, // #1 = $vB
/*8843*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 301:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRAB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8852*/    /*Scope*/ 15, /*->8868*/
/*8853*/      OPC_CheckInteger, 46|128,2/*302*/, 
/*8856*/      OPC_MoveParent,
/*8857*/      OPC_RecordChild1, // #0 = $vA
/*8858*/      OPC_RecordChild2, // #1 = $vB
/*8859*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 302:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRAH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8868*/    /*Scope*/ 15, /*->8884*/
/*8869*/      OPC_CheckInteger, 47|128,2/*303*/, 
/*8872*/      OPC_MoveParent,
/*8873*/      OPC_RecordChild1, // #0 = $vA
/*8874*/      OPC_RecordChild2, // #1 = $vB
/*8875*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRAW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 303:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRAW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8884*/    /*Scope*/ 15, /*->8900*/
/*8885*/      OPC_CheckInteger, 48|128,2/*304*/, 
/*8888*/      OPC_MoveParent,
/*8889*/      OPC_RecordChild1, // #0 = $vA
/*8890*/      OPC_RecordChild2, // #1 = $vB
/*8891*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 304:iPTR, VRRC:v16i8:$vA, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VSRB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*8900*/    /*Scope*/ 15, /*->8916*/
/*8901*/      OPC_CheckInteger, 49|128,2/*305*/, 
/*8904*/      OPC_MoveParent,
/*8905*/      OPC_RecordChild1, // #0 = $vA
/*8906*/      OPC_RecordChild2, // #1 = $vB
/*8907*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 305:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VSRH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8916*/    /*Scope*/ 15, /*->8932*/
/*8917*/      OPC_CheckInteger, 51|128,2/*307*/, 
/*8920*/      OPC_MoveParent,
/*8921*/      OPC_RecordChild1, // #0 = $vA
/*8922*/      OPC_RecordChild2, // #1 = $vB
/*8923*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VSRW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4i32 307:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VSRW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8932*/    /*Scope*/ 15, /*->8948*/
/*8933*/      OPC_CheckInteger, 22|128,2/*278*/, 
/*8936*/      OPC_MoveParent,
/*8937*/      OPC_RecordChild1, // #0 = $vA
/*8938*/      OPC_RecordChild2, // #1 = $vB
/*8939*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKPX), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 278:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKPX:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8948*/    /*Scope*/ 15, /*->8964*/
/*8949*/      OPC_CheckInteger, 23|128,2/*279*/, 
/*8952*/      OPC_MoveParent,
/*8953*/      OPC_RecordChild1, // #0 = $vA
/*8954*/      OPC_RecordChild2, // #1 = $vB
/*8955*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 279:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHSS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8964*/    /*Scope*/ 15, /*->8980*/
/*8965*/      OPC_CheckInteger, 24|128,2/*280*/, 
/*8968*/      OPC_MoveParent,
/*8969*/      OPC_RecordChild1, // #0 = $vA
/*8970*/      OPC_RecordChild2, // #1 = $vB
/*8971*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 280:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKSHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*8980*/    /*Scope*/ 15, /*->8996*/
/*8981*/      OPC_CheckInteger, 25|128,2/*281*/, 
/*8984*/      OPC_MoveParent,
/*8985*/      OPC_RecordChild1, // #0 = $vA
/*8986*/      OPC_RecordChild2, // #1 = $vB
/*8987*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWSS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 281:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWSS:v16i8 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*8996*/    /*Scope*/ 15, /*->9012*/
/*8997*/      OPC_CheckInteger, 26|128,2/*282*/, 
/*9000*/      OPC_MoveParent,
/*9001*/      OPC_RecordChild1, // #0 = $vA
/*9002*/      OPC_RecordChild2, // #1 = $vB
/*9003*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKSWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 282:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKSWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9012*/    /*Scope*/ 15, /*->9028*/
/*9013*/      OPC_CheckInteger, 27|128,2/*283*/, 
/*9016*/      OPC_MoveParent,
/*9017*/      OPC_RecordChild1, // #0 = $vA
/*9018*/      OPC_RecordChild2, // #1 = $vB
/*9019*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUS), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v16i8 283:iPTR, VRRC:v8i16:$vA, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VPKUHUS:v16i8 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9028*/    /*Scope*/ 15, /*->9044*/
/*9029*/      OPC_CheckInteger, 28|128,2/*284*/, 
/*9032*/      OPC_MoveParent,
/*9033*/      OPC_RecordChild1, // #0 = $vA
/*9034*/      OPC_RecordChild2, // #1 = $vB
/*9035*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUS), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v8i16 284:iPTR, VRRC:v4i32:$vA, VRRC:v4i32:$vB) - Complexity = 8
              // Dst: (VPKUWUS:v8i16 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9044*/    /*Scope*/ 13, /*->9058*/
/*9045*/      OPC_CheckInteger, 64|128,2/*320*/, 
/*9048*/      OPC_MoveParent,
/*9049*/      OPC_RecordChild1, // #0 = $vB
/*9050*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 320:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHPX:v4i32 VRRC:v8i16:$vB)
/*9058*/    /*Scope*/ 13, /*->9072*/
/*9059*/      OPC_CheckInteger, 65|128,2/*321*/, 
/*9062*/      OPC_MoveParent,
/*9063*/      OPC_RecordChild1, // #0 = $vB
/*9064*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 321:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKHSB:v8i16 VRRC:v16i8:$vB)
/*9072*/    /*Scope*/ 13, /*->9086*/
/*9073*/      OPC_CheckInteger, 66|128,2/*322*/, 
/*9076*/      OPC_MoveParent,
/*9077*/      OPC_RecordChild1, // #0 = $vB
/*9078*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKHSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 322:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKHSH:v4i32 VRRC:v8i16:$vB)
/*9086*/    /*Scope*/ 13, /*->9100*/
/*9087*/      OPC_CheckInteger, 67|128,2/*323*/, 
/*9090*/      OPC_MoveParent,
/*9091*/      OPC_RecordChild1, // #0 = $vB
/*9092*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLPX), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 323:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLPX:v4i32 VRRC:v8i16:$vB)
/*9100*/    /*Scope*/ 13, /*->9114*/
/*9101*/      OPC_CheckInteger, 68|128,2/*324*/, 
/*9104*/      OPC_MoveParent,
/*9105*/      OPC_RecordChild1, // #0 = $vB
/*9106*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSB), 0,
                  1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v8i16 324:iPTR, VRRC:v16i8:$vB) - Complexity = 8
              // Dst: (VUPKLSB:v8i16 VRRC:v16i8:$vB)
/*9114*/    /*Scope*/ 13, /*->9128*/
/*9115*/      OPC_CheckInteger, 69|128,2/*325*/, 
/*9118*/      OPC_MoveParent,
/*9119*/      OPC_RecordChild1, // #0 = $vB
/*9120*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VUPKLSH), 0,
                  1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4i32 325:iPTR, VRRC:v8i16:$vB) - Complexity = 8
              // Dst: (VUPKLSH:v4i32 VRRC:v8i16:$vB)
/*9128*/    /*Scope*/ 23, /*->9152*/
/*9129*/      OPC_CheckInteger, 84|128,1/*212*/, 
/*9132*/      OPC_MoveParent,
/*9133*/      OPC_RecordChild1, // #0 = $vB
/*9134*/      OPC_RecordChild2, // #1 = $UIMM
/*9135*/      OPC_MoveChild, 2,
/*9137*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9140*/      OPC_MoveParent,
/*9141*/      OPC_EmitConvertToTarget, 1,
/*9143*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCFSX), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4f32 212:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCFSX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9152*/    /*Scope*/ 23, /*->9176*/
/*9153*/      OPC_CheckInteger, 85|128,1/*213*/, 
/*9156*/      OPC_MoveParent,
/*9157*/      OPC_RecordChild1, // #0 = $vB
/*9158*/      OPC_RecordChild2, // #1 = $UIMM
/*9159*/      OPC_MoveChild, 2,
/*9161*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9164*/      OPC_MoveParent,
/*9165*/      OPC_EmitConvertToTarget, 1,
/*9167*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCFUX), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 2, 0, 
              // Src: (intrinsic_wo_chain:v4f32 213:iPTR, VRRC:v4i32:$vB, (imm:i32):$UIMM) - Complexity = 11
              // Dst: (VCFUX:v4f32 (imm:i32):$UIMM, VRRC:v4i32:$vB)
/*9176*/    /*Scope*/ 13, /*->9190*/
/*9177*/      OPC_CheckInteger, 114|128,1/*242*/, 
/*9180*/      OPC_MoveParent,
/*9181*/      OPC_RecordChild1, // #0 = $vB
/*9182*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VEXPTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 242:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VEXPTEFP:v4f32 VRRC:v4f32:$vB)
/*9190*/    /*Scope*/ 13, /*->9204*/
/*9191*/      OPC_CheckInteger, 115|128,1/*243*/, 
/*9194*/      OPC_MoveParent,
/*9195*/      OPC_RecordChild1, // #0 = $vB
/*9196*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VLOGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 243:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VLOGEFP:v4f32 VRRC:v4f32:$vB)
/*9204*/    /*Scope*/ 15, /*->9220*/
/*9205*/      OPC_CheckInteger, 117|128,1/*245*/, 
/*9208*/      OPC_MoveParent,
/*9209*/      OPC_RecordChild1, // #0 = $vA
/*9210*/      OPC_RecordChild2, // #1 = $vB
/*9211*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMAXFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 245:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMAXFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9220*/    /*Scope*/ 15, /*->9236*/
/*9221*/      OPC_CheckInteger, 126|128,1/*254*/, 
/*9224*/      OPC_MoveParent,
/*9225*/      OPC_RecordChild1, // #0 = $vA
/*9226*/      OPC_RecordChild2, // #1 = $vB
/*9227*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMINFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (intrinsic_wo_chain:v4f32 254:iPTR, VRRC:v4f32:$vA, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VMINFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9236*/    /*Scope*/ 13, /*->9250*/
/*9237*/      OPC_CheckInteger, 29|128,2/*285*/, 
/*9240*/      OPC_MoveParent,
/*9241*/      OPC_RecordChild1, // #0 = $vB
/*9242*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VREFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 285:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VREFP:v4f32 VRRC:v4f32:$vB)
/*9250*/    /*Scope*/ 13, /*->9264*/
/*9251*/      OPC_CheckInteger, 30|128,2/*286*/, 
/*9254*/      OPC_MoveParent,
/*9255*/      OPC_RecordChild1, // #0 = $vB
/*9256*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIM), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 286:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIM:v4f32 VRRC:v4f32:$vB)
/*9264*/    /*Scope*/ 13, /*->9278*/
/*9265*/      OPC_CheckInteger, 31|128,2/*287*/, 
/*9268*/      OPC_MoveParent,
/*9269*/      OPC_RecordChild1, // #0 = $vB
/*9270*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIN), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 287:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIN:v4f32 VRRC:v4f32:$vB)
/*9278*/    /*Scope*/ 13, /*->9292*/
/*9279*/      OPC_CheckInteger, 32|128,2/*288*/, 
/*9282*/      OPC_MoveParent,
/*9283*/      OPC_RecordChild1, // #0 = $vB
/*9284*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 288:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIP:v4f32 VRRC:v4f32:$vB)
/*9292*/    /*Scope*/ 13, /*->9306*/
/*9293*/      OPC_CheckInteger, 33|128,2/*289*/, 
/*9296*/      OPC_MoveParent,
/*9297*/      OPC_RecordChild1, // #0 = $vB
/*9298*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRFIZ), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 289:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRFIZ:v4f32 VRRC:v4f32:$vB)
/*9306*/    /*Scope*/ 13, /*->9320*/
/*9307*/      OPC_CheckInteger, 37|128,2/*293*/, 
/*9310*/      OPC_MoveParent,
/*9311*/      OPC_RecordChild1, // #0 = $vB
/*9312*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VRSQRTEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 1/*#Ops*/, 0, 
              // Src: (intrinsic_wo_chain:v4f32 293:iPTR, VRRC:v4f32:$vB) - Complexity = 8
              // Dst: (VRSQRTEFP:v4f32 VRRC:v4f32:$vB)
/*9320*/    /*Scope*/ 17, /*->9338*/
/*9321*/      OPC_CheckInteger, 116|128,1/*244*/, 
/*9324*/      OPC_MoveParent,
/*9325*/      OPC_RecordChild1, // #0 = $A
/*9326*/      OPC_RecordChild2, // #1 = $B
/*9327*/      OPC_RecordChild3, // #2 = $C
/*9328*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 244:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9338*/    /*Scope*/ 17, /*->9356*/
/*9339*/      OPC_CheckInteger, 20|128,2/*276*/, 
/*9342*/      OPC_MoveParent,
/*9343*/      OPC_RecordChild1, // #0 = $A
/*9344*/      OPC_RecordChild2, // #1 = $B
/*9345*/      OPC_RecordChild3, // #2 = $C
/*9346*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
              // Src: (intrinsic_wo_chain:v4f32 276:iPTR, VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 8
              // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
/*9356*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::CALLSEQ_END),// ->9386
/*9360*/    OPC_RecordNode,   // #0 = 'callseq_end' chained node
/*9361*/    OPC_CaptureGlueInput,
/*9362*/    OPC_RecordChild1, // #1 = $amt1
/*9363*/    OPC_MoveChild, 1,
/*9365*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9368*/    OPC_MoveParent,
/*9369*/    OPC_RecordChild2, // #2 = $amt2
/*9370*/    OPC_MoveChild, 2,
/*9372*/    OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*9375*/    OPC_MoveParent,
/*9376*/    OPC_EmitMergeInputChains1_0,
/*9377*/    OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKUP), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 2/*#Ops*/, 1, 2, 
            // Src: (callseq_end (timm:i32):$amt1, (timm:i32):$amt2) - Complexity = 9
            // Dst: (ADJCALLSTACKUP:i32 (timm:i32):$amt1, (timm:i32):$amt2)
          /*SwitchOpcode*/ 70|128,1/*198*/,  TARGET_VAL(PPCISD::TC_RETURN),// ->9588
/*9390*/    OPC_RecordNode,   // #0 = 'PPCtc_return' chained node
/*9391*/    OPC_CaptureGlueInput,
/*9392*/    OPC_RecordChild1, // #1 = $func
/*9393*/    OPC_Scope, 21|128,1/*149*/, /*->9545*/ // 3 children in Scope
/*9396*/      OPC_MoveChild, 1,
/*9398*/      OPC_SwitchOpcode /*3 cases */, 48,  TARGET_VAL(ISD::Constant),// ->9450
/*9402*/        OPC_SwitchType /*2 cases */, 21,  MVT::i32,// ->9426
/*9405*/          OPC_MoveParent,
/*9406*/          OPC_RecordChild2, // #2 = $offset
/*9407*/          OPC_MoveChild, 2,
/*9409*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9412*/          OPC_MoveParent,
/*9413*/          OPC_EmitMergeInputChains1_0,
/*9414*/          OPC_EmitConvertToTarget, 1,
/*9416*/          OPC_EmitConvertToTarget, 2,
/*9418*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i32):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai (imm:i32):$func, (imm:i32):$offset)
                /*SwitchType*/ 21,  MVT::i64,// ->9449
/*9428*/          OPC_MoveParent,
/*9429*/          OPC_RecordChild2, // #2 = $offset
/*9430*/          OPC_MoveChild, 2,
/*9432*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9435*/          OPC_MoveParent,
/*9436*/          OPC_EmitMergeInputChains1_0,
/*9437*/          OPC_EmitConvertToTarget, 1,
/*9439*/          OPC_EmitConvertToTarget, 2,
/*9441*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNai8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 3, 4, 
                  // Src: (PPCtc_return (imm:i64):$func, (imm:i32):$offset) - Complexity = 9
                  // Dst: (TCRETURNai8 (imm:i64):$func, (imm:i32):$offset)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetGlobalAddress),// ->9497
/*9453*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->9475
/*9456*/          OPC_MoveParent,
/*9457*/          OPC_RecordChild2, // #2 = $imm
/*9458*/          OPC_MoveChild, 2,
/*9460*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9463*/          OPC_MoveParent,
/*9464*/          OPC_EmitMergeInputChains1_0,
/*9465*/          OPC_EmitConvertToTarget, 2,
/*9467*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (tglobaladdr:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->9496
/*9477*/          OPC_MoveParent,
/*9478*/          OPC_RecordChild2, // #2 = $imm
/*9479*/          OPC_MoveChild, 2,
/*9481*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9484*/          OPC_MoveParent,
/*9485*/          OPC_EmitMergeInputChains1_0,
/*9486*/          OPC_EmitConvertToTarget, 2,
/*9488*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (tglobaladdr:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (tglobaladdr:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              /*SwitchOpcode*/ 44,  TARGET_VAL(ISD::TargetExternalSymbol),// ->9544
/*9500*/        OPC_SwitchType /*2 cases */, 19,  MVT::i32,// ->9522
/*9503*/          OPC_MoveParent,
/*9504*/          OPC_RecordChild2, // #2 = $imm
/*9505*/          OPC_MoveChild, 2,
/*9507*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9510*/          OPC_MoveParent,
/*9511*/          OPC_EmitMergeInputChains1_0,
/*9512*/          OPC_EmitConvertToTarget, 2,
/*9514*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i32):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi (texternalsym:i32):$dst, (imm:i32):$imm)
                /*SwitchType*/ 19,  MVT::i64,// ->9543
/*9524*/          OPC_MoveParent,
/*9525*/          OPC_RecordChild2, // #2 = $imm
/*9526*/          OPC_MoveChild, 2,
/*9528*/          OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9531*/          OPC_MoveParent,
/*9532*/          OPC_EmitMergeInputChains1_0,
/*9533*/          OPC_EmitConvertToTarget, 2,
/*9535*/          OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNdi8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                      0/*#VTs*/, 2/*#Ops*/, 1, 3, 
                  // Src: (PPCtc_return (texternalsym:i64):$dst, (imm:i32):$imm) - Complexity = 9
                  // Dst: (TCRETURNdi8 (texternalsym:i64):$dst, (imm:i32):$imm)
                0, // EndSwitchType
              0, // EndSwitchOpcode
/*9545*/    /*Scope*/ 20, /*->9566*/
/*9546*/      OPC_CheckChild1Type, MVT::i32,
/*9548*/      OPC_RecordChild2, // #2 = $imm
/*9549*/      OPC_MoveChild, 2,
/*9551*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9554*/      OPC_MoveParent,
/*9555*/      OPC_EmitMergeInputChains1_0,
/*9556*/      OPC_EmitConvertToTarget, 2,
/*9558*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC:i32:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri CTRRC:i32:$dst, (imm:i32):$imm)
/*9566*/    /*Scope*/ 20, /*->9587*/
/*9567*/      OPC_CheckChild1Type, MVT::i64,
/*9569*/      OPC_RecordChild2, // #2 = $imm
/*9570*/      OPC_MoveChild, 2,
/*9572*/      OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*9575*/      OPC_MoveParent,
/*9576*/      OPC_EmitMergeInputChains1_0,
/*9577*/      OPC_EmitConvertToTarget, 2,
/*9579*/      OPC_MorphNodeTo, TARGET_VAL(PPC::TCRETURNri8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic2,
                  0/*#VTs*/, 2/*#Ops*/, 1, 3, 
              // Src: (PPCtc_return CTRRC8:i64:$dst, (imm:i32):$imm) - Complexity = 6
              // Dst: (TCRETURNri8 CTRRC8:i64:$dst, (imm:i32):$imm)
/*9587*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 84|128,1/*212*/,  TARGET_VAL(PPCISD::VCMP),// ->9804
/*9592*/    OPC_RecordChild0, // #0 = $vA
/*9593*/    OPC_RecordChild1, // #1 = $vB
/*9594*/    OPC_MoveChild, 2,
/*9596*/    OPC_Scope, 14, /*->9612*/ // 13 children in Scope
/*9598*/      OPC_CheckInteger, 6, 
/*9600*/      OPC_MoveParent,
/*9601*/      OPC_CheckType, MVT::v16i8,
/*9603*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9612*/    /*Scope*/ 15, /*->9628*/
/*9613*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*9616*/      OPC_MoveParent,
/*9617*/      OPC_CheckType, MVT::v16i8,
/*9619*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9628*/    /*Scope*/ 15, /*->9644*/
/*9629*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*9632*/      OPC_MoveParent,
/*9633*/      OPC_CheckType, MVT::v16i8,
/*9635*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUB), 0,
                  1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9644*/    /*Scope*/ 14, /*->9659*/
/*9645*/      OPC_CheckInteger, 70, 
/*9647*/      OPC_MoveParent,
/*9648*/      OPC_CheckType, MVT::v8i16,
/*9650*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9659*/    /*Scope*/ 15, /*->9675*/
/*9660*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*9663*/      OPC_MoveParent,
/*9664*/      OPC_CheckType, MVT::v8i16,
/*9666*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9675*/    /*Scope*/ 15, /*->9691*/
/*9676*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*9679*/      OPC_MoveParent,
/*9680*/      OPC_CheckType, MVT::v8i16,
/*9682*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUH), 0,
                  1/*#VTs*/, MVT::v8i16, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUH:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9691*/    /*Scope*/ 15, /*->9707*/
/*9692*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*9695*/      OPC_MoveParent,
/*9696*/      OPC_CheckType, MVT::v4i32,
/*9698*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9707*/    /*Scope*/ 15, /*->9723*/
/*9708*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*9711*/      OPC_MoveParent,
/*9712*/      OPC_CheckType, MVT::v4i32,
/*9714*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9723*/    /*Scope*/ 15, /*->9739*/
/*9724*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*9727*/      OPC_MoveParent,
/*9728*/      OPC_CheckType, MVT::v4i32,
/*9730*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUW), 0,
                  1/*#VTs*/, MVT::v4i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUW:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9739*/    /*Scope*/ 15, /*->9755*/
/*9740*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*9743*/      OPC_MoveParent,
/*9744*/      OPC_CheckType, MVT::v4f32,
/*9746*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9755*/    /*Scope*/ 15, /*->9771*/
/*9756*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*9759*/      OPC_MoveParent,
/*9760*/      OPC_CheckType, MVT::v4f32,
/*9762*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9771*/    /*Scope*/ 15, /*->9787*/
/*9772*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*9775*/      OPC_MoveParent,
/*9776*/      OPC_CheckType, MVT::v4f32,
/*9778*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9787*/    /*Scope*/ 15, /*->9803*/
/*9788*/      OPC_CheckInteger, 70|128,5/*710*/, 
/*9791*/      OPC_MoveParent,
/*9792*/      OPC_CheckType, MVT::v4f32,
/*9794*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFP), 0,
                  1/*#VTs*/, MVT::v4f32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFP:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9803*/    0, /*End of Scope*/
          /*SwitchOpcode*/ 97|128,1/*225*/,  TARGET_VAL(PPCISD::VCMPo),// ->10033
/*9808*/    OPC_RecordChild0, // #0 = $vA
/*9809*/    OPC_RecordChild1, // #1 = $vB
/*9810*/    OPC_MoveChild, 2,
/*9812*/    OPC_Scope, 15, /*->9829*/ // 13 children in Scope
/*9814*/      OPC_CheckInteger, 6, 
/*9816*/      OPC_MoveParent,
/*9817*/      OPC_CheckType, MVT::v16i8,
/*9819*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 6:i32) - Complexity = 8
              // Dst: (VCMPEQUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9829*/    /*Scope*/ 16, /*->9846*/
/*9830*/      OPC_CheckInteger, 6|128,6/*774*/, 
/*9833*/      OPC_MoveParent,
/*9834*/      OPC_CheckType, MVT::v16i8,
/*9836*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 774:i32) - Complexity = 8
              // Dst: (VCMPGTSBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9846*/    /*Scope*/ 16, /*->9863*/
/*9847*/      OPC_CheckInteger, 6|128,4/*518*/, 
/*9850*/      OPC_MoveParent,
/*9851*/      OPC_CheckType, MVT::v16i8,
/*9853*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUBo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v16i8, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, 518:i32) - Complexity = 8
              // Dst: (VCMPGTUBo:v16i8:i32 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*9863*/    /*Scope*/ 15, /*->9879*/
/*9864*/      OPC_CheckInteger, 70, 
/*9866*/      OPC_MoveParent,
/*9867*/      OPC_CheckType, MVT::v8i16,
/*9869*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 70:i32) - Complexity = 8
              // Dst: (VCMPEQUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9879*/    /*Scope*/ 16, /*->9896*/
/*9880*/      OPC_CheckInteger, 70|128,6/*838*/, 
/*9883*/      OPC_MoveParent,
/*9884*/      OPC_CheckType, MVT::v8i16,
/*9886*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 838:i32) - Complexity = 8
              // Dst: (VCMPGTSHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9896*/    /*Scope*/ 16, /*->9913*/
/*9897*/      OPC_CheckInteger, 70|128,4/*582*/, 
/*9900*/      OPC_MoveParent,
/*9901*/      OPC_CheckType, MVT::v8i16,
/*9903*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUHo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v8i16, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v8i16 VRRC:v8i16:$vA, VRRC:v8i16:$vB, 582:i32) - Complexity = 8
              // Dst: (VCMPGTUHo:v8i16:i32 VRRC:v8i16:$vA, VRRC:v8i16:$vB)
/*9913*/    /*Scope*/ 16, /*->9930*/
/*9914*/      OPC_CheckInteger, 6|128,1/*134*/, 
/*9917*/      OPC_MoveParent,
/*9918*/      OPC_CheckType, MVT::v4i32,
/*9920*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 134:i32) - Complexity = 8
              // Dst: (VCMPEQUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9930*/    /*Scope*/ 16, /*->9947*/
/*9931*/      OPC_CheckInteger, 6|128,7/*902*/, 
/*9934*/      OPC_MoveParent,
/*9935*/      OPC_CheckType, MVT::v4i32,
/*9937*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTSWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 902:i32) - Complexity = 8
              // Dst: (VCMPGTSWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9947*/    /*Scope*/ 16, /*->9964*/
/*9948*/      OPC_CheckInteger, 6|128,5/*646*/, 
/*9951*/      OPC_MoveParent,
/*9952*/      OPC_CheckType, MVT::v4i32,
/*9954*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTUWo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4i32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB, 646:i32) - Complexity = 8
              // Dst: (VCMPGTUWo:v4i32:i32 VRRC:v4i32:$vA, VRRC:v4i32:$vB)
/*9964*/    /*Scope*/ 16, /*->9981*/
/*9965*/      OPC_CheckInteger, 70|128,7/*966*/, 
/*9968*/      OPC_MoveParent,
/*9969*/      OPC_CheckType, MVT::v4f32,
/*9971*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPBFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 966:i32) - Complexity = 8
              // Dst: (VCMPBFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9981*/    /*Scope*/ 16, /*->9998*/
/*9982*/      OPC_CheckInteger, 70|128,1/*198*/, 
/*9985*/      OPC_MoveParent,
/*9986*/      OPC_CheckType, MVT::v4f32,
/*9988*/      OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPEQFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 198:i32) - Complexity = 8
              // Dst: (VCMPEQFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*9998*/    /*Scope*/ 16, /*->10015*/
/*9999*/      OPC_CheckInteger, 70|128,3/*454*/, 
/*10002*/     OPC_MoveParent,
/*10003*/     OPC_CheckType, MVT::v4f32,
/*10005*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGEFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 454:i32) - Complexity = 8
              // Dst: (VCMPGEFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10015*/   /*Scope*/ 16, /*->10032*/
/*10016*/     OPC_CheckInteger, 70|128,5/*710*/, 
/*10019*/     OPC_MoveParent,
/*10020*/     OPC_CheckType, MVT::v4f32,
/*10022*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VCMPGTFPo), 0|OPFL_GlueOutput,
                  2/*#VTs*/, MVT::v4f32, MVT::i32, 2/*#Ops*/, 0, 1, 
              // Src: (PPCvcmp_o:v4f32 VRRC:v4f32:$vA, VRRC:v4f32:$vB, 710:i32) - Complexity = 8
              // Dst: (VCMPGTFPo:v4f32:i32 VRRC:v4f32:$vA, VRRC:v4f32:$vB)
/*10032*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 52|128,2/*308*/,  TARGET_VAL(ISD::VECTOR_SHUFFLE),// ->10345
/*10037*/   OPC_Scope, 73, /*->10112*/ // 4 children in Scope
/*10039*/     OPC_RecordNode, // #0 = $UIMM
/*10040*/     OPC_RecordChild0, // #1 = $vB
/*10041*/     OPC_MoveChild, 1,
/*10043*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10046*/     OPC_MoveParent,
/*10047*/     OPC_CheckType, MVT::v16i8,
/*10049*/     OPC_Scope, 14, /*->10065*/ // 4 children in Scope
/*10051*/       OPC_CheckPredicate, 67, // Predicate_vspltb_shuffle
/*10053*/       OPC_EmitNodeXForm, 9, 0, // VSPLTB_get_imm
/*10056*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltb_shuffle>><<X:VSPLTB_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTB:v16i8 (VSPLTB_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10065*/     /*Scope*/ 14, /*->10080*/
/*10066*/       OPC_CheckPredicate, 68, // Predicate_vsplth_shuffle
/*10068*/       OPC_EmitNodeXForm, 10, 0, // VSPLTH_get_imm
/*10071*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vsplth_shuffle>><<X:VSPLTH_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTH:v16i8 (VSPLTH_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10080*/     /*Scope*/ 14, /*->10095*/
/*10081*/       OPC_CheckPredicate, 69, // Predicate_vspltw_shuffle
/*10083*/       OPC_EmitNodeXForm, 11, 0, // VSPLTW_get_imm
/*10086*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 2, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8))<<P:Predicate_vspltw_shuffle>><<X:VSPLTW_get_imm>>:$UIMM - Complexity = 7
                // Dst: (VSPLTW:v16i8 (VSPLTW_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vB, (undef:v16i8)):$UIMM), VRRC:v16i8:$vB)
/*10095*/     /*Scope*/ 15, /*->10111*/
/*10096*/       OPC_CheckPredicate, 70, // Predicate_vsldoi_unary_shuffle
/*10098*/       OPC_EmitNodeXForm, 12, 0, // VSLDOI_unary_get_imm
/*10101*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                    1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 1, 2, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vsldoi_unary_shuffle>><<X:VSLDOI_unary_get_imm>>:$in - Complexity = 7
                // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA, (VSLDOI_unary_get_imm:i32 VRRC:v16i8:$in))
/*10111*/     0, /*End of Scope*/
/*10112*/   /*Scope*/ 107, /*->10220*/
/*10113*/     OPC_RecordChild0, // #0 = $vA
/*10114*/     OPC_MoveChild, 1,
/*10116*/     OPC_CheckOpcode, TARGET_VAL(ISD::UNDEF),
/*10119*/     OPC_MoveParent,
/*10120*/     OPC_CheckType, MVT::v16i8,
/*10122*/     OPC_Scope, 11, /*->10135*/ // 8 children in Scope
/*10124*/       OPC_CheckPredicate, 71, // Predicate_vpkuwum_unary_shuffle
/*10126*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuwum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10135*/     /*Scope*/ 11, /*->10147*/
/*10136*/       OPC_CheckPredicate, 72, // Predicate_vpkuhum_unary_shuffle
/*10138*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vpkuhum_unary_shuffle>> - Complexity = 7
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10147*/     /*Scope*/ 11, /*->10159*/
/*10148*/       OPC_CheckPredicate, 73, // Predicate_vmrglb_unary_shuffle
/*10150*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10159*/     /*Scope*/ 11, /*->10171*/
/*10160*/       OPC_CheckPredicate, 74, // Predicate_vmrglh_unary_shuffle
/*10162*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10171*/     /*Scope*/ 11, /*->10183*/
/*10172*/       OPC_CheckPredicate, 75, // Predicate_vmrglw_unary_shuffle
/*10174*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrglw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10183*/     /*Scope*/ 11, /*->10195*/
/*10184*/       OPC_CheckPredicate, 76, // Predicate_vmrghb_unary_shuffle
/*10186*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghb_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10195*/     /*Scope*/ 11, /*->10207*/
/*10196*/       OPC_CheckPredicate, 77, // Predicate_vmrghh_unary_shuffle
/*10198*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghh_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10207*/     /*Scope*/ 11, /*->10219*/
/*10208*/       OPC_CheckPredicate, 78, // Predicate_vmrghw_unary_shuffle
/*10210*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 0, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, (undef:v16i8))<<P:Predicate_vmrghw_unary_shuffle>> - Complexity = 7
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vA)
/*10219*/     0, /*End of Scope*/
/*10220*/   /*Scope*/ 20, /*->10241*/
/*10221*/     OPC_RecordNode, // #0 = $SH
/*10222*/     OPC_RecordChild0, // #1 = $vA
/*10223*/     OPC_RecordChild1, // #2 = $vB
/*10224*/     OPC_CheckPredicate, 79, // Predicate_vsldoi_shuffle
/*10226*/     OPC_CheckType, MVT::v16i8,
/*10228*/     OPC_EmitNodeXForm, 13, 0, // VSLDOI_get_imm
/*10231*/     OPC_MorphNodeTo, TARGET_VAL(PPC::VSLDOI), 0,
                  1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 1, 2, 3, 
              // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vsldoi_shuffle>><<X:VSLDOI_get_imm>>:$SH - Complexity = 4
              // Dst: (VSLDOI:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, (VSLDOI_get_imm:i32 (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB):$SH))
/*10241*/   /*Scope*/ 102, /*->10344*/
/*10242*/     OPC_RecordChild0, // #0 = $vA
/*10243*/     OPC_RecordChild1, // #1 = $vB
/*10244*/     OPC_CheckType, MVT::v16i8,
/*10246*/     OPC_Scope, 11, /*->10259*/ // 8 children in Scope
/*10248*/       OPC_CheckPredicate, 80, // Predicate_vmrghb_shuffle
/*10250*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghb_shuffle>> - Complexity = 4
                // Dst: (VMRGHB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10259*/     /*Scope*/ 11, /*->10271*/
/*10260*/       OPC_CheckPredicate, 81, // Predicate_vmrghh_shuffle
/*10262*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghh_shuffle>> - Complexity = 4
                // Dst: (VMRGHH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10271*/     /*Scope*/ 11, /*->10283*/
/*10272*/       OPC_CheckPredicate, 82, // Predicate_vmrghw_shuffle
/*10274*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGHW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrghw_shuffle>> - Complexity = 4
                // Dst: (VMRGHW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10283*/     /*Scope*/ 11, /*->10295*/
/*10284*/       OPC_CheckPredicate, 83, // Predicate_vmrglb_shuffle
/*10286*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLB), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglb_shuffle>> - Complexity = 4
                // Dst: (VMRGLB:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10295*/     /*Scope*/ 11, /*->10307*/
/*10296*/       OPC_CheckPredicate, 84, // Predicate_vmrglh_shuffle
/*10298*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLH), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglh_shuffle>> - Complexity = 4
                // Dst: (VMRGLH:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10307*/     /*Scope*/ 11, /*->10319*/
/*10308*/       OPC_CheckPredicate, 85, // Predicate_vmrglw_shuffle
/*10310*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VMRGLW), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vmrglw_shuffle>> - Complexity = 4
                // Dst: (VMRGLW:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10319*/     /*Scope*/ 11, /*->10331*/
/*10320*/       OPC_CheckPredicate, 86, // Predicate_vpkuhum_shuffle
/*10322*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUHUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuhum_shuffle>> - Complexity = 4
                // Dst: (VPKUHUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10331*/     /*Scope*/ 11, /*->10343*/
/*10332*/       OPC_CheckPredicate, 87, // Predicate_vpkuwum_shuffle
/*10334*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VPKUWUM), 0,
                    1/*#VTs*/, MVT::v16i8, 2/*#Ops*/, 0, 1, 
                // Src: (vector_shuffle:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)<<P:Predicate_vpkuwum_shuffle>> - Complexity = 4
                // Dst: (VPKUWUM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB)
/*10343*/     0, /*End of Scope*/
/*10344*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 17,  TARGET_VAL(ISD::CALLSEQ_START),// ->10365
/*10348*/   OPC_RecordNode,   // #0 = 'callseq_start' chained node
/*10349*/   OPC_RecordChild1, // #1 = $amt
/*10350*/   OPC_MoveChild, 1,
/*10352*/   OPC_CheckOpcode, TARGET_VAL(ISD::TargetConstant),
/*10355*/   OPC_MoveParent,
/*10356*/   OPC_EmitMergeInputChains1_0,
/*10357*/   OPC_MorphNodeTo, TARGET_VAL(PPC::ADJCALLSTACKDOWN), 0|OPFL_Chain|OPFL_GlueOutput,
                1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
            // Src: (callseq_start (timm:i32):$amt) - Complexity = 6
            // Dst: (ADJCALLSTACKDOWN:i32 (timm:i32):$amt)
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_Darwin),// ->10466
/*10368*/   OPC_RecordNode,   // #0 = 'PPCcall_Darwin' chained node
/*10369*/   OPC_CaptureGlueInput,
/*10370*/   OPC_RecordChild1, // #1 = $func
/*10371*/   OPC_MoveChild, 1,
/*10373*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->10407
/*10377*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->10392
/*10380*/       OPC_MoveParent,
/*10381*/       OPC_EmitMergeInputChains1_0,
/*10382*/       OPC_EmitConvertToTarget, 1,
/*10384*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_Darwin:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->10406
/*10394*/       OPC_MoveParent,
/*10395*/       OPC_EmitMergeInputChains1_0,
/*10396*/       OPC_EmitConvertToTarget, 1,
/*10398*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_Darwin (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_Darwin:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10436
/*10410*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10423
/*10413*/       OPC_MoveParent,
/*10414*/       OPC_EmitMergeInputChains1_0,
/*10415*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10435
/*10425*/       OPC_MoveParent,
/*10426*/       OPC_EmitMergeInputChains1_0,
/*10427*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10465
/*10439*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10452
/*10442*/       OPC_MoveParent,
/*10443*/       OPC_EmitMergeInputChains1_0,
/*10444*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_Darwin:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10464
/*10454*/       OPC_MoveParent,
/*10455*/       OPC_EmitMergeInputChains1_0,
/*10456*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_Darwin (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_Darwin:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 98,  TARGET_VAL(PPCISD::CALL_SVR4),// ->10567
/*10469*/   OPC_RecordNode,   // #0 = 'PPCcall_SVR4' chained node
/*10470*/   OPC_CaptureGlueInput,
/*10471*/   OPC_RecordChild1, // #1 = $func
/*10472*/   OPC_MoveChild, 1,
/*10474*/   OPC_SwitchOpcode /*3 cases */, 30,  TARGET_VAL(ISD::Constant),// ->10508
/*10478*/     OPC_SwitchType /*2 cases */, 12,  MVT::i32,// ->10493
/*10481*/       OPC_MoveParent,
/*10482*/       OPC_EmitMergeInputChains1_0,
/*10483*/       OPC_EmitConvertToTarget, 1,
/*10485*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i32):$func) - Complexity = 6
                // Dst: (BLA_SVR4:i32 (imm:i32):$func)
              /*SwitchType*/ 12,  MVT::i64,// ->10507
/*10495*/       OPC_MoveParent,
/*10496*/       OPC_EmitMergeInputChains1_0,
/*10497*/       OPC_EmitConvertToTarget, 1,
/*10499*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BLA8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 2, 
                // Src: (PPCcall_SVR4 (imm:i64):$func) - Complexity = 6
                // Dst: (BLA8_ELF:i64 (imm:i64):$func)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetGlobalAddress),// ->10537
/*10511*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10524
/*10514*/       OPC_MoveParent,
/*10515*/       OPC_EmitMergeInputChains1_0,
/*10516*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (tglobaladdr:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10536
/*10526*/       OPC_MoveParent,
/*10527*/       OPC_EmitMergeInputChains1_0,
/*10528*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (tglobaladdr:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (tglobaladdr:i64):$dst)
              0, // EndSwitchType
            /*SwitchOpcode*/ 26,  TARGET_VAL(ISD::TargetExternalSymbol),// ->10566
/*10540*/     OPC_SwitchType /*2 cases */, 10,  MVT::i32,// ->10553
/*10543*/       OPC_MoveParent,
/*10544*/       OPC_EmitMergeInputChains1_0,
/*10545*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i32):$dst) - Complexity = 6
                // Dst: (BL_SVR4:i32 (texternalsym:i32):$dst)
              /*SwitchType*/ 10,  MVT::i64,// ->10565
/*10555*/       OPC_MoveParent,
/*10556*/       OPC_EmitMergeInputChains1_0,
/*10557*/       OPC_MorphNodeTo, TARGET_VAL(PPC::BL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic1,
                    1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
                // Src: (PPCcall_SVR4 (texternalsym:i64):$dst) - Complexity = 6
                // Dst: (BL8_ELF:i64 (texternalsym:i64):$dst)
              0, // EndSwitchType
            0, // EndSwitchOpcode
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB0),// ->10589
/*10570*/   OPC_CaptureGlueInput,
/*10571*/   OPC_RecordChild0, // #0 = $FM
/*10572*/   OPC_MoveChild, 0,
/*10574*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10577*/   OPC_CheckType, MVT::i32,
/*10579*/   OPC_MoveParent,
/*10580*/   OPC_EmitConvertToTarget, 0,
/*10582*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB0), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb0 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB0 (imm:i32):$FM)
          /*SwitchOpcode*/ 19,  TARGET_VAL(PPCISD::MTFSB1),// ->10611
/*10592*/   OPC_CaptureGlueInput,
/*10593*/   OPC_RecordChild0, // #0 = $FM
/*10594*/   OPC_MoveChild, 0,
/*10596*/   OPC_CheckOpcode, TARGET_VAL(ISD::Constant),
/*10599*/   OPC_CheckType, MVT::i32,
/*10601*/   OPC_MoveParent,
/*10602*/   OPC_EmitConvertToTarget, 0,
/*10604*/   OPC_MorphNodeTo, TARGET_VAL(PPC::MTFSB1), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCmtfsb1 (imm:i32):$FM) - Complexity = 6
            // Dst: (MTFSB1 (imm:i32):$FM)
          /*SwitchOpcode*/ 63,  TARGET_VAL(ISD::BUILD_VECTOR),// ->10677
/*10614*/   OPC_Scope, 48, /*->10664*/ // 2 children in Scope
/*10616*/     OPC_RecordNode, // #0 = $SIMM
/*10617*/     OPC_SwitchType /*3 cases */, 13,  MVT::v16i8,// ->10633
/*10620*/       OPC_CheckPredicate, 88, // Predicate_vecspltisb
/*10622*/       OPC_EmitNodeXForm, 14, 0, // VSPLTISB_get_imm
/*10625*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISB), 0,
                    1/*#VTs*/, MVT::v16i8, 1/*#Ops*/, 1, 
                // Src: (build_vector:v16i8)<<P:Predicate_vecspltisb>><<X:VSPLTISB_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISB:v16i8 (VSPLTISB_get_imm:i32 (build_vector:v16i8):$SIMM))
              /*SwitchType*/ 13,  MVT::v8i16,// ->10648
/*10635*/       OPC_CheckPredicate, 89, // Predicate_vecspltish
/*10637*/       OPC_EmitNodeXForm, 15, 0, // VSPLTISH_get_imm
/*10640*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISH), 0,
                    1/*#VTs*/, MVT::v8i16, 1/*#Ops*/, 1, 
                // Src: (build_vector:v8i16)<<P:Predicate_vecspltish>><<X:VSPLTISH_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISH:v8i16 (VSPLTISH_get_imm:i32 (build_vector:v8i16):$SIMM))
              /*SwitchType*/ 13,  MVT::v4i32,// ->10663
/*10650*/       OPC_CheckPredicate, 90, // Predicate_vecspltisw
/*10652*/       OPC_EmitNodeXForm, 16, 0, // VSPLTISW_get_imm
/*10655*/       OPC_MorphNodeTo, TARGET_VAL(PPC::VSPLTISW), 0,
                    1/*#VTs*/, MVT::v4i32, 1/*#Ops*/, 1, 
                // Src: (build_vector:v4i32)<<P:Predicate_vecspltisw>><<X:VSPLTISW_get_imm>>:$SIMM - Complexity = 4
                // Dst: (VSPLTISW:v4i32 (VSPLTISW_get_imm:i32 (build_vector:v4i32):$SIMM))
              0, // EndSwitchType
/*10664*/   /*Scope*/ 11, /*->10676*/
/*10665*/     OPC_CheckPredicate, 91, // Predicate_immAllZerosV
/*10667*/     OPC_CheckType, MVT::v4i32,
/*10669*/     OPC_MorphNodeTo, TARGET_VAL(PPC::V_SET0), 0,
                  1/*#VTs*/, MVT::v4i32, 0/*#Ops*/, 
              // Src: (build_vector:v4i32)<<P:Predicate_immAllZerosV>> - Complexity = 4
              // Dst: (V_SET0:v4i32)
/*10676*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 83,  TARGET_VAL(ISD::BITCAST),// ->10763
/*10680*/   OPC_RecordChild0, // #0 = $src
/*10681*/   OPC_Scope, 19, /*->10702*/ // 4 children in Scope
/*10683*/     OPC_CheckChild0Type, MVT::v8i16,
/*10685*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10691
/*10688*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10696
/*10693*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10701
/*10698*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v8i16:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10702*/   /*Scope*/ 19, /*->10722*/
/*10703*/     OPC_CheckChild0Type, MVT::v4i32,
/*10705*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10711
/*10708*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10716
/*10713*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10721
/*10718*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v4i32:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10722*/   /*Scope*/ 19, /*->10742*/
/*10723*/     OPC_CheckChild0Type, MVT::v4f32,
/*10725*/     OPC_SwitchType /*3 cases */, 3,  MVT::v16i8,// ->10731
/*10728*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v16i8 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v16i8:$src
              /*SwitchType*/ 3,  MVT::v8i16,// ->10736
/*10733*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10741
/*10738*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v4f32:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              0, // EndSwitchType
/*10742*/   /*Scope*/ 19, /*->10762*/
/*10743*/     OPC_CheckChild0Type, MVT::v16i8,
/*10745*/     OPC_SwitchType /*3 cases */, 3,  MVT::v8i16,// ->10751
/*10748*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v8i16 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v8i16:$src
              /*SwitchType*/ 3,  MVT::v4i32,// ->10756
/*10753*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4i32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4i32:$src
              /*SwitchType*/ 3,  MVT::v4f32,// ->10761
/*10758*/       OPC_CompleteMatch, 1, 0, 
                // Src: (bitconvert:v4f32 VRRC:v16i8:$src) - Complexity = 3
                // Dst: VRRC:v4f32:$src
              0, // EndSwitchType
/*10762*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VPERM),// ->10781
/*10766*/   OPC_RecordChild0, // #0 = $vA
/*10767*/   OPC_RecordChild1, // #1 = $vB
/*10768*/   OPC_RecordChild2, // #2 = $vC
/*10769*/   OPC_CheckType, MVT::v16i8,
/*10771*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VPERM), 0,
                1/*#VTs*/, MVT::v16i8, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvperm:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC) - Complexity = 3
            // Dst: (VPERM:v16i8 VRRC:v16i8:$vA, VRRC:v16i8:$vB, VRRC:v16i8:$vC)
          /*SwitchOpcode*/ 17,  TARGET_VAL(PPCISD::RET_FLAG),// ->10801
/*10784*/   OPC_RecordNode,   // #0 = 'retflag' chained node
/*10785*/   OPC_CaptureGlueInput,
/*10786*/   OPC_EmitMergeInputChains1_0,
/*10787*/   OPC_EmitInteger, MVT::i32, 20, 
/*10790*/   OPC_EmitRegister, MVT::i32, 0 /*zero_reg*/,
/*10793*/   OPC_MorphNodeTo, TARGET_VAL(PPC::BLR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_Variadic0,
                0/*#VTs*/, 2/*#Ops*/, 1, 2, 
            // Src: (retflag) - Complexity = 3
            // Dst: (BLR)
          /*SwitchOpcode*/ 16,  TARGET_VAL(ISD::BR),// ->10820
/*10804*/   OPC_RecordNode,   // #0 = 'br' chained node
/*10805*/   OPC_RecordChild1, // #1 = $dst
/*10806*/   OPC_MoveChild, 1,
/*10808*/   OPC_CheckOpcode, TARGET_VAL(ISD::BasicBlock),
/*10811*/   OPC_MoveParent,
/*10812*/   OPC_EmitMergeInputChains1_0,
/*10813*/   OPC_MorphNodeTo, TARGET_VAL(PPC::B), 0|OPFL_Chain,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (br (bb:Other):$dst) - Complexity = 3
            // Dst: (B (bb:Other):$dst)
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_Darwin),// ->10849
/*10823*/   OPC_RecordNode,   // #0 = 'PPCbctrl_Darwin' chained node
/*10824*/   OPC_CaptureGlueInput,
/*10825*/   OPC_Scope, 10, /*->10837*/ // 2 children in Scope
/*10827*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*10829*/     OPC_EmitMergeInputChains1_0,
/*10830*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL_Darwin:i32)
/*10837*/   /*Scope*/ 10, /*->10848*/
/*10838*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*10840*/     OPC_EmitMergeInputChains1_0,
/*10841*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_Darwin), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_Darwin) - Complexity = 3
              // Dst: (BCTRL8_Darwin:i64)
/*10848*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 26,  TARGET_VAL(PPCISD::BCTRL_SVR4),// ->10878
/*10852*/   OPC_RecordNode,   // #0 = 'PPCbctrl_SVR4' chained node
/*10853*/   OPC_CaptureGlueInput,
/*10854*/   OPC_Scope, 10, /*->10866*/ // 2 children in Scope
/*10856*/     OPC_CheckPatternPredicate, 1, // (!PPCSubTarget.isPPC64())
/*10858*/     OPC_EmitMergeInputChains1_0,
/*10859*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL_SVR4), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i32, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL_SVR4:i32)
/*10866*/   /*Scope*/ 10, /*->10877*/
/*10867*/     OPC_CheckPatternPredicate, 2, // (PPCSubTarget.isPPC64())
/*10869*/     OPC_EmitMergeInputChains1_0,
/*10870*/     OPC_MorphNodeTo, TARGET_VAL(PPC::BCTRL8_ELF), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput|OPFL_Variadic0,
                  1/*#VTs*/, MVT::i64, 0/*#Ops*/, 
              // Src: (PPCbctrl_SVR4) - Complexity = 3
              // Dst: (BCTRL8_ELF:i64)
/*10877*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 8,  TARGET_VAL(ISD::TRAP),// ->10889
/*10881*/   OPC_RecordNode,   // #0 = 'trap' chained node
/*10882*/   OPC_EmitMergeInputChains1_0,
/*10883*/   OPC_MorphNodeTo, TARGET_VAL(PPC::TRAP), 0|OPFL_Chain,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (trap) - Complexity = 3
            // Dst: (TRAP)
          /*SwitchOpcode*/ 29,  TARGET_VAL(PPCISD::MTCTR),// ->10921
/*10892*/   OPC_RecordNode,   // #0 = 'PPCmtctr' chained node
/*10893*/   OPC_CaptureGlueInput,
/*10894*/   OPC_RecordChild1, // #1 = $rS
/*10895*/   OPC_Scope, 11, /*->10908*/ // 2 children in Scope
/*10897*/     OPC_CheckChild1Type, MVT::i32,
/*10899*/     OPC_EmitMergeInputChains1_0,
/*10900*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i32, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr GPRC:i32:$rS) - Complexity = 3
              // Dst: (MTCTR:i32 GPRC:i32:$rS)
/*10908*/   /*Scope*/ 11, /*->10920*/
/*10909*/     OPC_CheckChild1Type, MVT::i64,
/*10911*/     OPC_EmitMergeInputChains1_0,
/*10912*/     OPC_MorphNodeTo, TARGET_VAL(PPC::MTCTR8), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                  1/*#VTs*/, MVT::i64, 1/*#Ops*/, 1, 
              // Src: (PPCmtctr G8RC:i64:$rS) - Complexity = 3
              // Dst: (MTCTR8:i64 G8RC:i64:$rS)
/*10920*/   0, /*End of Scope*/
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VMADDFP),// ->10939
/*10924*/   OPC_RecordChild0, // #0 = $A
/*10925*/   OPC_RecordChild1, // #1 = $B
/*10926*/   OPC_RecordChild2, // #2 = $C
/*10927*/   OPC_CheckType, MVT::v4f32,
/*10929*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VMADDFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvmaddfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VMADDFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 15,  TARGET_VAL(PPCISD::VNMSUBFP),// ->10957
/*10942*/   OPC_RecordChild0, // #0 = $A
/*10943*/   OPC_RecordChild1, // #1 = $B
/*10944*/   OPC_RecordChild2, // #2 = $C
/*10945*/   OPC_CheckType, MVT::v4f32,
/*10947*/   OPC_MorphNodeTo, TARGET_VAL(PPC::VNMSUBFP), 0,
                1/*#VTs*/, MVT::v4f32, 3/*#Ops*/, 0, 1, 2, 
            // Src: (PPCvnmsubfp:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C) - Complexity = 3
            // Dst: (VNMSUBFP:v4f32 VRRC:v4f32:$A, VRRC:v4f32:$B, VRRC:v4f32:$C)
          /*SwitchOpcode*/ 7,  TARGET_VAL(PPCISD::NOP),// ->10967
/*10960*/   OPC_CaptureGlueInput,
/*10961*/   OPC_MorphNodeTo, TARGET_VAL(PPC::NOP), 0|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCnop) - Complexity = 3
            // Dst: (NOP)
          /*SwitchOpcode*/ 13,  TARGET_VAL(PPCISD::LOAD_TOC),// ->10983
/*10970*/   OPC_RecordNode,   // #0 = 'PPCload_toc' chained node
/*10971*/   OPC_CaptureGlueInput,
/*10972*/   OPC_RecordChild1, // #1 = $reg
/*10973*/   OPC_CheckChild1Type, MVT::i64,
/*10975*/   OPC_EmitMergeInputChains1_0,
/*10976*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDinto_toc), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 1/*#Ops*/, 1, 
            // Src: (PPCload_toc G8RC:i64:$reg) - Complexity = 3
            // Dst: (LDinto_toc G8RC:i64:$reg)
          /*SwitchOpcode*/ 9,  TARGET_VAL(PPCISD::TOC_RESTORE),// ->10995
/*10986*/   OPC_RecordNode,   // #0 = 'PPCtoc_restore' chained node
/*10987*/   OPC_CaptureGlueInput,
/*10988*/   OPC_EmitMergeInputChains1_0,
/*10989*/   OPC_MorphNodeTo, TARGET_VAL(PPC::LDtoc_restore), 0|OPFL_Chain|OPFL_GlueInput|OPFL_GlueOutput,
                0/*#VTs*/, 0/*#Ops*/, 
            // Src: (PPCtoc_restore) - Complexity = 3
            // Dst: (LDtoc_restore)
          0, // EndSwitchOpcode
    0
  }; // Total Array size is 10997 bytes

  // Opcode Histogram:
  // #OPC_Scope                          = 109
  // #OPC_RecordNode                     = 38
  // #OPC_RecordChild                    = 499
  // #OPC_RecordMemRef                   = 10
  // #OPC_CaptureGlueInput               = 18
  // #OPC_MoveChild                      = 148
  // #OPC_MoveParent                     = 367
  // #OPC_CheckSame                      = 0
  // #OPC_CheckPatternPredicate          = 21
  // #OPC_CheckPredicate                 = 179
  // #OPC_CheckOpcode                    = 95
  // #OPC_SwitchOpcode                   = 14
  // #OPC_CheckType                      = 153
  // #OPC_SwitchType                     = 94
  // #OPC_CheckChildType                 = 50
  // #OPC_CheckInteger                   = 191
  // #OPC_CheckCondCode                  = 0
  // #OPC_CheckValueType                 = 7
  // #OPC_CheckComplexPat                = 139
  // #OPC_CheckAndImm                    = 0
  // #OPC_CheckOrImm                     = 0
  // #OPC_CheckFoldableChainNode         = 0
  // #OPC_EmitInteger                    = 26
  // #OPC_EmitStringInteger              = 3
  // #OPC_EmitRegister                   = 1
  // #OPC_EmitConvertToTarget            = 78
  // #OPC_EmitMergeInputChains           = 184
  // #OPC_EmitCopyToReg                  = 0
  // #OPC_EmitNode                       = 8
  // #OPC_EmitNodeXForm                  = 38
  // #OPC_MarkGlueResults                = 0
  // #OPC_CompleteMatch                  = 12
  // #OPC_MorphNodeTo                    = 576

  #undef TARGET_VAL
  return SelectCodeCommon(N, MatcherTable,sizeof(MatcherTable));
}

bool CheckPatternPredicate(unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: return (!NoExcessFPPrecision);
  case 1: return (!PPCSubTarget.isPPC64());
  case 2: return (PPCSubTarget.isPPC64());
  }
}

bool CheckNodePredicate(SDNode *Node, unsigned PredNo) const {
  switch (PredNo) {
  default: assert(0 && "Invalid predicate in table?");
  case 0: { // Predicate_immSExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immSExt16 predicate - True if the immediate fits in a 16-bit sign extended
  // field.  Used by instructions like 'addi'.
  if (N->getValueType(0) == MVT::i32)
    return (int32_t)N->getZExtValue() == (short)N->getZExtValue();
  else
    return (int64_t)N->getZExtValue() == (short)N->getZExtValue();

  }
  case 1: { // Predicate_imm16ShiftedSExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedSExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'addis'.  Identical to 
  // imm16ShiftedZExt in 32-bit mode.
  if (N->getZExtValue() & 0xFFFF) return false;
  if (N->getValueType(0) == MVT::i32)
    return true;
  // For 64-bit, make sure it is sext right.
  return N->getZExtValue() == (uint64_t)(int)N->getZExtValue();

  }
  case 2: { // Predicate_unindexedload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 3: { // Predicate_zextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::ZEXTLOAD;

  }
  case 4: { // Predicate_zextloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 5: { // Predicate_sextload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::SEXTLOAD;

  }
  case 6: { // Predicate_sextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 7: { // Predicate_zextloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 8: { // Predicate_load
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::NON_EXTLOAD;

  }
  case 9: { // Predicate_zextloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 10: { // Predicate_extload
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getExtensionType() == ISD::EXTLOAD;

  }
  case 11: { // Predicate_extloadi1
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i1;

  }
  case 12: { // Predicate_extloadi8
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 13: { // Predicate_extloadi16
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 14: { // Predicate_sextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 15: { // Predicate_zextloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 16: { // Predicate_extloadi32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 17: { // Predicate_extloadf32
    SDNode *N = Node;

  return cast<LoadSDNode>(N)->getMemoryVT() == MVT::f32;

  }
  case 18: { // Predicate_unindexedstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getAddressingMode() == ISD::UNINDEXED;

  }
  case 19: { // Predicate_truncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 20: { // Predicate_truncstorei8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 21: { // Predicate_truncstorei16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 22: { // Predicate_store
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 23: { // Predicate_itruncstore
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 24: { // Predicate_pre_truncst
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 25: { // Predicate_pre_truncsti8
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 26: { // Predicate_pre_truncsti16
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 27: { // Predicate_istore
    SDNode *N = Node;

  return !cast<StoreSDNode>(N)->isTruncatingStore();

  }
  case 28: { // Predicate_pre_store
    SDNode *N = Node;

  ISD::MemIndexedMode AM = cast<StoreSDNode>(N)->getAddressingMode();
  return AM == ISD::PRE_INC || AM == ISD::PRE_DEC;

  }
  case 29: { // Predicate_truncstorei32
    SDNode *N = Node;

  return cast<StoreSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 30: { // Predicate_atomic_load_add_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 31: { // Predicate_atomic_load_add_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 32: { // Predicate_atomic_load_add_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 33: { // Predicate_atomic_load_add_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 34: { // Predicate_atomic_load_sub_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 35: { // Predicate_atomic_load_sub_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 36: { // Predicate_atomic_load_sub_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 37: { // Predicate_atomic_load_sub_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 38: { // Predicate_atomic_load_and_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 39: { // Predicate_atomic_load_and_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 40: { // Predicate_atomic_load_and_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 41: { // Predicate_atomic_load_and_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 42: { // Predicate_atomic_load_or_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 43: { // Predicate_atomic_load_or_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 44: { // Predicate_atomic_load_or_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 45: { // Predicate_atomic_load_or_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 46: { // Predicate_atomic_load_xor_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 47: { // Predicate_atomic_load_xor_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 48: { // Predicate_atomic_load_xor_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 49: { // Predicate_atomic_load_xor_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 50: { // Predicate_atomic_load_nand_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 51: { // Predicate_atomic_load_nand_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 52: { // Predicate_atomic_load_nand_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 53: { // Predicate_atomic_load_nand_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 54: { // Predicate_atomic_cmp_swap_8
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;

  }
  case 55: { // Predicate_atomic_cmp_swap_16
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;

  }
  case 56: { // Predicate_atomic_cmp_swap_32
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;

  }
  case 57: { // Predicate_atomic_cmp_swap_64
    SDNode *N = Node;

  return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;

  }
  case 58: { // Predicate_atomic_swap_8
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i8;
  
  }
  case 59: { // Predicate_atomic_swap_16
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i16;
  
  }
  case 60: { // Predicate_atomic_swap_32
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i32;
  
  }
  case 61: { // Predicate_atomic_swap_64
    SDNode *N = Node;

    return cast<AtomicSDNode>(N)->getMemoryVT() == MVT::i64;
  
  }
  case 62: { // Predicate_immZExt16
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // immZExt16 predicate - True if the immediate fits in a 16-bit zero extended
  // field.  Used by instructions like 'ori'.
  return (uint64_t)N->getZExtValue() == (unsigned short)N->getZExtValue();

  }
  case 63: { // Predicate_imm16ShiftedZExt
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // imm16ShiftedZExt predicate - True if only bits in the top 16-bits of the
  // immediate are set.  Used by instructions like 'xoris'.
  return (N->getZExtValue() & ~uint64_t(0xFFFF0000)) == 0;

  }
  case 64: { // Predicate_immAllOnesV
    SDNode *N = Node;

  return ISD::isBuildVectorAllOnes(N);

  }
  case 65: { // Predicate_maskimm32
    ConstantSDNode*N = cast<ConstantSDNode>(Node);

  // maskImm predicate - True if immediate is a run of ones.
  unsigned mb, me;
  if (N->getValueType(0) == MVT::i32)
    return isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  else
    return false;

  }
  case 66: { // Predicate_V_immneg0
    SDNode *N = Node;

  return PPC::isAllNegativeZeroVector(N);

  }
  case 67: { // Predicate_vspltb_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 1);

  }
  case 68: { // Predicate_vsplth_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 2);

  }
  case 69: { // Predicate_vspltw_shuffle
    SDNode *N = Node;

  return PPC::isSplatShuffleMask(cast<ShuffleVectorSDNode>(N), 4);

  }
  case 70: { // Predicate_vsldoi_unary_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, true) != -1;

  }
  case 71: { // Predicate_vpkuwum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 72: { // Predicate_vpkuhum_unary_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), true);

  }
  case 73: { // Predicate_vmrglb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 74: { // Predicate_vmrglh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 75: { // Predicate_vmrglw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 76: { // Predicate_vmrghb_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, true);

  }
  case 77: { // Predicate_vmrghh_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, true);

  }
  case 78: { // Predicate_vmrghw_unary_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, true);

  }
  case 79: { // Predicate_vsldoi_shuffle
    SDNode *N = Node;

  return PPC::isVSLDOIShuffleMask(N, false) != -1;

  }
  case 80: { // Predicate_vmrghb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 81: { // Predicate_vmrghh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 82: { // Predicate_vmrghw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGHShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 83: { // Predicate_vmrglb_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 1, false);

  }
  case 84: { // Predicate_vmrglh_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 2, false);

  }
  case 85: { // Predicate_vmrglw_shuffle
    SDNode *N = Node;

  return PPC::isVMRGLShuffleMask(cast<ShuffleVectorSDNode>(N), 4, false);

  }
  case 86: { // Predicate_vpkuhum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUHUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 87: { // Predicate_vpkuwum_shuffle
    SDNode *N = Node;

  return PPC::isVPKUWUMShuffleMask(cast<ShuffleVectorSDNode>(N), false);

  }
  case 88: { // Predicate_vecspltisb
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG).getNode() != 0;

  }
  case 89: { // Predicate_vecspltish
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG).getNode() != 0;

  }
  case 90: { // Predicate_vecspltisw
    SDNode *N = Node;

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG).getNode() != 0;

  }
  case 91: { // Predicate_immAllZerosV
    SDNode *N = Node;

  return ISD::isBuildVectorAllZeros(N);

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
    return SelectAddrIdxOnly(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 1:
    Result.resize(NextRes+2);
    return SelectAddrImm(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 2:
    Result.resize(NextRes+2);
    return SelectAddrIdx(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 3:
    Result.resize(NextRes+2);
    return SelectAddrImmShift(N, Result[NextRes+0].first, Result[NextRes+1].first);
  case 4:
    Result.resize(NextRes+1);
    return SelectAddrImmOffs(N, Result[NextRes+0].first);
  }
}

SDValue RunSDNodeXForm(SDValue V, unsigned XFormNo) {
  switch (XFormNo) {
  default: assert(0 && "Invalid xform # in table?");
  case 0: {  // HI16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  return getI32Imm((unsigned)N->getZExtValue() >> 16);

  }
  case 1: {  // LO16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the low 16 bits.
  return getI32Imm((unsigned short)N->getZExtValue());

  }
  case 2: {  // HA16
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: shift the immediate value down into the low bits.
  signed int Val = N->getZExtValue();
  return getI32Imm((Val - (signed short)Val) >> 16);

  }
  case 3: {  // MB
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the start bit of a mask
  unsigned mb = 0, me;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(mb);

  }
  case 4: {  // ME
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: get the end bit of a mask
  unsigned mb, me = 0;
  (void)isRunOfOnes((unsigned)N->getZExtValue(), mb, me);
  return getI32Imm(me);

  }
  case 5: {  // SHL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 31 - imm
  return getI32Imm(31 - N->getZExtValue());

  }
  case 6: {  // SHL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 63 - imm
  return getI32Imm(63 - N->getZExtValue());

  }
  case 7: {  // SRL32
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 32 - imm
  return N->getZExtValue() ? getI32Imm(32 - N->getZExtValue()) : getI32Imm(0);

  }
  case 8: {  // SRL64
    ConstantSDNode *N = cast<ConstantSDNode>(V.getNode());

  // Transformation function: 64 - imm
  return N->getZExtValue() ? getI32Imm(64 - N->getZExtValue()) : getI32Imm(0);

  }
  case 9: {  // VSPLTB_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 1));

  }
  case 10: {  // VSPLTH_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 2));

  }
  case 11: {  // VSPLTW_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::getVSPLTImmediate(N, 4));

  }
  case 12: {  // VSLDOI_unary_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, true));

  }
  case 13: {  // VSLDOI_get_imm
    SDNode *N = V.getNode();

  return getI32Imm(PPC::isVSLDOIShuffleMask(N, false));

  }
  case 14: {  // VSPLTISB_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 1, *CurDAG);

  }
  case 15: {  // VSPLTISH_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 2, *CurDAG);

  }
  case 16: {  // VSPLTISW_get_imm
    SDNode *N = V.getNode();

  return PPC::get_VSPLTI_elt(N, 4, *CurDAG);

  }
  }
}

