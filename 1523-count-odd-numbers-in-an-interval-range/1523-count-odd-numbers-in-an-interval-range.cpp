class Solution {
public:
    int countOdds(int low, int high) {
        return floor((high + 1) / 2) - floor(low / 2);
    }
};