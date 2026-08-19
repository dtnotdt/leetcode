class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int n= nums.size();
        unordered_map<int,int> s;

        for (auto x: nums){
            s[x]++;
        }
        for (auto [key,val]: s){
            if (val==1){
                return key;
            }

        }
        return -1;

    }

};

// REMEMBER: unordered_map<int,int> → number → frequency
// s[x]++ → increases the frequency of x
// [key,val] → key = number, val = frequency