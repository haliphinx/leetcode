class Solution:
    def letterCombinations(self, digits: str) -> List[str]:
        numLet = {'2':'abc','3':'def','4':'ghi','5':'jkl','6':'mno','7':'pqrs','8':'tuv','9':'wxyz'}
        res = []
        if len(digits) == 0:
            return res
        res_size = 1
        
        for i in range(len(digits)):
            res_size*=len(numLet[digits[i]])
            
         
        meta_size = res_size
        meta = []
        
        for i in range(len(digits)):
            meta_size//=len(numLet[digits[i]])
            meta.append(meta_size)
            
        for i in range(res_size):
            meta_str = ''
            for j in range(len(digits)):
                meta_str+=numLet[digits[j]][i//meta[j]%(len(numLet[digits[j]]))]
            

            res.append(meta_str)
        return res
        



if __name__ == '__main__':
	digits = "23"
	lc = Solution
	lc.letterCombinations(lc, digits)
		