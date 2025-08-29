class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int lt = 0;
        int rt = nums.size()-1 ;

        while (lt < rt) {
            int total = nums[lt] + nums[rt];

            if (total == target) {
                return {lt+1 , rt+1 };
            } else if (total > target) {
                rt--;
            } else {
                lt++;
            }
        }
        return {-1, -1}; 
    }
};