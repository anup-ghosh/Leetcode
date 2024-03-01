class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int n=s.size();
        int on=0;
        for(int i=0;i<n;i++)
        {
            on+=(s[i]=='1');
        }
        
        string ans="";
        for(int i=0;i<on-1;i++)
        {
            ans+='1';
        }
        for(int i=on-1;i<n-1;i++)ans+='0';
        if(on)
            ans+='1';
        return ans;
    }
};