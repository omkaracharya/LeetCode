class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int row_min = m;
        int col_min = n;
        for (int i = 0; i < ops.size(); ++i) {
            row_min = min(row_min, ops[i][0]);
            col_min = min(col_min, ops[i][1]);
        }
        return row_min * col_min;
    }
};