class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double max_ending_here = 0;
        double max_so_far = 0;
        int i = 0, j = 0;
        while (j < k) {
            max_so_far += nums[j];
            ++j;
        }
        max_ending_here = max_so_far;
        max_so_far /= k;
        while (j < nums.size()) {
            max_ending_here += (nums[j] - nums[i]);
            max_so_far = max(max_ending_here / k, max_so_far);
            ++i;
            ++j;
        }
        return max_so_far;
    }
};