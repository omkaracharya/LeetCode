class Solution {
public:
    string reverseString(string s) {
        // reverse(s.begin(), s.end());
        // return s;
        
        for (int i = 0; i < s.length() / 2; ++i) {
            swap(s[i], s[s.length() - i - 1]);
        }
        return s;
    }
};