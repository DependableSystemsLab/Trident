#! /usr/bin/python

import os, sys
import subprocess
from config import OPT,LLVMPASS_FOLDER


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

#	for storeIndex in storeAdrsCacheDic:
#		storeToLoadDic[storeIndex] = []
#		adrsList = storeAdrsCacheDic[storeIndex]
#		for adrs in adrsList:
#			for instIndex in adrsDic[adrs]:
#			#for loadIndex in loadAdrsCacheDic:
#				if instIndex in loadsList and instIndex not in storeToLoadDic[storeIndex]:
#				#if adrs in loadAdrsCacheDic[loadIndex] and loadIndex not in storeToLoadDic[storeIndex]:
#					storeToLoadDic[storeIndex].append(instIndex)
		# DEBUG
#	print " -- Store " + `storeIndex` +" to Load List Size: " + `len(storeToLoadDic[storeIndex])`
	#print storeToLoadDic

##########################################################################
loadToTerminatorCacheDic = {}

##### GRAPH of DEP #####
globalStoreGraph = {} # {}->{}->[]
########################

def getMaskingRateFromInst(initStoreIndex):
	global cmpMaskingDic, loadToTerminatorCacheDic, instExecDic, storeToLoadDic, globalStoreGraph

	print " => Calculating masking rate for store " + `initStoreIndex`

	depLoadList = [] # Loads that use same addresses
	depStoreList = []
	depStoreList.append(int(initStoreIndex))
	depTerminatorList = []
	storeHistoryList = []
	storeHistoryList.append(int(initStoreIndex))
	loadSeqMaskingDic = {}
	depCallList = [] # Records all SDC-causing call functions as terminators

	## Update dep graph
	if initStoreIndex not in globalStoreGraph:
		globalStoreGraph[initStoreIndex] = {}

	while len(depStoreList) != 0:

		# DEBUG
		#print "=====>store list:"
		#print depStoreList
		#print ""

		# Pop from stack
		storeIndex = depStoreList[0]

		# Update dep graph
		globalStoreGraph[initStoreIndex][storeIndex] = []

		# Find loads from a given store executed
		if int(storeIndex) in storeToLoadDic:
			loadsFromStoreList = storeToLoadDic[int(storeIndex)]
			for loadIndex in loadsFromStoreList:
				if loadIndex not in depLoadList:
					depLoadList.append(loadIndex)
				# Update dep graph
				globalStoreGraph[initStoreIndex][storeIndex].append(loadIndex)
		
		# Process loads that are dependent on current store
		while len(depLoadList) != 0:

			# DEBUG
			#print "-->load list:"
			#print depLoadList
			#print ""

			# Pop from stack
			loadIndex = depLoadList[-1]
			diffStoreList = []
			diffCmpList = []
			diffCallList = []
			diffBioList = []

			# Update dep graph
			globalStoreGraph[initStoreIndex][loadIndex] = []

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
				command = [OPT, "-S", "-load", LLVMPASS_FOLDER + "/LLVMSCSES.so", "-bishe_insert", loadSelectStr, irPath, "-o", "null"]
				p = subprocess.Popen(command, stdout=subprocess.PIPE, stderr=subprocess.STDOUT)
				diffInsts = p.stdout.read()
				loadToTerminatorCacheDic[int(loadIndex)] = diffInsts

			diffLines = diffInsts.split("\n")

			# DEBUG
			#print diffLines
			#print ""

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
							#print " - bio of " + `curIndex` + " " + ` instTupleDic[curIndex]`
						
			
			for diffStore in diffStoreList:
				# Update dep graph
				globalStoreGraph[initStoreIndex][loadIndex].append(int(diffStore))
				if int(diffStore) not in storeHistoryList and int(diffStore) not in depStoreList:
					depStoreList.append(int(diffStore))
					storeHistoryList.append(int(diffStore))
			for diffCmp in diffCmpList:
				# Update dep graph
				globalStoreGraph[initStoreIndex][loadIndex].append(int(diffCmp))
				if int(diffCmp) not in depTerminatorList:
					depTerminatorList.append(int(diffCmp))
			for diffCall in diffCallList:
				# Update dep graph
				globalStoreGraph[initStoreIndex][loadIndex].append(int(diffCall))
				if int(diffCall) not in depTerminatorList:
					depTerminatorList.append(int(diffCall))
			# Appoximation way to record accum masking in a load
			if loadIndex in loadSeqMaskingDic:
				totalBioMasking = loadSeqMaskingDic[loadIndex]
				if len(diffCallList) > 0 and len(diffBioList) < (len(diffCallList)):
					avBioMasking = totalBioMasking * len(diffBioList) / float(len(diffCallList))
					loadSeqMaskingDic[loadIndex] = avBioMasking
					print "----------"
					print "avBioMasking: " + `avBioMasking`
					print "org in loadSeqDic: " + `loadSeqMaskingDic[loadIndex]`
			
			del depLoadList[-1]

		depStoreList.remove(int(storeIndex))
	
	# DEBUG
	#print "=====> Terminator found: "
	#print depTerminatorList


	##############################


	#totalExecCount = 0
	#for instIndex in depTerminatorList:
	#	if instIndex in instExecDic:
	#		execCount = instExecDic[instIndex]
	#		totalExecCount += execCount

	# DFS dep graph
	
	# Do counting on total exec
	totalExecCount = 0
	depQ = []
	depQ.append(initStoreIndex)
	visitedList = []
	while len(depQ) != 0:
		curNodeIndex = depQ[0]
		del depQ[0]
		# Return condition
		if curNodeIndex not in globalStoreGraph[initStoreIndex] or len(globalStoreGraph[initStoreIndex][curNodeIndex]) == 0:
			if curNodeIndex in instExecDic:
				instCount = instExecDic[curNodeIndex]
				totalExecCount += instCount
		else:
			# Add children
			if curNodeIndex in globalStoreGraph[initStoreIndex]:
				for childNodeIndex in globalStoreGraph[initStoreIndex][curNodeIndex]:
					if childNodeIndex not in visitedList:
						depQ.append(childNodeIndex)
		visitedList.append(curNodeIndex)
	print "====== >>>>>> Total Exec Count: " + `totalExecCount`
		

	# Do accumulation on maskings
	nodeAccumMaskingDic = {} # local
	finalAccumMasking = 0
	depQ = []
	depQ.append(initStoreIndex)
	visitedList = []
	accumMasking = 0
	while len(depQ) != 0:

		# Use Queue
		curNodeIndex = depQ[0]
		del depQ[0]
		#DEBUG
		#print " >>>> Travesing head node: " + `curNodeIndex`

		# Update current accum masking util the node
		if curNodeIndex in nodeAccumMaskingDic:
			accumMasking = nodeAccumMaskingDic[curNodeIndex]
			
			# DEBUG
			#print "-> Current accum masking till the node: " + `accumMasking`

		# Update accum masking for current node
		if curNodeIndex in loadSeqMaskingDic:
			# These is inst level masking
			nodeAccumMaskingDic[curNodeIndex] = float( (1-accumMasking) * loadSeqMaskingDic[curNodeIndex] + accumMasking )
			accumMasking = nodeAccumMaskingDic[curNodeIndex]
			
			# DEBUG
			#print "-> Current node accum masking: " + `nodeAccumMaskingDic[curNodeIndex]`

		# Return condition
		if curNodeIndex not in globalStoreGraph[initStoreIndex] or len(globalStoreGraph[initStoreIndex][curNodeIndex]) == 0:
			# If a cmp
			if curNodeIndex in cmpMaskingDic: #and curNodeIndex not in visitedList:
				print "curNodeIndex for cmp: " + `curNodeIndex`
				cmpMaskingRate = cmpMaskingDic[curNodeIndex]
				cmpExecCount = 0
				if curNodeIndex in instExecDic:
					cmpExecCount = instExecDic[curNodeIndex]
				print "..its count: " + `cmpExecCount`
				cmpFinalMasking = cmpExecCount / float(totalExecCount) * (cmpMaskingRate * (1-accumMasking) + accumMasking)
				#print " final masking of cmp: " + `curNodeIndex` + " -> " + `(cmpMaskingRate * (1-accumMasking) + accumMasking)` + " current accum: " + `accumMasking` + ", cmpExec: " + `cmpExecCount` + ", total: " + `totalExecCount`
				finalAccumMasking += cmpFinalMasking
				
				# DEBUG
				#print " =============>>>>> cmpExec: " + `cmpExecCount` + ", total: " + `totalExecCount`
				print "-> Reaching a cmp " + `curNodeIndex` + ": " + `cmpFinalMasking` + ", before accum is " + `accumMasking` + ", now total masking is " + `finalAccumMasking` 

			# If a call
			elif curNodeIndex in depCallList: #and curNodeIndex not in visitedList:
				callExecCount = 0
				if curNodeIndex in instExecDic:
					callExecCount = instExecDic[curNodeIndex]
				callFinalMasking = callExecCount / float(totalExecCount) * accumMasking
				finalAccumMasking += callFinalMasking
				print " >>> Reaching Call, " + `curNodeIndex` + " - callFinalMasking: " + `callFinalMasking` + ", before accum is " + `accumMasking` + ", now total masking is " + `finalAccumMasking`
				

		else:
			if curNodeIndex in globalStoreGraph[initStoreIndex]:

				# DEBUG
				#print "-> Adding children: "
				#print globalStoreGraph[initStoreIndex][curNodeIndex]

				for childNodeIndex in globalStoreGraph[initStoreIndex][curNodeIndex]:
					if childNodeIndex not in visitedList:
						depQ.append(childNodeIndex)
		visitedList.append(curNodeIndex)
			

	return finalAccumMasking	
			
	


##########################################################################


##########################################################################




print "Reading masking rates and execution counts ... "
initMaskingAndCounts()

print "Reading load/store runtime addresses ... "
readAllStores()

print "Calculating masking for stores ... "
#print getMaskingRateFromInst(187)

os.system("rm store_masking.txt")
# Dump masking rate for every store
with open("store_masking.txt", 'w') as sf:
	for storeIndex in storesList:
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











