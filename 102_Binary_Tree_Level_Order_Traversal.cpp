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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector <vector <int> > ans;
        vector <int> temp;
        queue <TreeNode*> q;
        if (!root) return vector <vector <int>>();
        q.push(root);
        q.push(NULL);
        while (!q.empty()) {
            TreeNode *t = q.front();
            q.pop();
            if (t) {
                temp.push_back(t->val);
                if (t->left) q.push(t->left);
                if (t->right) q.push(t->right);
            } else {
                ans.push_back(temp);
                temp.resize(0);
                if (!q.empty()) q.push(NULL);
            }
        }
        return ans;
    }
};