class Solution {
public:
    
    bool dfs(vector<int>& arr, int index, vector<bool>& visited) {
        
        if (index < 0 || index >= arr.size()) {
            return false;
        }

        if (visited[index]) {
            return false;
        }

        if (arr[index] == 0) {
            return true;
        }

        visited[index] = true;

        int forward = index + arr[index];

        int backward = index - arr[index];

        return dfs(arr, forward, visited) || dfs(arr, backward, visited);
    }

    bool canReach(vector<int>& arr, int start) {
        
        vector<bool> visited(arr.size(), false);

        return dfs(arr, start, visited);
    }
};