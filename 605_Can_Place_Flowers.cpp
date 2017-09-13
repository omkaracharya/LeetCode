class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        for (int i = 0; i < flowerbed.size(); ++i) {
            if (flowerbed[i] == 0) {
                int prev = 0, next = 0;
                if (i != 0) prev = flowerbed[i - 1];
                if (i != flowerbed.size() - 1) next = flowerbed[i + 1];
                if (!prev && !next) {
                    flowerbed[i] = 1;
                    n--;
                }
            }
        }
        return n <= 0;
    }
};