class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        unordered_set<int> s(nums.begin(), nums.end());
        int m = 1;
        while (true) {
            int val = m * k;
            if (!s.count(val)) return val;
            m++;
        }
        
    }
};