public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        int[] res={0,1};
        int arr_len = nums.Length;
        Dictionary<int, int> val_idx = new Dictionary<int, int>();
        for(int i = 0; i < arr_len;i++){
            if(val_idx.ContainsKey(nums[i])){
                res[0] = val_idx[nums[i]];
                res[1] = i;
                break;
            }
            else{
                val_idx[target-nums[i]] = i; 
            }
        }
        return res;
    }
}