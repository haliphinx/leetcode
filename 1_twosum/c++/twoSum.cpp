class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> res;
        int arr_len = nums.size();
        map<int,int> tab;
        for(int i = 0; i < arr_len; i++){
            if(tab.count(nums[i]) != 0){
                cout<<nums[i]<<endl;
                res.push_back(tab[nums[i]]);
                res.push_back(i);
            }
            else{
                tab[target-nums[i]] = i;
            }
        }
        return res;
    }
};