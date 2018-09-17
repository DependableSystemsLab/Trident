#! /user/bin/python

import sys, os, subprocess
from config import OPT,LLVMPASS_FOLDER


############################
irPath = sys.argv[1]
targetIndex = int(sys.argv[2])
############################

# Model: SIM, LM, MM

instCountDic = {}
smDic = {} # store masking dic

# Read "profile_cmp_prob_result.txt"
with open("profile_cmp_prob_result.txt", 'r') as cmpf:
	pcLines = cmpf.readlines()
	for pcLine in pcLines:
		index = int(pcLine.split(" ")[0].replace(":", ""))
		c1 = int(pcLine.split(" ")[1])
		c2 = int(pcLine.split(" ")[2])
		totalC = c1 + c2
		instCountDic[index] = totalC
	cmpf.close()


# Read "profile_call_prob_result.txt"
with open("profile_call_prob_result.txt", 'r') as callf:
	pcLines = callf.readlines()
	for pcLine in pcLines:
		index = int(pcLine.split(" ")[0].replace(":", ""))
		totalC = int(pcLine.split(" ")[1])
		instCountDic[index] = totalC
	callf.close()


# Read "store_masking.txt"
with open("store_masking.txt", 'r') as sf:
	sLines = sf.readlines()
	for sLine in sLines:
		index = int(sLine.split(" ")[0])
		sm = float(sLine.split(" ")[1])
		totalC = int(sLine.split(" ")[2])
		instCountDic[index] = totalC
		smDic[index] = sm # masking rate of store
	sf.close()

os.system("rm null")


############################################################################
# Run Static-instruction-level Masking (SIM)
############################################################################
selectIndexStr = "-select_index=" + `targetIndex`
command = [OPT, "-S", "-load", LLVMPASS_FOLDER + "/SIM.so", "-bishe_insert", selectIndexStr, irPath, "-o", "null", "-select_stuples_file=simplified_inst_tuples.txt"]
p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
simOutput = p.stdout.read()


totalTmnInstCount = 0
accumSdc = 0
accumCrash = 0
for opLine in simOutput.split("\n"): # Each line is a leaf node of SIM, need weighted at the end
	if " " in opLine:
		indexNType = opLine.split(":")[0]
		instIndex = int(indexNType.split(" ")[0])
		instType = indexNType.split(" ")[1]
	
		# Get all rates from SIM
		# 397 cmp: 0.015324, 0.219051, 0.765625
		# 400 store: 0.054932, 0.179443, 0.765625
		simPR = float( opLine.split(":")[1].split(", ")[0] )
		simMR = float( opLine.split(":")[1].split(", ")[1] ) 
		simCR = float( opLine.split(":")[1].split(", ")[2].replace("\n", "") ) # Crash rate of SIM is used as final crash rate

		instCount = 0
		if instIndex in instCountDic:
			instCount = instCountDic[instIndex]

		if "cmp" in instType:
			############################################################################
			# RUN Logic-level Masking:Get logic masking and final benign rate
			############################################################################
			llCommand = ["python", "getCmpLogicMasking.py", irPath, `instIndex`]
			p = subprocess.Popen(llCommand, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
			llOutput = p.stdout.read()
			llBenign = float(llOutput.split("\n")[-2])
			llSdc = 1 - llBenign
			sdcContr = llSdc * simPR
			totalTmnInstCount += instCount
			accumSdc += sdcContr * instCount
			accumCrash += simCR * instCount
			print "SDC: cmp " + `instIndex` + " ------> " + `sdcContr`

		if "store" in instType:
			############################################################################
			# Get Store masking rate
			############################################################################
			sm = 0 # store masking rate
			sPr = 1 # store sdc rate
			if instIndex in smDic:
				sm = smDic[instIndex]
				sPr = 1 - sm
			llBenign = float(sm) 
			llSdc = 1 - llBenign
			sdcContr = llSdc * simPR
			totalTmnInstCount += instCount
			accumSdc += sdcContr * instCount
			accumCrash += simCR * instCount
			print "SDC: store " + `instIndex` + " ------> " + `sdcContr`

		if "call" in instType:
			if len( indexNType.split(" ") ) >= 3:
				funcName = indexNType.split(" ")[2]
				# Specify SDC
				if "fopen" in funcName or "fputs" in funcName or "fwrite" in funcName or "_IO_putc" in funcName or "fputc" in funcName or "puts" in funcName or "fprintf" in funcName:
					cPr = 1
					cMr = 0
					sdcContr = cPr * simPR
					totalTmnInstCount += instCount
					accumSdc += sdcContr * instCount
					accumCrash += simCR * instCount
					print "SDC: call " + `instIndex` + " ------> " + `sdcContr`

fSdc = 0
fCrash = 0
fBenign = 1
if totalTmnInstCount != 0:
	fSdc = accumSdc / float(totalTmnInstCount)
	fCrash = accumCrash / float(totalTmnInstCount)
	fBenign = 1 - fSdc - fCrash
print "\n***************************"
print "Final SDC: " + `fSdc`
print "Final Benign: " + `fBenign`
print "Final Crash: " + `fCrash`
