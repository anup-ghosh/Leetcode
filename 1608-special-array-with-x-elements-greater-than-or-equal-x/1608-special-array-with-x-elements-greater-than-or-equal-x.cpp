class Solution {
public:
    int specialArray(vector<int>& nums) {
      int n=nums.size();
      int ans   = n;
      sort(nums.begin(),nums.end());
      reverse(nums.begin(),nums.end());
      for(int i=0;i<=n;i++)
      {
          int cn=0;
          for(int j=0;j<n;j++)
          {
              if(nums[j]>=i)
              {
                  cn++;
              }
              
          }
          if(cn==i)
              {
                  return i;
              }
      }
      return -1;
    }
};