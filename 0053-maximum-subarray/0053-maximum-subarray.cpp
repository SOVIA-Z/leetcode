class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        // kadane's algorithm
        int currSum = 0;
        int maxSum = INT_MIN;
        for(int num: nums){
            currSum += num;
            maxSum = max(currSum,maxSum);
            if(currSum< 0){
                currSum=0;
            }

        }
        return maxSum;
        
    }
};