class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v=nums;
        int n=v.size();
        int t=target;
        vector<int> ans;
        int i;
        vector< pair<int,int> > vv;
        for(i=0;i<n;i++)
        {
            vv.push_back({v[i],i});
        }
        sort(vv.begin(),vv.end());
        int x,y;
        for(i=0;i<n;i++)
        {
            x=vv[i].second;
            y=t-vv[i].first;
            
            for(int j=i+1;j<n;j++)
            {
                if(vv[j].first==t-vv[i].first)
                {
                    ans.push_back(x);
                    ans.push_back(vv[j].second);
                    break;
                }
            }
        }
       return ans; 
    }
};