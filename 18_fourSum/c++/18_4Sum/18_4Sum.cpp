#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        //the reslt vector
        vector<vector<int>> result;
        vector<int> mid_res;
        result.clear();

        //sort the nums vector
        sort(nums.begin(), nums.end());

        int mid_target1;
        int mid_target2;
        int nums_len = nums.size();

        for(int i = 0 ; i<nums_len-3 ; i++){
            // cout<<"1:"<<i<<endl;
            mid_target1 = target-nums[i];
            for(int j = i+1 ; j<nums_len-2 ; j++){
                // cout<<" 2:"<<j<<endl;
                mid_target2 = mid_target1-nums[j];
                int start = j+1;
                int end = nums_len-1;
                for(int k = 0;k<nums_len-j-2;k++){
                    // cout<<"  3:"<<start<<","<<end<<endl;
                    int res = nums[start]+nums[end];
                    if (res > mid_target2){
                        end--;
                    }
                    else if(res < mid_target2){
                        start++;
                    }
                    else{
                        // cout<<"   here"<<k<<":"<<nums_len-j-2<<endl;
                        mid_res.clear();
                        mid_res.push_back(nums[i]);
                        mid_res.push_back(nums[j]);
                        mid_res.push_back(nums[start]);
                        mid_res.push_back(nums[end]);
                        result.push_back(mid_res);
                        while(nums[start]==nums[start+1]){
                            start++;
                            k++;
                        }
                        start++;
                    }

                }
                while(nums[j]==nums[j+1]){
                    j++;
                }
            }
            while(nums[i]==nums[i+1]){
                i++;
            }
        }
        return result;
    }
};

int main()
{
    int target = 0;
    vector<int> nums;
    nums.push_back(-3);
    nums.push_back(-2);
    nums.push_back(-1);
    nums.push_back(0);
    nums.push_back(0);
    nums.push_back(1);
    nums.push_back(2);
    nums.push_back(3);
    Solution sol;
    vector<vector<int>>res = sol.fourSum(nums, target);
    cout<<'[';
    for (int i = 0 ; i < res.size() ; i++){
        cout<<'[';
        for (int j = 0;j<res[i].size();j++){
            cout<<res[i][j]<<',';
        }
        cout<<']'<<',';
    }
    cout<<']';

    // cin >> ss;
    // cout << "Hello World!\n" << ss << endl;
    return 0;
}