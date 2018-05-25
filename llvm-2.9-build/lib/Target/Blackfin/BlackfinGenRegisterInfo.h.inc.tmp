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

struct BlackfinGenRegisterInfo : public TargetRegisterInfo {
  explicit BlackfinGenRegisterInfo(int CallFrameSetupOpcode = -1, int CallFrameDestroyOpcode = -1);
  virtual int getDwarfRegNumFull(unsigned RegNum, unsigned Flavour) const;
  virtual int getDwarfRegNum(unsigned RegNum, bool isEH) const = 0;
  virtual bool needsStackRealignment(const MachineFunction &) const
     { return false; }
  unsigned getSubReg(unsigned RegNo, unsigned Index) const;
  unsigned getSubRegIndex(unsigned RegNo, unsigned SubRegNo) const;
  unsigned composeSubRegIndices(unsigned, unsigned) const;
};

namespace BF { // Register classes
  enum {
    ALLRegClassID = 0,
    AccuRegClassID = 1,
    AnyCCRegClassID = 2,
    BRegClassID = 3,
    DRegClassID = 4,
    D16RegClassID = 5,
    D16HRegClassID = 6,
    D16LRegClassID = 7,
    DPRegClassID = 8,
    DP16RegClassID = 9,
    DP16HRegClassID = 10,
    DP16LRegClassID = 11,
    GRRegClassID = 12,
    GR16RegClassID = 13,
    IRegClassID = 14,
    JustCCRegClassID = 15,
    LRegClassID = 16,
    MRegClassID = 17,
    NotCCRegClassID = 18,
    PRegClassID = 19,
    P16RegClassID = 20,
    P16HRegClassID = 21,
    P16LRegClassID = 22,
    PIRegClassID = 23,
    StatBitRegClassID = 24
  };

  struct ALLClass : public TargetRegisterClass {
    ALLClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern ALLClass	ALLRegClass;
  static TargetRegisterClass * const ALLRegisterClass = &ALLRegClass;
  struct AccuClass : public TargetRegisterClass {
    AccuClass();
  };
  extern AccuClass	AccuRegClass;
  static TargetRegisterClass * const AccuRegisterClass = &AccuRegClass;
  struct AnyCCClass : public TargetRegisterClass {
    AnyCCClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern AnyCCClass	AnyCCRegClass;
  static TargetRegisterClass * const AnyCCRegisterClass = &AnyCCRegClass;
  struct BClass : public TargetRegisterClass {
    BClass();
  };
  extern BClass	BRegClass;
  static TargetRegisterClass * const BRegisterClass = &BRegClass;
  struct DClass : public TargetRegisterClass {
    DClass();
  };
  extern DClass	DRegClass;
  static TargetRegisterClass * const DRegisterClass = &DRegClass;
  struct D16Class : public TargetRegisterClass {
    D16Class();
  };
  extern D16Class	D16RegClass;
  static TargetRegisterClass * const D16RegisterClass = &D16RegClass;
  struct D16HClass : public TargetRegisterClass {
    D16HClass();
  };
  extern D16HClass	D16HRegClass;
  static TargetRegisterClass * const D16HRegisterClass = &D16HRegClass;
  struct D16LClass : public TargetRegisterClass {
    D16LClass();
  };
  extern D16LClass	D16LRegClass;
  static TargetRegisterClass * const D16LRegisterClass = &D16LRegClass;
  struct DPClass : public TargetRegisterClass {
    DPClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern DPClass	DPRegClass;
  static TargetRegisterClass * const DPRegisterClass = &DPRegClass;
  struct DP16Class : public TargetRegisterClass {
    DP16Class();
  };
  extern DP16Class	DP16RegClass;
  static TargetRegisterClass * const DP16RegisterClass = &DP16RegClass;
  struct DP16HClass : public TargetRegisterClass {
    DP16HClass();
  };
  extern DP16HClass	DP16HRegClass;
  static TargetRegisterClass * const DP16HRegisterClass = &DP16HRegClass;
  struct DP16LClass : public TargetRegisterClass {
    DP16LClass();
  };
  extern DP16LClass	DP16LRegClass;
  static TargetRegisterClass * const DP16LRegisterClass = &DP16LRegClass;
  struct GRClass : public TargetRegisterClass {
    GRClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern GRClass	GRRegClass;
  static TargetRegisterClass * const GRRegisterClass = &GRRegClass;
  struct GR16Class : public TargetRegisterClass {
    GR16Class();
  };
  extern GR16Class	GR16RegClass;
  static TargetRegisterClass * const GR16RegisterClass = &GR16RegClass;
  struct IClass : public TargetRegisterClass {
    IClass();
  };
  extern IClass	IRegClass;
  static TargetRegisterClass * const IRegisterClass = &IRegClass;
  struct JustCCClass : public TargetRegisterClass {
    JustCCClass();
  };
  extern JustCCClass	JustCCRegClass;
  static TargetRegisterClass * const JustCCRegisterClass = &JustCCRegClass;
  struct LClass : public TargetRegisterClass {
    LClass();
  };
  extern LClass	LRegClass;
  static TargetRegisterClass * const LRegisterClass = &LRegClass;
  struct MClass : public TargetRegisterClass {
    MClass();
  };
  extern MClass	MRegClass;
  static TargetRegisterClass * const MRegisterClass = &MRegClass;
  struct NotCCClass : public TargetRegisterClass {
    NotCCClass();
  };
  extern NotCCClass	NotCCRegClass;
  static TargetRegisterClass * const NotCCRegisterClass = &NotCCRegClass;
  struct PClass : public TargetRegisterClass {
    PClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern PClass	PRegClass;
  static TargetRegisterClass * const PRegisterClass = &PRegClass;
  struct P16Class : public TargetRegisterClass {
    P16Class();
  };
  extern P16Class	P16RegClass;
  static TargetRegisterClass * const P16RegisterClass = &P16RegClass;
  struct P16HClass : public TargetRegisterClass {
    P16HClass();
  };
  extern P16HClass	P16HRegClass;
  static TargetRegisterClass * const P16HRegisterClass = &P16HRegClass;
  struct P16LClass : public TargetRegisterClass {
    P16LClass();
  };
  extern P16LClass	P16LRegClass;
  static TargetRegisterClass * const P16LRegisterClass = &P16LRegClass;
  struct PIClass : public TargetRegisterClass {
    PIClass();

    iterator allocation_order_end(const MachineFunction &MF) const;
    };
  extern PIClass	PIRegClass;
  static TargetRegisterClass * const PIRegisterClass = &PIRegClass;
  struct StatBitClass : public TargetRegisterClass {
    StatBitClass();
  };
  extern StatBitClass	StatBitRegClass;
  static TargetRegisterClass * const StatBitRegisterClass = &StatBitRegClass;
} // end of namespace Blackfin

} // End llvm namespace 
