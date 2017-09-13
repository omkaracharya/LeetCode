class Solution {
public:
    bool is_anagram(vector <int> &sc, vector <int> &pc) {
        for (int i = 0; i < 26; ++i) {
            if (sc[i] != pc[i])
                return false;
        }
        return true;
    }
    
    vector<int> findAnagrams(string s, string p) {
        vector <int> sc(26, 0), pc(26, 0), ans;
        int n = s.length();
        int k = p.length();
        for (int i = 0; i < k; ++i)
            sc[s[i] - 'a']++;
        for (char c: p)
            pc[c - 'a']++;
        for (int i = 0; i < n - k + 1; ++i) {
            if (i > 0) {
                sc[s[i - 1] - 'a']--;
                sc[s[i + k - 1] - 'a']++;
            }
            if (is_anagram(sc, pc))
                ans.push_back(i);
        }
        return ans;
    }
};