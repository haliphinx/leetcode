public class Solution {
    public int LengthOfLongestSubstring(string s) {
        Dictionary<char, int> val_idx_map = new Dictionary<char, int>();
        int max_len = 0;
        int left = 0;
        for(int right = 0; right<s.Length; right++){
            // cout<<left<<","<<right<<endl;
            if(val_idx_map.ContainsKey(s[right])){
                // cout<<"here"<<val_idx_map.count(s[right])<<endl;
                if(val_idx_map[s[right]]+1>left){
                    left = val_idx_map[s[right]]+1;
                }  
            }
            val_idx_map[s[right]] = right;
            if(right-left+1>max_len){
                max_len = right-left+1;
            }
        }
        return max_len;
    }
}