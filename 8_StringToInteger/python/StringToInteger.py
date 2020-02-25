class Solution:
    def myAtoi(self, str: str) -> int:
        if len(str) == 0:
            return 0
        
        while str[0] == ' ':
            if len(str) == 1:
                return 0
            str = str[1:]

        
        sign = 1
        if str[0]=='+':
            sign = 1
            str = str[1:]
            
        elif str[0]=='-':
            sign = -1
            str = str[1:]
            
        elif str[0]>='0' and str[0]<='9':
            sigh = 1
            
        else:
            return 0
        
        if len(str) == 0:
            return 0
        
        res = 0
        int_max = pow(2,31)-1
        int_min = -pow(2,31)
        while str[0]>='0' and str[0]<='9':
            res *= 10
            res += int(str[0])
            if res*sign>int_max:
                return int_max
            if res*sign<int_min:
                return int_min
            if len(str)>1:
                
                str = str[1:]
            else:
                break
        return res*sign