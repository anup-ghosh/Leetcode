class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> hh = heights;
        sort(hh.begin(),hh.end());
        int ans = 0;
        for(int i = 0; i < hh.size() ; i++){
            if(hh[i] != heights[i]){
                ans++;
            }
        }
        return ans;
    }
};