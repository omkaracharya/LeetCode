class Solution {
public:
    int addDigits(int num) {
        /*
        int sum = 0;
        while (num) {
            sum += num % 10;
            num /= 10;
        }
        if (sum > 9)
            return addDigits(sum);
        else
            return sum;
        */
        return 1 + (num - 1) % 9;
    }
};