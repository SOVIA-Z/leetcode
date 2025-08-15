class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        //step 1 create vector 
        int n = arr.size();
        vector<int> result(n, -1); // Initialize the result array with -1

        if (n == 0) return result; // Edge case for empty array

        //step 2 loop
        for (int i = 0; i < n - 1; i++)
        {
            int maxRight = arr[i + 1];
            for (int j = i + 2; j < n; j++)
            {
                maxRight = max(maxRight, arr[j]);
            }
            result[i] = maxRight;
        }
        
        //step 3 return
        return result;

        
        // int n=arr.size(),temp,mx=-1;
        // for(int i=n-1;i>=0;i--)
        // {
        //     temp=arr[i];
        //     arr[i]=mx;
        //     mx=max(mx,temp);
        // }
        // return arr;
    }
};