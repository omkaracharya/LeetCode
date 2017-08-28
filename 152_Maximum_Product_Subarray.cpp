class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int fp = 1, bp = 1, ans = INT_MIN;
        for (int i = 0; i < nums.size(); ++i) {
            fp *= nums[i];
            bp *= nums[nums.size() - 1 - i];
            ans = max(ans, max(fp, bp));
            fp = (!fp ? 1 : fp);
            bp = (!bp ? 1 : bp);
        }
        return ans;
    }
};