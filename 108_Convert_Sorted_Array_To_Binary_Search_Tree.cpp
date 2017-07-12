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
    TreeNode* sortedArrayToBSTHelper(vector <int>& nums, int left, int right) {
        if (left < right) {
            int mid = (left + right) / 2;
            TreeNode* root = new TreeNode(nums[mid]);
            root->left = sortedArrayToBSTHelper(nums, left, mid);
            root->right = sortedArrayToBSTHelper(nums, mid + 1, right);
            return root;
        }
        return NULL;
    }
    
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBSTHelper(nums, 0, nums.size());
    }
};