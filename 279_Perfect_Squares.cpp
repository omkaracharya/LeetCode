class Solution {
public:
    int numSquares(int n) {
        if (n <= 0) return 0;
        vector <int> T;
        T.push_back(0);
        for (int i = 1; i <= n; ++i) {
            int min_val = INT_MAX;
            for (int j = 1; j * j <= i; ++j)
                min_val = min(min_val, T[i - j * j] + 1);
            T.push_back(min_val);
        }
        return T.back();
    }
};