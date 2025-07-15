class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> seen;
        for (int num : nums) {
            if (seen.count(num) > 0)
                return true;
            seen.insert(num);
        }
        return false;
        // sort(nums.begin(), nums.end());
        // int n = nums.size();
        // for (int i = 1; i < n; i++) {
        //     if (nums[i] == nums[i - 1])
        //         return true;
        // }
        // return false;

        
    }
};