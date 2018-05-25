//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // GRRegs Register Class...
  static const unsigned GRRegs[] = {
    XCore::R0, XCore::R1, XCore::R2, XCore::R3, XCore::R11, XCore::R4, XCore::R5, XCore::R6, XCore::R7, XCore::R8, XCore::R9, XCore::R10, 
  };

  // RRegs Register Class...
  static const unsigned RRegs[] = {
    XCore::CP, XCore::DP, XCore::SP, XCore::LR, 
  };

  // GRRegsVTs Register Class Value Types...
  static const EVT GRRegsVTs[] = {
    MVT::i32, MVT::Other
  };

  // RRegsVTs Register Class Value Types...
  static const EVT RRegsVTs[] = {
    MVT::i32, MVT::Other
  };

}  // end anonymous namespace

namespace XCore {   // Register class instances
  GRRegsClass	GRRegsRegClass;
  RRegsClass	RRegsRegClass;

  static const TargetRegisterClass* const NullRegClasses[] = { NULL };

  // GRRegs Register Class sub-classes...
  static const TargetRegisterClass* const GRRegsSubclasses[] = {
    NULL
  };

  // RRegs Register Class sub-classes...
  static const TargetRegisterClass* const RRegsSubclasses[] = {
    NULL
  };

  // GRRegs Register Class super-classes...
  static const TargetRegisterClass* const GRRegsSuperclasses[] = {
    NULL
  };

  // RRegs Register Class super-classes...
  static const TargetRegisterClass* const RRegsSuperclasses[] = {
    NULL
  };


    GRRegsClass::iterator
    GRRegsClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    GRRegsClass::iterator
    GRRegsClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return end()-1;  // don't allocate R10
      else
        return end();
    }
  
GRRegsClass::GRRegsClass()  : TargetRegisterClass(GRRegsRegClassID, "GRRegs", GRRegsVTs, GRRegsSubclasses, GRRegsSuperclasses, NullRegClasses, NullRegClasses, 4, 4, 1, GRRegs, GRRegs + 12) {}

    RRegsClass::iterator
    RRegsClass::allocation_order_begin(const MachineFunction &MF) const {
      return begin();
    }
    RRegsClass::iterator
    RRegsClass::allocation_order_end(const MachineFunction &MF) const {
      // No allocatable registers
      return begin();
    }
  
RRegsClass::RRegsClass()  : TargetRegisterClass(RRegsRegClassID, "RRegs", RRegsVTs, RRegsSubclasses, RRegsSuperclasses, NullRegClasses, NullRegClasses, 4, 4, 1, RRegs, RRegs + 4) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &XCore::GRRegsRegClass,
    &XCore::RRegsRegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { XCore::NoRegister, XCore::NoRegister, 
XCore::NoRegister, XCore::NoRegister };
  const unsigned SubregHashTableSize = 2;


  // Number of hash collisions: 0
  const unsigned AliasesHashTable[] = { XCore::NoRegister, XCore::NoRegister, 
XCore::NoRegister, XCore::NoRegister };
  const unsigned AliasesHashTableSize = 2;


  // Register Overlap Lists...
  const unsigned CP_Overlaps[] = { XCore::CP, 0 };
  const unsigned DP_Overlaps[] = { XCore::DP, 0 };
  const unsigned LR_Overlaps[] = { XCore::LR, 0 };
  const unsigned R0_Overlaps[] = { XCore::R0, 0 };
  const unsigned R1_Overlaps[] = { XCore::R1, 0 };
  const unsigned R2_Overlaps[] = { XCore::R2, 0 };
  const unsigned R3_Overlaps[] = { XCore::R3, 0 };
  const unsigned R4_Overlaps[] = { XCore::R4, 0 };
  const unsigned R5_Overlaps[] = { XCore::R5, 0 };
  const unsigned R6_Overlaps[] = { XCore::R6, 0 };
  const unsigned R7_Overlaps[] = { XCore::R7, 0 };
  const unsigned R8_Overlaps[] = { XCore::R8, 0 };
  const unsigned R9_Overlaps[] = { XCore::R9, 0 };
  const unsigned R10_Overlaps[] = { XCore::R10, 0 };
  const unsigned R11_Overlaps[] = { XCore::R11, 0 };
  const unsigned SP_Overlaps[] = { XCore::SP, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned Empty_SuperRegsSet[] = { 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	0,	0,	0 },
    { "CP",	CP_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "DP",	DP_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "LR",	LR_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
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
    { "SP",	SP_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  };

  const char *const SubRegIndexTable[] = { "" };

}

unsigned XCoreGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned XCoreGenRegisterInfo::getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const {
  switch (RegNo) {
  default:
    return 0;
  };
  return 0;
}

unsigned XCoreGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

XCoreGenRegisterInfo::XCoreGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 17, RegisterClasses, RegisterClasses+2,
                 SubRegIndexTable,
                 CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int XCoreGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case XCore::CP:
      return 12;
    case XCore::DP:
      return 13;
    case XCore::LR:
      return 15;
    case XCore::R0:
      return 0;
    case XCore::R1:
      return 1;
    case XCore::R2:
      return 2;
    case XCore::R3:
      return 3;
    case XCore::R4:
      return 4;
    case XCore::R5:
      return 5;
    case XCore::R6:
      return 6;
    case XCore::R7:
      return 7;
    case XCore::R8:
      return 8;
    case XCore::R9:
      return 9;
    case XCore::R10:
      return 10;
    case XCore::R11:
      return 11;
    case XCore::SP:
      return 14;
    };
  };
}

} // End llvm namespace 
