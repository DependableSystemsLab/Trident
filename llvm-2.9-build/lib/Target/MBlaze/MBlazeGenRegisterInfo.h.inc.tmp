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

struct MBlazeGenRegisterInfo : public TargetRegisterInfo {
  explicit MBlazeGenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
  unsigned getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const;
  unsigned composeSubRegIndices(unsigned, unsigned) const;
};

namespace MBlaze { // Register classes
  enum {
    CRCRegClassID = 0,
    GPRRegClassID = 1,
    SPRRegClassID = 2
  };

  struct CRCClass : public TargetRegisterClass {
    CRCClass();
  };
  extern CRCClass	CRCRegClass;
  static TargetRegisterClass * const CRCRegisterClass = &CRCRegClass;
  struct GPRClass : public TargetRegisterClass {
    GPRClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GPRClass	GPRRegClass;
  static TargetRegisterClass * const GPRRegisterClass = &GPRRegClass;
  struct SPRClass : public TargetRegisterClass {
    SPRClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern SPRClass	SPRRegClass;
  static TargetRegisterClass * const SPRRegisterClass = &SPRRegClass;
} // end of namespace MBlaze

} // End llvm namespace 
