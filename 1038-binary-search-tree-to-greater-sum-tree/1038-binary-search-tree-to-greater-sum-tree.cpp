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
    
    void rInorder(TreeNode* root,int &sum){
        if(!root)
            return;
        rInorder(root->right,sum);
        sum += root->val;
        root->val = sum;
        
        rInorder(root->left,sum);

    }
    TreeNode* bstToGst(TreeNode* root) {
        int sum = 0;
        rInorder(root,sum);
        return root;
    }
};