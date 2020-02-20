class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        if len(s)<2:
            return len(s)
        val_idx_dict = {}
        max_Len = 0
        cur_left = 0
        for right in range(len(s)):
            if s[right] in val_idx_dict:
                if val_idx_dict[s[right]]+1>cur_left:
                    cur_left = val_idx_dict[s[right]]+1
            val_idx_dict[s[right]] = right
            if right-cur_left+1>max_Len:
                max_Len = right-cur_left+1
            # print(cur_left,s[cur_left:right+1])
            
        return max_Len