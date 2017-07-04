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
    int sum = 0;
public:
    void sumOfLeftLeavesHelper(TreeNode* root, int isLeft) {
        if (!root)
            return;
        if (!root->left && !root->right && isLeft) {
            sum += root->val;
        } else {
            sumOfLeftLeavesHelper(root->left, 1);
            sumOfLeftLeavesHelper(root->right, 0);
        }
    }
    int sumOfLeftLeaves(TreeNode* root) {
        sumOfLeftLeavesHelper(root, 0);
        return sum;
    }
    
};