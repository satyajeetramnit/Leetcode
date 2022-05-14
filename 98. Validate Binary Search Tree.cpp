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
    bool isBst(TreeNode* root,long long minval,long long maxval)
    {
        if(root==NULL)
            return true;
        if((root->val>minval && root->val<maxval) && isBst(root->left,minval,root->val) && isBst(root->right,root->val,maxval))
            return true;
        return false;
    }
    bool isValidBST(TreeNode* root) {
        return isBst(root,LLONG_MIN,LLONG_MAX);
    }
};