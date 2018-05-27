import sys, os

####################
bmName = "graph"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["-f in0.txt", "-f in1.txt", "-f in2.txt", "-f in3.txt", "-f in4.txt", "-f in5.txt", "-f in6.txt", "-f in7.txt", "-f in8.txt", "-f in9.txt"]
####################


inC = 0
os.system("rm results -rf")
os.system("mkdir results")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	inC += 1


