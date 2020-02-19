class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        arr_len = len(nums)
        val_idx = {}
        for i in range(arr_len):
            if nums[i] in val_idx:
                return [val_idx[nums[i]],i]
            else:
                val_idx[target-nums[i]] = i 