class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n= nums.size();
        sort(nums.begin(),nums.end());
        int longestSeq=1;
        int currentCount=1;

        for (int i=0;i<n-1;i++){
            int lastNum= nums[i];
            if (nums[i+1]== lastNum+1){
                currentCount++;
                if (currentCount>longestSeq){
                    longestSeq=currentCount;
                }
                
            }
        }
        return longestSeq;
    }
};