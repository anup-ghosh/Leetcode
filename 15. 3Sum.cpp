class Solution {
 public:
  vector<vector<int>> threeSum(vector<int>& nums) {
    vector<int> a;
    vector<vector<int>> ans;
    set<vector<int>> s;
    sort(nums.begin(), nums.end());
    for (int i = 0; i < nums.size(); i++) {
      int j = i + 1;
      int k = nums.size() - 1;
      while (j < k) {
        int x = nums[i] + nums[j] + nums[k];
        if (x == 0) {
          s.insert({nums[i], nums[j], nums[k]});
          j++;
          k--;
        } else if (x < 0) {
          j++;
        } else
          k--;
      }
    }
    for (auto x : s) ans.push_back(x);
    return ans;
  }
};