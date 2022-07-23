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
    int maxPathSum(TreeNode* root,int &ma) {
        if (!root)
            return 0;
        int left =  maxPathSum(root->left, ma);
        int right = maxPathSum(root->right, ma);
        ma = max(ma, root->val + left + right);
        return max(max(0, max(left, right)) + root->val, 0);
    }
    
    public:
    int maxPathSum(TreeNode* root)
    {
        if (!root)
            return INT_MIN;  //This INT_MIN is just to comply with the judge.
        
        int ma = root->val;
        
        maxPathSum(root, ma);
        
        return ma;
    }

};
