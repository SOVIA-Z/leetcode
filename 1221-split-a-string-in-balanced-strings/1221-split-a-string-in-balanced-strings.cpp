class Solution {
public:
    int balancedStringSplit(string s) {
        int R = 0;
        int L = 0;
        int count = 0;
        for(int i = 0; i < s.length(); i++){
            if(s[i] == 'R'){
                R++;
            }else{
                L++;
            }
            if(L==R){
                count++;
                R=0;
                L=0;
            }
        }
        return count; 
    }
};