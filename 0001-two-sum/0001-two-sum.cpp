class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int tar) {
        // using hash map
        unordered_map<int,int> m;
        vector <int> ans;

        for(int i=0;i<arr.size(); i++){
            int first = arr[i];
            int sec = tar - first;

            if(m.find(sec) != m.end()){// success
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;


            }
            m[first] = i;

        }
        
        return ans;
    }
};