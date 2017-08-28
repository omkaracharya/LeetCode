class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int l = 0, r = -1, i = 0, j = nums.size() - 1;
        int mini = INT_MAX, maxi = INT_MIN;
        for (; j >= 0; ++i, --j) {
            maxi = max(maxi, nums[i]);
            if (maxi != nums[i]) r = i;
            mini = min(mini, nums[j]);
            if (mini != nums[j]) l = j;
        }
        return r - l + 1;
    }
};