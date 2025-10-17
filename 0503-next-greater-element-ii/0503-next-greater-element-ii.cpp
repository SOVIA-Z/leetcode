class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int>ans(n,-1);

        stack<int>st;
        for(int i = 2*n - 1; i >= 0; i--)
        {
            int curr = nums[i % n];
            // we pop out all elements smaller than current element
            while(!st.empty() && ( curr >= st.top()))
            {
                st.pop();
            }

            // if stack is empty means no greater element is there
            // if not empty we make answer at that index equal to top element
            if(!st.empty() && (i < n))
            {
                ans[i] = st.top();
            }

            st.push(curr);
        }

        return ans;
    }
};