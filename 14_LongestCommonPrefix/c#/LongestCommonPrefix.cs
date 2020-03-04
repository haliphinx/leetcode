public class Solution {
    public string LongestCommonPrefix(string[] strs) {
        int res = 0;
        
        if((strs.Length == 0) || (strs[0].Length == 0)){
            return "";
        }
        
        while(res<strs[0].Length){
            for(int num = 1;num<strs.Length; num++){
                if(res>=strs[num].Length){
                    return strs[num];
                }
                if(strs[0][res]!=strs[num][res]){
                    return strs[0].Substring(0, res);
                }
            }
            
            res++;
            
        }
        
        return strs[0];
    }
}