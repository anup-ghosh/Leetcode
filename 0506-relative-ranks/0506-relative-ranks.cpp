class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> ans=score;
        vector<string> res;
        sort(score.rbegin(),score.rend());
        map<int,string>mp;
        for(int i=0;i<score.size();i++){
            if(i==0){
                mp[score[i]]="Gold Medal";
            }
            else if(i==1)mp[score[i]]="Silver Medal";
            else if(i==2)mp[score[i]]="Bronze Medal";
            else{
                string ss=to_string(i+1);
                mp[score[i]]=ss;
            }
        }
        for(auto x:ans){
            res.push_back(mp[x]);
        }
        return res;
    }
};