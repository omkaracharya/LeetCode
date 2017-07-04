class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_ans = 0, ans = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i]) {
                ans++;
            } else if (nums[i] == 0) {
                ans = 0;
            }
            if (max_ans < ans) {
                 max_ans = ans;                   
            }
        }
        return max_ans;
    }
};