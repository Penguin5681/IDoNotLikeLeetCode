class Solution {
public:
    static bool isVowel(char ch) {
        return ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u' or
               ch == 'A' or ch == 'E' or ch == 'I' or ch == 'O' or ch == 'U';
    }

public:
    string reverseVowels(string s) {
        int left = 0;
        int right = s.size() - 1;

        while (left <= right) {
            if (isVowel(s[left]) and isVowel(s[right])) {
                swap(s[left], s[right]);
                left++;
                right--;
            } else if (!isVowel(s[left]) or isVowel(s[right]))
                left++;
            else if (isVowel(s[left]) or !isVowel(s[right]))
                right--;
            else {
                left++;
                right--;
            }
        }
        return s;
    }
};