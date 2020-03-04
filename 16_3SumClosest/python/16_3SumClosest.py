class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        res = -sys.maxsize -1
        left = 0
        for left in range(0,len(nums)-1):
            if left>0 and nums[left] == nums[left-1]:
                continue
            le = left+1
            ri = len(nums)-1
            while le<ri:
                meta = nums[le]+nums[ri]+nums[left]
                if abs(meta-target)<abs(res-target):
                    res = meta
                if meta == target:
                    return target
                    
                elif meta > target:
                    ri-=1
                    
                else:
                    le+=1
            
        return res