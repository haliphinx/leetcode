class Solution:
    def intToRoman(self, num: int) -> str:
        res = ''
        
        # 1000
        while num>=1000:
            num-=1000
            res+='M'

        
        
        # 100
        meta = num//100
        if meta == 9:
            num-=900
            res+='CM'
        elif meta<4:
            while num>=100:
                num-=100
                res+='C'
                
        elif meta == 4:
            num-=400
            res+='CD'
            
        else:
            num-=500
            res+='D'
            while num>=100:
                num-=100
                res+='C'
        
        # 10
        meta = num//10
        if meta == 9:
            num-=90
            res+='XC'
        elif meta>4:
            num-=50
            res+='L'
            while num>=10:
                num-=10
                res+='X'
        elif meta == 4:
            num-=40
            res+='XL'
        else:
            while num>=10:
                num-=10
                res+='X'
                
        # 1
        if num == 9:
            num-=9
            res+='IX'
        elif num>4:
            num-=5
            res+='V'
            while num>=1:
                num-=1
                res+='I'
        elif num == 4:
            num-=4
            res+='IV'
        else:
            while num>=1:
                num-=1
                res+='I'
        
                
        return res