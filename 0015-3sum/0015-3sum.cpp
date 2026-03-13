class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(), nums.end());

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i-1]) { // same ele 
                continue;
            }
            
            int j = i + 1;
            int k = nums.size() - 1;

            while (j < k) {// when j cross k the we have iter for all ele 
                int total = nums[i] + nums[j] + nums[k];

                if (total > 0) {// then we need to desc the sum 
                    k--;
                } else if (total < 0) { //we need to inc the sum 
                    j++;
                } else {
                    res.push_back({nums[i], nums[j], nums[k]});
                    j++;

                    while (nums[j] == nums[j-1] && j < k) {
                        j++;// checking same element 
                    }
                }
            }
        }
        return res;  

        
    }
};