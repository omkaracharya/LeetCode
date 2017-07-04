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
    int tilt = 0;
public:
    int findTiltHelper(TreeNode* root) {
        if (!root) return 0;
        int leftval = findTiltHelper(root->left); 
        int rightval = findTiltHelper(root->right);
        tilt += abs(leftval - rightval);
        return leftval + rightval + root->val;
    }

    int findTilt(TreeNode* root) {
        findTiltHelper(root);
        return tilt;
    }
};