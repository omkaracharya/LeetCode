class Solution {
public:
    int minMoves(vector<int>& nums) {
        int minval = INT_MAX;
        for (int x: nums)
            minval = min(minval, x);
        int ans = 0;
        for (int x: nums)
            ans += (x - minval);
        return ans;
    }
};