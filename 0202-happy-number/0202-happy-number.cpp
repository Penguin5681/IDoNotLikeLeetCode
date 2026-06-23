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
        int slow = n;
        int fast = n;
        do {
            slow = getDigitSum(slow);
            fast = getDigitSum(getDigitSum(fast));
        } while (slow != fast);

        return slow == 1; 
    }
};