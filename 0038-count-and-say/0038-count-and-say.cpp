class Solution {
public:
    string countAndSay(int n) {
        if(n==1) return "1";

        string s = countAndSay(n-1);
        string ans = "";

        int count = 1;
        for(int i = 1; i < s.size(); i++){
            if(s[i] == s[i-1]){
                count++;
            } else {
                ans += to_string(count) + s[i-1];
                count = 1;
            }
        }
        ans += to_string(count) + s.back();
        return ans;
    }
};