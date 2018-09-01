#! /usr/bin/python

import subprocess, os, sys
from config import OPT,LLVMPASS_FOLDER

####################################################################
irPath = sys.argv[1]
targetCmpIndex = int(sys.argv[2])
####################################################################

ltCmpList = []
storeMaskingMap = {}

# Read "loop_terminating_cmp_list.txt" first
with open("loop_terminating_cmp_list.txt", 'r') as lf:
	ltLines = lf.readlines()
	for ltLine in ltLines:
		ltIndex = int( ltLine.split(" ")[1].replace("\n", "") )
		ltCmpList.append(ltIndex)

# Read "store_masking.txt"
with open("store_masking.txt", 'r') as sf:
	smLines = sf.readlines()
	for smLine in smLines:
		if " " in smLine:
			storeIndex = int(smLine.split(" ")[0])
			maskingRate = float(smLine.split(" ")[1].replace("\n", ""))
			storeMaskingMap[storeIndex] = maskingRate

diffLines = ""
# None-loop-terminating cmp	
if targetCmpIndex not in ltCmpList:
	# DEBUG
	print "None-loop-terminating CMP: "	

	command = [OPT, "-S", "-load", LLVMPASS_FOLDER + "/NLTS.so", "-loop-dep", irPath, "-o", "null", "-select_cmp_prob_file=./profile_cmp_prob_result.txt", "-select_ltcmp_file=./loop_terminating_cmp_list.txt", "-select_target_index=" + `targetCmpIndex`]
	p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
	diffLines = p.stdout.read()
	print diffLines
	
# Loop-terminating cmp
else:
	# DEBUG
	print "Loop-terminating CMP: "	

	command = [OPT, "-S", "-load", LLVMPASS_FOLDER + "/LTS.so", "-loop-dep", irPath, "-o", "null", "-select_cmp_prob_file=./profile_cmp_prob_result.txt", "-select_ltcmp_file=./loop_terminating_cmp_list.txt", "-select_target_index=" + `targetCmpIndex`]
	p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
	diffLines = p.stdout.read()
	print diffLines

print ".........."
# Process results
if "SDC 1" in diffLines or "Loop" in diffLines:
	print 0 
	sys.exit()

if " " not in diffLines:
	if targetCmpIndex in ltCmpList:
		print 0
	else:
		print 1
	sys.exit()

accumSdc = 0
for dline in diffLines.split("\n"):
	if " " in dline:
		storeIndex = int(dline.split(" ")[0])
		storeAffectedRate = float(dline.split(" ")[1])
		storeContr = 0
		storeSdc = 1

		if targetCmpIndex in ltCmpList:
			# LT CMP, use 1 as store sdc rate
			storeSdc = 1
		else:
			# NLT CMP
			if storeIndex in storeMaskingMap:
				storeSdc = 1 - storeMaskingMap[storeIndex]
		storeContr = storeAffectedRate * storeSdc
		accumSdc += storeContr	
		print " >>> Store found: " + `storeIndex` + ", storeSdc: " + `storeSdc` + ", storeContr: " + `storeContr`
		
if accumSdc >= 1:
	print 0
else:
	print (1-accumSdc)









