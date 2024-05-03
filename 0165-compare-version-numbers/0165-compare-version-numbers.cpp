class Solution {

public:
int rem(string s)
{
    int x;
    for(int i=0;i<s.size();i++)
    {
        x=stoi(s);
    }
    return x;
}
vector<int> vvv(string version)
{
    vector<int> v1;
    int i;string ss="";
    int n=version.size();
        
        for( i=0 ;i<n;i++)
        {
            
            if(version[i]!='.' && i!=n-1)
            {
                ss+=version[i];
            }
            if(version[i]=='.' || i==n-1)
            {
                if(i==n-1)
                {
                    ss+=version[i];
                }
                int x=rem(ss);
                v1.push_back(x);
                ss="";
            }
        }
        return v1;
}
    int compareVersion(string version1, string version2) {
        vector<int> v1=vvv(version1);
        vector<int> v2=vvv(version2);
        
        int n=v1.size();
        int m=v2.size();
        int x=abs(n-m);
        if(n>m)
        {
            for(int i=0;i<x;i++)
            {
                v2.push_back(0);
            }
        }
        else
        {
            for(int i=0;i<x;i++)v1.push_back(0);
        }
        // for(auto pp:v1)
        // {
        //     cout<<pp<<" ";
        // }
        // cout<<endl;
        // for(auto pp:v2)
        // {
        //     cout<<pp<<" ";
        // }
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]>v2[i])
            {
                return 1;
            }
            else if(v1[i]<v2[i])
            {
                return -1;
            }
        }
        return 0;
    }
};