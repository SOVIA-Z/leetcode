/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*, int> memo;
    int rob(TreeNode* root) {
        if(root == NULL) return 0;
        if(memo.count(root)) return memo[root];

        int ans = root -> val;

        if(root -> right){
            ans+= rob(root->right->left);
            ans+= rob(root->right->right);
        }
        if(root->left){
            ans+= rob(root->left->left);
            ans+= rob(root->left->right);
        }
        int notRob = rob(root->left) + rob(root->right);

        return memo[root] = max(ans, notRob);
    }
};