class Solution {
public:
    vector<string> letterCombinations(string digits) {
        map<char,string> numLet;
        numLet['2'] = "abc";
        numLet['3'] = "def";
        numLet['4'] = "ghi";
        numLet['5'] = "jkl";
        numLet['6'] = "mno";
        numLet['7'] = "pqrs";
        numLet['8'] = "tuv";
        numLet['9'] = "wxyz";
        
        if(digits.size() == 0){
            vector<string> empty;
            return empty;
        }
        int res_size = 1;
        for(int i = 0; i<digits.size(); i++){
            res_size*=numLet[digits[i]].size();
        }
        vector<string> res (res_size,"");
        for(int i = 0; i<digits.size(); i++){
            res_size/=numLet[digits[i]].size();
            for(int j = 0; j<res.size();j++){
                int meta = j/res_size%(numLet[digits[i]].size());
                res[j]+=numLet[digits[i]][meta];
            }
        }
        return res;
        
    }
};