# -*- coding: utf-8 -*-
# @Author: xhu
# @Date:   2018-04-09 10:33:13
# @Last Modified by:   xhu
# @Last Modified time: 2018-04-09 10:59:40
class Solution:
	def lengthOfLongestSubstring(self,s):
		l = len(s)
		if (l == 0):
			return 0
		ss = s[0]
		re = 1
		for i in range(1,l):
			if(s[i] not in ss):
				ss = ss + s[i]
				if(len(ss)>re):
					re = len(ss)
			else:
				loc = ss.find(s[i])
				ll = len(ss)
				ss = ss[loc+1:ll]+s[i]
		return re
obj = Solution()
ste = "bbb"
print(obj.lengthOfLongestSubstring(ste))




