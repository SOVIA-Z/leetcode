class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> rslt;

        for(int i = 0; i<n;i++){
            rslt.push_back(nums[i]);
            
        }
        for(int i = 0; i<n; i++){
            rslt.push_back(nums[i]);
            
        }
        return rslt;
        
    }
};