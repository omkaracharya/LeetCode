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
    vector <int> nodes;
public:
    void inorder(TreeNode *root) {
        if (!root) return;
        inorder(root->left);
        nodes.push_back(root->val);
        inorder(root->right);
    }
    
    int getMinimumDifference(TreeNode* root) {
        inorder(root);
        int min_diff = nodes[1] - nodes[0];
        for (int i = 0; i < nodes.size() - 1; ++i) {
            min_diff = min(min_diff, nodes[i + 1] - nodes[i]);
        }
        return min_diff;
    }
};