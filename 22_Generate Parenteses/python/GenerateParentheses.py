class Solution:
    def generateParenthesis(self, n: int) -> List[str]:
        ans = ["("]
        res = []
        if n==0:
            return res
        
        while len(ans)>0:
            meta = ans[0]
            para = self.countLeftRight(meta)
            if len(meta)>=2*n:
                ans = ans[1:]
                res.append(meta)
                continue
            if para[0]<n:
                ans.append(meta+"(")
            if para[0]>para[1]:
                ans.append(meta+")")
                
            ans = ans[1:]
        
        return res
            
        
    def countLeftRight(self, ans:str):
        left = 0;
        right = 0
        for i in range(len(ans)):
            if ans[i] == "(":
                left+=1
            else:
                right+=1
                
        return left,right