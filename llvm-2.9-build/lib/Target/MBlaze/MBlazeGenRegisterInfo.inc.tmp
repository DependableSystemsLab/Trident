//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // CRC Register Class...
  static const unsigned CRC[] = {
    MBlaze::CARRY, 
  };

  // GPR Register Class...
  static const unsigned GPR[] = {
    MBlaze::R3, MBlaze::R4, MBlaze::R5, MBlaze::R6, MBlaze::R7, MBlaze::R8, MBlaze::R9, MBlaze::R10, MBlaze::R11, MBlaze::R12, MBlaze::R20, MBlaze::R21, MBlaze::R22, MBlaze::R23, MBlaze::R24, MBlaze::R25, MBlaze::R26, MBlaze::R27, MBlaze::R28, MBlaze::R29, MBlaze::R30, MBlaze::R31, MBlaze::R0, MBlaze::R1, MBlaze::R2, MBlaze::R13, MBlaze::R14, MBlaze::R15, MBlaze::R16, MBlaze::R17, MBlaze::R18, MBlaze::R19, 
  };

  // SPR Register Class...
  static const unsigned SPR[] = {
    MBlaze::RPC, MBlaze::RMSR, MBlaze::REAR, MBlaze::RESR, MBlaze::RFSR, MBlaze::RBTR, MBlaze::REDR, MBlaze::RPID, MBlaze::RZPR, MBlaze::RTLBX, MBlaze::RTLBLO, MBlaze::RTLBHI, MBlaze::RPVR0, MBlaze::RPVR1, MBlaze::RPVR2, MBlaze::RPVR3, MBlaze::RPVR4, MBlaze::RPVR5, MBlaze::RPVR6, MBlaze::RPVR7, MBlaze::RPVR8, MBlaze::RPVR9, MBlaze::RPVR10, MBlaze::RPVR11, 
  };

  // CRCVTs Register Class Value Types...
  static const EVT CRCVTs[] = {
    MVT::i32, MVT::Other
  };

  // GPRVTs Register Class Value Types...
  static const EVT GPRVTs[] = {
    MVT::i32, MVT::f32, MVT::Other
  };

  // SPRVTs Register Class Value Types...
  static const EVT SPRVTs[] = {
    MVT::i32, MVT::Other
  };

}  // end anonymous namespace

namespace MBlaze {   // Register class instances
  CRCClass	CRCRegClass;
  GPRClass	GPRRegClass;
  SPRClass	SPRRegClass;

  static const TargetRegisterClass* const NullRegClasses[] = { NULL };

  // CRC Register Class sub-classes...
  static const TargetRegisterClass* const CRCSubclasses[] = {
    NULL
  };

  // GPR Register Class sub-classes...
  static const TargetRegisterClass* const GPRSubclasses[] = {
    NULL
  };

  // SPR Register Class sub-classes...
  static const TargetRegisterClass* const SPRSubclasses[] = {
    NULL
  };

  // CRC Register Class super-classes...
  static const TargetRegisterClass* const CRCSuperclasses[] = {
    NULL
  };

  // GPR Register Class super-classes...
  static const TargetRegisterClass* const GPRSuperclasses[] = {
    NULL
  };

  // SPR Register Class super-classes...
  static const TargetRegisterClass* const SPRSuperclasses[] = {
    NULL
  };


CRCClass::CRCClass()  : TargetRegisterClass(CRCRegClassID, "CRC", CRCVTs, CRCSubclasses, CRCSuperclasses, NullRegClasses, NullRegClasses, 4, 4, -1, CRC, CRC + 1) {}

    GPRClass::iterator
    GPRClass::allocation_order_end(const MachineFunction &MF) const {
      // The last 10 registers on the list above are reserved
      return end()-10;
    }
  
GPRClass::GPRClass()  : TargetRegisterClass(GPRRegClassID, "GPR", GPRVTs, GPRSubclasses, GPRSuperclasses, NullRegClasses, NullRegClasses, 4, 4, 1, GPR, GPR + 32) {}

    SPRClass::iterator
    SPRClass::allocation_order_end(const MachineFunction &MF) const {
      // None of the special purpose registers are allocatable.
      return end()-24;
    }
  
SPRClass::SPRClass()  : TargetRegisterClass(SPRRegClassID, "SPR", SPRVTs, SPRSubclasses, SPRSuperclasses, NullRegClasses, NullRegClasses, 4, 4, 1, SPR, SPR + 24) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &MBlaze::CRCRegClass,
    &MBlaze::GPRRegClass,
    &MBlaze::SPRRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { MBlaze::NoRegister, MBlaze::NoRegister, 
MBlaze::NoRegister, MBlaze::NoRegister };
  const unsigned SubregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned AliasesHashTable[] = { MBlaze::NoRegister, MBlaze::NoRegister, 
MBlaze::NoRegister, MBlaze::NoRegister };
  const unsigned AliasesHashTableSize = 2;


  // Register Overlap Lists...
  const unsigned CARRY_Overlaps[] = { MBlaze::CARRY, 0 };
  const unsigned R0_Overlaps[] = { MBlaze::R0, 0 };
  const unsigned R1_Overlaps[] = { MBlaze::R1, 0 };
  const unsigned R2_Overlaps[] = { MBlaze::R2, 0 };
  const unsigned R3_Overlaps[] = { MBlaze::R3, 0 };
  const unsigned R4_Overlaps[] = { MBlaze::R4, 0 };
  const unsigned R5_Overlaps[] = { MBlaze::R5, 0 };
  const unsigned R6_Overlaps[] = { MBlaze::R6, 0 };
  const unsigned R7_Overlaps[] = { MBlaze::R7, 0 };
  const unsigned R8_Overlaps[] = { MBlaze::R8, 0 };
  const unsigned R9_Overlaps[] = { MBlaze::R9, 0 };
  const unsigned R10_Overlaps[] = { MBlaze::R10, 0 };
  const unsigned R11_Overlaps[] = { MBlaze::R11, 0 };
  const unsigned R12_Overlaps[] = { MBlaze::R12, 0 };
  const unsigned R13_Overlaps[] = { MBlaze::R13, 0 };
  const unsigned R14_Overlaps[] = { MBlaze::R14, 0 };
  const unsigned R15_Overlaps[] = { MBlaze::R15, 0 };
  const unsigned R16_Overlaps[] = { MBlaze::R16, 0 };
  const unsigned R17_Overlaps[] = { MBlaze::R17, 0 };
  const unsigned R18_Overlaps[] = { MBlaze::R18, 0 };
  const unsigned R19_Overlaps[] = { MBlaze::R19, 0 };
  const unsigned R20_Overlaps[] = { MBlaze::R20, 0 };
  const unsigned R21_Overlaps[] = { MBlaze::R21, 0 };
  const unsigned R22_Overlaps[] = { MBlaze::R22, 0 };
  const unsigned R23_Overlaps[] = { MBlaze::R23, 0 };
  const unsigned R24_Overlaps[] = { MBlaze::R24, 0 };
  const unsigned R25_Overlaps[] = { MBlaze::R25, 0 };
  const unsigned R26_Overlaps[] = { MBlaze::R26, 0 };
  const unsigned R27_Overlaps[] = { MBlaze::R27, 0 };
  const unsigned R28_Overlaps[] = { MBlaze::R28, 0 };
  const unsigned R29_Overlaps[] = { MBlaze::R29, 0 };
  const unsigned R30_Overlaps[] = { MBlaze::R30, 0 };
  const unsigned R31_Overlaps[] = { MBlaze::R31, 0 };
  const unsigned RBTR_Overlaps[] = { MBlaze::RBTR, 0 };
  const unsigned REAR_Overlaps[] = { MBlaze::REAR, 0 };
  const unsigned REDR_Overlaps[] = { MBlaze::REDR, 0 };
  const unsigned RESR_Overlaps[] = { MBlaze::RESR, 0 };
  const unsigned RFSR_Overlaps[] = { MBlaze::RFSR, 0 };
  const unsigned RMSR_Overlaps[] = { MBlaze::RMSR, 0 };
  const unsigned RPC_Overlaps[] = { MBlaze::RPC, 0 };
  const unsigned RPID_Overlaps[] = { MBlaze::RPID, 0 };
  const unsigned RPVR0_Overlaps[] = { MBlaze::RPVR0, 0 };
  const unsigned RPVR1_Overlaps[] = { MBlaze::RPVR1, 0 };
  const unsigned RPVR2_Overlaps[] = { MBlaze::RPVR2, 0 };
  const unsigned RPVR3_Overlaps[] = { MBlaze::RPVR3, 0 };
  const unsigned RPVR4_Overlaps[] = { MBlaze::RPVR4, 0 };
  const unsigned RPVR5_Overlaps[] = { MBlaze::RPVR5, 0 };
  const unsigned RPVR6_Overlaps[] = { MBlaze::RPVR6, 0 };
  const unsigned RPVR7_Overlaps[] = { MBlaze::RPVR7, 0 };
  const unsigned RPVR8_Overlaps[] = { MBlaze::RPVR8, 0 };
  const unsigned RPVR9_Overlaps[] = { MBlaze::RPVR9, 0 };
  const unsigned RPVR10_Overlaps[] = { MBlaze::RPVR10, 0 };
  const unsigned RPVR11_Overlaps[] = { MBlaze::RPVR11, 0 };
  const unsigned RTLBHI_Overlaps[] = { MBlaze::RTLBHI, 0 };
  const unsigned RTLBLO_Overlaps[] = { MBlaze::RTLBLO, 0 };
  const unsigned RTLBX_Overlaps[] = { MBlaze::RTLBX, 0 };
  const unsigned RZPR_Overlaps[] = { MBlaze::RZPR, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	0,	0,	0 },
    { "CARRY",	CARRY_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
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
    { "RBTR",	RBTR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "REAR",	REAR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "REDR",	REDR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RESR",	RESR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RFSR",	RFSR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RMSR",	RMSR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPC",	RPC_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPID",	RPID_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR0",	RPVR0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR1",	RPVR1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR2",	RPVR2_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR3",	RPVR3_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR4",	RPVR4_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR5",	RPVR5_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR6",	RPVR6_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR7",	RPVR7_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR8",	RPVR8_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR9",	RPVR9_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR10",	RPVR10_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RPVR11",	RPVR11_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RTLBHI",	RTLBHI_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RTLBLO",	RTLBLO_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RTLBX",	RTLBX_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RZPR",	RZPR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  };

  const char *const SubRegIndexTable[] = { "" };

}

unsigned MBlazeGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned MBlazeGenRegisterInfo::getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned MBlazeGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

MBlazeGenRegisterInfo::MBlazeGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 58, RegisterClasses, RegisterClasses+3,
                 SubRegIndexTable,
                 CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int MBlazeGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case MBlaze::CARRY:
      return 33;
    case MBlaze::R0:
      return 0;
    case MBlaze::R1:
      return 1;
    case MBlaze::R2:
      return 2;
    case MBlaze::R3:
      return 3;
    case MBlaze::R4:
      return 5;
    case MBlaze::R5:
      return 5;
    case MBlaze::R6:
      return 6;
    case MBlaze::R7:
      return 7;
    case MBlaze::R8:
      return 8;
    case MBlaze::R9:
      return 9;
    case MBlaze::R10:
      return 10;
    case MBlaze::R11:
      return 11;
    case MBlaze::R12:
      return 12;
    case MBlaze::R13:
      return 13;
    case MBlaze::R14:
      return 14;
    case MBlaze::R15:
      return 15;
    case MBlaze::R16:
      return 16;
    case MBlaze::R17:
      return 17;
    case MBlaze::R18:
      return 18;
    case MBlaze::R19:
      return 19;
    case MBlaze::R20:
      return 20;
    case MBlaze::R21:
      return 21;
    case MBlaze::R22:
      return 22;
    case MBlaze::R23:
      return 23;
    case MBlaze::R24:
      return 24;
    case MBlaze::R25:
      return 25;
    case MBlaze::R26:
      return 26;
    case MBlaze::R27:
      return 27;
    case MBlaze::R28:
      return 28;
    case MBlaze::R29:
      return 29;
    case MBlaze::R30:
      return 30;
    case MBlaze::R31:
      return 31;
    case MBlaze::RBTR:
      return 37;
    case MBlaze::REAR:
      return 34;
    case MBlaze::REDR:
      return 38;
    case MBlaze::RESR:
      return 35;
    case MBlaze::RFSR:
      return 36;
    case MBlaze::RMSR:
      return 33;
    case MBlaze::RPC:
      return 32;
    case MBlaze::RPID:
      return 39;
    case MBlaze::RPVR0:
      return 44;
    case MBlaze::RPVR1:
      return 45;
    case MBlaze::RPVR2:
      return 46;
    case MBlaze::RPVR3:
      return 47;
    case MBlaze::RPVR4:
      return 48;
    case MBlaze::RPVR5:
      return 49;
    case MBlaze::RPVR6:
      return 50;
    case MBlaze::RPVR7:
      return 51;
    case MBlaze::RPVR8:
      return 52;
    case MBlaze::RPVR9:
      return 53;
    case MBlaze::RPVR10:
      return 54;
    case MBlaze::RPVR11:
      return 55;
    case MBlaze::RTLBHI:
      return 43;
    case MBlaze::RTLBLO:
      return 42;
    case MBlaze::RTLBX:
      return 41;
    case MBlaze::RZPR:
      return 40;
    };
  };
}

} // End llvm namespace 
