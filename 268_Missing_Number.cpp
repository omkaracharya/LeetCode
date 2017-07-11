class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        int ans = 0;
        for (; i < nums.size(); ++i)
            ans ^= i ^ nums[i];
        return ans ^ i;
    }
};