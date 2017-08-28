class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // int i = 0, j = 0;
        // int len = nums.size();
        // while (j < len) {
        //     if (nums[j] != val)
        //         nums[i++] = nums[j];
        //     ++j;
        // }
        // return i;
        int len = nums.size();
        int i = 0;
        while (i < len) {
            if (nums[i] == val) {
                nums[i] = nums[len - 1];
                len--;
            } else {
                ++i;
            }
        }
        return len;
    }
};