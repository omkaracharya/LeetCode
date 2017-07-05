class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // unordered_map <int, int> hashmap;
        // for (int x: nums)
        //     hashmap[x]++;
        // int threshold = ceil(nums.size() / 2);
        // for (int x: nums)
        //     if (hashmap[x] > threshold)
        //         return x;
        // return 0;
        int count = 1;
        int majority = nums[0];
        
        for (int i = 1; i < nums.size(); ++i) {
            if (!count) {
                count++;
                majority = nums[i];
            } else if (majority == nums[i]) {
                count++;
            } else {
                count--;
            }
        }
        return majority;
        
    }
};