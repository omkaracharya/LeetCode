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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> a;
        queue<TreeNode*>q;
        if (!root) return vector<vector<int>>();
        q.push(root);
        q.push(NULL);
        bool r = false;
        while (!q.empty()) {
            TreeNode *temp = q.front();
            q.pop();
            if (temp) {
                a.push_back(temp->val);
                if (temp->left) q.push(temp->left);
                if (temp->right) q.push(temp->right);
            } else {
                r = !r;
                if (r)
                    ans.push_back(a);
                else {
                    reverse(a.begin(), a.end());
                    ans.push_back(a);
                }
                a.resize(0);
                if (!q.empty()) q.push(NULL);
            }
        }
        return ans;
    }
};