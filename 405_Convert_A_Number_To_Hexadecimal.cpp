class Solution {
public:
    string toHex(int num) {
        string HEX = "0123456789abcdef";
        if (!num) return "0";
        string ans;
        for (int counter = 0; counter < 8 && num; ++counter, num >>= 4)
            ans = HEX[num & 15] + ans;
        return ans;
    }
};