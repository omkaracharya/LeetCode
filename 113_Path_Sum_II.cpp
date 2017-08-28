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
    void pathSum(vector < vector <int> >& paths, vector <int>& path, TreeNode *root, int sum) {
        if (!root) return;
        path.push_back(root->val);
        if (!root->left && !root->right && root->val == sum) {
            paths.push_back(path);
        }
        pathSum(paths, path, root->left, sum - root->val);
        pathSum(paths, path, root->right, sum - root->val);
        path.pop_back();
    }
    
    
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector < vector <int> > paths;
        vector <int> path;
        if (!root) return paths;
        pathSum(paths, path, root, sum);
        return paths;
    }
};