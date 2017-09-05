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
    vector<int> findMode(TreeNode* root) {
        vector <int> modes;
        if (!root) return modes;
//        if (!root->left && !root->right) return vector<int>{root->val};
        int count = 0, prev = INT_MIN, max_freq = 0;
        calculateModeFrequency(root, count, prev, max_freq);
        count = 0, prev = INT_MIN;
        cout << max_freq;
        findModes(root, modes, count, prev, max_freq);
        if (count == max_freq) {
            modes.push_back(prev);                    
        }
        return modes;
    }
    
    void calculateModeFrequency(TreeNode *root, int &count, int &prev, int &max_freq) {
        if (!root) return;
        calculateModeFrequency(root->left, count, prev, max_freq);
        if (prev != root->val) count = 0;
        count++;
        prev = root->val;
        max_freq = max(max_freq, count);
        calculateModeFrequency(root->right, count, prev, max_freq);
        return;
    }
    
    void findModes(TreeNode *root, vector <int> &modes, int &count, int &prev, int max_freq) {
        if (!root) return;
        findModes(root->left, modes, count, prev, max_freq);
        if (prev != root->val) {
            if (count == max_freq) {
                modes.push_back(prev);                    
            }
            count = 0;
        }
        count++;
        prev = root->val;
        findModes(root->right, modes, count, prev, max_freq);
        return;        
    }
};