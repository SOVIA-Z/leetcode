class Solution {
public:
    int arrangeCoins(int n) {
        
        int rowsNo = 1;
        while(n > 0){     
            rowsNo++;        
            n -= rowsNo;   
        }
        return rowsNo-1 ; 
        
    }
};