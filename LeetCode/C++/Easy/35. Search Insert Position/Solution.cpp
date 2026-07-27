class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        for (int i=1;i<nums.size()-1;i++){

        if (nums[i]==target){
            return i;
        }
        else {
            if (nums[i-1]<target && nums[i+1]>target){
                return i;
            }
        }

        }
        return nums.size();
    }
};