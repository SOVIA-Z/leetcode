class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        vector<vector<int>> ans;

        vector<int> combin;
        helper(arr, target, 0, combin, ans);
        return ans;
    }
    void helper(vector<int>& arr, int target, int idx, vector<int>& combin, vector<vector<int>>& ans) {
        if (target < 0) {
            return;
        }
    
        if (target == 0) {
            ans.push_back(combin);
            return;
        }
    
        for (int i = idx; i < arr.size(); i++) {
            if (i > idx && arr[i] == arr[i-1]) {
                continue;
            }
            
            if (arr[i] > target) {
                break;
            }
            
            combin.push_back(arr[i]);
            helper(arr, target - arr[i], i + 1, combin, ans);
            combin.pop_back();
        }
    }
};