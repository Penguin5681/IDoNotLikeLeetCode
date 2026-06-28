class Solution {
public:
    int maxArea(vector<int>& height) {
        int resl = 0;
        int left = 0;
        int right = height.size() - 1;
        while (left <= right) {
            int currArea = (right - left) * min(height[left], height[right]);
            resl = max(currArea, resl);
            if (height[left] < height[right]) {
                left++;
            } else right--;
        }

        return resl;
    }
};