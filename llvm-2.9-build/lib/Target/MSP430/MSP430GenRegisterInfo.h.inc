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

struct MSP430GenRegisterInfo : public TargetRegisterInfo {
  explicit MSP430GenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
  unsigned getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const;
  unsigned composeSubRegIndices(unsigned, unsigned) const;
};

namespace MSP430 { // Register classes
  enum {
    GR16RegClassID = 0,
    GR8RegClassID = 1
  };

  struct GR16Class : public TargetRegisterClass {
    GR16Class();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR16Class	GR16RegClass;
  static TargetRegisterClass * const GR16RegisterClass = &GR16RegClass;
  struct GR8Class : public TargetRegisterClass {
    GR8Class();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GR8Class	GR8RegClass;
  static TargetRegisterClass * const GR8RegisterClass = &GR8RegClass;
} // end of namespace MSP430

} // End llvm namespace 
