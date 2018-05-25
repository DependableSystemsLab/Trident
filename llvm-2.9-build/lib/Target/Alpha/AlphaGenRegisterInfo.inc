//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // F4RC Register Class...
  static const unsigned F4RC[] = {
    Alpha::F0, Alpha::F1, Alpha::F10, Alpha::F11, Alpha::F12, Alpha::F13, Alpha::F14, Alpha::F15, Alpha::F16, Alpha::F17, Alpha::F18, Alpha::F19, Alpha::F20, Alpha::F21, Alpha::F22, Alpha::F23, Alpha::F24, Alpha::F25, Alpha::F26, Alpha::F27, Alpha::F28, Alpha::F29, Alpha::F30, Alpha::F2, Alpha::F3, Alpha::F4, Alpha::F5, Alpha::F6, Alpha::F7, Alpha::F8, Alpha::F9, Alpha::F31, 
  };

  // F8RC Register Class...
  static const unsigned F8RC[] = {
    Alpha::F0, Alpha::F1, Alpha::F10, Alpha::F11, Alpha::F12, Alpha::F13, Alpha::F14, Alpha::F15, Alpha::F16, Alpha::F17, Alpha::F18, Alpha::F19, Alpha::F20, Alpha::F21, Alpha::F22, Alpha::F23, Alpha::F24, Alpha::F25, Alpha::F26, Alpha::F27, Alpha::F28, Alpha::F29, Alpha::F30, Alpha::F2, Alpha::F3, Alpha::F4, Alpha::F5, Alpha::F6, Alpha::F7, Alpha::F8, Alpha::F9, Alpha::F31, 
  };

  // GPRC Register Class...
  static const unsigned GPRC[] = {
    Alpha::R0, Alpha::R1, Alpha::R2, Alpha::R3, Alpha::R4, Alpha::R5, Alpha::R6, Alpha::R7, Alpha::R8, Alpha::R16, Alpha::R17, Alpha::R18, Alpha::R19, Alpha::R20, Alpha::R21, Alpha::R22, Alpha::R23, Alpha::R24, Alpha::R25, Alpha::R28, Alpha::R27, Alpha::R26, Alpha::R29, Alpha::R9, Alpha::R10, Alpha::R11, Alpha::R12, Alpha::R13, Alpha::R14, Alpha::R15, Alpha::R30, Alpha::R31, 
  };

  // F4RCVTs Register Class Value Types...
  static const EVT F4RCVTs[] = {
    MVT::f32, MVT::Other
  };

  // F8RCVTs Register Class Value Types...
  static const EVT F8RCVTs[] = {
    MVT::f64, MVT::Other
  };

  // GPRCVTs Register Class Value Types...
  static const EVT GPRCVTs[] = {
    MVT::i64, MVT::Other
  };

}  // end anonymous namespace

namespace Alpha {   // Register class instances
  F4RCClass	F4RCRegClass;
  F8RCClass	F8RCRegClass;
  GPRCClass	GPRCRegClass;

  static const TargetRegisterClass* const NullRegClasses[] = { NULL };

  // F4RC Register Class sub-classes...
  static const TargetRegisterClass* const F4RCSubclasses[] = {
    &Alpha::F8RCRegClass, NULL
  };

  // F8RC Register Class sub-classes...
  static const TargetRegisterClass* const F8RCSubclasses[] = {
    NULL
  };

  // GPRC Register Class sub-classes...
  static const TargetRegisterClass* const GPRCSubclasses[] = {
    NULL
  };

  // F4RC Register Class super-classes...
  static const TargetRegisterClass* const F4RCSuperclasses[] = {
    NULL
  };

  // F8RC Register Class super-classes...
  static const TargetRegisterClass* const F8RCSuperclasses[] = {
    &Alpha::F4RCRegClass, NULL
  };

  // GPRC Register Class super-classes...
  static const TargetRegisterClass* const GPRCSuperclasses[] = {
    NULL
  };


    F4RCClass::iterator
    F4RCClass::allocation_order_end(const MachineFunction &MF) const {
        return end()-1;
    }
  
F4RCClass::F4RCClass()  : TargetRegisterClass(F4RCRegClassID, "F4RC", F4RCVTs, F4RCSubclasses, F4RCSuperclasses, NullRegClasses, NullRegClasses, 4, 8, 1, F4RC, F4RC + 32) {}

    F8RCClass::iterator
    F8RCClass::allocation_order_end(const MachineFunction &MF) const {
        return end()-1;
    }
  
F8RCClass::F8RCClass()  : TargetRegisterClass(F8RCRegClassID, "F8RC", F8RCVTs, F8RCSubclasses, F8RCSuperclasses, NullRegClasses, NullRegClasses, 8, 8, 1, F8RC, F8RC + 32) {}

    GPRCClass::iterator
    GPRCClass::allocation_order_end(const MachineFunction &MF) const {
        return end()-3;
    }
  
GPRCClass::GPRCClass()  : TargetRegisterClass(GPRCRegClassID, "GPRC", GPRCVTs, GPRCSubclasses, GPRCSuperclasses, NullRegClasses, NullRegClasses, 8, 8, 1, GPRC, GPRC + 32) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Alpha::F4RCRegClass,
    &Alpha::F8RCRegClass,
    &Alpha::GPRCRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { Alpha::NoRegister, Alpha::NoRegister, 
Alpha::NoRegister, Alpha::NoRegister };
  const unsigned SubregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned AliasesHashTable[] = { Alpha::NoRegister, Alpha::NoRegister, 
Alpha::NoRegister, Alpha::NoRegister };
  const unsigned AliasesHashTableSize = 2;


  // Register Overlap Lists...
  const unsigned F0_Overlaps[] = { Alpha::F0, 0 };
  const unsigned F1_Overlaps[] = { Alpha::F1, 0 };
  const unsigned F2_Overlaps[] = { Alpha::F2, 0 };
  const unsigned F3_Overlaps[] = { Alpha::F3, 0 };
  const unsigned F4_Overlaps[] = { Alpha::F4, 0 };
  const unsigned F5_Overlaps[] = { Alpha::F5, 0 };
  const unsigned F6_Overlaps[] = { Alpha::F6, 0 };
  const unsigned F7_Overlaps[] = { Alpha::F7, 0 };
  const unsigned F8_Overlaps[] = { Alpha::F8, 0 };
  const unsigned F9_Overlaps[] = { Alpha::F9, 0 };
  const unsigned F10_Overlaps[] = { Alpha::F10, 0 };
  const unsigned F11_Overlaps[] = { Alpha::F11, 0 };
  const unsigned F12_Overlaps[] = { Alpha::F12, 0 };
  const unsigned F13_Overlaps[] = { Alpha::F13, 0 };
  const unsigned F14_Overlaps[] = { Alpha::F14, 0 };
  const unsigned F15_Overlaps[] = { Alpha::F15, 0 };
  const unsigned F16_Overlaps[] = { Alpha::F16, 0 };
  const unsigned F17_Overlaps[] = { Alpha::F17, 0 };
  const unsigned F18_Overlaps[] = { Alpha::F18, 0 };
  const unsigned F19_Overlaps[] = { Alpha::F19, 0 };
  const unsigned F20_Overlaps[] = { Alpha::F20, 0 };
  const unsigned F21_Overlaps[] = { Alpha::F21, 0 };
  const unsigned F22_Overlaps[] = { Alpha::F22, 0 };
  const unsigned F23_Overlaps[] = { Alpha::F23, 0 };
  const unsigned F24_Overlaps[] = { Alpha::F24, 0 };
  const unsigned F25_Overlaps[] = { Alpha::F25, 0 };
  const unsigned F26_Overlaps[] = { Alpha::F26, 0 };
  const unsigned F27_Overlaps[] = { Alpha::F27, 0 };
  const unsigned F28_Overlaps[] = { Alpha::F28, 0 };
  const unsigned F29_Overlaps[] = { Alpha::F29, 0 };
  const unsigned F30_Overlaps[] = { Alpha::F30, 0 };
  const unsigned F31_Overlaps[] = { Alpha::F31, 0 };
  const unsigned R0_Overlaps[] = { Alpha::R0, 0 };
  const unsigned R1_Overlaps[] = { Alpha::R1, 0 };
  const unsigned R2_Overlaps[] = { Alpha::R2, 0 };
  const unsigned R3_Overlaps[] = { Alpha::R3, 0 };
  const unsigned R4_Overlaps[] = { Alpha::R4, 0 };
  const unsigned R5_Overlaps[] = { Alpha::R5, 0 };
  const unsigned R6_Overlaps[] = { Alpha::R6, 0 };
  const unsigned R7_Overlaps[] = { Alpha::R7, 0 };
  const unsigned R8_Overlaps[] = { Alpha::R8, 0 };
  const unsigned R9_Overlaps[] = { Alpha::R9, 0 };
  const unsigned R10_Overlaps[] = { Alpha::R10, 0 };
  const unsigned R11_Overlaps[] = { Alpha::R11, 0 };
  const unsigned R12_Overlaps[] = { Alpha::R12, 0 };
  const unsigned R13_Overlaps[] = { Alpha::R13, 0 };
  const unsigned R14_Overlaps[] = { Alpha::R14, 0 };
  const unsigned R15_Overlaps[] = { Alpha::R15, 0 };
  const unsigned R16_Overlaps[] = { Alpha::R16, 0 };
  const unsigned R17_Overlaps[] = { Alpha::R17, 0 };
  const unsigned R18_Overlaps[] = { Alpha::R18, 0 };
  const unsigned R19_Overlaps[] = { Alpha::R19, 0 };
  const unsigned R20_Overlaps[] = { Alpha::R20, 0 };
  const unsigned R21_Overlaps[] = { Alpha::R21, 0 };
  const unsigned R22_Overlaps[] = { Alpha::R22, 0 };
  const unsigned R23_Overlaps[] = { Alpha::R23, 0 };
  const unsigned R24_Overlaps[] = { Alpha::R24, 0 };
  const unsigned R25_Overlaps[] = { Alpha::R25, 0 };
  const unsigned R26_Overlaps[] = { Alpha::R26, 0 };
  const unsigned R27_Overlaps[] = { Alpha::R27, 0 };
  const unsigned R28_Overlaps[] = { Alpha::R28, 0 };
  const unsigned R29_Overlaps[] = { Alpha::R29, 0 };
  const unsigned R30_Overlaps[] = { Alpha::R30, 0 };
  const unsigned R31_Overlaps[] = { Alpha::R31, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	0,	0,	0 },
    { "F0",	F0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F1",	F1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F2",	F2_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F3",	F3_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F4",	F4_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F5",	F5_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F6",	F6_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F7",	F7_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F8",	F8_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F9",	F9_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F10",	F10_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F11",	F11_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F12",	F12_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F13",	F13_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F14",	F14_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F15",	F15_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F16",	F16_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F17",	F17_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F18",	F18_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F19",	F19_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F20",	F20_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F21",	F21_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F22",	F22_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F23",	F23_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F24",	F24_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F25",	F25_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F26",	F26_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F27",	F27_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F28",	F28_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F29",	F29_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F30",	F30_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F31",	F31_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R0",	R0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R1",	R1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R2",	R2_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R3",	R3_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R4",	R4_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R5",	R5_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R6",	R6_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R7",	R7_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R8",	R8_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R9",	R9_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R10",	R10_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R11",	R11_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R12",	R12_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R13",	R13_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R14",	R14_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R15",	R15_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R16",	R16_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R17",	R17_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R18",	R18_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R19",	R19_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R20",	R20_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R21",	R21_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R22",	R22_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R23",	R23_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R24",	R24_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R25",	R25_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R26",	R26_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R27",	R27_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R28",	R28_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R29",	R29_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R30",	R30_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R31",	R31_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  };

  const char *const SubRegIndexTable[] = { "" };

}

unsigned AlphaGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned AlphaGenRegisterInfo::getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned AlphaGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

AlphaGenRegisterInfo::AlphaGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 65, RegisterClasses, RegisterClasses+3,
                 SubRegIndexTable,
                 CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int AlphaGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case Alpha::F0:
      return 33;
    case Alpha::F1:
      return 34;
    case Alpha::F2:
      return 35;
    case Alpha::F3:
      return 36;
    case Alpha::F4:
      return 37;
    case Alpha::F5:
      return 38;
    case Alpha::F6:
      return 39;
    case Alpha::F7:
      return 40;
    case Alpha::F8:
      return 41;
    case Alpha::F9:
      return 42;
    case Alpha::F10:
      return 43;
    case Alpha::F11:
      return 44;
    case Alpha::F12:
      return 45;
    case Alpha::F13:
      return 46;
    case Alpha::F14:
      return 47;
    case Alpha::F15:
      return 48;
    case Alpha::F16:
      return 49;
    case Alpha::F17:
      return 50;
    case Alpha::F18:
      return 51;
    case Alpha::F19:
      return 52;
    case Alpha::F20:
      return 53;
    case Alpha::F21:
      return 54;
    case Alpha::F22:
      return 55;
    case Alpha::F23:
      return 56;
    case Alpha::F24:
      return 57;
    case Alpha::F25:
      return 58;
    case Alpha::F26:
      return 59;
    case Alpha::F27:
      return 60;
    case Alpha::F28:
      return 61;
    case Alpha::F29:
      return 62;
    case Alpha::F30:
      return 63;
    case Alpha::F31:
      return 64;
    case Alpha::R0:
      return 0;
    case Alpha::R1:
      return 1;
    case Alpha::R2:
      return 2;
    case Alpha::R3:
      return 3;
    case Alpha::R4:
      return 4;
    case Alpha::R5:
      return 5;
    case Alpha::R6:
      return 6;
    case Alpha::R7:
      return 7;
    case Alpha::R8:
      return 8;
    case Alpha::R9:
      return 9;
    case Alpha::R10:
      return 10;
    case Alpha::R11:
      return 11;
    case Alpha::R12:
      return 12;
    case Alpha::R13:
      return 13;
    case Alpha::R14:
      return 14;
    case Alpha::R15:
      return 15;
    case Alpha::R16:
      return 16;
    case Alpha::R17:
      return 17;
    case Alpha::R18:
      return 18;
    case Alpha::R19:
      return 19;
    case Alpha::R20:
      return 20;
    case Alpha::R21:
      return 21;
    case Alpha::R22:
      return 22;
    case Alpha::R23:
      return 23;
    case Alpha::R24:
      return 24;
    case Alpha::R25:
      return 25;
    case Alpha::R26:
      return 26;
    case Alpha::R27:
      return 27;
    case Alpha::R28:
      return 28;
    case Alpha::R29:
      return 29;
    case Alpha::R30:
      return 30;
    case Alpha::R31:
      return 31;
    };
  };
}

} // End llvm namespace 
