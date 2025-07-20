class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        for(int st = 0; st<nums.size(); st++){
            int currSum =0;
            for(int end = st; end<nums.size(); end++){
                currSum += nums[end];
                if(currSum == k){
                    count++;
                }

            }
        }
        return count;
    }
};