class Solution {
public:
    bool isAnagram(string s, string t) {
        vector <int> counts(26, 0);
        for (char c: s)
            counts[c - 'a']++;
        for (char c: t)
            counts[c - 'a']--;
        for (int i = 0; i < counts.size(); ++i)
            if (counts[i])
                return false;
        return true;
    }
};