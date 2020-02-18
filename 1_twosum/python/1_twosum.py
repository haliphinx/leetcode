# -*- coding: utf-8 -*-
# @Author: xhu
# @Date:   2018-04-09 10:01:08
# @Last Modified by:   name
# @Last Modified time: 2018-04-09 10:31:42
class Solution:
	def twoSum(self, nums, target):
		l = len(nums)
		for i in range(0,l-1):
			for y in range(i+1,l):
				if(nums[i]+nums[y] == target):
					return [i,y]
					break
nn = [3,2,4]
tt = 6
obj = Solution()
ss = obj.twoSum(nn,tt)
print ss