class Solution {
public:
    int hammingDistance(int x, int y) {
        bitset <32> foo(x ^ y);
        return foo.count();
    }
};