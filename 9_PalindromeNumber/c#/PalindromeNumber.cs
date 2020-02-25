public class Solution {
    public bool IsPalindrome(int x) {
        string str_num = x.ToString();
        int left = 0;
        int right = str_num.Length-1;
        while(left<=right){
            if(str_num[left] != str_num[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}