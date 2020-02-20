public class Solution {
    public string LongestPalindrome(string s) {
        int maxLength = 0;
        int maxLeft = 0;
        int maxRight = 0;
        for(int meta = 0; meta<s.Length; meta++){
            int left = meta;
            int right = meta;
            while((right<s.Length-1)&&(s[right]==s[right+1])){
                right++;
            }
            while((left>0)&&(right<s.Length-1)&&(s[left-1]==s[right+1])){
                left--;
                right++;
            }
            if(right-left+1>maxLength){
                maxLength = right-left+1;
                maxLeft = left;
                maxRight = right;
            }
        }
        return s.Substring(maxLeft,maxLength);
    }
}