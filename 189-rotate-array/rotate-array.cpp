class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        vector <int> arr= nums;

        for (int i =0; i<n;i++){
            nums[(k+i)%n]=arr[i];
        }
    }
};