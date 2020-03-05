public class Solution {
    public IList<string> LetterCombinations(string digits) {
        IList<string> res = new List<string>();
        if(digits.Length == 0){
            
            return res;
        }
        
        Dictionary<char,string> numLet = new Dictionary<char,string>();
        numLet['2'] = "abc";
        numLet['3'] = "def";
        numLet['4'] = "ghi";
        numLet['5'] = "jkl";
        numLet['6'] = "mno";
        numLet['7'] = "pqrs";
        numLet['8'] = "tuv";
        numLet['9'] = "wxyz";
        
        int res_size = 1;
        
        for(int i = 0; i<digits.Length; i++){
            res_size *= numLet[digits[i]].Length;
        }
        
        int meta_size = res_size / numLet[digits[0]].Length;
        
        for(int i = 0;i<res_size; i++){
            res.Add(numLet[digits[0]].Substring(i/meta_size%(numLet[digits[0]].Length),1));
        }
        
        for(int i = 1; i<digits.Length; i++){
            meta_size /= numLet[digits[i]].Length;
            for(int j = 0; j<res_size; j++){
                res[j]+=numLet[digits[i]].Substring(j/meta_size%(numLet[digits[i]].Length),1);
                // Console.WriteLine(j/meta_size%(numLet[digits[i]].Length));
            }
        }
        return res;
    }
}