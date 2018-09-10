import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC=""
ROOT = ""

# Update program name, list of input commands 
bmName = "fft"
inputList = ["in0.png output.png", "in1.png output.png", "in2.png output.png", "in3.png output.png", "in4.png output.png", "in5.png output.png", "in6.png output.png", "in7.png output.png", "in8.png output.png", "in9.png output.png"]


# Update the paths according to your environment
OPT= ROOT + "/llvm-2.9-build/bin/opt"  
LLVMLINK= ROOT + "/llvm-2.9-build/bin/llvm-link" 
LLVMPASS_FOLDER= ROOT + "/llvm-2.9-build/lib/" 
LLI= ROOT + "/llvm-2.9-build/bin/lli"
PYTHON="python"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
