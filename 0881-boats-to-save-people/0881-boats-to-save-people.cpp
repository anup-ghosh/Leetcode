class Solution {
public:
    int numRescueBoats(vector<int>& p, int limit) {
        sort(p.begin(),p.end());
        int ans=0;
        int l=0;
        int r=p.size()-1;
        while(l<=r){
            int pp=p[l]+p[r];
            if(pp<=limit){
                ans++;
                r--;
                l++;
            }
            else{
                ans++;
                r--;
            }
        }
        return ans;
        
    }
};