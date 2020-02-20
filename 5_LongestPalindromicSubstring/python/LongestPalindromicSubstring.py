class Solution:
    def longestPalindrome(self, s: str) -> str:
        if len(s) < 2 or s == s[::-1]:
            return s
        dp_table = [[0 for i in range(len(s))] for j in range(len(s))]
        for i in range(len(s)):
            dp_table[i][i] = 1
            if i>0:
                dp_table[i][i-1] = 1 if s[i]==s[i-1] else 0
        
        # print(dp_table)
        first_idx = 0
        last_idx = 0
        max_len = 0
        for i1 in range(len(s)-2,-1,-1):
            for i2 in range(i1+1,len(s)):
                # print(i1,i2)
                if s[i1] == s[i2]:
                    if dp_table[i1+1][i2-1] > 0:
                        dp_table[i1][i2] = 1
                        if i2-i1>max_len:
                            max_len = i2-i1
                            first_idx = i1
                            last_idx = i2
                
        # print(dp_table)
        return s[first_idx:last_idx+1]