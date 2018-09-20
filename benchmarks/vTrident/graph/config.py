import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC=""
ROOT = ""

# Update program name, list of input commands 
bmName = "graph"
inputList = ["-f in0.txt", "-f in1.txt", "-f in2.txt", "-f in3.txt", "-f in4.txt", "-f in5.txt", "-f in6.txt", "-f in7.txt", "-f in8.txt", "-f in9.txt"]

# Set to 1 if program has input .txt files
input_txt = 1

# Update the paths according to your environment
OPT= ROOT + "/llvm-2.9-build/bin/opt"  
LLVMLINK= ROOT + "/llvm-2.9-build/bin/llvm-link" 
LLVMPASS_FOLDER= ROOT + "/llvm-2.9-build/lib/" 
LLI= ROOT + "/llvm-2.9-build/bin/lli"
PYTHON="python"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
