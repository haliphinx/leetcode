class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int res = nums[0]+nums[1]+nums[2];
        int second, third;
        for(int first = 0; first<nums.size()-1;first++){
            second = first+1;
            third = nums.size()-1;
            while(second<third){
                int meta = nums[first]+nums[second]+nums[third];
                if(abs(meta-target)<abs(res-target)){
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
    }
};