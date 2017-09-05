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
    set <int> nodes;
public:
    void addNodes(TreeNode *root) {
        if (!root) return;
        nodes.insert(root->val);
        addNodes(root->left);
        addNodes(root->right);
    }
    
    int findSecondMinimumValue(TreeNode* root) {
        addNodes(root);
        if (nodes.size() < 2) return -1;
        set <int>::iterator it = nodes.begin();
        advance(it, 1);
        return *it;
    }
};