class Solution {
 public:
  bool isPalindrome(int x) {
    string s = to_string(x);
    int n = s.size();
    string s2 = s;
    reverse(s2.begin(), s2.end());
    if (s2 == s) {
      return true;
    } else
      return false;
  }
};