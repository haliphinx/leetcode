class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>> ans;
        if(nums.size()<4){
            return vector<vector<int>>(ans.begin(), ans.end());
        }
        
        sort(nums.begin(),nums.end());
        // PrintVect(nums);
        map<int,int> numTab;
        
        for(int i = 0; i<nums.size(); i++){
            numTab[nums[i]] = i;
        }
        
        int maxNum = nums[nums.size()-1];
        
        // i is the first position
        for(int i = 0; i<nums.size()-3; i++){
            
            if(nums[i]+3*maxNum<target){
                continue;
            }
            if(4*nums[i]>target){
                break;
            }
            
            // j is the second position
            for(int j = i+1; j<nums.size()-2; j++){
                if(nums[i]+nums[j]+2*maxNum<target){
                    continue;
                }
                if(nums[i]+3*nums[j]>target){
                    break;
                }
                
                // k is the third position
                for(int k = j+1; k<nums.size()-1; k++){
                    int rest = target-nums[i]-nums[j]-nums[k];
                    // cout<<nums[i]<<":"<<nums[j]<<":"<<nums[k]<<":"<<rest<<endl;
                    if(rest>maxNum){
                        continue;
                    }
                    if(rest<nums[k]){
                        break;
                    }
                    if((numTab.count(rest))&&(numTab[rest]>k)){
                        vector<int> meta;
                        meta.push_back(nums[i]);
                        meta.push_back(nums[j]);
                        meta.push_back(nums[k]);
                        meta.push_back(rest);
                        ans.insert(meta);
                    }
                }
                
            }
        }
        
        return vector<vector<int>>(ans.begin(), ans.end());
    }
    
    // void PrintVect(vector<int>& nums){
    //     for(int i = 0; i<nums.size(); i++){
    //         cout<<nums[i]<<",";
    //     }
    //     cout<<endl;
    // }
};