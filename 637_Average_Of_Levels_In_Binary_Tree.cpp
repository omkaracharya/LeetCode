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
    vector<double> averageOfLevels(TreeNode* root) {
        vector <double> avg;
        if (!root) return avg;
        double levelSum = 0;
        int numNodes = 0;
        queue <TreeNode *> q;
        q.push(root);
        q.push(NULL);
        while (!q.empty()) {
            TreeNode *curr = q.front();
            q.pop();
            if (!curr) {
                avg.push_back(levelSum / numNodes);
                levelSum = 0;
                numNodes = 0;
                if (!q.empty())
                    q.push(NULL);
            } else {
                levelSum += curr->val;
                numNodes++;
                if (curr->left)
                    q.push(curr->left);
                if (curr->right)
                    q.push(curr->right);
            }
        }
        return avg;
    }
};