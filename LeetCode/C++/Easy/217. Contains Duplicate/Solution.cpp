class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set <int> seen;

        for (int num : nums){
            if (seen.count(num)){
                return true;
            }
            seen.insert(num);

        }
        return false;
        
    }
};
// Approach:
// Store every element in a HashSet.
// If an element is already present, return true immediately.
// Otherwise, insert it into the set.

// Time Complexity: O(n)
// Space Complexity: O(n)

// Optimal?
// Yes. We must inspect every element at least once,
// and the HashSet provides O(1) average lookup and insertion.

// One-line reminder:
// "Check if the number is already in the set before inserting it."