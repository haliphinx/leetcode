public class Solution {
    public int ThreeSumClosest(int[] nums, int target) {
        Array.Sort(nums);
        int res = nums[0]+nums[1]+nums[2];
        int second, third;
        for(int first = 0; first<nums.Length-1;first++){
            second = first+1;
            third = nums.Length-1;
            while(second<third){
                int meta = nums[first]+nums[second]+nums[third];
                if(Math.Abs(meta-target)<Math.Abs(res-target)){
                    res = meta;
                }
                    
                if(meta == target){
                    return target;
                }
                    
                    
                else if(meta > target){
                    third--;
                }
                    
                    
                else{
                    second++;
                }
        }
            }
                
        return res;
   