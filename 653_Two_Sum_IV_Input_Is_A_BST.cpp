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
    bool findTarget(TreeNode* root, int k) {
        bool found = false;
        set <int> hashset;
        inorder(root, hashset, k, found);
        return found;
    }
    
    void inorder(TreeNode *root, set <int> &hashset, int k, bool &found) {
        if (!root || found) return;
        inorder(root->left, hashset, k, found);
        if (hashset.count(k - root->val)) {
            found = true;
            return;
        }
        hashset.insert(root->val);
        inorder(root->right, hashset, k, found);
        return;
    }
};