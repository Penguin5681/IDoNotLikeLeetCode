class Solution {
public:
    int rob(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }

        return max(robInRange(nums, 0, nums.size() - 2), robInRange(nums, 1, nums.size() - 1));
    }

    int robInRange(vector<int> &nums, int start, int end) {
        int prevMaximum = 0;
        int currMaximum = 0;

        for (int i = start; i <= end; i++) {
            int temp = max(prevMaximum, currMaximum);
            currMaximum = nums[i] + prevMaximum;
            prevMaximum = temp;
        }

        return max(prevMaximum, currMaximum);
    }
};