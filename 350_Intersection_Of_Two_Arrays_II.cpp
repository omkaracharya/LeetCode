class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> hashmap;
        vector <int> ans;
        for (auto x: nums1)
            hashmap[x]++;
        for (auto x: nums2) {
            if (hashmap[x]) {
                ans.push_back(x);
                hashmap[x]--;
            }
        }
        return ans;
    }
};