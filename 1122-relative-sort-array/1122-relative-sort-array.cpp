class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        
        map<int,int> mp,mp2;
        vector<pair<int,int>> vc;
        vector<int> vv,ans;
        
        for(int i = 0; i < arr2.size() ; i++){
            mp[arr2[i]] = i+1;
            // mp2[arr2[i]]++;
        }
        for(int i = 0; i<arr1.size(); i++){
            if(mp[arr1[i]]==0)vv.push_back(arr1[i]);
            else{
                vc.push_back({mp[arr1[i]],arr1[i]});
            }
        }
        sort(vv.begin(),vv.end());
        sort(vc.begin(),vc.end());
        
        for(int i=0; i<vc.size() ; i++){
            ans.push_back(vc[i].second);
        }
        for(int i=0;i<vv.size();i++){
            ans.push_back(vv[i]);
        }
        return ans;
    }
};