class Solution {
public:
    int divide(int dividend, int divisor) {
        if (!divisor || (dividend == INT_MIN && divisor == -1))
            return INT_MAX;
        bool negative = true;
        if ((dividend < 0 && divisor < 0) || (dividend > 0 && divisor > 0))
            negative = false;
        int ans = 0;
        long long dvd = labs(dividend);
        long long dvs = labs(divisor);
        
        while (dvd >= dvs) {
            long long temp = dvs;
            long long multiple = 1;
            while (dvd >= (temp << 1)) {
                temp <<= 1;
                multiple <<= 1;
            }
            dvd -= temp;
            ans += multiple;
        }
        
        return negative ? -ans : ans;
        
    }
};