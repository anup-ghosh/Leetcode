class Solution {
public:
    bool alm(int a,int b){
        string x,y;
        x = to_string(a);
        y = to_string(b);
        int n = x.size();
        int m = y.size();
        int mx = max(n,m);
        while(n < mx){
            x = "0"+x;
            n++;
        }
        while(m < mx){
            y = "0"+y;
            m++;
        }
        unordered_map<char,int>mp,mp1;
        int dd = 0;
        for(int i=0;i<mx;i++){
            dd += (x[i] != y[i]);
            mp[x[i]]++;
            mp1[y[i]]++;
        }
        return dd <=2 && mp == mp1;
    }
    int countPairs(vector<int>& nums) {
        
        int n = nums.size();
        int ans = 0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++)
            {
                ans+=alm(nums[i],nums[j]);
            }
        }
        return ans;
    }
};