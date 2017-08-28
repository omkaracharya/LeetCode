class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector < vector <int> > ans;
        for (int i = 0; i < nums.size(); ++i) {
            int target = -nums[i];
            int left = i + 1;
            int right = nums.size() - 1;
            while (left < right) {
                int sum = nums[left] + nums[right];
                if (sum < target)
                    left++;
                else if (sum > target)
                    right--;
                else {
                    vector <int> triplet;
                    triplet.push_back(nums[i]);
                    triplet.push_back(nums[left]);
                    triplet.push_back(nums[right]);
                    ans.push_back(triplet);
                                           
                    while (left < right && nums[left] == triplet[1]) left++;
                    while (left < right && nums[right] == triplet[2]) right--;
                }
            }
            while (i < nums.size() && nums[i + 1] == nums[i]) ++i;
        }
        return ans;
    }
};