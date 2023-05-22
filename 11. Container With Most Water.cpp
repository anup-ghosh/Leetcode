class Solution {
 public:
  int maxArea(vector<int>& height) {
    vector<int> h = height;
    int n = h.size();
    int ans = 0;
    int i = 0, j = n - 1;
    while (i <= j) {
      int x = min(h[i], h[j]);
      ans = max(ans, (j - i) * x);
      if (h[i] == x)
        i++;
      else
        j--;
    }
    return ans;
  }
};