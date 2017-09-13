class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        
        // 1. Transponse the matrix
        for (int i = 0; i < n; ++i) {
            for (int j = i; j < n; ++j) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        
        // 2. Swap the columns
        for (int i = 0; i < n; ++i) {
            // for (int j = 0; j <= (n - 1) / 2; ++j) {
            //     swap(matrix[i][j], matrix[i][n - 1 - j]);
            // }
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};