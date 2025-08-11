class Solution {
public:
    int subtractProductAndSum(int n) {
        int sum = 0, prd = 1;
        while (n>0){
            int dig = n%10;
            sum+=dig;
            prd*=dig;
            n/=10;
        }
        return (prd-sum);
        
    }
};