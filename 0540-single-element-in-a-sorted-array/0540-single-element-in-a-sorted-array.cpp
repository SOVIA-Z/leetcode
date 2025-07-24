class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        // int st = 0, end = A.size()-1;
        // while(st<= end){
        //     mid = st + (end - st)/2;
        //     if(mid%2==0){// even 


        //     }else{// odd

        //     }
        // }

        int ans = 0;
        for(int i= 0; i < nums.size(); i++){
            ans = ans ^ nums[i];
        }
        return ans;
    }
};