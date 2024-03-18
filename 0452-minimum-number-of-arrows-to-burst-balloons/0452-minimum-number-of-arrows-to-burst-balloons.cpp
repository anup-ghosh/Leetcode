class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
         if(p.size() == 0) return 0;
        sort(p.begin(), p.end());
        int lp = p[0][1];
        int ans = 1;
        for(auto x : p) {
            if(x[0] > lp) {
                ans++;
                lp = x[1];
            }
            lp = min(x[1],lp);
        }
        return ans;
    }
};