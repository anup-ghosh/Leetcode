class Solution {
public:
    string makeSmallestPalindrome(string s) {
         int n = s.length();
        
        for (int i = 0, j = n - 1; i < j; i++, j--) {
            if (s[i] != s[j]) {
                char smallerChar = min(s[i], s[j]);
                s[i] = s[j] = smallerChar;
            }
        }
        
        return s;
    }
};