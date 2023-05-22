class Solution {
 public:
  string longestCommonPrefix(vector<string>& strs) {
    vector<string> s = strs;
    int n = s.size();
    int i, j;
    int ans = s[0].size();
    for (i = 0; i < n; i++) {
      j = 0;
      while (j < s[i].size() && s[0][j] == s[i][j]) {
        j++;
      }
      ans = min(ans, j);
    }
    return s[0].substr(0, ans);
  }
};