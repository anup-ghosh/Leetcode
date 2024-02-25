class Solution {
public:
    bool isPossibleToSplit(vector<int>& v) {
        int n=v.size();
        map<int,int> mp;
        for(auto x:v)mp[x]++;
        // if(mp.size()==n/2){
        //     return true;
        // }
        // return false;
        for(auto x:mp){
            if(x.second>1 and x.second>2)return false;
        }
        return true;
    }
};