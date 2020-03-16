class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size() == 0){
            return 0;
        }
        int left = 0;
        int right = nums.size()-1;
        while(left<=right){
            if(nums[left] == val){
                nums[left] = nums[right];
                right--;
            }
            else{
                left++;
            }
        }
        return left;
    }
};