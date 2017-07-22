class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (!strs.size()) return "";
        sort(strs.begin(), strs.end());
        string s1 = strs[0];
        string s2 = strs[strs.size() - 1];
        int i = 0;
        string ans = "";
        while (i < s1.length() && i < s2.length()) {
            if (s1[i] == s2[i]) {
                ans += s1[i++];
            }
            else
                break;
        }
        return ans;
    }
};