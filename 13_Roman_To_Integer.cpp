class Solution {
public:
    int romanToInt(string s) {
        unordered_map <char, int> hashmap = {
            {'I', 1}, 
            {'V', 5}, 
            {'X', 10}, 
            {'L', 50}, 
            {'C', 100}, 
            {'D', 500}, 
            {'M', 1000}
        };
        
        int len = s.length();
        int sum = hashmap[s.back()];
        
        for (int i = len - 2; i >= 0; i--) {
            if (hashmap[s[i]] >= hashmap[s[i + 1]])
                sum += hashmap[s[i]];
            else
                sum -= hashmap[s[i]];
        }
        
        return sum;
    }
};