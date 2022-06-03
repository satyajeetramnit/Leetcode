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
    vector<int> preorderTraversal(TreeNode* root) {
        vector <int> ret;
        traverse(root, ret);
        return ret;
    }
    
    void traverse(TreeNode* node, vector<int> & out){
        if(!node) return;
        out.push_back(node->val);
        traverse(node->left, out);
        traverse(node->right, out);
    }
};