import os

# Update the path of llvm-gcc binary and directory where Trident is checked out
LLVMGCC=""
ROOT = ""

# Update program name, list of input commands 
bmName = "comd"
inputList = ["-x 4 -y 4 -z 4 -N 60 -T 2.2 -r 0.2", "-x 4 -y 4 -z 6 -N 40 -T 3 -r 0.2", "-x 4 -y 6 -z 5 -N 100 -T 50 -r 0.3", "-x 12 -y 15 -z 5 -N 10 -T 230 -r 0.11", "-x 4 -y 5 -z 52 -N 15 -T 30 -r 0.01", "-x 42 -y 5 -z 7 -N 5 -T 64.22 -r 0.0327", "-x 14 -y 5 -z 11 -N 20 -T 1 -r -0.2", "-x 13 -y 12 -z 18 -N 13 -T 42 -r -0.29", "-x 9 -y 9 -z 8 -N 37 -T 0 -r 0.4", "-x 6 -y 21 -z 4 -N 19 -T 15.2 -r 0.3"]


# Update the paths according to your environment
OPT= ROOT + "/llvm-2.9-build/bin/opt"  
LLVMLINK= ROOT + "/llvm-2.9-build/bin/llvm-link" 
LLVMPASS_FOLDER= ROOT + "/llvm-2.9-build/lib/" 
LLI= ROOT + "/llvm-2.9-build/bin/lli"
PYTHON="python"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
