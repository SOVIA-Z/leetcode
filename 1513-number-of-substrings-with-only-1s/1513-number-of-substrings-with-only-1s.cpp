#define mod 1000000007
class Solution {
public:
    using ll = long long; 
    int numSub(string s) {
        int n = s.length();
        ll ans = 0;
        ll cnt = 1;
        auto val = [](ll cnt) ->ll{
            return 1LL*(cnt*(cnt +1))/2;
        };
        for (int i=0; i+1<n ; i++){
            if(s[i]=='0')continue;
            if(s[i]==s[i+1]){
                cnt++;
            }
            else{
                ans += val(cnt) % mod;
                cnt = 1;
            }
        }
        if(s.back() == '1')
        ans += val(cnt) % mod;
        return (int)ans;

    }
};