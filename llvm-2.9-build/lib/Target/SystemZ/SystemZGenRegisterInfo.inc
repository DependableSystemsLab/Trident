//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // ADDR32 Register Class...
  static const unsigned ADDR32[] = {
    SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R6W, SystemZ::R7W, SystemZ::R8W, SystemZ::R9W, SystemZ::R10W, SystemZ::R12W, SystemZ::R13W, SystemZ::R11W, SystemZ::R14W, SystemZ::R15W, 
  };

  // ADDR64 Register Class...
  static const unsigned ADDR64[] = {
    SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R12D, SystemZ::R13D, SystemZ::R11D, SystemZ::R14D, SystemZ::R15D, 
  };

  // CCR Register Class...
  static const unsigned CCR[] = {
    SystemZ::PSW, 
  };

  // FP32 Register Class...
  static const unsigned FP32[] = {
    SystemZ::F0S, SystemZ::F1S, SystemZ::F2S, SystemZ::F3S, SystemZ::F4S, SystemZ::F5S, SystemZ::F6S, SystemZ::F7S, SystemZ::F8S, SystemZ::F9S, SystemZ::F10S, SystemZ::F11S, SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S, 
  };

  // FP64 Register Class...
  static const unsigned FP64[] = {
    SystemZ::F0L, SystemZ::F1L, SystemZ::F2L, SystemZ::F3L, SystemZ::F4L, SystemZ::F5L, SystemZ::F6L, SystemZ::F7L, SystemZ::F8L, SystemZ::F9L, SystemZ::F10L, SystemZ::F11L, SystemZ::F12L, SystemZ::F13L, SystemZ::F14L, SystemZ::F15L, 
  };

  // GR128 Register Class...
  static const unsigned GR128[] = {
    SystemZ::R0Q, SystemZ::R2Q, SystemZ::R4Q, SystemZ::R6Q, SystemZ::R8Q, SystemZ::R10Q, SystemZ::R12Q, SystemZ::R14Q, 
  };

  // GR32 Register Class...
  static const unsigned GR32[] = {
    SystemZ::R0W, SystemZ::R1W, SystemZ::R2W, SystemZ::R3W, SystemZ::R4W, SystemZ::R5W, SystemZ::R6W, SystemZ::R7W, SystemZ::R8W, SystemZ::R9W, SystemZ::R10W, SystemZ::R12W, SystemZ::R13W, SystemZ::R11W, SystemZ::R14W, SystemZ::R15W, 
  };

  // GR64 Register Class...
  static const unsigned GR64[] = {
    SystemZ::R0D, SystemZ::R1D, SystemZ::R2D, SystemZ::R3D, SystemZ::R4D, SystemZ::R5D, SystemZ::R6D, SystemZ::R7D, SystemZ::R8D, SystemZ::R9D, SystemZ::R10D, SystemZ::R12D, SystemZ::R13D, SystemZ::R11D, SystemZ::R14D, SystemZ::R15D, 
  };

  // GR64P Register Class...
  static const unsigned GR64P[] = {
    SystemZ::R0P, SystemZ::R2P, SystemZ::R4P, SystemZ::R6P, SystemZ::R8P, SystemZ::R10P, SystemZ::R12P, SystemZ::R14P, 
  };

  // ADDR32VTs Register Class Value Types...
  static const EVT ADDR32VTs[] = {
    MVT::i32, MVT::Other
  };

  // ADDR64VTs Register Class Value Types...
  static const EVT ADDR64VTs[] = {
    MVT::i64, MVT::Other
  };

  // CCRVTs Register Class Value Types...
  static const EVT CCRVTs[] = {
    MVT::i64, MVT::Other
  };

  // FP32VTs Register Class Value Types...
  static const EVT FP32VTs[] = {
    MVT::f32, MVT::Other
  };

  // FP64VTs Register Class Value Types...
  static const EVT FP64VTs[] = {
    MVT::f64, MVT::Other
  };

  // GR128VTs Register Class Value Types...
  static const EVT GR128VTs[] = {
    MVT::v2i64, MVT::Other
  };

  // GR32VTs Register Class Value Types...
  static const EVT GR32VTs[] = {
    MVT::i32, MVT::Other
  };

  // GR64VTs Register Class Value Types...
  static const EVT GR64VTs[] = {
    MVT::i64, MVT::Other
  };

  // GR64PVTs Register Class Value Types...
  static const EVT GR64PVTs[] = {
    MVT::v2i32, MVT::Other
  };

}  // end anonymous namespace

namespace SystemZ {   // Register class instances
  ADDR32Class	ADDR32RegClass;
  ADDR64Class	ADDR64RegClass;
  CCRClass	CCRRegClass;
  FP32Class	FP32RegClass;
  FP64Class	FP64RegClass;
  GR128Class	GR128RegClass;
  GR32Class	GR32RegClass;
  GR64Class	GR64RegClass;
  GR64PClass	GR64PRegClass;

  // ADDR32 Sub-register Classes...
  static const TargetRegisterClass* const ADDR32SubRegClasses[] = {
    0, 0, 0, 0
  };

  // ADDR64 Sub-register Classes...
  static const TargetRegisterClass* const ADDR64SubRegClasses[] = {
    &SystemZ::ADDR32RegClass, 0, 0, 0
  };

  // CCR Sub-register Classes...
  static const TargetRegisterClass* const CCRSubRegClasses[] = {
    0, 0, 0, 0
  };

  // FP32 Sub-register Classes...
  static const TargetRegisterClass* const FP32SubRegClasses[] = {
    0, 0, 0, 0
  };

  // FP64 Sub-register Classes...
  static const TargetRegisterClass* const FP64SubRegClasses[] = {
    &SystemZ::FP32RegClass, 0, 0, 0
  };

  // GR128 Sub-register Classes...
  static const TargetRegisterClass* const GR128SubRegClasses[] = {
    &SystemZ::GR32RegClass, &SystemZ::GR64RegClass, &SystemZ::GR64RegClass, &SystemZ::GR32RegClass
  };

  // GR32 Sub-register Classes...
  static const TargetRegisterClass* const GR32SubRegClasses[] = {
    0, 0, 0, 0
  };

  // GR64 Sub-register Classes...
  static const TargetRegisterClass* const GR64SubRegClasses[] = {
    &SystemZ::GR32RegClass, 0, 0, 0
  };

  // GR64P Sub-register Classes...
  static const TargetRegisterClass* const GR64PSubRegClasses[] = {
    &SystemZ::GR32RegClass, 0, 0, &SystemZ::GR32RegClass
  };

  // ADDR32 Super-register Classes...
  static const TargetRegisterClass* const ADDR32SuperRegClasses[] = {
    &SystemZ::ADDR64RegClass, NULL
  };

  // ADDR64 Super-register Classes...
  static const TargetRegisterClass* const ADDR64SuperRegClasses[] = {
    NULL
  };

  // CCR Super-register Classes...
  static const TargetRegisterClass* const CCRSuperRegClasses[] = {
    NULL
  };

  // FP32 Super-register Classes...
  static const TargetRegisterClass* const FP32SuperRegClasses[] = {
    &SystemZ::FP64RegClass, NULL
  };

  // FP64 Super-register Classes...
  static const TargetRegisterClass* const FP64SuperRegClasses[] = {
    NULL
  };

  // GR128 Super-register Classes...
  static const TargetRegisterClass* const GR128SuperRegClasses[] = {
    NULL
  };

  // GR32 Super-register Classes...
  static const TargetRegisterClass* const GR32SuperRegClasses[] = {
    &SystemZ::GR128RegClass, &SystemZ::GR64RegClass, &SystemZ::GR64PRegClass, NULL
  };

  // GR64 Super-register Classes...
  static const TargetRegisterClass* const GR64SuperRegClasses[] = {
    &SystemZ::GR128RegClass, NULL
  };

  // GR64P Super-register Classes...
  static const TargetRegisterClass* const GR64PSuperRegClasses[] = {
    NULL
  };

  // ADDR32 Register Class sub-classes...
  static const TargetRegisterClass* const ADDR32Subclasses[] = {
    NULL
  };

  // ADDR64 Register Class sub-classes...
  static const TargetRegisterClass* const ADDR64Subclasses[] = {
    NULL
  };

  // CCR Register Class sub-classes...
  static const TargetRegisterClass* const CCRSubclasses[] = {
    NULL
  };

  // FP32 Register Class sub-classes...
  static const TargetRegisterClass* const FP32Subclasses[] = {
    NULL
  };

  // FP64 Register Class sub-classes...
  static const TargetRegisterClass* const FP64Subclasses[] = {
    NULL
  };

  // GR128 Register Class sub-classes...
  static const TargetRegisterClass* const GR128Subclasses[] = {
    NULL
  };

  // GR32 Register Class sub-classes...
  static const TargetRegisterClass* const GR32Subclasses[] = {
    &SystemZ::ADDR32RegClass, NULL
  };

  // GR64 Register Class sub-classes...
  static const TargetRegisterClass* const GR64Subclasses[] = {
    &SystemZ::ADDR64RegClass, NULL
  };

  // GR64P Register Class sub-classes...
  static const TargetRegisterClass* const GR64PSubclasses[] = {
    NULL
  };

  // ADDR32 Register Class super-classes...
  static const TargetRegisterClass* const ADDR32Superclasses[] = {
    &SystemZ::GR32RegClass, NULL
  };

  // ADDR64 Register Class super-classes...
  static const TargetRegisterClass* const ADDR64Superclasses[] = {
    &SystemZ::GR64RegClass, NULL
  };

  // CCR Register Class super-classes...
  static const TargetRegisterClass* const CCRSuperclasses[] = {
    NULL
  };

  // FP32 Register Class super-classes...
  static const TargetRegisterClass* const FP32Superclasses[] = {
    NULL
  };

  // FP64 Register Class super-classes...
  static const TargetRegisterClass* const FP64Superclasses[] = {
    NULL
  };

  // GR128 Register Class super-classes...
  static const TargetRegisterClass* const GR128Superclasses[] = {
    NULL
  };

  // GR32 Register Class super-classes...
  static const TargetRegisterClass* const GR32Superclasses[] = {
    NULL
  };

  // GR64 Register Class super-classes...
  static const TargetRegisterClass* const GR64Superclasses[] = {
    NULL
  };

  // GR64P Register Class super-classes...
  static const TargetRegisterClass* const GR64PSuperclasses[] = {
    NULL
  };


    static const unsigned SystemZ_ADDR32[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  /* No R0W */   SystemZ::R12W, SystemZ::R11W,
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    static const unsigned SystemZ_ADDR32_nofp[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  /* No R0W */   SystemZ::R12W, /* No R11W */
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    ADDR32Class::iterator
    ADDR32Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_ADDR32_nofp;
      else
        return SystemZ_ADDR32;
    }
    ADDR32Class::iterator
    ADDR32Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_ADDR32_nofp + (sizeof(SystemZ_ADDR32_nofp) / sizeof(unsigned));
      else
        return SystemZ_ADDR32 + (sizeof(SystemZ_ADDR32) / sizeof(unsigned));
    }
  
ADDR32Class::ADDR32Class()  : TargetRegisterClass(ADDR32RegClassID, "ADDR32", ADDR32VTs, ADDR32Subclasses, ADDR32Superclasses, ADDR32SubRegClasses, ADDR32SuperRegClasses, 4, 4, 1, ADDR32, ADDR32 + 15) {}

    static const unsigned SystemZ_ADDR64[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  /* No R0D */   SystemZ::R12D, SystemZ::R11D,
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    static const unsigned SystemZ_ADDR64_nofp[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  /* No R0D */   SystemZ::R12D, /* No R11D */
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    ADDR64Class::iterator
    ADDR64Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_ADDR64_nofp;
      else
        return SystemZ_ADDR64;
    }
    ADDR64Class::iterator
    ADDR64Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_ADDR64_nofp + (sizeof(SystemZ_ADDR64_nofp) / sizeof(unsigned));
      else
        return SystemZ_ADDR64 + (sizeof(SystemZ_ADDR64) / sizeof(unsigned));
    }
  
ADDR64Class::ADDR64Class()  : TargetRegisterClass(ADDR64RegClassID, "ADDR64", ADDR64VTs, ADDR64Subclasses, ADDR64Superclasses, ADDR64SubRegClasses, ADDR64SuperRegClasses, 8, 8, 1, ADDR64, ADDR64 + 15) {}

CCRClass::CCRClass()  : TargetRegisterClass(CCRRegClassID, "CCR", CCRVTs, CCRSubclasses, CCRSuperclasses, CCRSubRegClasses, CCRSuperRegClasses, 8, 8, -1, CCR, CCR + 1) {}

    static const unsigned SystemZ_REGFP32[] = {
      SystemZ::F0S,  SystemZ::F2S,  SystemZ::F4S,  SystemZ::F6S,
      SystemZ::F1S,  SystemZ::F3S,  SystemZ::F5S,  SystemZ::F7S,
      SystemZ::F8S,  SystemZ::F9S,  SystemZ::F10S, SystemZ::F11S,
      SystemZ::F12S, SystemZ::F13S, SystemZ::F14S, SystemZ::F15S };
    FP32Class::iterator
    FP32Class::allocation_order_begin(const MachineFunction &MF) const {
      return SystemZ_REGFP32;
    }
    FP32Class::iterator
    FP32Class::allocation_order_end(const MachineFunction &MF) const {
      return SystemZ_REGFP32 + (sizeof(SystemZ_REGFP32) / sizeof(unsigned));
    }
  
FP32Class::FP32Class()  : TargetRegisterClass(FP32RegClassID, "FP32", FP32VTs, FP32Subclasses, FP32Superclasses, FP32SubRegClasses, FP32SuperRegClasses, 4, 4, 1, FP32, FP32 + 16) {}

    static const unsigned SystemZ_REGFP64[] = {
      SystemZ::F0L,  SystemZ::F2L,  SystemZ::F4L,  SystemZ::F6L,
      SystemZ::F1L,  SystemZ::F3L,  SystemZ::F5L,  SystemZ::F7L,
      SystemZ::F8L,  SystemZ::F9L,  SystemZ::F10L, SystemZ::F11L,
      SystemZ::F12L, SystemZ::F13L, SystemZ::F14L, SystemZ::F15L };
    FP64Class::iterator
    FP64Class::allocation_order_begin(const MachineFunction &MF) const {
      return SystemZ_REGFP64;
    }
    FP64Class::iterator
    FP64Class::allocation_order_end(const MachineFunction &MF) const {
      return SystemZ_REGFP64 + (sizeof(SystemZ_REGFP64) / sizeof(unsigned));
    }
  
FP64Class::FP64Class()  : TargetRegisterClass(FP64RegClassID, "FP64", FP64VTs, FP64Subclasses, FP64Superclasses, FP64SubRegClasses, FP64SuperRegClasses, 8, 8, 1, FP64, FP64 + 16) {}

    static const unsigned SystemZ_REG128[] = {
      SystemZ::R0Q,  SystemZ::R2Q,  SystemZ::R4Q,  SystemZ::R10Q,
      SystemZ::R8Q,  SystemZ::R6Q };
    static const unsigned SystemZ_REG128_nofp[] = {
      SystemZ::R0Q,  SystemZ::R2Q,  SystemZ::R4Q, /* NO R10Q */
      SystemZ::R8Q,  SystemZ::R6Q };
    GR128Class::iterator
    GR128Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG128_nofp;
      else
        return SystemZ_REG128;
    }
    GR128Class::iterator
    GR128Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG128_nofp + (sizeof(SystemZ_REG128_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG128 + (sizeof(SystemZ_REG128) / sizeof(unsigned));
    }
  
GR128Class::GR128Class()  : TargetRegisterClass(GR128RegClassID, "GR128", GR128VTs, GR128Subclasses, GR128Superclasses, GR128SubRegClasses, GR128SuperRegClasses, 16, 16, 1, GR128, GR128 + 8) {}

    static const unsigned SystemZ_REG32[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  SystemZ::R0W,  SystemZ::R12W, SystemZ::R11W,
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    static const unsigned SystemZ_REG32_nofp[] = {
      SystemZ::R1W,  SystemZ::R2W,  SystemZ::R3W,  SystemZ::R4W,
      SystemZ::R5W,  SystemZ::R0W,  SystemZ::R12W, /* No R11W */
      SystemZ::R10W, SystemZ::R9W,  SystemZ::R8W,  SystemZ::R7W,
      SystemZ::R6W,  SystemZ::R14W, SystemZ::R13W
    };
    GR32Class::iterator
    GR32Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG32_nofp;
      else
        return SystemZ_REG32;
    }
    GR32Class::iterator
    GR32Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG32_nofp + (sizeof(SystemZ_REG32_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG32 + (sizeof(SystemZ_REG32) / sizeof(unsigned));
    }
  
GR32Class::GR32Class()  : TargetRegisterClass(GR32RegClassID, "GR32", GR32VTs, GR32Subclasses, GR32Superclasses, GR32SubRegClasses, GR32SuperRegClasses, 4, 4, 1, GR32, GR32 + 16) {}

    static const unsigned SystemZ_REG64[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  SystemZ::R0D,  SystemZ::R12D, SystemZ::R11D,
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    static const unsigned SystemZ_REG64_nofp[] = {
      SystemZ::R1D,  SystemZ::R2D,  SystemZ::R3D,  SystemZ::R4D,
      SystemZ::R5D,  SystemZ::R0D,  SystemZ::R12D, /* No R11D */
      SystemZ::R10D, SystemZ::R9D,  SystemZ::R8D,  SystemZ::R7D,
      SystemZ::R6D,  SystemZ::R14D, SystemZ::R13D
    };
    GR64Class::iterator
    GR64Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG64_nofp;
      else
        return SystemZ_REG64;
    }
    GR64Class::iterator
    GR64Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG64_nofp + (sizeof(SystemZ_REG64_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG64 + (sizeof(SystemZ_REG64) / sizeof(unsigned));
    }
  
GR64Class::GR64Class()  : TargetRegisterClass(GR64RegClassID, "GR64", GR64VTs, GR64Subclasses, GR64Superclasses, GR64SubRegClasses, GR64SuperRegClasses, 8, 8, 1, GR64, GR64 + 16) {}

    static const unsigned SystemZ_REG64P[] = {
      SystemZ::R0P,  SystemZ::R2P,  SystemZ::R4P, SystemZ::R10P,
      SystemZ::R8P,  SystemZ::R6P };
    static const unsigned SystemZ_REG64P_nofp[] = {
      SystemZ::R0P,  SystemZ::R2P,  SystemZ::R4P, /* NO R10P */
      SystemZ::R8P,  SystemZ::R6P };
    GR64PClass::iterator
    GR64PClass::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG64P_nofp;
      else
        return SystemZ_REG64P;
    }
    GR64PClass::iterator
    GR64PClass::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const TargetFrameLowering *TFI = TM.getFrameLowering();
      if (TFI->hasFP(MF))
        return SystemZ_REG64P_nofp + (sizeof(SystemZ_REG64P_nofp) / sizeof(unsigned));
      else
        return SystemZ_REG64P + (sizeof(SystemZ_REG64P) / sizeof(unsigned));
    }
  
GR64PClass::GR64PClass()  : TargetRegisterClass(GR64PRegClassID, "GR64P", GR64PVTs, GR64PSubclasses, GR64PSuperclasses, GR64PSubRegClasses, GR64PSuperRegClasses, 8, 8, 1, GR64P, GR64P + 8) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &SystemZ::ADDR32RegClass,
    &SystemZ::ADDR64RegClass,
    &SystemZ::CCRRegClass,
    &SystemZ::FP32RegClass,
    &SystemZ::FP64RegClass,
    &SystemZ::GR128RegClass,
    &SystemZ::GR32RegClass,
    &SystemZ::GR64RegClass,
    &SystemZ::GR64PRegClass,
  };


  // Number of hash collisions: 16
  const unsigned SubregHashTable[] = { SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14P, SystemZ::R15W, 
                                       SystemZ::R14Q, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15D, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F6L, SystemZ::F6S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R11D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F13L, SystemZ::F13S, 
                                       SystemZ::R6P, SystemZ::R6W, 
                                       SystemZ::R6D, SystemZ::R6W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6Q, SystemZ::R6W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10P, SystemZ::R11W, 
                                       SystemZ::R10Q, SystemZ::R11W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11D, SystemZ::R11W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F0L, SystemZ::F0S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6Q, SystemZ::R7D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F7L, SystemZ::F7S, 
                                       SystemZ::R2P, SystemZ::R2W, 
                                       SystemZ::R2D, SystemZ::R2W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R2W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R12D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6P, SystemZ::R7W, 
                                       SystemZ::F14L, SystemZ::F14S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6Q, SystemZ::R7W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7D, SystemZ::R7W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R3D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8Q, SystemZ::R8D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2P, SystemZ::R3W, 
                                       SystemZ::F8L, SystemZ::F8S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R3W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R3D, SystemZ::R3W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F15L, SystemZ::F15S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12D, SystemZ::R12W, 
                                       SystemZ::R12P, SystemZ::R12W, 
                                       SystemZ::R12Q, SystemZ::R12W, 
                                       SystemZ::R4Q, SystemZ::R4D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F2L, SystemZ::F2S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F9L, SystemZ::F9S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R13D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8D, SystemZ::R8W, 
                                       SystemZ::R8P, SystemZ::R8W, 
                                       SystemZ::R8Q, SystemZ::R8W, 
                                       SystemZ::R0Q, SystemZ::R0D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12P, SystemZ::R13W, 
                                       SystemZ::R12Q, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13D, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F3L, SystemZ::F3S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8Q, SystemZ::R9D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F10L, SystemZ::F10S, 
                                       SystemZ::R4P, SystemZ::R4W, 
                                       SystemZ::R4D, SystemZ::R4W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R4W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R14D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8P, SystemZ::R9W, 
                                       SystemZ::R8Q, SystemZ::R9W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9D, SystemZ::R9W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R5D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F4L, SystemZ::F4S, 
                                       SystemZ::R0P, SystemZ::R0W, 
                                       SystemZ::R0D, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0Q, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R10D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4P, SystemZ::R5W, 
                                       SystemZ::F11L, SystemZ::F11S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R5W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5D, SystemZ::R5W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0Q, SystemZ::R1D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14D, SystemZ::R14W, 
                                       SystemZ::R14P, SystemZ::R14W, 
                                       SystemZ::R14Q, SystemZ::R14W, 
                                       SystemZ::R6Q, SystemZ::R6D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0P, SystemZ::R1W, 
                                       SystemZ::F5L, SystemZ::F5S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0Q, SystemZ::R1W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1D, SystemZ::R1W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F12L, SystemZ::F12S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R15D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10D, SystemZ::R10W, 
                                       SystemZ::R10P, SystemZ::R10W, 
                                       SystemZ::R10Q, SystemZ::R10W, 
                                       SystemZ::R2Q, SystemZ::R2D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
SystemZ::NoRegister, SystemZ::NoRegister };
  const unsigned SubregHashTableSize = 512;


  // Number of hash collisions: 110
  const unsigned AliasesHashTable[] = { SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6D, SystemZ::R6Q, 
                                       SystemZ::F13S, SystemZ::F13L, 
                                       SystemZ::R14P, SystemZ::R15W, 
                                       SystemZ::R6P, SystemZ::R6Q, 
                                       SystemZ::R7D, SystemZ::R6Q, 
                                       SystemZ::R6W, SystemZ::R6Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7W, SystemZ::R6Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15D, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R15W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F0S, SystemZ::F0L, 
                                       SystemZ::R6P, SystemZ::R6W, 
                                       SystemZ::F13L, SystemZ::F13S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6Q, SystemZ::R6W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6D, SystemZ::R6W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F0L, SystemZ::F0S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6P, SystemZ::R7D, 
                                       SystemZ::R6Q, SystemZ::R7D, 
                                       SystemZ::F14S, SystemZ::F14L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7W, SystemZ::R7D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6P, SystemZ::R7W, 
                                       SystemZ::F1S, SystemZ::F1L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F14L, SystemZ::F14S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R7D, SystemZ::R7W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6Q, SystemZ::R7W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F1L, SystemZ::F1S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F15S, SystemZ::F15L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8P, SystemZ::R8D, 
                                       SystemZ::R8Q, SystemZ::R8D, 
                                       SystemZ::R8W, SystemZ::R8D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F2S, SystemZ::F2L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F15L, SystemZ::F15S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8D, SystemZ::R8P, 
                                       SystemZ::R8W, SystemZ::R8P, 
                                       SystemZ::R8Q, SystemZ::R8P, 
                                       SystemZ::R9W, SystemZ::R8P, 
                                       SystemZ::R9D, SystemZ::R8P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F2L, SystemZ::F2S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8D, SystemZ::R8Q, 
                                       SystemZ::R8P, SystemZ::R8Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8W, SystemZ::R8Q, 
                                       SystemZ::R9D, SystemZ::R8Q, 
                                       SystemZ::R9W, SystemZ::R8Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F3S, SystemZ::F3L, 
                                       SystemZ::R8P, SystemZ::R8W, 
                                       SystemZ::R0P, SystemZ::R0D, 
                                       SystemZ::R0Q, SystemZ::R0D, 
                                       SystemZ::R0W, SystemZ::R0D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8D, SystemZ::R8W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8Q, SystemZ::R8W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F3L, SystemZ::F3S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0D, SystemZ::R0P, 
                                       SystemZ::R8Q, SystemZ::R9D, 
                                       SystemZ::R0Q, SystemZ::R0P, 
                                       SystemZ::R0W, SystemZ::R0P, 
                                       SystemZ::R1D, SystemZ::R0P, 
                                       SystemZ::R1W, SystemZ::R0P, 
                                       SystemZ::R8P, SystemZ::R9D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9W, SystemZ::R9D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0D, SystemZ::R0Q, 
                                       SystemZ::F4S, SystemZ::F4L, 
                                       SystemZ::R8P, SystemZ::R9W, 
                                       SystemZ::R0P, SystemZ::R0Q, 
                                       SystemZ::R1D, SystemZ::R0Q, 
                                       SystemZ::R0W, SystemZ::R0Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1W, SystemZ::R0Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R9D, SystemZ::R9W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R8Q, SystemZ::R9W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F4L, SystemZ::F4S, 
                                       SystemZ::R0P, SystemZ::R0W, 
                                       SystemZ::R0D, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0Q, SystemZ::R0W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10P, SystemZ::R10D, 
                                       SystemZ::R10Q, SystemZ::R10D, 
                                       SystemZ::R10W, SystemZ::R10D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0P, SystemZ::R1D, 
                                       SystemZ::R0Q, SystemZ::R1D, 
                                       SystemZ::F5S, SystemZ::F5L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R1W, SystemZ::R1D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10D, SystemZ::R10P, 
                                       SystemZ::R10W, SystemZ::R10P, 
                                       SystemZ::R10Q, SystemZ::R10P, 
                                       SystemZ::R11W, SystemZ::R10P, 
                                       SystemZ::R11D, SystemZ::R10P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0P, SystemZ::R1W, 
                                       SystemZ::F5L, SystemZ::F5S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R0Q, SystemZ::R1W, 
                                       SystemZ::R10D, SystemZ::R10Q, 
                                       SystemZ::R1D, SystemZ::R1W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10P, SystemZ::R10Q, 
                                       SystemZ::R11D, SystemZ::R10Q, 
                                       SystemZ::R10W, SystemZ::R10Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11W, SystemZ::R10Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F6S, SystemZ::F6L, 
                                       SystemZ::R10P, SystemZ::R10W, 
                                       SystemZ::R2P, SystemZ::R2D, 
                                       SystemZ::R2Q, SystemZ::R2D, 
                                       SystemZ::R2W, SystemZ::R2D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10D, SystemZ::R10W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R10W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F6L, SystemZ::F6S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2D, SystemZ::R2P, 
                                       SystemZ::R10Q, SystemZ::R11D, 
                                       SystemZ::R2Q, SystemZ::R2P, 
                                       SystemZ::R2W, SystemZ::R2P, 
                                       SystemZ::R3D, SystemZ::R2P, 
                                       SystemZ::R3W, SystemZ::R2P, 
                                       SystemZ::R10P, SystemZ::R11D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11W, SystemZ::R11D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2D, SystemZ::R2Q, 
                                       SystemZ::F7S, SystemZ::F7L, 
                                       SystemZ::R10P, SystemZ::R11W, 
                                       SystemZ::R2P, SystemZ::R2Q, 
                                       SystemZ::R3D, SystemZ::R2Q, 
                                       SystemZ::R2W, SystemZ::R2Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R3W, SystemZ::R2Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R11D, SystemZ::R11W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R10Q, SystemZ::R11W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F7L, SystemZ::F7S, 
                                       SystemZ::R2P, SystemZ::R2W, 
                                       SystemZ::R2D, SystemZ::R2W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R2W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12P, SystemZ::R12D, 
                                       SystemZ::R12Q, SystemZ::R12D, 
                                       SystemZ::R12W, SystemZ::R12D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2P, SystemZ::R3D, 
                                       SystemZ::R2Q, SystemZ::R3D, 
                                       SystemZ::F8S, SystemZ::F8L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R3W, SystemZ::R3D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12D, SystemZ::R12P, 
                                       SystemZ::R12W, SystemZ::R12P, 
                                       SystemZ::R12Q, SystemZ::R12P, 
                                       SystemZ::R13W, SystemZ::R12P, 
                                       SystemZ::R13D, SystemZ::R12P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2P, SystemZ::R3W, 
                                       SystemZ::F8L, SystemZ::F8S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R2Q, SystemZ::R3W, 
                                       SystemZ::R12D, SystemZ::R12Q, 
                                       SystemZ::R3D, SystemZ::R3W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12P, SystemZ::R12Q, 
                                       SystemZ::R13D, SystemZ::R12Q, 
                                       SystemZ::R12W, SystemZ::R12Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13W, SystemZ::R12Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F9S, SystemZ::F9L, 
                                       SystemZ::R12P, SystemZ::R12W, 
                                       SystemZ::R4P, SystemZ::R4D, 
                                       SystemZ::R4Q, SystemZ::R4D, 
                                       SystemZ::R4W, SystemZ::R4D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12D, SystemZ::R12W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R12W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F9L, SystemZ::F9S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4D, SystemZ::R4P, 
                                       SystemZ::R12Q, SystemZ::R13D, 
                                       SystemZ::R4Q, SystemZ::R4P, 
                                       SystemZ::R4W, SystemZ::R4P, 
                                       SystemZ::R5D, SystemZ::R4P, 
                                       SystemZ::R5W, SystemZ::R4P, 
                                       SystemZ::R12P, SystemZ::R13D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13W, SystemZ::R13D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4D, SystemZ::R4Q, 
                                       SystemZ::F10S, SystemZ::F10L, 
                                       SystemZ::R12P, SystemZ::R13W, 
                                       SystemZ::R4P, SystemZ::R4Q, 
                                       SystemZ::R5D, SystemZ::R4Q, 
                                       SystemZ::R4W, SystemZ::R4Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5W, SystemZ::R4Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R13D, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R12Q, SystemZ::R13W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F10L, SystemZ::F10S, 
                                       SystemZ::R4P, SystemZ::R4W, 
                                       SystemZ::R4D, SystemZ::R4W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R4W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14P, SystemZ::R14D, 
                                       SystemZ::R14Q, SystemZ::R14D, 
                                       SystemZ::R14W, SystemZ::R14D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4P, SystemZ::R5D, 
                                       SystemZ::R4Q, SystemZ::R5D, 
                                       SystemZ::F11S, SystemZ::F11L, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R5W, SystemZ::R5D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14D, SystemZ::R14P, 
                                       SystemZ::R14W, SystemZ::R14P, 
                                       SystemZ::R14Q, SystemZ::R14P, 
                                       SystemZ::R15W, SystemZ::R14P, 
                                       SystemZ::R15D, SystemZ::R14P, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4P, SystemZ::R5W, 
                                       SystemZ::F11L, SystemZ::F11S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R4Q, SystemZ::R5W, 
                                       SystemZ::R14D, SystemZ::R14Q, 
                                       SystemZ::R5D, SystemZ::R5W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14P, SystemZ::R14Q, 
                                       SystemZ::R15D, SystemZ::R14Q, 
                                       SystemZ::R14W, SystemZ::R14Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15W, SystemZ::R14Q, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F12S, SystemZ::F12L, 
                                       SystemZ::R14P, SystemZ::R14W, 
                                       SystemZ::R6P, SystemZ::R6D, 
                                       SystemZ::R6Q, SystemZ::R6D, 
                                       SystemZ::R6W, SystemZ::R6D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14D, SystemZ::R14W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R14Q, SystemZ::R14W, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::F12L, SystemZ::F12S, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R6D, SystemZ::R6P, 
                                       SystemZ::R14Q, SystemZ::R15D, 
                                       SystemZ::R6Q, SystemZ::R6P, 
                                       SystemZ::R6W, SystemZ::R6P, 
                                       SystemZ::R7D, SystemZ::R6P, 
                                       SystemZ::R7W, SystemZ::R6P, 
                                       SystemZ::R14P, SystemZ::R15D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::R15W, SystemZ::R15D, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
                                       SystemZ::NoRegister, SystemZ::NoRegister, 
SystemZ::NoRegister, SystemZ::NoRegister };
  const unsigned AliasesHashTableSize = 1024;


  // Register Overlap Lists...
  const unsigned F0L_Overlaps[] = { SystemZ::F0L, SystemZ::F0S, 0 };
  const unsigned F0S_Overlaps[] = { SystemZ::F0S, SystemZ::F0L, 0 };
  const unsigned F1L_Overlaps[] = { SystemZ::F1L, SystemZ::F1S, 0 };
  const unsigned F1S_Overlaps[] = { SystemZ::F1S, SystemZ::F1L, 0 };
  const unsigned F2L_Overlaps[] = { SystemZ::F2L, SystemZ::F2S, 0 };
  const unsigned F2S_Overlaps[] = { SystemZ::F2S, SystemZ::F2L, 0 };
  const unsigned F3L_Overlaps[] = { SystemZ::F3L, SystemZ::F3S, 0 };
  const unsigned F3S_Overlaps[] = { SystemZ::F3S, SystemZ::F3L, 0 };
  const unsigned F4L_Overlaps[] = { SystemZ::F4L, SystemZ::F4S, 0 };
  const unsigned F4S_Overlaps[] = { SystemZ::F4S, SystemZ::F4L, 0 };
  const unsigned F5L_Overlaps[] = { SystemZ::F5L, SystemZ::F5S, 0 };
  const unsigned F5S_Overlaps[] = { SystemZ::F5S, SystemZ::F5L, 0 };
  const unsigned F6L_Overlaps[] = { SystemZ::F6L, SystemZ::F6S, 0 };
  const unsigned F6S_Overlaps[] = { SystemZ::F6S, SystemZ::F6L, 0 };
  const unsigned F7L_Overlaps[] = { SystemZ::F7L, SystemZ::F7S, 0 };
  const unsigned F7S_Overlaps[] = { SystemZ::F7S, SystemZ::F7L, 0 };
  const unsigned F8L_Overlaps[] = { SystemZ::F8L, SystemZ::F8S, 0 };
  const unsigned F8S_Overlaps[] = { SystemZ::F8S, SystemZ::F8L, 0 };
  const unsigned F9L_Overlaps[] = { SystemZ::F9L, SystemZ::F9S, 0 };
  const unsigned F9S_Overlaps[] = { SystemZ::F9S, SystemZ::F9L, 0 };
  const unsigned F10L_Overlaps[] = { SystemZ::F10L, SystemZ::F10S, 0 };
  const unsigned F10S_Overlaps[] = { SystemZ::F10S, SystemZ::F10L, 0 };
  const unsigned F11L_Overlaps[] = { SystemZ::F11L, SystemZ::F11S, 0 };
  const unsigned F11S_Overlaps[] = { SystemZ::F11S, SystemZ::F11L, 0 };
  const unsigned F12L_Overlaps[] = { SystemZ::F12L, SystemZ::F12S, 0 };
  const unsigned F12S_Overlaps[] = { SystemZ::F12S, SystemZ::F12L, 0 };
  const unsigned F13L_Overlaps[] = { SystemZ::F13L, SystemZ::F13S, 0 };
  const unsigned F13S_Overlaps[] = { SystemZ::F13S, SystemZ::F13L, 0 };
  const unsigned F14L_Overlaps[] = { SystemZ::F14L, SystemZ::F14S, 0 };
  const unsigned F14S_Overlaps[] = { SystemZ::F14S, SystemZ::F14L, 0 };
  const unsigned F15L_Overlaps[] = { SystemZ::F15L, SystemZ::F15S, 0 };
  const unsigned F15S_Overlaps[] = { SystemZ::F15S, SystemZ::F15L, 0 };
  const unsigned PSW_Overlaps[] = { SystemZ::PSW, 0 };
  const unsigned R0D_Overlaps[] = { SystemZ::R0D, SystemZ::R0W, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R0P_Overlaps[] = { SystemZ::R0P, SystemZ::R0W, SystemZ::R1W, SystemZ::R0D, SystemZ::R1D, SystemZ::R0Q, 0 };
  const unsigned R0Q_Overlaps[] = { SystemZ::R0Q, SystemZ::R0W, SystemZ::R1W, SystemZ::R0D, SystemZ::R1D, SystemZ::R0P, 0 };
  const unsigned R0W_Overlaps[] = { SystemZ::R0W, SystemZ::R0D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R1D_Overlaps[] = { SystemZ::R1D, SystemZ::R1W, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R1W_Overlaps[] = { SystemZ::R1W, SystemZ::R1D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R2D_Overlaps[] = { SystemZ::R2D, SystemZ::R2W, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R2P_Overlaps[] = { SystemZ::R2P, SystemZ::R2W, SystemZ::R3W, SystemZ::R2D, SystemZ::R3D, SystemZ::R2Q, 0 };
  const unsigned R2Q_Overlaps[] = { SystemZ::R2Q, SystemZ::R2W, SystemZ::R3W, SystemZ::R2D, SystemZ::R3D, SystemZ::R2P, 0 };
  const unsigned R2W_Overlaps[] = { SystemZ::R2W, SystemZ::R2D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R3D_Overlaps[] = { SystemZ::R3D, SystemZ::R3W, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R3W_Overlaps[] = { SystemZ::R3W, SystemZ::R3D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R4D_Overlaps[] = { SystemZ::R4D, SystemZ::R4W, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R4P_Overlaps[] = { SystemZ::R4P, SystemZ::R4W, SystemZ::R5W, SystemZ::R4D, SystemZ::R5D, SystemZ::R4Q, 0 };
  const unsigned R4Q_Overlaps[] = { SystemZ::R4Q, SystemZ::R4W, SystemZ::R5W, SystemZ::R4D, SystemZ::R5D, SystemZ::R4P, 0 };
  const unsigned R4W_Overlaps[] = { SystemZ::R4W, SystemZ::R4D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R5D_Overlaps[] = { SystemZ::R5D, SystemZ::R5W, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R5W_Overlaps[] = { SystemZ::R5W, SystemZ::R5D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R6D_Overlaps[] = { SystemZ::R6D, SystemZ::R6W, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R6P_Overlaps[] = { SystemZ::R6P, SystemZ::R6W, SystemZ::R7W, SystemZ::R6D, SystemZ::R7D, SystemZ::R6Q, 0 };
  const unsigned R6Q_Overlaps[] = { SystemZ::R6Q, SystemZ::R6W, SystemZ::R7W, SystemZ::R6D, SystemZ::R7D, SystemZ::R6P, 0 };
  const unsigned R6W_Overlaps[] = { SystemZ::R6W, SystemZ::R6D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R7D_Overlaps[] = { SystemZ::R7D, SystemZ::R7W, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R7W_Overlaps[] = { SystemZ::R7W, SystemZ::R7D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R8D_Overlaps[] = { SystemZ::R8D, SystemZ::R8W, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R8P_Overlaps[] = { SystemZ::R8P, SystemZ::R8W, SystemZ::R9W, SystemZ::R8D, SystemZ::R9D, SystemZ::R8Q, 0 };
  const unsigned R8Q_Overlaps[] = { SystemZ::R8Q, SystemZ::R8W, SystemZ::R9W, SystemZ::R8D, SystemZ::R9D, SystemZ::R8P, 0 };
  const unsigned R8W_Overlaps[] = { SystemZ::R8W, SystemZ::R8D, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R9D_Overlaps[] = { SystemZ::R9D, SystemZ::R9W, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R9W_Overlaps[] = { SystemZ::R9W, SystemZ::R9D, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R10D_Overlaps[] = { SystemZ::R10D, SystemZ::R10W, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R10P_Overlaps[] = { SystemZ::R10P, SystemZ::R10W, SystemZ::R11W, SystemZ::R10D, SystemZ::R11D, SystemZ::R10Q, 0 };
  const unsigned R10Q_Overlaps[] = { SystemZ::R10Q, SystemZ::R10W, SystemZ::R11W, SystemZ::R10D, SystemZ::R11D, SystemZ::R10P, 0 };
  const unsigned R10W_Overlaps[] = { SystemZ::R10W, SystemZ::R10D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R11D_Overlaps[] = { SystemZ::R11D, SystemZ::R11W, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R11W_Overlaps[] = { SystemZ::R11W, SystemZ::R11D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R12D_Overlaps[] = { SystemZ::R12D, SystemZ::R12W, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R12P_Overlaps[] = { SystemZ::R12P, SystemZ::R12W, SystemZ::R13W, SystemZ::R12D, SystemZ::R13D, SystemZ::R12Q, 0 };
  const unsigned R12Q_Overlaps[] = { SystemZ::R12Q, SystemZ::R12W, SystemZ::R13W, SystemZ::R12D, SystemZ::R13D, SystemZ::R12P, 0 };
  const unsigned R12W_Overlaps[] = { SystemZ::R12W, SystemZ::R12D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R13D_Overlaps[] = { SystemZ::R13D, SystemZ::R13W, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R13W_Overlaps[] = { SystemZ::R13W, SystemZ::R13D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R14D_Overlaps[] = { SystemZ::R14D, SystemZ::R14W, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R14P_Overlaps[] = { SystemZ::R14P, SystemZ::R14W, SystemZ::R15W, SystemZ::R14D, SystemZ::R15D, SystemZ::R14Q, 0 };
  const unsigned R14Q_Overlaps[] = { SystemZ::R14Q, SystemZ::R14W, SystemZ::R15W, SystemZ::R14D, SystemZ::R15D, SystemZ::R14P, 0 };
  const unsigned R14W_Overlaps[] = { SystemZ::R14W, SystemZ::R14D, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R15D_Overlaps[] = { SystemZ::R15D, SystemZ::R15W, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R15W_Overlaps[] = { SystemZ::R15W, SystemZ::R15D, SystemZ::R14P, SystemZ::R14Q, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned F0L_SubRegsSet[] = { SystemZ::F0S, 0 };
  const unsigned F1L_SubRegsSet[] = { SystemZ::F1S, 0 };
  const unsigned F2L_SubRegsSet[] = { SystemZ::F2S, 0 };
  const unsigned F3L_SubRegsSet[] = { SystemZ::F3S, 0 };
  const unsigned F4L_SubRegsSet[] = { SystemZ::F4S, 0 };
  const unsigned F5L_SubRegsSet[] = { SystemZ::F5S, 0 };
  const unsigned F6L_SubRegsSet[] = { SystemZ::F6S, 0 };
  const unsigned F7L_SubRegsSet[] = { SystemZ::F7S, 0 };
  const unsigned F8L_SubRegsSet[] = { SystemZ::F8S, 0 };
  const unsigned F9L_SubRegsSet[] = { SystemZ::F9S, 0 };
  const unsigned F10L_SubRegsSet[] = { SystemZ::F10S, 0 };
  const unsigned F11L_SubRegsSet[] = { SystemZ::F11S, 0 };
  const unsigned F12L_SubRegsSet[] = { SystemZ::F12S, 0 };
  const unsigned F13L_SubRegsSet[] = { SystemZ::F13S, 0 };
  const unsigned F14L_SubRegsSet[] = { SystemZ::F14S, 0 };
  const unsigned F15L_SubRegsSet[] = { SystemZ::F15S, 0 };
  const unsigned R0D_SubRegsSet[] = { SystemZ::R0W, 0 };
  const unsigned R0P_SubRegsSet[] = { SystemZ::R0W, SystemZ::R1W, 0 };
  const unsigned R0Q_SubRegsSet[] = { SystemZ::R0D, SystemZ::R0W, SystemZ::R1D, SystemZ::R1W, 0 };
  const unsigned R1D_SubRegsSet[] = { SystemZ::R1W, 0 };
  const unsigned R2D_SubRegsSet[] = { SystemZ::R2W, 0 };
  const unsigned R2P_SubRegsSet[] = { SystemZ::R2W, SystemZ::R3W, 0 };
  const unsigned R2Q_SubRegsSet[] = { SystemZ::R2D, SystemZ::R2W, SystemZ::R3D, SystemZ::R3W, 0 };
  const unsigned R3D_SubRegsSet[] = { SystemZ::R3W, 0 };
  const unsigned R4D_SubRegsSet[] = { SystemZ::R4W, 0 };
  const unsigned R4P_SubRegsSet[] = { SystemZ::R4W, SystemZ::R5W, 0 };
  const unsigned R4Q_SubRegsSet[] = { SystemZ::R4D, SystemZ::R4W, SystemZ::R5D, SystemZ::R5W, 0 };
  const unsigned R5D_SubRegsSet[] = { SystemZ::R5W, 0 };
  const unsigned R6D_SubRegsSet[] = { SystemZ::R6W, 0 };
  const unsigned R6P_SubRegsSet[] = { SystemZ::R6W, SystemZ::R7W, 0 };
  const unsigned R6Q_SubRegsSet[] = { SystemZ::R6D, SystemZ::R6W, SystemZ::R7D, SystemZ::R7W, 0 };
  const unsigned R7D_SubRegsSet[] = { SystemZ::R7W, 0 };
  const unsigned R8D_SubRegsSet[] = { SystemZ::R8W, 0 };
  const unsigned R8P_SubRegsSet[] = { SystemZ::R8W, SystemZ::R9W, 0 };
  const unsigned R8Q_SubRegsSet[] = { SystemZ::R8D, SystemZ::R8W, SystemZ::R9D, SystemZ::R9W, 0 };
  const unsigned R9D_SubRegsSet[] = { SystemZ::R9W, 0 };
  const unsigned R10D_SubRegsSet[] = { SystemZ::R10W, 0 };
  const unsigned R10P_SubRegsSet[] = { SystemZ::R10W, SystemZ::R11W, 0 };
  const unsigned R10Q_SubRegsSet[] = { SystemZ::R10D, SystemZ::R10W, SystemZ::R11D, SystemZ::R11W, 0 };
  const unsigned R11D_SubRegsSet[] = { SystemZ::R11W, 0 };
  const unsigned R12D_SubRegsSet[] = { SystemZ::R12W, 0 };
  const unsigned R12P_SubRegsSet[] = { SystemZ::R12W, SystemZ::R13W, 0 };
  const unsigned R12Q_SubRegsSet[] = { SystemZ::R12D, SystemZ::R12W, SystemZ::R13D, SystemZ::R13W, 0 };
  const unsigned R13D_SubRegsSet[] = { SystemZ::R13W, 0 };
  const unsigned R14D_SubRegsSet[] = { SystemZ::R14W, 0 };
  const unsigned R14P_SubRegsSet[] = { SystemZ::R14W, SystemZ::R15W, 0 };
  const unsigned R14Q_SubRegsSet[] = { SystemZ::R14D, SystemZ::R14W, SystemZ::R15D, SystemZ::R15W, 0 };
  const unsigned R15D_SubRegsSet[] = { SystemZ::R15W, 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned F0S_SuperRegsSet[] = { SystemZ::F0L, 0 };
  const unsigned F1S_SuperRegsSet[] = { SystemZ::F1L, 0 };
  const unsigned F2S_SuperRegsSet[] = { SystemZ::F2L, 0 };
  const unsigned F3S_SuperRegsSet[] = { SystemZ::F3L, 0 };
  const unsigned F4S_SuperRegsSet[] = { SystemZ::F4L, 0 };
  const unsigned F5S_SuperRegsSet[] = { SystemZ::F5L, 0 };
  const unsigned F6S_SuperRegsSet[] = { SystemZ::F6L, 0 };
  const unsigned F7S_SuperRegsSet[] = { SystemZ::F7L, 0 };
  const unsigned F8S_SuperRegsSet[] = { SystemZ::F8L, 0 };
  const unsigned F9S_SuperRegsSet[] = { SystemZ::F9L, 0 };
  const unsigned F10S_SuperRegsSet[] = { SystemZ::F10L, 0 };
  const unsigned F11S_SuperRegsSet[] = { SystemZ::F11L, 0 };
  const unsigned F12S_SuperRegsSet[] = { SystemZ::F12L, 0 };
  const unsigned F13S_SuperRegsSet[] = { SystemZ::F13L, 0 };
  const unsigned F14S_SuperRegsSet[] = { SystemZ::F14L, 0 };
  const unsigned F15S_SuperRegsSet[] = { SystemZ::F15L, 0 };
  const unsigned R0D_SuperRegsSet[] = { SystemZ::R0Q, 0 };
  const unsigned R0W_SuperRegsSet[] = { SystemZ::R0D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R1D_SuperRegsSet[] = { SystemZ::R0Q, 0 };
  const unsigned R1W_SuperRegsSet[] = { SystemZ::R1D, SystemZ::R0P, SystemZ::R0Q, 0 };
  const unsigned R2D_SuperRegsSet[] = { SystemZ::R2Q, 0 };
  const unsigned R2W_SuperRegsSet[] = { SystemZ::R2D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R3D_SuperRegsSet[] = { SystemZ::R2Q, 0 };
  const unsigned R3W_SuperRegsSet[] = { SystemZ::R3D, SystemZ::R2P, SystemZ::R2Q, 0 };
  const unsigned R4D_SuperRegsSet[] = { SystemZ::R4Q, 0 };
  const unsigned R4W_SuperRegsSet[] = { SystemZ::R4D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R5D_SuperRegsSet[] = { SystemZ::R4Q, 0 };
  const unsigned R5W_SuperRegsSet[] = { SystemZ::R5D, SystemZ::R4P, SystemZ::R4Q, 0 };
  const unsigned R6D_SuperRegsSet[] = { SystemZ::R6Q, 0 };
  const unsigned R6W_SuperRegsSet[] = { SystemZ::R6D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R7D_SuperRegsSet[] = { SystemZ::R6Q, 0 };
  const unsigned R7W_SuperRegsSet[] = { SystemZ::R7D, SystemZ::R6P, SystemZ::R6Q, 0 };
  const unsigned R8D_SuperRegsSet[] = { SystemZ::R8Q, 0 };
  const unsigned R8W_SuperRegsSet[] = { SystemZ::R8D, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R9D_SuperRegsSet[] = { SystemZ::R8Q, 0 };
  const unsigned R9W_SuperRegsSet[] = { SystemZ::R9D, SystemZ::R8P, SystemZ::R8Q, 0 };
  const unsigned R10D_SuperRegsSet[] = { SystemZ::R10Q, 0 };
  const unsigned R10W_SuperRegsSet[] = { SystemZ::R10D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R11D_SuperRegsSet[] = { SystemZ::R10Q, 0 };
  const unsigned R11W_SuperRegsSet[] = { SystemZ::R11D, SystemZ::R10P, SystemZ::R10Q, 0 };
  const unsigned R12D_SuperRegsSet[] = { SystemZ::R12Q, 0 };
  const unsigned R12W_SuperRegsSet[] = { SystemZ::R12D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R13D_SuperRegsSet[] = { SystemZ::R12Q, 0 };
  const unsigned R13W_SuperRegsSet[] = { SystemZ::R13D, SystemZ::R12P, SystemZ::R12Q, 0 };
  const unsigned R14D_SuperRegsSet[] = { SystemZ::R14Q, 0 };
  const unsigned R14W_SuperRegsSet[] = { SystemZ::R14D, SystemZ::R14P, SystemZ::R14Q, 0 };
  const unsigned R15D_SuperRegsSet[] = { SystemZ::R14Q, 0 };
  const unsigned R15W_SuperRegsSet[] = { SystemZ::R15D, SystemZ::R14P, SystemZ::R14Q, 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	0,	0,	0 },
    { "F0L",	F0L_Overlaps,	F0L_SubRegsSet,	Empty_SuperRegsSet },
    { "F0S",	F0S_Overlaps,	Empty_SubRegsSet,	F0S_SuperRegsSet },
    { "F1L",	F1L_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F1S",	F1S_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "F2L",	F2L_Overlaps,	F2L_SubRegsSet,	Empty_SuperRegsSet },
    { "F2S",	F2S_Overlaps,	Empty_SubRegsSet,	F2S_SuperRegsSet },
    { "F3L",	F3L_Overlaps,	F3L_SubRegsSet,	Empty_SuperRegsSet },
    { "F3S",	F3S_Overlaps,	Empty_SubRegsSet,	F3S_SuperRegsSet },
    { "F4L",	F4L_Overlaps,	F4L_SubRegsSet,	Empty_SuperRegsSet },
    { "F4S",	F4S_Overlaps,	Empty_SubRegsSet,	F4S_SuperRegsSet },
    { "F5L",	F5L_Overlaps,	F5L_SubRegsSet,	Empty_SuperRegsSet },
    { "F5S",	F5S_Overlaps,	Empty_SubRegsSet,	F5S_SuperRegsSet },
    { "F6L",	F6L_Overlaps,	F6L_SubRegsSet,	Empty_SuperRegsSet },
    { "F6S",	F6S_Overlaps,	Empty_SubRegsSet,	F6S_SuperRegsSet },
    { "F7L",	F7L_Overlaps,	F7L_SubRegsSet,	Empty_SuperRegsSet },
    { "F7S",	F7S_Overlaps,	Empty_SubRegsSet,	F7S_SuperRegsSet },
    { "F8L",	F8L_Overlaps,	F8L_SubRegsSet,	Empty_SuperRegsSet },
    { "F8S",	F8S_Overlaps,	Empty_SubRegsSet,	F8S_SuperRegsSet },
    { "F9L",	F9L_Overlaps,	F9L_SubRegsSet,	Empty_SuperRegsSet },
    { "F9S",	F9S_Overlaps,	Empty_SubRegsSet,	F9S_SuperRegsSet },
    { "F10L",	F10L_Overlaps,	F10L_SubRegsSet,	Empty_SuperRegsSet },
    { "F10S",	F10S_Overlaps,	Empty_SubRegsSet,	F10S_SuperRegsSet },
    { "F11L",	F11L_Overlaps,	F11L_SubRegsSet,	Empty_SuperRegsSet },
    { "F11S",	F11S_Overlaps,	Empty_SubRegsSet,	F11S_SuperRegsSet },
    { "F12L",	F12L_Overlaps,	F12L_SubRegsSet,	Empty_SuperRegsSet },
    { "F12S",	F12S_Overlaps,	Empty_SubRegsSet,	F12S_SuperRegsSet },
    { "F13L",	F13L_Overlaps,	F13L_SubRegsSet,	Empty_SuperRegsSet },
    { "F13S",	F13S_Overlaps,	Empty_SubRegsSet,	F13S_SuperRegsSet },
    { "F14L",	F14L_Overlaps,	F14L_SubRegsSet,	Empty_SuperRegsSet },
    { "F14S",	F14S_Overlaps,	Empty_SubRegsSet,	F14S_SuperRegsSet },
    { "F15L",	F15L_Overlaps,	F15L_SubRegsSet,	Empty_SuperRegsSet },
    { "F15S",	F15S_Overlaps,	Empty_SubRegsSet,	F15S_SuperRegsSet },
    { "PSW",	PSW_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "R0D",	R0D_Overlaps,	R0D_SubRegsSet,	R0D_SuperRegsSet },
    { "R0P",	R0P_Overlaps,	R0P_SubRegsSet,	Empty_SuperRegsSet },
    { "R0Q",	R0Q_Overlaps,	R0Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R0W",	R0W_Overlaps,	Empty_SubRegsSet,	R0W_SuperRegsSet },
    { "R1D",	R1D_Overlaps,	R1D_SubRegsSet,	R1D_SuperRegsSet },
    { "R1W",	R1W_Overlaps,	Empty_SubRegsSet,	R1W_SuperRegsSet },
    { "R2D",	R2D_Overlaps,	R2D_SubRegsSet,	R2D_SuperRegsSet },
    { "R2P",	R2P_Overlaps,	R2P_SubRegsSet,	Empty_SuperRegsSet },
    { "R2Q",	R2Q_Overlaps,	R2Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R2W",	R2W_Overlaps,	Empty_SubRegsSet,	R2W_SuperRegsSet },
    { "R3D",	R3D_Overlaps,	R3D_SubRegsSet,	R3D_SuperRegsSet },
    { "R3W",	R3W_Overlaps,	Empty_SubRegsSet,	R3W_SuperRegsSet },
    { "R4D",	R4D_Overlaps,	R4D_SubRegsSet,	R4D_SuperRegsSet },
    { "R4P",	R4P_Overlaps,	R4P_SubRegsSet,	Empty_SuperRegsSet },
    { "R4Q",	R4Q_Overlaps,	R4Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R4W",	R4W_Overlaps,	Empty_SubRegsSet,	R4W_SuperRegsSet },
    { "R5D",	R5D_Overlaps,	R5D_SubRegsSet,	R5D_SuperRegsSet },
    { "R5W",	R5W_Overlaps,	Empty_SubRegsSet,	R5W_SuperRegsSet },
    { "R6D",	R6D_Overlaps,	R6D_SubRegsSet,	R6D_SuperRegsSet },
    { "R6P",	R6P_Overlaps,	R6P_SubRegsSet,	Empty_SuperRegsSet },
    { "R6Q",	R6Q_Overlaps,	R6Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R6W",	R6W_Overlaps,	Empty_SubRegsSet,	R6W_SuperRegsSet },
    { "R7D",	R7D_Overlaps,	R7D_SubRegsSet,	R7D_SuperRegsSet },
    { "R7W",	R7W_Overlaps,	Empty_SubRegsSet,	R7W_SuperRegsSet },
    { "R8D",	R8D_Overlaps,	R8D_SubRegsSet,	R8D_SuperRegsSet },
    { "R8P",	R8P_Overlaps,	R8P_SubRegsSet,	Empty_SuperRegsSet },
    { "R8Q",	R8Q_Overlaps,	R8Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R8W",	R8W_Overlaps,	Empty_SubRegsSet,	R8W_SuperRegsSet },
    { "R9D",	R9D_Overlaps,	R9D_SubRegsSet,	R9D_SuperRegsSet },
    { "R9W",	R9W_Overlaps,	Empty_SubRegsSet,	R9W_SuperRegsSet },
    { "R10D",	R10D_Overlaps,	R10D_SubRegsSet,	R10D_SuperRegsSet },
    { "R10P",	R10P_Overlaps,	R10P_SubRegsSet,	Empty_SuperRegsSet },
    { "R10Q",	R10Q_Overlaps,	R10Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R10W",	R10W_Overlaps,	Empty_SubRegsSet,	R10W_SuperRegsSet },
    { "R11D",	R11D_Overlaps,	R11D_SubRegsSet,	R11D_SuperRegsSet },
    { "R11W",	R11W_Overlaps,	Empty_SubRegsSet,	R11W_SuperRegsSet },
    { "R12D",	R12D_Overlaps,	R12D_SubRegsSet,	R12D_SuperRegsSet },
    { "R12P",	R12P_Overlaps,	R12P_SubRegsSet,	Empty_SuperRegsSet },
    { "R12Q",	R12Q_Overlaps,	R12Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R12W",	R12W_Overlaps,	Empty_SubRegsSet,	R12W_SuperRegsSet },
    { "R13D",	R13D_Overlaps,	R13D_SubRegsSet,	R13D_SuperRegsSet },
    { "R13W",	R13W_Overlaps,	Empty_SubRegsSet,	R13W_SuperRegsSet },
    { "R14D",	R14D_Overlaps,	R14D_SubRegsSet,	R14D_SuperRegsSet },
    { "R14P",	R14P_Overlaps,	R14P_SubRegsSet,	Empty_SuperRegsSet },
    { "R14Q",	R14Q_Overlaps,	R14Q_SubRegsSet,	Empty_SuperRegsSet },
    { "R14W",	R14W_Overlaps,	Empty_SubRegsSet,	R14W_SuperRegsSet },
    { "R15D",	R15D_Overlaps,	R15D_SubRegsSet,	R15D_SuperRegsSet },
    { "R15W",	R15W_Overlaps,	Empty_SubRegsSet,	R15W_SuperRegsSet },
  };

  const char *const SubRegIndexTable[] = { "subreg_32bit", "subreg_even", "subreg_odd", "subreg_odd32" };

}

unsigned SystemZGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  case SystemZ::F0L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F0S;
    };
    break;
  case SystemZ::F1L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F1S;
    };
    break;
  case SystemZ::F2L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F2S;
    };
    break;
  case SystemZ::F3L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F3S;
    };
    break;
  case SystemZ::F4L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F4S;
    };
    break;
  case SystemZ::F5L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F5S;
    };
    break;
  case SystemZ::F6L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F6S;
    };
    break;
  case SystemZ::F7L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F7S;
    };
    break;
  case SystemZ::F8L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F8S;
    };
    break;
  case SystemZ::F9L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F9S;
    };
    break;
  case SystemZ::F10L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F10S;
    };
    break;
  case SystemZ::F11L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F11S;
    };
    break;
  case SystemZ::F12L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F12S;
    };
    break;
  case SystemZ::F13L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F13S;
    };
    break;
  case SystemZ::F14L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F14S;
    };
    break;
  case SystemZ::F15L:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::F15S;
    };
    break;
  case SystemZ::R0D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R0W;
    };
    break;
  case SystemZ::R0P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R0W;
    case SystemZ::subreg_odd32: return SystemZ::R1W;
    };
    break;
  case SystemZ::R0Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R0W;
    case SystemZ::subreg_even: return SystemZ::R0D;
    case SystemZ::subreg_odd: return SystemZ::R1D;
    case SystemZ::subreg_odd32: return SystemZ::R1W;
    };
    break;
  case SystemZ::R1D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R1W;
    };
    break;
  case SystemZ::R2D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R2W;
    };
    break;
  case SystemZ::R2P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R2W;
    case SystemZ::subreg_odd32: return SystemZ::R3W;
    };
    break;
  case SystemZ::R2Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R2W;
    case SystemZ::subreg_even: return SystemZ::R2D;
    case SystemZ::subreg_odd: return SystemZ::R3D;
    case SystemZ::subreg_odd32: return SystemZ::R3W;
    };
    break;
  case SystemZ::R3D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R3W;
    };
    break;
  case SystemZ::R4D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R4W;
    };
    break;
  case SystemZ::R4P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R4W;
    case SystemZ::subreg_odd32: return SystemZ::R5W;
    };
    break;
  case SystemZ::R4Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R4W;
    case SystemZ::subreg_even: return SystemZ::R4D;
    case SystemZ::subreg_odd: return SystemZ::R5D;
    case SystemZ::subreg_odd32: return SystemZ::R5W;
    };
    break;
  case SystemZ::R5D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R5W;
    };
    break;
  case SystemZ::R6D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R6W;
    };
    break;
  case SystemZ::R6P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R6W;
    case SystemZ::subreg_odd32: return SystemZ::R7W;
    };
    break;
  case SystemZ::R6Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R6W;
    case SystemZ::subreg_even: return SystemZ::R6D;
    case SystemZ::subreg_odd: return SystemZ::R7D;
    case SystemZ::subreg_odd32: return SystemZ::R7W;
    };
    break;
  case SystemZ::R7D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R7W;
    };
    break;
  case SystemZ::R8D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R8W;
    };
    break;
  case SystemZ::R8P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R8W;
    case SystemZ::subreg_odd32: return SystemZ::R9W;
    };
    break;
  case SystemZ::R8Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R8W;
    case SystemZ::subreg_even: return SystemZ::R8D;
    case SystemZ::subreg_odd: return SystemZ::R9D;
    case SystemZ::subreg_odd32: return SystemZ::R9W;
    };
    break;
  case SystemZ::R9D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R9W;
    };
    break;
  case SystemZ::R10D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R10W;
    };
    break;
  case SystemZ::R10P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R10W;
    case SystemZ::subreg_odd32: return SystemZ::R11W;
    };
    break;
  case SystemZ::R10Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R10W;
    case SystemZ::subreg_even: return SystemZ::R10D;
    case SystemZ::subreg_odd: return SystemZ::R11D;
    case SystemZ::subreg_odd32: return SystemZ::R11W;
    };
    break;
  case SystemZ::R11D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R11W;
    };
    break;
  case SystemZ::R12D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R12W;
    };
    break;
  case SystemZ::R12P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R12W;
    case SystemZ::subreg_odd32: return SystemZ::R13W;
    };
    break;
  case SystemZ::R12Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R12W;
    case SystemZ::subreg_even: return SystemZ::R12D;
    case SystemZ::subreg_odd: return SystemZ::R13D;
    case SystemZ::subreg_odd32: return SystemZ::R13W;
    };
    break;
  case SystemZ::R13D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R13W;
    };
    break;
  case SystemZ::R14D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R14W;
    };
    break;
  case SystemZ::R14P:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R14W;
    case SystemZ::subreg_odd32: return SystemZ::R15W;
    };
    break;
  case SystemZ::R14Q:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R14W;
    case SystemZ::subreg_even: return SystemZ::R14D;
    case SystemZ::subreg_odd: return SystemZ::R15D;
    case SystemZ::subreg_odd32: return SystemZ::R15W;
    };
    break;
  case SystemZ::R15D:
    switch (Index) {
    default: return 0;
    case SystemZ::subreg_32bit: return SystemZ::R15W;
    };
    break;
  };
  return 0;
}

unsigned SystemZGenRegisterInfo::getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const {
  switch (RegNo) {
  default:
    return 0;
  case SystemZ::F0L:
    if (SubRegNo == SystemZ::F0S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F1L:
    if (SubRegNo == SystemZ::F1S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F2L:
    if (SubRegNo == SystemZ::F2S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F3L:
    if (SubRegNo == SystemZ::F3S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F4L:
    if (SubRegNo == SystemZ::F4S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F5L:
    if (SubRegNo == SystemZ::F5S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F6L:
    if (SubRegNo == SystemZ::F6S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F7L:
    if (SubRegNo == SystemZ::F7S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F8L:
    if (SubRegNo == SystemZ::F8S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F9L:
    if (SubRegNo == SystemZ::F9S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F10L:
    if (SubRegNo == SystemZ::F10S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F11L:
    if (SubRegNo == SystemZ::F11S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F12L:
    if (SubRegNo == SystemZ::F12S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F13L:
    if (SubRegNo == SystemZ::F13S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F14L:
    if (SubRegNo == SystemZ::F14S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::F15L:
    if (SubRegNo == SystemZ::F15S)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R0D:
    if (SubRegNo == SystemZ::R0W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R0P:
    if (SubRegNo == SystemZ::R0W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R1W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R0Q:
    if (SubRegNo == SystemZ::R0W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R0D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R1D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R1W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R1D:
    if (SubRegNo == SystemZ::R1W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R2D:
    if (SubRegNo == SystemZ::R2W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R2P:
    if (SubRegNo == SystemZ::R2W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R3W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R2Q:
    if (SubRegNo == SystemZ::R2W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R2D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R3D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R3W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R3D:
    if (SubRegNo == SystemZ::R3W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R4D:
    if (SubRegNo == SystemZ::R4W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R4P:
    if (SubRegNo == SystemZ::R4W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R5W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R4Q:
    if (SubRegNo == SystemZ::R4W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R4D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R5D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R5W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R5D:
    if (SubRegNo == SystemZ::R5W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R6D:
    if (SubRegNo == SystemZ::R6W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R6P:
    if (SubRegNo == SystemZ::R6W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R7W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R6Q:
    if (SubRegNo == SystemZ::R6W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R6D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R7D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R7W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R7D:
    if (SubRegNo == SystemZ::R7W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R8D:
    if (SubRegNo == SystemZ::R8W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R8P:
    if (SubRegNo == SystemZ::R8W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R9W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R8Q:
    if (SubRegNo == SystemZ::R8W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R8D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R9D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R9W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R9D:
    if (SubRegNo == SystemZ::R9W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R10D:
    if (SubRegNo == SystemZ::R10W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R10P:
    if (SubRegNo == SystemZ::R10W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R11W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R10Q:
    if (SubRegNo == SystemZ::R10W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R10D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R11D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R11W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R11D:
    if (SubRegNo == SystemZ::R11W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R12D:
    if (SubRegNo == SystemZ::R12W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R12P:
    if (SubRegNo == SystemZ::R12W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R13W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R12Q:
    if (SubRegNo == SystemZ::R12W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R12D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R13D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R13W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R13D:
    if (SubRegNo == SystemZ::R13W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R14D:
    if (SubRegNo == SystemZ::R14W)  return SystemZ::subreg_32bit;
    return 0;
  case SystemZ::R14P:
    if (SubRegNo == SystemZ::R14W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R15W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R14Q:
    if (SubRegNo == SystemZ::R14W)  return SystemZ::subreg_32bit;
    if (SubRegNo == SystemZ::R14D)  return SystemZ::subreg_even;
    if (SubRegNo == SystemZ::R15D)  return SystemZ::subreg_odd;
    if (SubRegNo == SystemZ::R15W)  return SystemZ::subreg_odd32;
    return 0;
  case SystemZ::R15D:
    if (SubRegNo == SystemZ::R15W)  return SystemZ::subreg_32bit;
    return 0;
  };
  return 0;
}

unsigned SystemZGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  case SystemZ::subreg_odd: switch(IdxB) {
    default: return IdxB;
    case SystemZ::subreg_32bit: return SystemZ::subreg_odd32;
    }
  }
}

SystemZGenRegisterInfo::SystemZGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 82, RegisterClasses, RegisterClasses+9,
                 SubRegIndexTable,
                 CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int SystemZGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case SystemZ::F0L:
      return 16;
    case SystemZ::F0S:
      return 16;
    case SystemZ::F1L:
      return 17;
    case SystemZ::F1S:
      return 17;
    case SystemZ::F2L:
      return 18;
    case SystemZ::F2S:
      return 18;
    case SystemZ::F3L:
      return 19;
    case SystemZ::F3S:
      return 19;
    case SystemZ::F4L:
      return 20;
    case SystemZ::F4S:
      return 20;
    case SystemZ::F5L:
      return 21;
    case SystemZ::F5S:
      return 21;
    case SystemZ::F6L:
      return 22;
    case SystemZ::F6S:
      return 22;
    case SystemZ::F7L:
      return 23;
    case SystemZ::F7S:
      return 23;
    case SystemZ::F8L:
      return 24;
    case SystemZ::F8S:
      return 24;
    case SystemZ::F9L:
      return 25;
    case SystemZ::F9S:
      return 25;
    case SystemZ::F10L:
      return 26;
    case SystemZ::F10S:
      return 26;
    case SystemZ::F11L:
      return 27;
    case SystemZ::F11S:
      return 27;
    case SystemZ::F12L:
      return 28;
    case SystemZ::F12S:
      return 28;
    case SystemZ::F13L:
      return 29;
    case SystemZ::F13S:
      return 29;
    case SystemZ::F14L:
      return 30;
    case SystemZ::F14S:
      return 30;
    case SystemZ::F15L:
      return 31;
    case SystemZ::F15S:
      return 31;
    case SystemZ::PSW:
      return -1;
    case SystemZ::R0D:
      return 0;
    case SystemZ::R0P:
      return 0;
    case SystemZ::R0Q:
      return 0;
    case SystemZ::R0W:
      return 0;
    case SystemZ::R1D:
      return 1;
    case SystemZ::R1W:
      return 1;
    case SystemZ::R2D:
      return 2;
    case SystemZ::R2P:
      return 2;
    case SystemZ::R2Q:
      return 2;
    case SystemZ::R2W:
      return 2;
    case SystemZ::R3D:
      return 3;
    case SystemZ::R3W:
      return 3;
    case SystemZ::R4D:
      return 4;
    case SystemZ::R4P:
      return 4;
    case SystemZ::R4Q:
      return 4;
    case SystemZ::R4W:
      return 4;
    case SystemZ::R5D:
      return 5;
    case SystemZ::R5W:
      return 5;
    case SystemZ::R6D:
      return 6;
    case SystemZ::R6P:
      return 6;
    case SystemZ::R6Q:
      return 6;
    case SystemZ::R6W:
      return 6;
    case SystemZ::R7D:
      return 7;
    case SystemZ::R7W:
      return 7;
    case SystemZ::R8D:
      return 8;
    case SystemZ::R8P:
      return 8;
    case SystemZ::R8Q:
      return 8;
    case SystemZ::R8W:
      return 8;
    case SystemZ::R9D:
      return 9;
    case SystemZ::R9W:
      return 9;
    case SystemZ::R10D:
      return 10;
    case SystemZ::R10P:
      return 10;
    case SystemZ::R10Q:
      return 10;
    case SystemZ::R10W:
      return 10;
    case SystemZ::R11D:
      return 11;
    case SystemZ::R11W:
      return 11;
    case SystemZ::R12D:
      return 12;
    case SystemZ::R12P:
      return 12;
    case SystemZ::R12Q:
      return 12;
    case SystemZ::R12W:
      return 12;
    case SystemZ::R13D:
      return 13;
    case SystemZ::R13W:
      return 13;
    case SystemZ::R14D:
      return 14;
    case SystemZ::R14P:
      return 14;
    case SystemZ::R14Q:
      return 14;
    case SystemZ::R14W:
      return 14;
    case SystemZ::R15D:
      return 15;
    case SystemZ::R15W:
      return 15;
    };
  };
}

} // End llvm namespace 
