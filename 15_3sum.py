# -*- coding: utf-8 -*-
# @Author: xhu
# @Date:   2018-04-09 11:00:56
# @Last Modified by:   xhu
# @Last Modified time: 2018-04-12 12:01:59
class Solution(object):
    def threeSum(self, nums):
        """
        :type nums: List[int]
        :rtype: List[List[int]]
        """
        res = []
        nums.sort()
        for i in range(len(nums)-2):
        	if (i > 0) and (nums[i] == nums[i-1]):
        		continue
        	r = i+1
        	l = len(nums)-1
        	while r<l:
        		s = nums[i]+nums[r]+nums[l]
        		if s < 0:
        			r+=1
        		elif s>0:
        			l-=1
        		else:
        			res.append((nums[i],nums[r],nums[l]))
        			while r<l and nums[r] == nums[r+1]:
        				r+=1
        			while r<l and nums[l] == nums[l-1]:
        				l-=1
        			r+=1
        			l-=1
        return res
aa = [-1,0,1,2,-1,-4]
bb = Solution()
print bb.threeSum(aa)
