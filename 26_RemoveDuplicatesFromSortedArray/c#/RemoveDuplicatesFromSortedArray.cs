public class Solution {
    public int RemoveDuplicates(int[] nums) {
        if(nums.Length<2){
            return nums.Length;
        }
        int len = 0;
        for(int i = 1; i<nums.Length;i++){
            if(nums[len]!=nums[i]){
                len++;
                nums[len]=nums[i];
            }
        }
        
        len++;
        return len;
    }
}