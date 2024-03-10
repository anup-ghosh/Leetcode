class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        set<int> ans;
        vector<int> ans1;
        for(auto x:nums2)
        {
            if(binary_search(nums1.begin(),nums1.end(),x))
            ans.insert(x);
        }
        for(auto x:ans)
        ans1.push_back(x);
        return ans1;
    }
};