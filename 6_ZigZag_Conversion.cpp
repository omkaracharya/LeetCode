class Solution {
public:
    string convert(string s, int numRows) {
        vector <string> ans(numRows, "");
        int row = 0;
        bool add = true;
        if (numRows == 1 || numRows == s.length())
            return s;
        for (int i = 0; i < s.length(); ++i) {
            if (!row) {
                add = true;
                ans[row] += s[i];
                row++;
            } else if (row == numRows - 1) {
                add = false;
                ans[row] += s[i];
                row--;
            } else {
                ans[row] += s[i];
                if (add) {
                    row++;
                } else {
                    row--;
                }
            }
        }
        string answer = "";
        for (string str : ans)
            answer += str;
        return answer;
    }
};