class Solution {
public:
    int fib(int n) {

        return std::round(std::pow(((1 + std::sqrt(5)) / 2.0), n) /
                          std::sqrt(5));
    }
};