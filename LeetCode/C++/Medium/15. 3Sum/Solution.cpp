class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int target=0;
        set<vector<int>> s;
        vector<vector<int>> output;
        sort(nums.begin(),nums.end());
        int n= nums.size();

        for (int i=0;i<n-2;i++){
        if (nums[i]>0){
            break;}

        if (i>0 && nums[i]== nums[i-1]){
            continue;
        }
        int j=i+1;
        int k=n-1;
        
        while (j < k){
            int sum= nums[i]+nums[j]+nums[k];
            if (sum==target){
                s.insert({nums[i],nums[j], nums[k]});
                j++;
                k--;
            }

            else if (sum<target){
                j++;
            }

            else{
                k--;
            }

        }

        }

        for (auto triplets : s){
            output.push_back(triplets);
        }
return output;
       
    }
};