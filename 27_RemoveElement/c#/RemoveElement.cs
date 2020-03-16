public class Solution {
    public int RemoveElement(int[] nums, int val) {
        if(nums.Length == 0){
            return 0;
        }
        int left = 0;
        int right = nums.Length-1;
        while(left<=right){
            if(nums[left] == val){
                nums[left] = nums[right];
                right--;
            }
            else{
                left++;
            }
        }
        
        return left;
    }
}