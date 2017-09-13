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
    int countNodes(TreeNode* root) {
        if (!root) return 0;
        int left = 0, right = 0;
        TreeNode *temp = root;
        while (temp) {
            left++;
            temp = temp->left;
        }
        temp = root;
        while (temp) {
            right++;
            temp = temp->right;
        }
        if (left == right) return pow(2, left) - 1;
        return 1 + countNodes(root->left) + countNodes(root->right);
    }
};