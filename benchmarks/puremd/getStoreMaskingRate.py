#! /usr/bin/python

import os, sys
import subprocess


##########################
irPath = sys.argv[1]
##########################



storeMaskingDic = {} # All stores executed, results here too.
profileMemLinesList = [] # Saves all profiled line from mem result.

##########################################################################
cmpMaskingDic = {}
instExecDic = {}
instTupleDic = {}

# Read cmpMasking list and cmp/call execution counts
def initMaskingAndCounts():
	global cmpMaskingDic, instExecDic, instTupleDic
	# Read "profile_cmp_prob_result.txt"
	with open("profile_cmp_prob_result.txt", 'r') as cmpf:
		cmpLines = cmpf.readlines()
		for cmpLine in cmpLines:
			if ":" in cmpLine:
				index = int(cmpLine.split(": ")[0])
				count = int(cmpLine.split(": ")[1].split(" ")[0]) + int(cmpLine.split(": ")[1].split(" ")[1].replace("\n", ""))
				instExecDic[index] = count
	
	# Read "profile_call_prob_result.txt"
	with open("profile_call_prob_result.txt", 'r') as callf:
		callLines = callf.readlines()
		for callLine in callLines:
			if ":" in callLine:
				index = int(callLine.split(": ")[0])
				count = int(callLine.split(": ")[1].replace("\n", ""))
				instExecDic[index] = count

	# Read "cmp_masking.txt"
	with open("cmp_masking.txt", 'r') as maskingf:
		maskingLines = maskingf.readlines()
		for maskingLine in maskingLines:
			if " " in maskingLine:
				index = int(maskingLine.split(" ")[0])
				maskingRate = float(maskingLine.split(" ")[1].replace("\n", ""))
				cmpMaskingDic[index] = maskingRate

	# Read "inst_tuples.txt"
	with open("inst_tuples.txt", 'r') as itf:
		itLines = itf.readlines()
		for itLine in itLines:
			# 27 <1,0,0>
			if " " in itLine:
				index = int(itLine.split(" ")[0])
				maskingRate = float(itLine.split("<")[1].split(",")[1])
				instTupleDic[index] = maskingRate
	


#########################################################################
storesList = [] # All stores executed
loadsList = [] # All loads executed
adrsDic = {} # Mem address is the key, keep all inst uses the address
storeAdrsCacheDic = {} # Given a store, list all addresses it uses
loadAdrsCacheDic = {} # Given a load, list all addresses it uses
storeToLoadDic = {} # Given a store, list all loads loading from it

adrsWriteCountDic = {} # adrs->count
adrsReadCountDic = {}
adrsWarMaskingDic = {}
storeWarMaskingDic = {}

# Read all stores/loads from 'profile_mem_result.txt'
def readAllStores():

	global profileMemLinesList, storeMaskingDic, storesList, loadsList, adrsDic, storeAdrsCacheDic, loadAdrsCacheDic, storeToLoadDic, adrsWriteCountDic, adrsReadCountDic, adrsWarMaskingDic, storeWarMaskingDic

	with open("profile_mem_result.txt", 'r') as sf:
		lines = sf.readlines()
		profileMemLinesList = lines
		
		# DEBUG
		print "Size of profiled mem result: " + `len(profileMemLinesList)`

		for line in lines:
			adrs = 0
			index = 0
			if "S " in line:
				# Store: 
				
				# Get index and add
				index = int(line.split(" ")[1])
				if index not in storesList:
					storesList.append(index)
				if index not in storeMaskingDic:
					storeMaskingDic[index] = 0;
				
				# Get address
				adrs = line.split(" ")[2].replace("\n", "")
				if int(index) not in storeAdrsCacheDic:
					storeAdrsCacheDic[int(index)] = []
				storeAdrsCacheDic[int(index)].append(adrs)

				# Record its counts
				if adrs not in adrsWriteCountDic:
					adrsWriteCountDic[adrs] = 0
				adrsWriteCountDic[adrs] += 1

				# Record store counts
				if index not in instExecDic:
					instExecDic[index] = 0
				instExecDic[index] += 1
					
			if "L " in line:
				# Load
			
				# Get index and add
				index = int(line.split(" ")[1])
				if index not in loadsList:
					loadsList.append(index)
				
				# Get address
				adrs = line.split(" ")[2].replace("\n", "")
				if int(index) not in loadAdrsCacheDic:
					loadAdrsCacheDic[int(index)] = []
				loadAdrsCacheDic[int(index)].append(adrs)

				# Record reads
				if adrs not in adrsReadCountDic:
					adrsReadCountDic[adrs] = 0
				adrsReadCountDic[adrs] += 1
			
			
			if adrs not in adrsDic:
				adrsDic[adrs] = []
			if index not in adrsDic[adrs]:
				adrsDic[adrs].append(index)
	
	for storeIndex in storeAdrsCacheDic:
		storeToLoadDic[storeIndex] = []

	for adrs in adrsDic:
		instList = adrsDic[adrs]
		depStoreList = []
		for instIndex in instList:
			if instIndex in storesList and instIndex not in depStoreList:
				depStoreList.append(instIndex)
		for instIndex in instList:
			if instIndex in loadsList:
				for storeIndex in depStoreList:
					if instIndex not in storeToLoadDic[storeIndex]:
						storeToLoadDic[storeIndex].append(instIndex)
	
		# Calculated read/write
		readCount = 0
		writeCount = 0
		if adrs in adrsWriteCountDic:
			writeCount = adrsWriteCountDic[adrs]
		if adrs in adrsReadCountDic:
			readCount = adrsReadCountDic[adrs]
		if writeCount > readCount and writeCount != 0:
			# Calculate masking
			adrsWarMasking = (writeCount-readCount)/float(writeCount)
			#print `writeCount` + " " + `readCount` + " " + `adrsWarMasking` 
			adrsWarMaskingDic[adrs] = adrsWarMasking

	for storeIndex in storeAdrsCacheDic:
		totalAdrsMasking = 0
		for adrs in storeAdrsCacheDic[storeIndex]:
			if adrs in adrsWarMaskingDic:
				adrsWarMasking = adrsWarMaskingDic[adrs]
				totalAdrsMasking += adrsWarMasking
		if len(storeAdrsCacheDic[storeIndex]) != 0:
			adrsMaskingForStore = totalAdrsMasking / float(len(storeAdrsCacheDic[storeIndex]))
			storeWarMaskingDic[storeIndex] = adrsMaskingForStore
		
	
	# DEBUG
	print "WAR MASKING: "
	print storeWarMaskingDic
	print ""

##########################################################################
loadToTerminatorCacheDic = {}

##### GRAPH of DEP #####
#graphNode = {} # Node structure map: {'accum': ..., 'index':...}
########################
storeCacheTmnProbDic = {} # Saves {STORE -> {CMP1: PathProb, CMP2: PathProb, ...}, ...}
########################

def getMaskingRateFromInst(initStoreIndex):
	global cmpMaskingDic, loadToTerminatorCacheDic, instExecDic, storeToLoadDic, globalStoreGraph, storeCacheTmnProbDic, storesList

	print " => Calculating masking rate for store " + `initStoreIndex`

	depLoadList = [] # Loads that use same addresses
	depStoreList = []
	initNode = {}
	initNode["index"] = int(initStoreIndex)
	#initNode["accum"] = float(0)
	depStoreList.append(initNode)
	storeHistoryList = []
	storeHistoryList.append(int(initStoreIndex))
	loadSeqMaskingDic = {}
	depCallList = [] # Records all SDC-causing call functions as terminators

	totalExecCount = 0
	finalAccumMasking = 0
	nodeAccumMaskingDic = {}
	accumMasking = 0

	while len(depStoreList) != 0:

		# DEBUG
		#print "=====>store list:"
		#print depStoreList
		#print ""

		# Pop from stack
		storeNode = depStoreList[0]
		storeIndex = storeNode["index"]

		nodeAccumMaskingDic[storeIndex] = accumMasking


		################################################
		# Check if the store is cached before
		#if storeIndex in storeCacheTmnProbDic:
		#	depStoreList.remove(int(storeIndex))
		#	for eachTmnIndex in storeCacheTmnProbDic[storeIndex]:			
		#		eachInstCount = 0
		#		if eachInstCount in instExecDic:
		#			eachInstCount = instExecDic[eachInstCount]
		#			totalExecCount += eachInstCount
		#			finalAccumMasking += ( accumMasking + (1-accumMasking)*storeCacheTmnProbDic[storeIndex] ) * eachInstCount
		#	continue
		################################################
			

		# Find loads from a given store executed
		if int(storeIndex) in storeToLoadDic:
			loadsFromStoreList = storeToLoadDic[int(storeIndex)]
			for loadIndex in loadsFromStoreList:
				if loadIndex not in depLoadList:
					childLoadNode = {}
					childLoadNode["index"] = loadIndex
					depLoadList.append(childLoadNode)
		
		# Process loads that are dependent on current store
		while len(depLoadList) != 0:

			# DEBUG
			#print "-->load list:"
			#print depLoadList
			#print ""

			# Pop from stack
			loadNode = depLoadList[-1]
			loadIndex = loadNode["index"]
			diffStoreList = []
			diffCmpList = []
			diffCallList = []
			diffBioList = []

			# Get accumMasking
			if loadIndex in loadSeqMaskingDic:
				accumMasking = float( (1-accumMasking) * loadSeqMaskingDic[loadIndex] + accumMasking )

			# Get different store, cmp or call from the load
			# Check cache first
			diffInsts = ""
			if int(loadIndex) in loadToTerminatorCacheDic:

				# DEBUG
				#print "~~ load to terminator cache hit"

				diffInsts = loadToTerminatorCacheDic[int(loadIndex)]
			else:
				# DEBUG
				#print "~~ load to terminator cache miss"

				# EXECUTE OPT and add to terminator list
				loadSelectStr = "-select_index=" + `loadIndex`
				command = ["/home/gpli/llvm-2.9-build/bin/opt", "-S", "-load", "/home/gpli/llvm-2.9-build/lib/LLVMSCSES.so", "-bishe_insert", loadSelectStr, irPath, "-o", "null"]
				p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
				diffInsts = p.stdout.read()
				loadToTerminatorCacheDic[int(loadIndex)] = diffInsts

			diffLines = diffInsts.split("\n")

			# DEBUG
			#print diffLines
			#print ""
			
			loadSeqMasking = 0
			for diffLine in diffLines:
				if " " in diffLine and ("bio" in diffLine or "store" in diffLine or "call" in diffLine or "cmp" in diffLine):
					curIndex = int(diffLine.split(" ")[1].replace("\n", ""))
					if "cmp" in diffLine:
						diffCmpList.append(curIndex)
					if "store" in diffLine:
						diffStoreList.append(curIndex)
					# Specify all standard for SDC-causing call operations
					if "call" in diffLine and ("fopen" in diffLine or "fputs" in diffLine or "fwrite" in diffLine or "_IO_putc" in diffLine):
						diffCallList.append(curIndex)
						depCallList.append(curIndex)
					if "bio" in diffLine:
						# inst that has masking, i.e, and, shl etc
						if curIndex in instTupleDic and instTupleDic[curIndex] > 0:
							diffBioList.append(curIndex)
							loadSeqMaskingDic[loadIndex] = instTupleDic[curIndex]
					

			# Appoximation way to record accum masking in a load
			if loadIndex in loadSeqMaskingDic:
				totalBioMasking = loadSeqMaskingDic[loadIndex]
				if len(diffCallList) > 0 and len(diffBioList) < (len(diffCallList)):
					avBioMasking = totalBioMasking * len(diffBioList) / float(len(diffCallList))
					loadSeqMaskingDic[loadIndex] = avBioMasking
			
			for diffStore in diffStoreList:
				if int(diffStore) not in storeHistoryList and int(diffStore) not in depStoreList:
					childStoreNode = {}
					childStoreNode["index"] = int(diffStore)
					depStoreList.append(childStoreNode)
					storeHistoryList.append(int(diffStore))

			for diffCmp in diffCmpList:

				# Update total count
				instExecCount = 0
				if int(diffCmp) in instExecDic:
					instExecCount = instExecDic[int(diffCmp)]
					totalExecCount += instExecCount
				# Accum masking rate
				if int(diffCmp) in cmpMaskingDic:
					cmpMaskingRate = cmpMaskingDic[int(diffCmp)]
					# loadNode["accum"] is without cmp maskings
					finalAccumMasking += (cmpMaskingRate * (1-accumMasking) + accumMasking) * instExecCount
				# Update STORE cache
				#if storeIndex not in storeCacheTmnProbDic:
				#	storeCacheTmnProbDic[storeIndex] = {}
				#if accumMasking == 1:
				#	storeCacheTmnProbDic[storeIndex][int(diffCmp)] = 1
				#else:
				#	storeCacheTmnProbDic[storeIndex][int(diffCmp)] = ((cmpMaskingRate * (1-accumMasking) + accumMasking)  - accumMasking) / float(1-accumMasking)

			for diffCall in diffCallList:

				# Update total count
				instExecCount = 0
				if int(diffCall) in instExecDic:
					instExecCount = instExecDic[int(diffCall)]
					totalExecCount += instExecCount
				# Accum masking rate
				if int(diffCall) in instExecDic:
					finalAccumMasking += instExecCount * accumMasking
				# Update STORE cache
				#if storeIndex not in storeCacheTmnProbDic:
				#	storeCacheTmnProbDic[storeIndex] = {}
				#storeCacheTmnProbDic[storeIndex][int(diffCall)] = 0 #(accumMasking  - accumMasking) / float(1-accumMasking)

			depLoadList.remove(loadNode)

		depStoreList.remove(storeNode)
	
	# DEBUG
	#print "=====> Terminator found: "
#	print storeCacheTmnNodeDic
#	print storeCacheTmnProbDic

	print "Total Exec Count: " + `totalExecCount`
			
	if totalExecCount == 0:
		return 0
	return finalAccumMasking / float(totalExecCount)	
			
	


##########################################################################


##########################################################################




print "Reading masking rates and execution counts ... "
initMaskingAndCounts()

print "Reading load/store runtime addresses ... "
readAllStores()

print "Calculating masking for stores ... "
#print getMaskingRateFromInst(400)

os.system("rm store_masking.txt")
# Dump masking rate for every store
counter = 0
with open("store_masking.txt", 'w') as sf:
	for storeIndex in storesList:
		print "===Progress: " + `counter` + "/" + `len(storesList)`
		cmpMasking = getMaskingRateFromInst(storeIndex)
		warMasking = 0
		if storeIndex in storeWarMaskingDic:
			warMasking = storeWarMaskingDic[storeIndex]
		totalMasking = (1-warMasking) * cmpMasking + warMasking
		print "STORE cmp masking: " + `storeIndex` + ": " + `cmpMasking` 
		print "STORE war masking: " + `storeIndex` + ": " + `warMasking` 
		print "STORE total masking: " + `storeIndex` + ": " + `totalMasking` 
		print ""
		sf.write(`storeIndex` + " " +`(totalMasking)` + " " + `instExecDic[storeIndex]` + "\n")
		counter += 1









