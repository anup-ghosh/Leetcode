class Solution {
public:
    string reversePrefix(string s, char c) {
        string ans="";
        bool f=0;
        for(int i=0;i<s.size();i++)
        {
            ans+=s[i];
            if(f==0 and s[i]==c){
                reverse(ans.begin(),ans.end());
                f=1;
            }
        }
        return ans;
    }
};