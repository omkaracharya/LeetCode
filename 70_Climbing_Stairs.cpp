class Solution {
public:
    int climbStairs(int n) {
        int counts[n + 1];
        counts[0] = 1;
        counts[1] = 1;
        for (int i = 2; i <= n; ++i)
            counts[i] = counts[i - 1] + counts[i - 2];
        return counts[n];
    }
};