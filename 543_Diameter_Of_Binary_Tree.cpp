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
    int maxi = 0;
public:
//     int depth(TreeNode *root) {
//         if (!root) return 0;
//         return 1 + max(depth(root->left), depth(root->right));
//     }
    
//     int diameterOfBinaryTree(TreeNode* root) {
//         if (!root) return 0;
//         return max(depth(root->left) + depth(root->right), max(diameterOfBinaryTree(root->left), diameterOfBinaryTree(root->right)));
//     }
    
        int dfs(TreeNode *root) {
            if (!root) return 0;
            int left = dfs(root->left);
            int right = dfs(root->right);
            maxi = max(maxi, left + right);
            return max(1 + left, 1 + right);
        }
    
        int diameterOfBinaryTree(TreeNode* root) {
            dfs(root);
            return maxi;
        }

};