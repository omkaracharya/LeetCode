class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map <int, int> hashmap, visited;
        vector <int> ans;
        
        for (int i = 0; i < nums1.size(); ++i) {
            hashmap[nums1[i]]++;
        }
        
        for (int i = 0; i < nums2.size(); ++i) {
            if (hashmap[nums2[i]] && !visited[nums2[i]]) {
                ans.push_back(nums2[i]);
                visited[nums2[i]]++;
            }
        }
        
        return ans;
    }
};