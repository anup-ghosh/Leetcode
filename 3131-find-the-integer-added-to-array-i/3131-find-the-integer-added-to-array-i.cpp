class Solution {
public:
    int addedInteger(vector<int>& nums1, vector<int>& nums2) {
        int a=0,b=0;
        for(int i=0;i<nums1.size();i++)a+=nums1[i];
        for(int i=0;i<nums2.size();i++)b+=nums2[i];
        int ans=b-a;
        int n=nums1.size();
        cout<<b<<" "<<a<<" "<<ans<<endl;
        cout<<nums1.size()<<endl;
        int res=ans/n;
        cout<<res<<endl;
        return res;
    }
};