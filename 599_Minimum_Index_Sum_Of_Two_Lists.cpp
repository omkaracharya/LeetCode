class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map <string, int> hashmap;
        
        for (int i = 0; i < list1.size(); ++i)
            hashmap[list1[i]] = i;
        
        vector <string> ans;
        int min_sum = INT_MAX;
        
        for (int i = 0; i < list2.size(); ++i) {
            if (hashmap.count(list2[i]))
                min_sum = min(min_sum, hashmap[list2[i]] + i);
        }

        for (int i = 0; i < list2.size(); ++i) {
            if (hashmap.count(list2[i]) && hashmap[list2[i]] + i == min_sum) 
                ans.push_back(list2[i]);
        }
        return ans;
    }
};