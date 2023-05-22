class Solution {
public:
    int minLength(string s) {
      int n = s.length();
    int i = 0;
    
    while (i < n - 1) {
        if ((s[i] == 'A' && s[i + 1] == 'B') || (s[i] == 'C' && s[i + 1] == 'D')) {
            s.erase(i, 2);
            n -= 2;
            i = max(0, i - 1);
        } else {
            i++;
        }
    }
    
    return n;
    
    }
};