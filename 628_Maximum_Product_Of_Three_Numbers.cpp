class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        // int size = nums.size();
        // sort(nums.begin(), nums.end());
        // return max(nums[0] * nums[1] * nums[size - 1], nums[size - 1] * nums[size - 2] * nums[size - 3]);
        
        int max1, max2, max3, min1, min2;
        max1 = max2 = max3 = INT_MIN;
        min1 = min2 = INT_MAX;
        
        int size = nums.size();
        for (int i = 0; i < size; ++i) {
            int number = nums[i];
            if (number > max1) {
                max3 = max2;
                max2 = max1;
                max1 = number;
            } else if (number > max2) {
                max3 = max2;
                max2 = number;
            } else if (number > max3) {
                max3 = number;
            }
            
            if (number < min1) {
                min2 = min1;
                min1 = number;
            } else if (number < min2) {
                min2 = number;
            }
        }
        return max(max1 * max2 * max3, max1 * min1 * min2);
        
    }
};