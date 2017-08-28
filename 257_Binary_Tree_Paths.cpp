/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    void binaryTreePaths(vector <string>& paths, TreeNode *root, string s) {
        if (!root->left && !root->right) {
            paths.push_back(s);
            return;
        }
        if (root->left)
            binaryTreePaths(paths, root->left, s + "->" + to_string(root->left->val));
        if (root->right)
            binaryTreePaths(paths, root->right, s + "->" + to_string(root->right->val));
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        vector <string> paths;
        if (!root) return paths;
        binaryTreePaths(paths, root, to_string(root->val));
        return paths;
    }
};