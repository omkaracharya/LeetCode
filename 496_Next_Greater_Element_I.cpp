class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector <int> ans;
        for (int i = 0; i < findNums.size(); ++i) {
            int j;
            for (j = 0; j < nums.size(); ++j) {
                if (nums[j] == findNums[i])
                    break;
            }
            for (; j < nums.size() - 1; ++j) {
                if (nums[j + 1] > findNums[i]) {
                    ans.push_back(nums[j + 1]);
                    break;
                }
            }
            if (j == nums.size() - 1)
                    ans.push_back(-1);
        }
        return ans;
    }
};