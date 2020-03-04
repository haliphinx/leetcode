public class Solution {
    public IList<IList<int>> ThreeSum(int[] nums) {
        IList<IList<int>> res = new List<IList<int>>();
        if(nums.Length < 3){
            return res;
        }
        
        Array.Sort(nums);
        int left, right;
        for(int f = 0; f<nums.Length-2; f++){
            if((f>0)&&(nums[f] == nums[f-1])){
                continue;
            }
            left = f+1;
            right = nums.Length-1;
            while(left<right){
                
                if(nums[f]+nums[left]+nums[right]==0){
                    IList<int> meta = new List<int>();

                    meta.Add(nums[right]);
                    meta.Add(nums[left]);
                    meta.Add(nums[f]);

                    res.Add(meta);
                    
                    left++;
                    while((left<right)&&(nums[left]==nums[left-1])){
                        left++;
                    }
                }
                
                else if(nums[f]+nums[left]+nums[right]>0){
                    right--;
                }
                
                else{
                    left++;
                }

            }
        }
        return res;
    }
}