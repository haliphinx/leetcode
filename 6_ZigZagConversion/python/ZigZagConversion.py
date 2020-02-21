class Solution:
    def convert(self, s: str, numRows: int) -> str:
        if(numRows<2):
            return s
        sub_str = ["" for i in range(numRows)]
        row_idx = 0
        for i in range(len(s)):
            idx = i%(2*numRows-2)
            if idx<numRows:
                sub_str[idx]+=s[i]
            else:
                idx-=numRows
                sub_str[-idx-2]+=s[i]
        res = ""
        for i in range(len(sub_str)):
            res+=sub_str[i]
        return res