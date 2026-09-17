class Solution {
    public char findTheDifference(String s, String t) {
        long asciiLenS = 0;
        long asciiLenT = 0;

        for (char ch : s.toCharArray()) {
            asciiLenS += ch;
        }

        for (char ch : t.toCharArray()) {
            asciiLenT += ch;
        }

        long diff = asciiLenS - asciiLenT;

        return (char) Math.abs(diff);       
    }
}