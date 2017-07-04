class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag = false;
        int first, total;
        first = total = 0;
        if (word.length() == 1)
            return true;
        for (int i = 0; i < word.length(); ++i) {
            if (!i) {
                if (word[i] >= 'A' && word[i] <= 'Z') {
                    first++;
                    total++;
                }
            } else {
                if (word[i] >= 'A' && word[i] <= 'Z') {
                    total++;
                }
            }
        }
        if (!total) return true;
        if (total > 1) {
            if (total != word.length()) return false;
            return true;
        }
        if (total == 1) {
            if (first) return true;
            return false;
        }
        return false;
    }
};