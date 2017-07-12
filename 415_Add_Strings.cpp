class Solution {
public:
    string addStrings(string num1, string num2) {
        // string ans = "";
        // reverse(num1.begin(), num1.end());
        // reverse(num2.begin(), num2.end());
        // int i = 0, j = 0;
        // int carry = 0;
        // while (i < num1.length() && j < num2.length()) {
        //     ans = to_string(((num1[i] - '0') + (num2[j] - '0') + carry) % 10) + ans;
        //     carry = ((num1[i] - '0') + (num2[j] - '0') + carry) / 10;
        //     ++i; ++j;
        // }
        // while (i < num1.length()) {
        //     ans = to_string(((num1[i] - '0') + carry) % 10) + ans;
        //     carry = (num1[i] - '0' + carry) / 10;
        //     ++i;
        // }
        // while (j < num2.length()) {
        //     ans = to_string(((num2[j] - '0') + carry) % 10) + ans;
        //     carry = (num2[j] - '0' + carry) / 10;
        //     ++j;
        // }
        // if (carry)
        //     ans = to_string(carry % 10) + ans;
        // return ans;

        string ans = "";
        int i = num1.length() - 1, j = num2.length() - 1;
        int carry = 0;
        while (i >= 0 && j >= 0) {
            ans = to_string(((num1[i] - '0') + (num2[j] - '0') + carry) % 10) + ans;
            carry = ((num1[i] - '0') + (num2[j] - '0') + carry) / 10;
            --i; 
            --j;
        }
        while (i >= 0) {
            ans = to_string(((num1[i] - '0') + carry) % 10) + ans;
            carry = (num1[i] - '0' + carry) / 10;
            --i;
        }
        while (j >= 0) {
            ans = to_string(((num2[j] - '0') + carry) % 10) + ans;
            carry = (num2[j] - '0' + carry) / 10;
            --j;
        }
        if (carry)
            ans = to_string(carry % 10) + ans;
        return ans;

    }
};