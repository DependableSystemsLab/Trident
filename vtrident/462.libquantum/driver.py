import sys, os

####################
bmName = "libquantum"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["21 32", "33 5", "33 7", "66 13", "19 9", "63 9", "21 19", "27 13", "66 5", "78 82"]
####################


inC = 0
os.system("rm results -rf")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mkdir results")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1


