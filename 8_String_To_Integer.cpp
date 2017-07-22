class Solution {
public:
    int myAtoi(string str) {
        int mul = 1;
        long ans = 0;
        if (str == "")
            return 0;
        for (int i = 0; i < str.size(); ) {
            i = str.find_first_not_of(' ');
            if (str[i] == '-') {
                mul = -1;
                ++i;
            } else if (str[i] == '+') {
                mul = 1;
                ++i;
            }
            while (str[i] >= '0' && str[i] <= '9') {
                ans = ans * 10 + str[i] - '0';
                if (ans * mul >= INT_MAX) return INT_MAX;
                if (ans * mul <= INT_MIN) return INT_MIN;
                ++i;
            }
            return ans * mul;
        }
    }
};