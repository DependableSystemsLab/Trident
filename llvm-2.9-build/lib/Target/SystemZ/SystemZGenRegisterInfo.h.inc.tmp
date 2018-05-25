//===- TableGen'erated file -------------------------------------*- C++ -*-===//
//
// Register Information Header Fragment
//
// Automatically generated file, do not edit!
//
//===----------------------------------------------------------------------===//

#include "llvm/Target/TargetRegisterInfo.h"
#include <string>

namespace llvm {

struct SystemZGenRegisterInfo : public TargetRegisterInfo {
  explicit SystemZGenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
  unsigned getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const;
  unsigned composeSubRegIndices(unsigned, unsigned) const;
};

namespace SystemZ { // Register classes
  enum {
    ADDR32RegClassID = 0,
    ADDR64RegClassID = 1,
    CCRRegClassID = 2,
    FP32RegClassID = 3,
    FP64RegClassID = 4,
    GR128RegClassID = 5,
    GR32RegClassID = 6,
    GR64RegClassID = 7,
    GR64PRegClassID = 8
  };

  struct ADDR32Class : public TargetRegisterClass {
    ADDR32Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern ADDR32Class	ADDR32RegClass;
  static TargetRegisterClass * const ADDR32RegisterClass = &ADDR32RegClass;
  struct ADDR64Class : public TargetRegisterClass {
    ADDR64Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern ADDR64Class	ADDR64RegClass;
  static TargetRegisterClass * const ADDR64RegisterClass = &ADDR64RegClass;
  struct CCRClass : public TargetRegisterClass {
    CCRClass();
  };
  extern CCRClass	CCRRegClass;
  static TargetRegisterClass * const CCRRegisterClass = &CCRRegClass;
  struct FP32Class : public TargetRegisterClass {
    FP32Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern FP32Class	FP32RegClass;
  static TargetRegisterClass * const FP32RegisterClass = &FP32RegClass;
  struct FP64Class : public TargetRegisterClass {
    FP64Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern FP64Class	FP64RegClass;
  static TargetRegisterClass * const FP64RegisterClass = &FP64RegClass;
  struct GR128Class : public TargetRegisterClass {
    GR128Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR128Class	GR128RegClass;
  static TargetRegisterClass * const GR128RegisterClass = &GR128RegClass;
  struct GR32Class : public TargetRegisterClass {
    GR32Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR32Class	GR32RegClass;
  static TargetRegisterClass * const GR32RegisterClass = &GR32RegClass;
  struct GR64Class : public TargetRegisterClass {
    GR64Class();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR64Class	GR64RegClass;
  static TargetRegisterClass * const GR64RegisterClass = &GR64RegClass;
  struct GR64PClass : public TargetRegisterClass {
    GR64PClass();

    iterator allocation_order_begin(const MachineFunction &MF) const;
    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR64PClass	GR64PRegClass;
  static TargetRegisterClass * const GR64PRegisterClass = &GR64PRegClass;
} // end of namespace SystemZ

} // End llvm namespace 
