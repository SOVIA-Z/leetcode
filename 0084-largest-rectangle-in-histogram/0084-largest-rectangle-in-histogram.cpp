class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> stack;
        stack.push(-1);
        int max_area = 0;

        for (int i = 0; i < heights.size(); i++) {
            while (stack.top() != -1 && heights[i] <= heights[stack.top()]) {
                int height = heights[stack.top()];
                stack.pop();
                int width = i - stack.top() - 1;
                max_area = max(max_area, height * width);
            }
            stack.push(i);
        }

        while (stack.top() != -1) {
            int height = heights[stack.top()];
            stack.pop();
            int width = heights.size() - stack.top() - 1;
            max_area = max(max_area, height * width);
        }

        return max_area;        
    }
};

// class Solution {
// public:
//     int largestRectangleArea(vector<int>& heights) {
//         int n = heights.size();
//         if(n == 0) return 0;
//         int maxArea = 0;
//         vector<int> left(n); 
//         vector<int> right(n);

//         left[0] = 0;
//         right[n - 1] = n;

//         for(int i = 1; i < n; i++){
//             int prev_idx = i - 1; 
//             while(prev_idx >= 0 && heights[prev_idx] >= heights[i]){
//                 prev_idx = left[prev_idx]; 
//             }
//             left[i] = prev_idx;
//         }
        
//         for(int i = n - 2; i >= 0; i--){
//             int prev_idx = i + 1; 
//             while(prev_idx < n && heights[prev_idx] >= heights[i]){
//                 prev_idx = right[prev_idx]; 
//             }
//             right[i] = prev_idx;
//         }
        
//         for(int i = 0; i < n; i++){
//             int width = right[i] - left[i] - 1;
//             maxArea = max(maxArea, heights[i] * width);
//         }
//         return maxArea;
//     }
// };

