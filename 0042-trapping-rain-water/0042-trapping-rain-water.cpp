class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> h=height;
        int n=h.size();
        vector<int> left;
        vector<int> right;
        left.push_back(h[0]);
        right.push_back(h[n-1]);
        int mx=h[0];
        for(int i=1;i<n;i++)
        {
            mx=max(mx,h[i]);
            left.push_back(mx);
        }
        mx=h[n-1];
        for(int i=n-2;i>=0;i--)
        {
            mx=max(mx,h[i]);
            right.push_back(mx);
        }
        reverse(right.begin(),right.end());
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=min(left[i],right[i])-h[i];
        }
        return sum;
    }
};