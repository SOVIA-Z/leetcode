class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0, end = nums.size()-1;
        while(st< end){
            int mid = st +(end-st)/2;
            // if(nums[mid-1]>nums[mid] && nums[mid+1]>nums[mid]){
            //     return nums[mid];
            if(nums[end]<nums[mid]){// right 
                st = mid +1;
            }else{//left
                end = mid;
            }
            
        }
        return nums[st];
    }
};