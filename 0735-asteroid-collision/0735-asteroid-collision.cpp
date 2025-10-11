class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;

        for(int i = 0; i < asteroids.size(); i++){
            int a = asteroids[i];
            while(!st.empty() && a < 0 && st.top() > 0){
                if(st.top() < -a){
                    st.pop();
                    continue;
                } else if(st.top() == -a){
                    st.pop();
                }
                a = 0;
                break;
            }
            if(a != 0){
                st.push(a);
            }
        }
        vector<int> ans(st.size());
        for(int i = (int)st.size() - 1; i >= 0; i--){
            ans[i] = st.top();
            st.pop();
        }
        return ans;
    }
};
