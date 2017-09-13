class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        if (nums.size() == 0) return 0;
        int len = 1, max_len = 1;
        for (int i = 1; i < nums.size(); ++i) {
            if (nums[i - 1] < nums[i]) {
                len++;
                max_len = max(max_len, len);
            } else {
                len = 1;
            }
        }
        return max_len;
    }
};