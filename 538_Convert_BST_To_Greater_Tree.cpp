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
    TreeNode* convertBST(TreeNode* root) {
        int sum = 0;
        convertBSTHelper(root, sum);
        return root;
    }
    
    void convertBSTHelper(TreeNode *root, int &sum) {
        if (!root) return;
        convertBSTHelper(root->right, sum);
        int originalSum = sum;
        sum += root->val;
        root->val += originalSum;
        convertBSTHelper(root->left, sum);
        return;
    }
};