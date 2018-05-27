import sys, os

####################
bmName = "fft"
fiFilePrefix = "data/input_"
irPath = bmName + "-llfi_index.ll"
inputList = ["in0.png output.png", "in1.png output.png", "in2.png output.png", "in3.png output.png", "in4.png output.png", "in5.png output.png", "in6.png output.png", "in7.png output.png", "in8.png output.png", "in9.png output.png"]
####################


inC = 0
os.system("rm results -rf")
os.system("mkdir results")
for inI in inputList:
	os.system("cp " + fiFilePrefix + `inC` + "-fi.txt fi_breakdown.txt")
	os.system("python prepare.py " + bmName + " \"" + inI + "\"")
	os.system("mv prediction.results results/prediction.results-" + `inC` )
	os.system("rm -rf file_" + `inC`)
	os.system("mkdir file_" + `inC`)
	os.system("mv *.txt file_" + `inC`)
	inC += 1


