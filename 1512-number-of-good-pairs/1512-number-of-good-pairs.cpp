class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        // int count = 0;
        // for ( int i=0;i<nums.size();i++){
        //     for ( int j=i+1;j<nums.size();j++){
        //         if (nums[i]==nums[j] ){
        //             count++;
        //         } 
        //     }        
        // }
        // return count ;
        int n = nums.size();
        int result = 0;

        unordered_map<int, int> mp;

        for(int &num : nums){
            result += mp[num];

            mp[num]++;
        }

        return result;
    }
};