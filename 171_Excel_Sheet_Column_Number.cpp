class Solution {
public:
    int titleToNumber(string s) {
        int sum = 0;
        int len = s.length();
        for (int i = 0; i < len; ++i) {
            sum = sum * 26 + (s.at(i) - 'A' + 1);
        }
        return sum;
    }
};