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
    bool findTarget(TreeNode* root, int k) {
        set<int> s;
        
        return search(root, k, s);
    }
    bool search(TreeNode* root,int k, set<int> &s){
        if (!root){
            return false;
        }
        int val = root->val;
        
        if(s.find(k-val) != s.end()){
            return true;
        }
        s.insert(val);
        bool l = search(root->left, k, s);
        bool r = search(root->right, k, s);
        
        return l || r;
    }
};