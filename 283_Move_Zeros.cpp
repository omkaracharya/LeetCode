class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int zero_count = 0;
        for (int n: nums) {
            if (!n)
                zero_count++;
        }
        
        int i = 0;
        int position = 0;
        while (i < nums.size() - zero_count && position < nums.size()) {
            if (nums[position]) {
                nums[i] = nums[position];
                i++;
            }
            position++;
        }
        
        for (; i < nums.size(); ++i)
            nums[i] = 0;
    }
};