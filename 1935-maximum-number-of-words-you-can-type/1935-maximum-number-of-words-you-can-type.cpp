class Solution {
public:
    int canBeTypedWords(string s, string br) {
        vector<string> ss;
        map<char,int> mp;
        for(int i=0;i<br.size();i++)
        {
            mp[br[i]]++;
        }
        int ans=0;
        // mp[' ']++;
        bool f=true;
        for(int i=0;i<s.size();i++){
            if(mp[s[i]]){
                f=false;
            }
            if(s[i]==' ' or i==s.size()-1){
                if (f)ans++;
                f = true;
            }
        }
        return ans;
    }
};