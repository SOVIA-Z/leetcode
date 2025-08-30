class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int lt = 0, rt = nums.size()-1;
        vector<int> ans(nums.size());

        for(int i = 0; i<nums.size(); i++){
            if(nums[i]%2==0){
                ans[lt]= nums[i];
                lt ++;
            }
            else{
                ans[rt]= nums[i];
                rt--;
            }
        }
        return ans;
        
    }
};