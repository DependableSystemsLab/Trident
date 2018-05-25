//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Source Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

namespace llvm {

namespace {     // Register classes...
  // AFGR64 Register Class...
  static const unsigned AFGR64[] = {
    Mips::D0, Mips::D1, Mips::D6, Mips::D7, Mips::D2, Mips::D3, Mips::D4, Mips::D5, Mips::D8, Mips::D9, Mips::D10, Mips::D11, Mips::D12, Mips::D13, Mips::D14, Mips::D15, 
  };

  // CCR Register Class...
  static const unsigned CCR[] = {
    Mips::FCR31, 
  };

  // CPURegs Register Class...
  static const unsigned CPURegs[] = {
    Mips::V0, Mips::V1, Mips::A0, Mips::A1, Mips::A2, Mips::A3, Mips::T0, Mips::T1, Mips::T2, Mips::T3, Mips::T4, Mips::T5, Mips::T6, Mips::T7, Mips::T8, Mips::T9, Mips::S0, Mips::S1, Mips::S2, Mips::S3, Mips::S4, Mips::S5, Mips::S6, Mips::S7, Mips::ZERO, Mips::AT, Mips::K0, Mips::K1, Mips::GP, Mips::SP, Mips::FP, Mips::RA, 
  };

  // FGR32 Register Class...
  static const unsigned FGR32[] = {
    Mips::F0, Mips::F1, Mips::F2, Mips::F3, Mips::F12, Mips::F13, Mips::F14, Mips::F15, Mips::F4, Mips::F5, Mips::F6, Mips::F7, Mips::F8, Mips::F9, Mips::F10, Mips::F11, Mips::F16, Mips::F17, Mips::F18, Mips::F19, Mips::F20, Mips::F21, Mips::F22, Mips::F23, Mips::F24, Mips::F25, Mips::F26, Mips::F27, Mips::F28, Mips::F29, Mips::F30, Mips::F31, 
  };

  // HILO Register Class...
  static const unsigned HILO[] = {
    Mips::HI, Mips::LO, 
  };

  // AFGR64VTs Register Class Value Types...
  static const EVT AFGR64VTs[] = {
    MVT::f64, MVT::Other
  };

  // CCRVTs Register Class Value Types...
  static const EVT CCRVTs[] = {
    MVT::i32, MVT::Other
  };

  // CPURegsVTs Register Class Value Types...
  static const EVT CPURegsVTs[] = {
    MVT::i32, MVT::Other
  };

  // FGR32VTs Register Class Value Types...
  static const EVT FGR32VTs[] = {
    MVT::f32, MVT::Other
  };

  // HILOVTs Register Class Value Types...
  static const EVT HILOVTs[] = {
    MVT::i32, MVT::Other
  };

}  // end anonymous namespace

namespace Mips {   // Register class instances
  AFGR64Class	AFGR64RegClass;
  CCRClass	CCRRegClass;
  CPURegsClass	CPURegsRegClass;
  FGR32Class	FGR32RegClass;
  HILOClass	HILORegClass;

  // AFGR64 Sub-register Classes...
  static const TargetRegisterClass* const AFGR64SubRegClasses[] = {
    &Mips::FGR32RegClass, &Mips::FGR32RegClass
  };

  // CCR Sub-register Classes...
  static const TargetRegisterClass* const CCRSubRegClasses[] = {
    0, 0
  };

  // CPURegs Sub-register Classes...
  static const TargetRegisterClass* const CPURegsSubRegClasses[] = {
    0, 0
  };

  // FGR32 Sub-register Classes...
  static const TargetRegisterClass* const FGR32SubRegClasses[] = {
    0, 0
  };

  // HILO Sub-register Classes...
  static const TargetRegisterClass* const HILOSubRegClasses[] = {
    0, 0
  };

  // AFGR64 Super-register Classes...
  static const TargetRegisterClass* const AFGR64SuperRegClasses[] = {
    NULL
  };

  // CCR Super-register Classes...
  static const TargetRegisterClass* const CCRSuperRegClasses[] = {
    NULL
  };

  // CPURegs Super-register Classes...
  static const TargetRegisterClass* const CPURegsSuperRegClasses[] = {
    NULL
  };

  // FGR32 Super-register Classes...
  static const TargetRegisterClass* const FGR32SuperRegClasses[] = {
    &Mips::AFGR64RegClass, NULL
  };

  // HILO Super-register Classes...
  static const TargetRegisterClass* const HILOSuperRegClasses[] = {
    NULL
  };

  // AFGR64 Register Class sub-classes...
  static const TargetRegisterClass* const AFGR64Subclasses[] = {
    NULL
  };

  // CCR Register Class sub-classes...
  static const TargetRegisterClass* const CCRSubclasses[] = {
    NULL
  };

  // CPURegs Register Class sub-classes...
  static const TargetRegisterClass* const CPURegsSubclasses[] = {
    NULL
  };

  // FGR32 Register Class sub-classes...
  static const TargetRegisterClass* const FGR32Subclasses[] = {
    NULL
  };

  // HILO Register Class sub-classes...
  static const TargetRegisterClass* const HILOSubclasses[] = {
    NULL
  };

  // AFGR64 Register Class super-classes...
  static const TargetRegisterClass* const AFGR64Superclasses[] = {
    NULL
  };

  // CCR Register Class super-classes...
  static const TargetRegisterClass* const CCRSuperclasses[] = {
    NULL
  };

  // CPURegs Register Class super-classes...
  static const TargetRegisterClass* const CPURegsSuperclasses[] = {
    NULL
  };

  // FGR32 Register Class super-classes...
  static const TargetRegisterClass* const FGR32Superclasses[] = {
    NULL
  };

  // HILO Register Class super-classes...
  static const TargetRegisterClass* const HILOSuperclasses[] = {
    NULL
  };


    AFGR64Class::iterator
    AFGR64Class::allocation_order_end(const MachineFunction &MF) const {
      // The last register on the list above is reserved
      return end()-1;
    }
  
AFGR64Class::AFGR64Class()  : TargetRegisterClass(AFGR64RegClassID, "AFGR64", AFGR64VTs, AFGR64Subclasses, AFGR64Superclasses, AFGR64SubRegClasses, AFGR64SuperRegClasses, 8, 8, 1, AFGR64, AFGR64 + 16) {}

CCRClass::CCRClass()  : TargetRegisterClass(CCRRegClassID, "CCR", CCRVTs, CCRSubclasses, CCRSuperclasses, CCRSubRegClasses, CCRSuperRegClasses, 4, 4, 1, CCR, CCR + 1) {}

    CPURegsClass::iterator
    CPURegsClass::allocation_order_end(const MachineFunction &MF) const {
      // The last 8 registers on the list above are reserved
      return end()-8;
    }
  
CPURegsClass::CPURegsClass()  : TargetRegisterClass(CPURegsRegClassID, "CPURegs", CPURegsVTs, CPURegsSubclasses, CPURegsSuperclasses, CPURegsSubRegClasses, CPURegsSuperRegClasses, 4, 4, 1, CPURegs, CPURegs + 32) {}


    static const unsigned MIPS_FGR32[] = {
      Mips::F0,  Mips::F1,  Mips::F2,  Mips::F3,  Mips::F12,  Mips::F13,
      Mips::F14, Mips::F15, Mips::F4,  Mips::F5,  Mips::F6,   Mips::F7,
      Mips::F8,  Mips::F9,  Mips::F10, Mips::F11, Mips::F16,  Mips::F17,
      Mips::F18, Mips::F19, Mips::F20, Mips::F21, Mips::F22,  Mips::F23,
      Mips::F24, Mips::F25, Mips::F26, Mips::F27, Mips::F28,  Mips::F29,
      Mips::F30
    };

    static const unsigned MIPS_SVR4_FGR32[] = {
      Mips::F0,  Mips::F2,  Mips::F12, Mips::F14, Mips::F4,
      Mips::F6,  Mips::F8,  Mips::F10, Mips::F16, Mips::F18,
      Mips::F20, Mips::F22, Mips::F24, Mips::F26, Mips::F28, Mips::F30,
    };

    FGR32Class::iterator
    FGR32Class::allocation_order_begin(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const MipsSubtarget &Subtarget = TM.getSubtarget<MipsSubtarget>();

      if (Subtarget.isSingleFloat())
        return MIPS_FGR32;
      else
        return MIPS_SVR4_FGR32;
    }

    FGR32Class::iterator
    FGR32Class::allocation_order_end(const MachineFunction &MF) const {
      const TargetMachine &TM = MF.getTarget();
      const MipsSubtarget &Subtarget = TM.getSubtarget<MipsSubtarget>();

      if (Subtarget.isSingleFloat())
        return MIPS_FGR32 + (sizeof(MIPS_FGR32) / sizeof(unsigned));
      else
        return MIPS_SVR4_FGR32 + (sizeof(MIPS_SVR4_FGR32) / sizeof(unsigned));
    }
  
FGR32Class::FGR32Class()  : TargetRegisterClass(FGR32RegClassID, "FGR32", FGR32VTs, FGR32Subclasses, FGR32Superclasses, FGR32SubRegClasses, FGR32SuperRegClasses, 4, 4, 1, FGR32, FGR32 + 32) {}

HILOClass::HILOClass()  : TargetRegisterClass(HILORegClassID, "HILO", HILOVTs, HILOSubclasses, HILOSuperclasses, HILOSubRegClasses, HILOSuperRegClasses, 4, 4, 1, HILO, HILO + 2) {}
}

namespace {
  const TargetRegisterClass* const RegisterClasses[] = {
    &Mips::AFGR64RegClass,
    &Mips::CCRRegClass,
    &Mips::CPURegsRegClass,
    &Mips::FGR32RegClass,
    &Mips::HILORegClass,
  };


  // Number of hash collisions: 0
  const unsigned SubregHashTable[] = { Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D13, Mips::F26, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D3, Mips::F6, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D6, Mips::F13, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D10, Mips::F20, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D13, Mips::F27, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D0, Mips::F0, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D3, Mips::F7, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D7, Mips::F14, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D10, Mips::F21, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D14, Mips::F28, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D0, Mips::F1, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D4, Mips::F8, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D7, Mips::F15, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D11, Mips::F22, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D14, Mips::F29, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D1, Mips::F2, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D4, Mips::F9, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D8, Mips::F16, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D11, Mips::F23, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D15, Mips::F30, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D1, Mips::F3, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D5, Mips::F10, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D8, Mips::F17, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D12, Mips::F24, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D15, Mips::F31, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D2, Mips::F4, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D5, Mips::F11, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D9, Mips::F18, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D12, Mips::F25, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D2, Mips::F5, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D6, Mips::F12, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D9, Mips::F19, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
Mips::NoRegister, Mips::NoRegister };
  const unsigned SubregHashTableSize = 256;


  // Number of hash collisions: 1
  const unsigned AliasesHashTable[] = { Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F14, Mips::D7, 
                                       Mips::F15, Mips::D7, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D3, Mips::F6, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D10, Mips::F20, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F16, Mips::D8, 
                                       Mips::F17, Mips::D8, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D3, Mips::F7, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D10, Mips::F21, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F18, Mips::D9, 
                                       Mips::F19, Mips::D9, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D4, Mips::F8, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D11, Mips::F22, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F20, Mips::D10, 
                                       Mips::F21, Mips::D10, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D4, Mips::F9, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D11, Mips::F23, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F22, Mips::D11, 
                                       Mips::F23, Mips::D11, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D5, Mips::F10, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D12, Mips::F24, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F24, Mips::D12, 
                                       Mips::F25, Mips::D12, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D5, Mips::F11, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D12, Mips::F25, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F26, Mips::D13, 
                                       Mips::F27, Mips::D13, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F0, Mips::D0, 
                                       Mips::F1, Mips::D0, 
                                       Mips::D6, Mips::F12, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D13, Mips::F26, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F28, Mips::D14, 
                                       Mips::F29, Mips::D14, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D6, Mips::F13, 
                                       Mips::F3, Mips::D1, 
                                       Mips::F2, Mips::D1, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D13, Mips::F27, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D0, Mips::F0, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F30, Mips::D15, 
                                       Mips::F31, Mips::D15, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D7, Mips::F14, 
                                       Mips::F4, Mips::D2, 
                                       Mips::F5, Mips::D2, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D14, Mips::F28, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D0, Mips::F1, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D7, Mips::F15, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F6, Mips::D3, 
                                       Mips::F7, Mips::D3, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D14, Mips::F29, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D1, Mips::F2, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D8, Mips::F16, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F8, Mips::D4, 
                                       Mips::F9, Mips::D4, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D15, Mips::F30, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D1, Mips::F3, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D8, Mips::F17, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F10, Mips::D5, 
                                       Mips::F11, Mips::D5, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D15, Mips::F31, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D2, Mips::F4, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D9, Mips::F18, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::F12, Mips::D6, 
                                       Mips::F13, Mips::D6, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D2, Mips::F5, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::D9, Mips::F19, 
                                       Mips::NoRegister, Mips::NoRegister, 
                                       Mips::NoRegister, Mips::NoRegister, 
Mips::NoRegister, Mips::NoRegister };
  const unsigned AliasesHashTableSize = 512;


  // Register Overlap Lists...
  const unsigned A0_Overlaps[] = { Mips::A0, 0 };
  const unsigned A1_Overlaps[] = { Mips::A1, 0 };
  const unsigned A2_Overlaps[] = { Mips::A2, 0 };
  const unsigned A3_Overlaps[] = { Mips::A3, 0 };
  const unsigned AT_Overlaps[] = { Mips::AT, 0 };
  const unsigned D0_Overlaps[] = { Mips::D0, Mips::F0, Mips::F1, 0 };
  const unsigned D1_Overlaps[] = { Mips::D1, Mips::F2, Mips::F3, 0 };
  const unsigned D2_Overlaps[] = { Mips::D2, Mips::F4, Mips::F5, 0 };
  const unsigned D3_Overlaps[] = { Mips::D3, Mips::F6, Mips::F7, 0 };
  const unsigned D4_Overlaps[] = { Mips::D4, Mips::F8, Mips::F9, 0 };
  const unsigned D5_Overlaps[] = { Mips::D5, Mips::F10, Mips::F11, 0 };
  const unsigned D6_Overlaps[] = { Mips::D6, Mips::F12, Mips::F13, 0 };
  const unsigned D7_Overlaps[] = { Mips::D7, Mips::F14, Mips::F15, 0 };
  const unsigned D8_Overlaps[] = { Mips::D8, Mips::F16, Mips::F17, 0 };
  const unsigned D9_Overlaps[] = { Mips::D9, Mips::F18, Mips::F19, 0 };
  const unsigned D10_Overlaps[] = { Mips::D10, Mips::F20, Mips::F21, 0 };
  const unsigned D11_Overlaps[] = { Mips::D11, Mips::F22, Mips::F23, 0 };
  const unsigned D12_Overlaps[] = { Mips::D12, Mips::F24, Mips::F25, 0 };
  const unsigned D13_Overlaps[] = { Mips::D13, Mips::F26, Mips::F27, 0 };
  const unsigned D14_Overlaps[] = { Mips::D14, Mips::F28, Mips::F29, 0 };
  const unsigned D15_Overlaps[] = { Mips::D15, Mips::F30, Mips::F31, 0 };
  const unsigned F0_Overlaps[] = { Mips::F0, Mips::D0, 0 };
  const unsigned F1_Overlaps[] = { Mips::F1, Mips::D0, 0 };
  const unsigned F2_Overlaps[] = { Mips::F2, Mips::D1, 0 };
  const unsigned F3_Overlaps[] = { Mips::F3, Mips::D1, 0 };
  const unsigned F4_Overlaps[] = { Mips::F4, Mips::D2, 0 };
  const unsigned F5_Overlaps[] = { Mips::F5, Mips::D2, 0 };
  const unsigned F6_Overlaps[] = { Mips::F6, Mips::D3, 0 };
  const unsigned F7_Overlaps[] = { Mips::F7, Mips::D3, 0 };
  const unsigned F8_Overlaps[] = { Mips::F8, Mips::D4, 0 };
  const unsigned F9_Overlaps[] = { Mips::F9, Mips::D4, 0 };
  const unsigned F10_Overlaps[] = { Mips::F10, Mips::D5, 0 };
  const unsigned F11_Overlaps[] = { Mips::F11, Mips::D5, 0 };
  const unsigned F12_Overlaps[] = { Mips::F12, Mips::D6, 0 };
  const unsigned F13_Overlaps[] = { Mips::F13, Mips::D6, 0 };
  const unsigned F14_Overlaps[] = { Mips::F14, Mips::D7, 0 };
  const unsigned F15_Overlaps[] = { Mips::F15, Mips::D7, 0 };
  const unsigned F16_Overlaps[] = { Mips::F16, Mips::D8, 0 };
  const unsigned F17_Overlaps[] = { Mips::F17, Mips::D8, 0 };
  const unsigned F18_Overlaps[] = { Mips::F18, Mips::D9, 0 };
  const unsigned F19_Overlaps[] = { Mips::F19, Mips::D9, 0 };
  const unsigned F20_Overlaps[] = { Mips::F20, Mips::D10, 0 };
  const unsigned F21_Overlaps[] = { Mips::F21, Mips::D10, 0 };
  const unsigned F22_Overlaps[] = { Mips::F22, Mips::D11, 0 };
  const unsigned F23_Overlaps[] = { Mips::F23, Mips::D11, 0 };
  const unsigned F24_Overlaps[] = { Mips::F24, Mips::D12, 0 };
  const unsigned F25_Overlaps[] = { Mips::F25, Mips::D12, 0 };
  const unsigned F26_Overlaps[] = { Mips::F26, Mips::D13, 0 };
  const unsigned F27_Overlaps[] = { Mips::F27, Mips::D13, 0 };
  const unsigned F28_Overlaps[] = { Mips::F28, Mips::D14, 0 };
  const unsigned F29_Overlaps[] = { Mips::F29, Mips::D14, 0 };
  const unsigned F30_Overlaps[] = { Mips::F30, Mips::D15, 0 };
  const unsigned F31_Overlaps[] = { Mips::F31, Mips::D15, 0 };
  const unsigned FCR31_Overlaps[] = { Mips::FCR31, 0 };
  const unsigned FP_Overlaps[] = { Mips::FP, 0 };
  const unsigned GP_Overlaps[] = { Mips::GP, 0 };
  const unsigned HI_Overlaps[] = { Mips::HI, 0 };
  const unsigned K0_Overlaps[] = { Mips::K0, 0 };
  const unsigned K1_Overlaps[] = { Mips::K1, 0 };
  const unsigned LO_Overlaps[] = { Mips::LO, 0 };
  const unsigned RA_Overlaps[] = { Mips::RA, 0 };
  const unsigned S0_Overlaps[] = { Mips::S0, 0 };
  const unsigned S1_Overlaps[] = { Mips::S1, 0 };
  const unsigned S2_Overlaps[] = { Mips::S2, 0 };
  const unsigned S3_Overlaps[] = { Mips::S3, 0 };
  const unsigned S4_Overlaps[] = { Mips::S4, 0 };
  const unsigned S5_Overlaps[] = { Mips::S5, 0 };
  const unsigned S6_Overlaps[] = { Mips::S6, 0 };
  const unsigned S7_Overlaps[] = { Mips::S7, 0 };
  const unsigned SP_Overlaps[] = { Mips::SP, 0 };
  const unsigned T0_Overlaps[] = { Mips::T0, 0 };
  const unsigned T1_Overlaps[] = { Mips::T1, 0 };
  const unsigned T2_Overlaps[] = { Mips::T2, 0 };
  const unsigned T3_Overlaps[] = { Mips::T3, 0 };
  const unsigned T4_Overlaps[] = { Mips::T4, 0 };
  const unsigned T5_Overlaps[] = { Mips::T5, 0 };
  const unsigned T6_Overlaps[] = { Mips::T6, 0 };
  const unsigned T7_Overlaps[] = { Mips::T7, 0 };
  const unsigned T8_Overlaps[] = { Mips::T8, 0 };
  const unsigned T9_Overlaps[] = { Mips::T9, 0 };
  const unsigned V0_Overlaps[] = { Mips::V0, 0 };
  const unsigned V1_Overlaps[] = { Mips::V1, 0 };
  const unsigned ZERO_Overlaps[] = { Mips::ZERO, 0 };


  // Register Sub-registers Sets...
  const unsigned Empty_SubRegsSet[] = { 0 };
  const unsigned D0_SubRegsSet[] = { Mips::F0, Mips::F1, 0 };
  const unsigned D1_SubRegsSet[] = { Mips::F2, Mips::F3, 0 };
  const unsigned D2_SubRegsSet[] = { Mips::F4, Mips::F5, 0 };
  const unsigned D3_SubRegsSet[] = { Mips::F6, Mips::F7, 0 };
  const unsigned D4_SubRegsSet[] = { Mips::F8, Mips::F9, 0 };
  const unsigned D5_SubRegsSet[] = { Mips::F10, Mips::F11, 0 };
  const unsigned D6_SubRegsSet[] = { Mips::F12, Mips::F13, 0 };
  const unsigned D7_SubRegsSet[] = { Mips::F14, Mips::F15, 0 };
  const unsigned D8_SubRegsSet[] = { Mips::F16, Mips::F17, 0 };
  const unsigned D9_SubRegsSet[] = { Mips::F18, Mips::F19, 0 };
  const unsigned D10_SubRegsSet[] = { Mips::F20, Mips::F21, 0 };
  const unsigned D11_SubRegsSet[] = { Mips::F22, Mips::F23, 0 };
  const unsigned D12_SubRegsSet[] = { Mips::F24, Mips::F25, 0 };
  const unsigned D13_SubRegsSet[] = { Mips::F26, Mips::F27, 0 };
  const unsigned D14_SubRegsSet[] = { Mips::F28, Mips::F29, 0 };
  const unsigned D15_SubRegsSet[] = { Mips::F30, Mips::F31, 0 };


  // Register Super-registers Sets...
  const unsigned Empty_SuperRegsSet[] = { 0 };
  const unsigned F0_SuperRegsSet[] = { Mips::D0, 0 };
  const unsigned F1_SuperRegsSet[] = { Mips::D0, 0 };
  const unsigned F2_SuperRegsSet[] = { Mips::D1, 0 };
  const unsigned F3_SuperRegsSet[] = { Mips::D1, 0 };
  const unsigned F4_SuperRegsSet[] = { Mips::D2, 0 };
  const unsigned F5_SuperRegsSet[] = { Mips::D2, 0 };
  const unsigned F6_SuperRegsSet[] = { Mips::D3, 0 };
  const unsigned F7_SuperRegsSet[] = { Mips::D3, 0 };
  const unsigned F8_SuperRegsSet[] = { Mips::D4, 0 };
  const unsigned F9_SuperRegsSet[] = { Mips::D4, 0 };
  const unsigned F10_SuperRegsSet[] = { Mips::D5, 0 };
  const unsigned F11_SuperRegsSet[] = { Mips::D5, 0 };
  const unsigned F12_SuperRegsSet[] = { Mips::D6, 0 };
  const unsigned F13_SuperRegsSet[] = { Mips::D6, 0 };
  const unsigned F14_SuperRegsSet[] = { Mips::D7, 0 };
  const unsigned F15_SuperRegsSet[] = { Mips::D7, 0 };
  const unsigned F16_SuperRegsSet[] = { Mips::D8, 0 };
  const unsigned F17_SuperRegsSet[] = { Mips::D8, 0 };
  const unsigned F18_SuperRegsSet[] = { Mips::D9, 0 };
  const unsigned F19_SuperRegsSet[] = { Mips::D9, 0 };
  const unsigned F20_SuperRegsSet[] = { Mips::D10, 0 };
  const unsigned F21_SuperRegsSet[] = { Mips::D10, 0 };
  const unsigned F22_SuperRegsSet[] = { Mips::D11, 0 };
  const unsigned F23_SuperRegsSet[] = { Mips::D11, 0 };
  const unsigned F24_SuperRegsSet[] = { Mips::D12, 0 };
  const unsigned F25_SuperRegsSet[] = { Mips::D12, 0 };
  const unsigned F26_SuperRegsSet[] = { Mips::D13, 0 };
  const unsigned F27_SuperRegsSet[] = { Mips::D13, 0 };
  const unsigned F28_SuperRegsSet[] = { Mips::D14, 0 };
  const unsigned F29_SuperRegsSet[] = { Mips::D14, 0 };
  const unsigned F30_SuperRegsSet[] = { Mips::D15, 0 };
  const unsigned F31_SuperRegsSet[] = { Mips::D15, 0 };

  const TargetRegisterDesc RegisterDescriptors[] = { // Descriptors
    { "NOREG",	0,	0,	0 },
    { "A0",	A0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "A1",	A1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "A2",	A2_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "A3",	A3_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "AT",	AT_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "D0",	D0_Overlaps,	D0_SubRegsSet,	Empty_SuperRegsSet },
    { "D1",	D1_Overlaps,	D1_SubRegsSet,	Empty_SuperRegsSet },
    { "D2",	D2_Overlaps,	D2_SubRegsSet,	Empty_SuperRegsSet },
    { "D3",	D3_Overlaps,	D3_SubRegsSet,	Empty_SuperRegsSet },
    { "D4",	D4_Overlaps,	D4_SubRegsSet,	Empty_SuperRegsSet },
    { "D5",	D5_Overlaps,	D5_SubRegsSet,	Empty_SuperRegsSet },
    { "D6",	D6_Overlaps,	D6_SubRegsSet,	Empty_SuperRegsSet },
    { "D7",	D7_Overlaps,	D7_SubRegsSet,	Empty_SuperRegsSet },
    { "D8",	D8_Overlaps,	D8_SubRegsSet,	Empty_SuperRegsSet },
    { "D9",	D9_Overlaps,	D9_SubRegsSet,	Empty_SuperRegsSet },
    { "D10",	D10_Overlaps,	D10_SubRegsSet,	Empty_SuperRegsSet },
    { "D11",	D11_Overlaps,	D11_SubRegsSet,	Empty_SuperRegsSet },
    { "D12",	D12_Overlaps,	D12_SubRegsSet,	Empty_SuperRegsSet },
    { "D13",	D13_Overlaps,	D13_SubRegsSet,	Empty_SuperRegsSet },
    { "D14",	D14_Overlaps,	D14_SubRegsSet,	Empty_SuperRegsSet },
    { "D15",	D15_Overlaps,	D15_SubRegsSet,	Empty_SuperRegsSet },
    { "F0",	F0_Overlaps,	Empty_SubRegsSet,	F0_SuperRegsSet },
    { "F1",	F1_Overlaps,	Empty_SubRegsSet,	F1_SuperRegsSet },
    { "F2",	F2_Overlaps,	Empty_SubRegsSet,	F2_SuperRegsSet },
    { "F3",	F3_Overlaps,	Empty_SubRegsSet,	F3_SuperRegsSet },
    { "F4",	F4_Overlaps,	Empty_SubRegsSet,	F4_SuperRegsSet },
    { "F5",	F5_Overlaps,	Empty_SubRegsSet,	F5_SuperRegsSet },
    { "F6",	F6_Overlaps,	Empty_SubRegsSet,	F6_SuperRegsSet },
    { "F7",	F7_Overlaps,	Empty_SubRegsSet,	F7_SuperRegsSet },
    { "F8",	F8_Overlaps,	Empty_SubRegsSet,	F8_SuperRegsSet },
    { "F9",	F9_Overlaps,	Empty_SubRegsSet,	F9_SuperRegsSet },
    { "F10",	F10_Overlaps,	Empty_SubRegsSet,	F10_SuperRegsSet },
    { "F11",	F11_Overlaps,	Empty_SubRegsSet,	F11_SuperRegsSet },
    { "F12",	F12_Overlaps,	Empty_SubRegsSet,	F12_SuperRegsSet },
    { "F13",	F13_Overlaps,	Empty_SubRegsSet,	F13_SuperRegsSet },
    { "F14",	F14_Overlaps,	Empty_SubRegsSet,	F14_SuperRegsSet },
    { "F15",	F15_Overlaps,	Empty_SubRegsSet,	F15_SuperRegsSet },
    { "F16",	F16_Overlaps,	Empty_SubRegsSet,	F16_SuperRegsSet },
    { "F17",	F17_Overlaps,	Empty_SubRegsSet,	F17_SuperRegsSet },
    { "F18",	F18_Overlaps,	Empty_SubRegsSet,	F18_SuperRegsSet },
    { "F19",	F19_Overlaps,	Empty_SubRegsSet,	F19_SuperRegsSet },
    { "F20",	F20_Overlaps,	Empty_SubRegsSet,	F20_SuperRegsSet },
    { "F21",	F21_Overlaps,	Empty_SubRegsSet,	F21_SuperRegsSet },
    { "F22",	F22_Overlaps,	Empty_SubRegsSet,	F22_SuperRegsSet },
    { "F23",	F23_Overlaps,	Empty_SubRegsSet,	F23_SuperRegsSet },
    { "F24",	F24_Overlaps,	Empty_SubRegsSet,	F24_SuperRegsSet },
    { "F25",	F25_Overlaps,	Empty_SubRegsSet,	F25_SuperRegsSet },
    { "F26",	F26_Overlaps,	Empty_SubRegsSet,	F26_SuperRegsSet },
    { "F27",	F27_Overlaps,	Empty_SubRegsSet,	F27_SuperRegsSet },
    { "F28",	F28_Overlaps,	Empty_SubRegsSet,	F28_SuperRegsSet },
    { "F29",	F29_Overlaps,	Empty_SubRegsSet,	F29_SuperRegsSet },
    { "F30",	F30_Overlaps,	Empty_SubRegsSet,	F30_SuperRegsSet },
    { "F31",	F31_Overlaps,	Empty_SubRegsSet,	F31_SuperRegsSet },
    { "FCR31",	FCR31_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "FP",	FP_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "GP",	GP_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "HI",	HI_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "K0",	K0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "K1",	K1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "LO",	LO_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "RA",	RA_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S0",	S0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S1",	S1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S2",	S2_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S3",	S3_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S4",	S4_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S5",	S5_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S6",	S6_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "S7",	S7_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "SP",	SP_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T0",	T0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T1",	T1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T2",	T2_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T3",	T3_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T4",	T4_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T5",	T5_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T6",	T6_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T7",	T7_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T8",	T8_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "T9",	T9_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "V0",	V0_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "V1",	V1_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
    { "ZERO",	ZERO_Overlaps,	Empty_SubRegsSet,	Empty_SuperRegsSet },
  };

  const char *const SubRegIndexTable[] = { "sub_fpeven", "sub_fpodd" };

}

unsigned MipsGenRegisterInfo::getSubReg(unsigned RegNo, unsigned Index) const {
  switch (RegNo) {
  default:
    return 0;
  case Mips::D0:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F0;
    case Mips::sub_fpodd: return Mips::F1;
    };
    break;
  case Mips::D1:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F2;
    case Mips::sub_fpodd: return Mips::F3;
    };
    break;
  case Mips::D2:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F4;
    case Mips::sub_fpodd: return Mips::F5;
    };
    break;
  case Mips::D3:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F6;
    case Mips::sub_fpodd: return Mips::F7;
    };
    break;
  case Mips::D4:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F8;
    case Mips::sub_fpodd: return Mips::F9;
    };
    break;
  case Mips::D5:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F10;
    case Mips::sub_fpodd: return Mips::F11;
    };
    break;
  case Mips::D6:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F12;
    case Mips::sub_fpodd: return Mips::F13;
    };
    break;
  case Mips::D7:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F14;
    case Mips::sub_fpodd: return Mips::F15;
    };
    break;
  case Mips::D8:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F16;
    case Mips::sub_fpodd: return Mips::F17;
    };
    break;
  case Mips::D9:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F18;
    case Mips::sub_fpodd: return Mips::F19;
    };
    break;
  case Mips::D10:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F20;
    case Mips::sub_fpodd: return Mips::F21;
    };
    break;
  case Mips::D11:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F22;
    case Mips::sub_fpodd: return Mips::F23;
    };
    break;
  case Mips::D12:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F24;
    case Mips::sub_fpodd: return Mips::F25;
    };
    break;
  case Mips::D13:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F26;
    case Mips::sub_fpodd: return Mips::F27;
    };
    break;
  case Mips::D14:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F28;
    case Mips::sub_fpodd: return Mips::F29;
    };
    break;
  case Mips::D15:
    switch (Index) {
    default: return 0;
    case Mips::sub_fpeven: return Mips::F30;
    case Mips::sub_fpodd: return Mips::F31;
    };
    break;
  };
  return 0;
}

unsigned MipsGenRegisterInfo::getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const {
  switch (RegNo) {
  default:
    return 0;
  case Mips::D0:
    if (SubRegNo == Mips::F0)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F1)  return Mips::sub_fpodd;
    return 0;
  case Mips::D1:
    if (SubRegNo == Mips::F2)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F3)  return Mips::sub_fpodd;
    return 0;
  case Mips::D2:
    if (SubRegNo == Mips::F4)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F5)  return Mips::sub_fpodd;
    return 0;
  case Mips::D3:
    if (SubRegNo == Mips::F6)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F7)  return Mips::sub_fpodd;
    return 0;
  case Mips::D4:
    if (SubRegNo == Mips::F8)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F9)  return Mips::sub_fpodd;
    return 0;
  case Mips::D5:
    if (SubRegNo == Mips::F10)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F11)  return Mips::sub_fpodd;
    return 0;
  case Mips::D6:
    if (SubRegNo == Mips::F12)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F13)  return Mips::sub_fpodd;
    return 0;
  case Mips::D7:
    if (SubRegNo == Mips::F14)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F15)  return Mips::sub_fpodd;
    return 0;
  case Mips::D8:
    if (SubRegNo == Mips::F16)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F17)  return Mips::sub_fpodd;
    return 0;
  case Mips::D9:
    if (SubRegNo == Mips::F18)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F19)  return Mips::sub_fpodd;
    return 0;
  case Mips::D10:
    if (SubRegNo == Mips::F20)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F21)  return Mips::sub_fpodd;
    return 0;
  case Mips::D11:
    if (SubRegNo == Mips::F22)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F23)  return Mips::sub_fpodd;
    return 0;
  case Mips::D12:
    if (SubRegNo == Mips::F24)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F25)  return Mips::sub_fpodd;
    return 0;
  case Mips::D13:
    if (SubRegNo == Mips::F26)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F27)  return Mips::sub_fpodd;
    return 0;
  case Mips::D14:
    if (SubRegNo == Mips::F28)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F29)  return Mips::sub_fpodd;
    return 0;
  case Mips::D15:
    if (SubRegNo == Mips::F30)  return Mips::sub_fpeven;
    if (SubRegNo == Mips::F31)  return Mips::sub_fpodd;
    return 0;
  };
  return 0;
}

unsigned MipsGenRegisterInfo::composeSubRegIndices(unsigned IdxA, unsigned IdxB) const {
  switch (IdxA) {
  default:
    return IdxB;
  }
}

MipsGenRegisterInfo::MipsGenRegisterInfo(int CallFrameSetupOpcode, int CallFrameDestroyOpcode)
  : TargetRegisterInfo(RegisterDescriptors, 84, RegisterClasses, RegisterClasses+5,
                 SubRegIndexTable,
                 CallFrameSetupOpcode, CallFrameDestroyOpcode,
                 SubregHashTable, SubregHashTableSize,
                 AliasesHashTable, AliasesHashTableSize) {
}

int MipsGenRegisterInfo::getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const {
  switch (Flavour) {
  default:
    assert(0 && "Unknown DWARF flavour");
    return -1;
  case 0:
    switch (RegNum) {
    default:
      assert(0 && "Invalid RegNum");
      return -1;
    case Mips::A0:
      return 5;
    case Mips::A1:
      return 5;
    case Mips::A2:
      return 6;
    case Mips::A3:
      return 7;
    case Mips::AT:
      return 1;
    case Mips::D0:
      return 32;
    case Mips::D1:
      return 34;
    case Mips::D2:
      return 36;
    case Mips::D3:
      return 38;
    case Mips::D4:
      return 40;
    case Mips::D5:
      return 42;
    case Mips::D6:
      return 44;
    case Mips::D7:
      return 46;
    case Mips::D8:
      return 48;
    case Mips::D9:
      return 50;
    case Mips::D10:
      return 52;
    case Mips::D11:
      return 54;
    case Mips::D12:
      return 56;
    case Mips::D13:
      return 58;
    case Mips::D14:
      return 60;
    case Mips::D15:
      return 62;
    case Mips::F0:
      return 32;
    case Mips::F1:
      return 33;
    case Mips::F2:
      return 34;
    case Mips::F3:
      return 35;
    case Mips::F4:
      return 36;
    case Mips::F5:
      return 37;
    case Mips::F6:
      return 38;
    case Mips::F7:
      return 39;
    case Mips::F8:
      return 40;
    case Mips::F9:
      return 41;
    case Mips::F10:
      return 42;
    case Mips::F11:
      return 43;
    case Mips::F12:
      return 44;
    case Mips::F13:
      return 45;
    case Mips::F14:
      return 46;
    case Mips::F15:
      return 47;
    case Mips::F16:
      return 48;
    case Mips::F17:
      return 49;
    case Mips::F18:
      return 50;
    case Mips::F19:
      return 51;
    case Mips::F20:
      return 52;
    case Mips::F21:
      return 53;
    case Mips::F22:
      return 54;
    case Mips::F23:
      return 55;
    case Mips::F24:
      return 56;
    case Mips::F25:
      return 57;
    case Mips::F26:
      return 58;
    case Mips::F27:
      return 59;
    case Mips::F28:
      return 60;
    case Mips::F29:
      return 61;
    case Mips::F30:
      return 62;
    case Mips::F31:
      return 63;
    case Mips::FCR31:
      return -1;
    case Mips::FP:
      return 30;
    case Mips::GP:
      return 28;
    case Mips::HI:
      return 64;
    case Mips::K0:
      return 26;
    case Mips::K1:
      return 27;
    case Mips::LO:
      return 65;
    case Mips::RA:
      return 31;
    case Mips::S0:
      return 16;
    case Mips::S1:
      return 17;
    case Mips::S2:
      return 18;
    case Mips::S3:
      return 19;
    case Mips::S4:
      return 20;
    case Mips::S5:
      return 21;
    case Mips::S6:
      return 22;
    case Mips::S7:
      return 23;
    case Mips::SP:
      return 29;
    case Mips::T0:
      return 8;
    case Mips::T1:
      return 9;
    case Mips::T2:
      return 10;
    case Mips::T3:
      return 11;
    case Mips::T4:
      return 12;
    case Mips::T5:
      return 13;
    case Mips::T6:
      return 14;
    case Mips::T7:
      return 15;
    case Mips::T8:
      return 24;
    case Mips::T9:
      return 25;
    case Mips::V0:
      return 2;
    case Mips::V1:
      return 3;
    case Mips::ZERO:
      return 0;
    };
  };
}

} // End llvm namespace 
