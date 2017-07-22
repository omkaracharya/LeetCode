class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector <int> hash(256, -1);
        int ans = 0, st = -1;
        for (int i = 0; i < s.length(); ++i) {
            if (hash[s[i]] > st)
                st = hash[s[i]];
            hash[s[i]] = i;
            ans = max(ans, i - st);
        }
        return ans;
    }
};