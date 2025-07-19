class Solution {
public:
    int majorityElement(vector<int>& nums) {
      //sorting
        int n= nums.size();
        sort(nums.begin(),nums.end());
            return nums[n/2];
        // int frq = 1, ans = nums[0];
        // for(int i = 1; i<n;i++){
        //     if(nums[i]== nums[i-1]){
        //         frq++;
        //     }
        //     else{
        //         frq = 1; 
        //         ans = nums[i];
        //     }

        // }
        // return ans;

        //moore's voting algo  O(n)
        // int n= nums.size();
        // int frq = 0, ans =0;
        // for(int i = 0; i<n;i++){
        //     if(frq == 0){
        //         ans = nums[i];
        //     }
        //     if(ans == nums[i]){ //same element
        //         frq++;

        //     }else{ // diff ele
        //         frq--;
        //     }
        // }
        // return ans;



  



        
        // brute force
        // int n = nums.size();
        // for(int val:nums){
        //     int frq = 0;
        //     for(int el:nums){
        //         if(val== el){
        //             frq++;
        //         }
        //     }
        //     if(frq>n/2){
        //         return val;
        //     }
        // }
        // return -1;
    }
};