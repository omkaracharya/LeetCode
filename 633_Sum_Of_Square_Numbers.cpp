class Solution {
public:
    bool judgeSquareSum(int c) {
        for (long i = 0; i * i <= c; ++i) {
            int b = c - (int)(i * i);
            if (binary_search(0, b, b))
                return true;
        }
        return false;
    }
    
    bool binary_search(long left, long right, int num) {
        if (left > right) {
            return false;
        }
        long mid = left + (right - left) / 2;
        if (mid * mid == num)
            return true;
        else if (mid* mid > num)
            return binary_search(left, mid - 1, num);
        return binary_search(mid + 1, right, num);
    }
};