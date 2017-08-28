class Solution {
public:
    string longestPalindrome(string s) {
        int len = s.length();
        if (len <= 1) {
            return s;
        }
        
        bool T[len][len];
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < len; ++j) {
                if (i == j)
                    T[i][j] = true;
                else
                    T[i][j] = false;
            }
        }
        
        int start = 0;
        int maxlen = 1;
        for (int l = 2; l <= len; ++l) {
            for (int i = 0; i <= len - l; ++i) {
                int j = i + l - 1;
                if (s[i] == s[j] && (l == 2 || T[i + 1][j - 1])) { 
                    T[i][j] = true;
                    start = i;       
                    maxlen = max(maxlen, l);
                } else {
                    T[i][j] = false;   
                }
            }
        }
        return s.substr(start, maxlen);
    }
};