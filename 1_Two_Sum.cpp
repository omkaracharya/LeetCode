class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> done;
        vector <int> ans;
        for (int i = 0; i < nums.size(); ++i) {
            if (done.count(target - nums[i])) {
                ans.push_back(done[target - nums[i]]);
                ans.push_back(i);
                break;
            } else {
                done[nums[i]] = i;                
            }
        }
        return ans;
    }
};