# Trident Project

Trident analytically predicts the SDC probability of a given program and its instructions without any fault injection.

Getting Started
--------------

These instructions will get you a copy of the project up and running on your local machine.

Prerequisites
--------------

1. The packages and dependencies required by LLFI(v2.9) and LLVM(v2.9)
2. LLVM-GCC(v2.9)
3. Python 2.7

Preparation
--------------

Take Blackscholes benchmark as an example, go to `./benchmarks/blackscholes/`

1. Put the compiled LLVM IR file of the program in the folder. The instructions should be indexed. For example, using `instrument` in LLFI
2. Put the program input file (if any) in the same folder
3. Choose the LLVM IR instructions that are considered as the program output in `getStoreMaskingRate.py` (line:298)
4. Configure the paths based on your envirnment in `prepare.py`

Execution
--------------

1. Profile the dynamic footprint of the instructions of the program. This can be done in `./inst_count` folder by running `bash run_sampling.sh`. A log file called `fi_breakdown.txt` is generated
2. Copy the log file to the folder of the program under test (`./benchmarks/blackscholes/`). Trident will read and predict the SDC probabilities of the instructions provided in this log file, and aggregate the overall SDC probability of the program based on their profiled dynamic footprint
3. To execute Trident, do `python prepare blackscholes "1 in_4.txt output.txt"` in the folder `./benchmarks/blackscholes/`. The predicted results are in `prediction.results`

Paper
--------------

Modeling Soft Error Propagation in Programs

http://blogs.ubc.ca/karthik/2018/03/04/modeling-soft-error-propagation-in-programs/


Video Demo
--------------

The video walks through the setup and execution of Trident.

https://youtu.be/aPQW3EnF6lE
