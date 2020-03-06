public class Solution {
    public IList<IList<int>> FourSum(int[] nums, int target) {
    Array.Sort(nums);
    IList<IList<int>> result = new List<IList<int>>();
    //1,1,1,2,2,2,3,3,3,4,4,4,5,6,7,8   15
    for(int i = 0; i < nums.Length - 3; i++){
        if(i - 1 >= 0 && nums[i] == nums[i - 1]) continue;
        for(int j = i + 1; j < nums.Length - 2; j++){
            if(j - 1 > i && nums[j] == nums[j - 1]) continue;
            int left = j + 1, right = nums.Length - 1;
            while(left < right)
                if(nums[left] + nums[right] == target - nums[i] - nums[j]){
                    result.Add(new List<int>(new int[]{nums[i], nums[j], nums[left++], nums[right--]}));
                    while(left < nums.Length && nums[left] == nums[left - 1]) left++;
                    while(right > j && nums[right] == nums[right + 1]) right--;
                }
                else if(nums[left] + nums[right] < target - nums[i] - nums[j]) left++;
                else right--;
        }
    }
    return result;
    }
}