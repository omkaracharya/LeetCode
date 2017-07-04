class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int gi = 0;
        int si = 0;
        int ans = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        while (gi < g.size() && si < s.size()) {
            if (g[gi] <= s[si]) {
                ans++;
                gi++;
            }
            si++;
        }
        return ans;
    }
};