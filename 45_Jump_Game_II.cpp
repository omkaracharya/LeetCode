class Solution {
public:
    int jump(vector<int>& nums) {
        // vector <int> T(nums.size(), INT_MAX);
        // T[0] = 0;
        // for (int i = 1; i < nums.size(); ++i) {
        //     for (int j = 0; j < i; ++j) {
        //         if (i <= j + nums[j] && T[j] != INT_MAX) {
        //             T[i] = min(T[i], T[j] + 1);
        //             break;
        //         }
        //     }
        // }
        // return T[nums.size() - 1];
        
        if (!nums[0] || nums.size() == 1)
            return 0;
        int maxReach = nums[0];
        int step = nums[0];
        int jump = 1;
        
        for (int i = 1; i < nums.size(); ++i) {
            if (i == nums.size() - 1)
                return jump;
            maxReach = max(maxReach, i + nums[i]);
            step--;
            if (!step) {
                jump++;
                step = maxReach - i;
            }
        }
        
        return jump;
    }
};