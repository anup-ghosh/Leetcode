class Solution {
public:
    string customSortString(string order, string s) {
        map<char,int> mp;
        for(auto x:s)mp[x]++;
        string ans="";
        for(auto x:order){
            while(mp[x]){
                ans+=x;
                mp[x]--;
            }
        }
        for(auto x:s){
            if(mp[x])ans+=x;
        }
        return ans;
    }
};