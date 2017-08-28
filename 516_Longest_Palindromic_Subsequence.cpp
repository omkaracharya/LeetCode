class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int len = s.length();
        if (len <= 1)
            return len;
        int T[len][len];
        for (int i = 0; i < len; ++i) {
            for (int j = 0; j < len; ++j) {
                if (i == j)
                    T[i][j] = 1;
                else
                    T[i][j] = 0;
            }
        }
        
        int maxlen = 1;
        for (int l = 2; l <= len; ++l) {
            for (int i = 0; i <= len - l; ++i) {
                int j = i + l - 1;
                if (s[i] == s[j]) {
                    T[i][j] = T[i + 1][j - 1] + 2;
                    maxlen = max(maxlen, l);
                }
                else
                    T[i][j] = max(T[i][j - 1], T[i + 1][j]);
            }
        }
        return T[0][len - 1];
    }
};