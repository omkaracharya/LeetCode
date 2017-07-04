class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int tors = nums.size();
        int tocs = nums[0].size();
        if (tors * tocs != r * c)
            return nums;
        int ors = 0;
        int ocs = 0;
        vector < vector < int > > ans(r, vector <int>(c, 0));
        for (int i = 0; i < r; ++i) {
            for (int j = 0; j < c; ++j) {
                ans[i][j] = nums[ors][ocs];
                if (ocs == tocs - 1) {
                    ocs = 0;
                    ors++;
                } else {
                    ocs++;
                }
            }
        }
        return ans;
    }
};