class Solution {
public:
    string reverseStr(string s, int k) {
        int len = s.length();
        if (len < k)
            reverse(s.begin(), s.end());
        else if (len >= k && len < 2 * k)
            reverse(s.begin(), s.begin() + k);
        else {
            int start = 0;
            int end = 0;
            for (int i = 0; i < len; i += 2 * k) {
                start = i;
                end = i + k;
                reverse(s.begin() + start, s.begin() + min(end, len));
            }
        }
        return s;
    }
};