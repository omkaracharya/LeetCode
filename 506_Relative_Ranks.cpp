class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& nums) {
        unordered_map <int, int> hashmap;
        
        vector <int> sorted_nums = nums;
        sort(sorted_nums.begin(), sorted_nums.end());
        reverse(sorted_nums.begin(), sorted_nums.end());
        
        for (int i = 0; i < nums.size(); ++i) {
            hashmap[sorted_nums[i]] = i;
        }
        
        vector <string> ans;
        for (int i = 0; i < nums.size(); ++i) {
            int pos = hashmap[nums[i]];
            if (pos == 0) ans.push_back("Gold Medal");
            else if (pos == 1) ans.push_back("Silver Medal");
            else if (pos == 2) ans.push_back("Bronze Medal");
            else ans.push_back(to_string(pos + 1));
        }
        
        return ans;
    }
};