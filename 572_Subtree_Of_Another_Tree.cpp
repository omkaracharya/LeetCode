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
    bool isSame(TreeNode *s, TreeNode *t) {
        if ((s && !t) || (!s && t)) return false;
        if (!s && !t) return true;
        return isSame(s->left, t->left) && isSame(s->right, t->right) && s->val == t->val;
    }
    
    bool isSubtree(TreeNode* s, TreeNode* t) {
        if (!s) return false;
        if (isSame(s, t)) return true;
        return isSubtree(s->left, t) || isSubtree(s->right, t);
    }
};