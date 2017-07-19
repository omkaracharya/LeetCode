class Solution {
public:
    bool isPerfectSquare(int num) {
        return binary_search(0, num, num);
    }
    
    bool binary_search(long left, long right, long num) {
        if (left > right)
            return false;
        long mid = left + (right - left) / 2;
        if (mid * mid == num)
            return true;
        else if (mid * mid > num)
            return binary_search(left, mid - 1, num);
        return binary_search(mid + 1, right, num);
    }
};