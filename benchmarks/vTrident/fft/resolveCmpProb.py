#! /usr/bin/python

import sys, os, math

####################################
indexedIrFilePath = sys.argv[1]
####################################

cmpLineDic = {}
cmpPolicyDic = {}
cmpTypeDic = {}

# Read the indexed IR file and get the cmp policy string
with open(indexedIrFilePath, 'r') as irf:
	irLines = irf.readlines()
	for irLine in irLines:
		if "!llfi_index !" in irLine and ("= icmp " in irLine or "= fcmp " in irLine):

			# Get llfi index
			llfiIndex = irLine.split("!llfi_index !")[1].replace("\n", "")
			cmpLineDic[int(llfiIndex)] = irLine

			# Read every icmp and fcmp, get the cmp policy and type
			policyStr = ""
			typeStr = ""
			if "= icmp " in irLine:
				policyStr = irLine.split("= icmp ")[1].split(" ")[0]		
				typeStr = irLine.split("= icmp ")[1].split(" ")[1]
			elif "= fcmp " in irLine:	
				policyStr = irLine.split("= fcmp ")[1].split(" ")[0]		
				typeStr = irLine.split("= fcmp ")[1].split(" ")[1]
			cmpPolicyDic[int(llfiIndex)] = policyStr
			cmpTypeDic[int(llfiIndex)] = typeStr


aVLineDic = {}
aV1Dic = {}
aV2Dic = {}

# Read "profile_cmp_value_result.txt"
with open("profile_cmp_value_result.txt", 'r') as pvf:
	pVLines = pvf.readlines()
	for pVLine in pVLines:
		llfiIndex = pVLine.split(": ")[0].split(" ")[1]
		aVLineDic[int(llfiIndex)] = pVLine
		aV1Dic[int(llfiIndex)] = pVLine.split(" ")[2]
		aV2Dic[int(llfiIndex)] = pVLine.split(" ")[3]
pvf.close
		

# Execution prob.
ePLineDic = {}
ePTDic = {}
ePFDic = {}
		
# Read "profile_cmp_prob_result.txt"
with open("profile_cmp_prob_result.txt") as ppf:
	pPLines = ppf.readlines()
	for pPLine in pPLines:
		llfiIndex = pPLine.split(":")[0]
		ePLineDic[int(llfiIndex)] = pPLine
		ePFV = int(pPLine.split(" ")[1])
		ePTV = int(pPLine.split(" ")[2].replace("\n", ""))
		ePFDic[int(llfiIndex)] = ePFV / float(ePFV+ePTV)
		ePTDic[int(llfiIndex)] = ePTV / float(ePFV+ePTV)

ppf.close


# Results in this dic
cmpMaskingDic = {}
			
# Calculating masking rate
for cmpIndex in cmpLineDic:
	policyStr = cmpPolicyDic[cmpIndex]
	typeStr = cmpTypeDic[cmpIndex]

	# If a type of ptr in cmp, we do not have the recorded average values.
	# In case of pointer
	if "*" in typeStr:
		# A ptr is usually compared to null, and they are files. We assume they were not NULL.
		# So the cmp results are usually FALSE, any bit-flip will result them into TRUE.
		# That is, they will not be a valid ptr any more. No masking by defalse case.
		if cmpIndex in ePFDic:
			fProb = ePFDic[cmpIndex]
			tProb = ePTDic[cmpIndex]
			if policyStr == "eq":
				fMaskingCase = 0
				tMaskingCase = 1
			if policyStr == "ne":
				fMaskingCase = 1
				tMaskingCase = 0
			cmpMaskingDic[cmpIndex] = fMaskingCase*fProb + tMaskingCase*tProb
		else:
			# Unknown cases
			print "#Un-executed Ptr Case " + `cmpIndex`
			cmpMaskingDic[cmpIndex] = 0
		#print aVLineDic[cmpIndex]
	elif "i" in typeStr and "void" not in typeStr:
		dataWidth = int(typeStr.replace("i", ""))
		# In case of int
		if cmpIndex in aV1Dic:
			aV1 = int(aV1Dic[cmpIndex])
			aV2 = int(aV2Dic[cmpIndex])
			aV1BitNo = 0
			aV2BitNo = 0
			if aV1 != 0:
				aV1BitNo = math.floor( math.log( abs(aV1), 2 ) ) + 1
			if aV2 != 0:
				aV2BitNo = math.floor( math.log( abs(aV2), 2 ) ) + 1
			#print `aV1` + " " + `aV1BitNo`
			if cmpIndex not in ePFDic or cmpIndex not in ePTDic:
				continue
			fProb = ePFDic[cmpIndex]
			tProb = ePTDic[cmpIndex]

			if policyStr == "eq":
				fMaskingCase = 1
				tMaskingCase = 0
			elif policyStr == "ne":
				fMaskingCase = 0
				tMaskingCase = 1
			elif policyStr == "sgt" or policyStr == "sge" or policyStr == "ugt" or policyStr == "uge":
				# True case
				tOp1SensBits = 1
				tOp2SensBits = dataWidth - aV1BitNo - 1
				tTotalSensBits = tOp1SensBits + tOp2SensBits
				tMaskingCase = (2*dataWidth - tTotalSensBits) / float(2*dataWidth)
				
				# False case
				fOp1SensBits = dataWidth - aV2BitNo - 1
				fOp2SensBits = 1
				fTotalSensBits = fOp1SensBits + fOp2SensBits
				fMaskingCase = (2*dataWidth - fTotalSensBits) / float(2*dataWidth)
			elif policyStr == "ult" or policyStr == "ule" or policyStr == "slt" or policyStr == "sle":
				# False case
				fOp1SensBits = 1
				fOp2SensBits = dataWidth - aV1BitNo - 1
				fTotalSensBits = fOp1SensBits + fOp2SensBits
				fMaskingCase = (2*dataWidth - fTotalSensBits) / float(2*dataWidth)
				
				# True case
				tOp1SensBits = dataWidth - aV2BitNo - 1
				tOp2SensBits = 1
				tTotalSensBits = tOp1SensBits + tOp2SensBits
				tMaskingCase = (2*dataWidth - tTotalSensBits) / float(2*dataWidth)

			cmpMaskingDic[cmpIndex] = fMaskingCase*fProb + tMaskingCase*tProb
		else:
			# Unknown cases
			print "#Un-executed Int Case " + `cmpIndex`
			cmpMaskingDic[cmpIndex] = 0

	elif "float" in typeStr or "double" in typeStr:
		dataWidth = 0
		expoBits = 0
		if "float" in typeStr:
			dataWidth = 32
			expoBits = 8
		if "double" in typeStr:
			dataWidth = 64
			expoBits = 11

		# In case of FP
		if cmpIndex in aV1Dic:
			aV1 = float(aV1Dic[cmpIndex])
			aV2 = float(aV2Dic[cmpIndex])
			aV1BitNo = 0
			aV2BitNo = 0
			if aV1 != 0:
				aV1BitNo = math.floor( math.log( abs(aV1), 2 ) ) + 1
			if aV2 != 0:
				aV2BitNo = math.floor( math.log( abs(aV2), 2 ) ) + 1

			fProb = ePFDic[cmpIndex]
			tProb = ePTDic[cmpIndex]
			if "oeq" == policyStr or "ueq" == policyStr:
				# oeq, ueq, 
				tMaskingCase = 0
				fMaskingCase = 1
			elif "une" == policyStr or "one" == policyStr:
				# une, one
				tMaskingCase = 1
				fMaskingCase = 0
			elif "ogt" == policyStr or "ugt" == policyStr or "oge" == policyStr or "uge" == policyStr:
				# ogt, ugt, oge, uge
				# True case
				tOp1SensBits = 2
				tOp2SensBits = expoBits - aV1BitNo - 2
				tTotalSensBits = tOp1SensBits + tOp2SensBits
				tMaskingCase = (2*dataWidth - tTotalSensBits) / float(2*dataWidth)
				
				# False case
				fOp1SensBits = expoBits - aV2BitNo - 2
				fOp2SensBits = 2
				fTotalSensBits = fOp1SensBits + fOp2SensBits
				fMaskingCase = (2*dataWidth - fTotalSensBits) / float(2*dataWidth)
			elif "olt" == policyStr or "ole" == policyStr or "ult" == policyStr or "ule" == policyStr:
				# False case
				fOp1SensBits = 2
				fOp2SensBits = expoBits - aV1BitNo - 2
				fTotalSensBits = fOp1SensBits + fOp2SensBits
				fMaskingCase = (2*dataWidth - fTotalSensBits) / float(2*dataWidth)
				
				# True case
				tOp1SensBits = expoBits - aV2BitNo - 2
				tOp2SensBits = 2
				tTotalSensBits = tOp1SensBits + tOp2SensBits
				tMaskingCase = (2*dataWidth - tTotalSensBits) / float(2*dataWidth)
			else:
				#: true, false, uno, ord
				print "#Un-classified FP Case " + `cmpIndex`
				#cmpMaskingDic[cmpIndex] = 0
				fMaskingCase = 0
				tMaskingCase = 0
			cmpMaskingDic[cmpIndex] = fMaskingCase*fProb + tMaskingCase*tProb
		else:
			# Unknown cases
			print "#Un-executed FP Case " + `cmpIndex`
			cmpMaskingDic[cmpIndex] = 0
	

# Dump results to cmp_masking.txt
os.system("rm cmp_masking.txt")
with open("cmp_masking.txt", 'w') as rf:
	for cmpIndex in ePLineDic:
		if cmpIndex in cmpMaskingDic:
			rf.write(`cmpIndex` + " " + `cmpMaskingDic[cmpIndex]` + "\n")
rf.close
