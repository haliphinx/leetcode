class Solution:
    def threeSum(self, nums: List[int]) -> List[List[int]]:
        if len(nums) == 0:
            return []
        nums.sort()
        print(nums)
        res = []
        left = 0
        for left in range(0,len(nums)-1):
            if nums[left]>0:
                break
            if left>0 and nums[left] == nums[left-1]:
                continue
            le = left+1
            ri = len(nums)-1
            while le<ri:
                if nums[le]+nums[ri]+nums[left] == 0:
                    res.append([nums[left],nums[le],nums[ri]])

                    le+=1
                    while le<ri and nums[le] == nums[le-1]:
                        le+=1
                    
                elif nums[le]+nums[ri]+nums[left] > 0:
                    ri-=1
                    while le<ri and nums[ri] == nums[ri+1]:
                        ri-=1
                    
                else:
                    le+=1
                    while le<ri and nums[le] == nums[le-1]:
                        le+=1
            
        return res
