class Solution:
    def isPalindrome(self, x: int) -> bool:
        str_num = str(x)
        left = 0;
        right = len(str_num)-1;
        while right>=left:
            if str_num[left] != str_num[right]:
                return False
            right-=1
            left+=1
        return True