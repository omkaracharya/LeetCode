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
    TreeNode* constructMaximumBinaryTreeHelper(vector <int> &nums) {
        if (!nums.size()) return NULL;
        if (nums.size() == 1) {
            return new TreeNode(nums[0]);
        }
        int maxVal = INT_MIN;
        int maxIndex = -1;
        for (int i = 0; i < nums.size(); ++i) {
            if (maxVal < nums[i]) {
                maxVal = nums[i];
                maxIndex = i;
            }            
        }
        TreeNode *child = new TreeNode(maxVal);
        vector <int> leftV(nums.begin(), nums.begin() + maxIndex);
        vector <int> rightV(nums.begin() + maxIndex + 1, nums.end());
        child->left = constructMaximumBinaryTreeHelper(leftV);
        child->right = constructMaximumBinaryTreeHelper(rightV);
        return child;
    }
    
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return constructMaximumBinaryTreeHelper(nums);
    }
};