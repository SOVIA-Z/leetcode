class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int total_Xor = 0;
        for(int num: nums){
            total_Xor ^= num;
            
        }
        
        if(total_Xor != 0){
            return nums.size();
        }
        for (int x : nums) {
            if (x != 0) return nums.size() - 1; // remove that element -> non-zero XOR
        }
        return 0;
        
    }
};