class Solution:
	def threeSumClosest(self, nums, target):
		nlen = len(nums)
		nums = sorted(nums)
		nresult = [0,1,2]
		for nfirst in range(nlen-2):
			nsecond = nfirst+1
			nthird = nlen-1
			for i in range(nlen-nfirst-2):
				# print (i,nfirst,nsecond,nthird)
				tabs = nums[nfirst]+nums[nsecond]+nums[nthird]
				cabs = nums[nresult[0]]+nums[nresult[1]]+nums[nresult[2]]
				if abs(tabs-target)<abs(cabs-target):
					nresult = [nfirst,nsecond,nthird]
				if tabs<target:
					nsecond+=1;
				if tabs>target:
					nthird-=1;
		print(nresult[0],nresult[1],nresult[2])
		print (nums[nresult[0]]+nums[nresult[1]]+nums[nresult[2]])
		return nums[nresult[0]]+nums[nresult[1]]+nums[nresult[2]]

		# print (nums)



if __name__ == '__main__':
	ss = Solution
	nums = [1,2,4,8,16,32,64,128]
	target = 82
	ss.threeSumClosest(ss,nums,target)
		