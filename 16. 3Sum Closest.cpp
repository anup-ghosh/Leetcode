class Solution {
 public:
  int threeSumClosest(vector<int>& nums, int target) {
    vector<int> ans;
    int ccc = INT_MAX, an;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      int j = i + 1;
      int k = nums.size() - 1;
      while (j < k) {
        int t = nums[i] + nums[j] + nums[k];
        if (abs(target - t) < ccc) {
          an = t;
          ccc = abs(target - t);
        }
        if (t == target)
          return t;
        else if (t > target)
          k--;
        else
          j++;
      }
    }

    return an;
  }
};