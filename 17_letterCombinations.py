class Solution:
	def letterCombinations(self, digits):
		ilen  = len(digits)
		ndic = {"2":["a","b","c"],
				"3":["d","e","f"],
				"4":["g","h","i"],
				"5":["j","k","l"],
				"6":["m","n","o"],
				"7":["p","q","r","s"],
				"8":["t","u","v"],
				"9":["w","x","y","z"]}
		output = []
		if ilen == 0:
			return output
		ntotal = 1
		for n in range(ilen):
			ntotal *= len(ndic[digits[n]])

		ndig = len(ndic[digits[0]])
		ntotal1 = int(ntotal/ndig)
		for n in range(ntotal):
			ind = int((n/ntotal1)%len(ndic[digits[0]]))
			output.append(ndic[digits[0]][ind])

		ntotal = ntotal1
		for n in range(1,ilen):
			ndig = len(ndic[digits[n]])
			ntotal = int(ntotal/ndig)
			for nw in range(len(output)):
				output[nw] = output[nw]+str(ndic[digits[n]][int((nw/ntotal)%len(ndic[digits[n]]))])
		# print (output)
		return output




if __name__ == '__main__':
	digits = "23"
	lc = Solution
	lc.letterCombinations(lc, digits)
		