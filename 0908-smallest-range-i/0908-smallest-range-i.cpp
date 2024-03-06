class Solution {
public:
    int smallestRangeI(vector<int>& a, int k) {
        sort(a.begin(),a.end());
        int x=a[0];
        int y=a[a.size()-1];
        int ans=y-x-(2*k);
        return max(0,ans);
    }
};