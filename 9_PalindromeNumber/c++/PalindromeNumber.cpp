class Solution {
public:
    bool isPalindrome(int x) {
        string str_num = to_string(x);
        int left = 0;
        int right = str_num.size()-1;
        while(left<=right){
            if(str_num[left] != str_num[right]){
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};