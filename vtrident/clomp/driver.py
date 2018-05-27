import sys, os

####################
bmName = "clomp"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["1 1 2 3 1 1 1", "1 1 2 3 2 2 1", "1 1 2 4 1 2 1", "1 1 2 3 2 1 2", "1 1 4 3 1 1 1", "1 1 5 3 4 4 4", "1 1 3 2 3 2 2", "1 1 3 3 3 3 3", "1 1 5 5 1 1 1", "1 1 4 4 2 2 2"]
####################


inC = 0
os.system("rm results -rf")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mkdir results")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1


