class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int res = 0;
        
        if((strs.size() == 0) || (strs[0].size() == 0)){
            return "";
        }
        
        while(res<strs[0].size()){
            for(int num = 1;num<strs.size(); num++){
                if(res>=strs[num].size()){
                    return strs[num];
                }
                if(strs[0][res]!=strs[num][res]){
                    return strs[0].substr(0, res);
                }
            }
            
            res++;
            
        }
        
        return strs[0];
        
    }
};