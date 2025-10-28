class Solution {
public:
    bool numOfSplit(vector<int> &nums, int maxSum, int k){
        int sum = 0;
        int count = 1;

        for(int i = 0; i < nums.size(); i++){
            if(nums[i] > maxSum) return false;

            if(sum + nums[i] > maxSum){
                count++;
                sum = nums[i];
                if(count > k) return false;
            } else {
                sum += nums[i];
            }
        }
        return true;
    }
    int splitArray(vector<int>& nums, int k) {
        int low = 0, high = 0;
        for (int num : nums) {
            low = min(low, num);
            high += num;
        }

        int ans = high;
        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (numOfSplit(nums, mid, k)) {
                ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
        
    }
};