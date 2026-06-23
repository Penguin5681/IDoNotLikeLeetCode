class Solution {
public:
    int getDigitSum(int num) {
        int sum = 0;
        while (num) {
            int digit = num % 10;
            sum += (digit * digit);
            num /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        unordered_set<int> storedSums;
        while (storedSums.find(n) == storedSums.end()) {
            storedSums.insert(n);
            n = getDigitSum(n);
            if (n == 1) {
                return true;
            }
        }
        return false;
    }
};