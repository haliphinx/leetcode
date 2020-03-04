class Solution:
    def longestCommonPrefix(self, strs: List[str]) -> str:
        res_len = 0
        if len(strs) == 0 or len(strs[0]) == 0:
            return ''
        while res_len<len(strs[0]):
            for item in strs:
                if res_len>=len(item):
                    return item
                if item[res_len]!= strs[0][res_len]:
                    return strs[0][:res_len]
            res_len+=1
        return strs[0]