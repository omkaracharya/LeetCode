class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int len1 = s1.size();
        int len2 = s2.size();
        int len3 = s3.size();
        if (len1 + len2 != len3) return false;
        vector < vector <bool> > T(len1 + 1, vector <bool> (len2 + 1));
        T[0][0] = 1;
        for (int i = 0; i <= len1; ++i) {
            for (int j = 0; j <= len2; ++j) {
                if (!i || !j) {
                    if (!i && j) {
                        if (!T[i][j - 1])
                            T[i][j] = 0;
                        else
                            T[i][j] = s2[j - 1] == s3[i + j - 1];
                    }
                    if (i && !j) {
                        if (!T[i - 1][j])
                            T[i][j] = 0;
                        else
                            T[i][j] = s1[i - 1] == s3[i + j - 1];
                    }
                } else {
                    bool cond1 = false, cond2 = false;
                    if (T[i][j - 1])
                        cond1 = s2[j - 1] == s3[i + j - 1];
                    if (T[i - 1][j])
                        cond2 = s1[i - 1] == s3[i + j - 1];
                    T[i][j] = cond1 || cond2;
                }
            }
        }
        return T[len1][len2];
    }
};