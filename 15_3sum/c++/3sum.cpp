class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        if(nums.size() < 3){
            return res;
        }
        
        sort(nums.begin(),nums.end());
        // cout<<nums.size()<<endl;
        int left, right;
        for(int f = 0; f<nums.size()-2; f++){
            // cout<<f<<";"<<left<<";"<<right<<";"<<endl;
            if((f>0)&&(nums[f] == nums[f-1])){
                continue;
            }
            left = f+1;
            right = nums.size()-1;
            while(left<right){
                
                if(nums[f]+nums[left]+nums[right]==0){
                    vector<int> meta;

                    meta.push_back(nums[right]);
                    meta.push_back(nums[left]);
                    meta.push_back(nums[f]);

                    res.push_back(meta);
                    
                    left++;
                    while((left<right)and(nums[left]==nums[left-1])){
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
};