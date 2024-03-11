class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int sum=0;
        sort(capacity.rbegin(),capacity.rend());
        for(auto c:apple)sum+=c;
        int ans=0;
        for(auto x:capacity){
            sum-=x;
            ans++;
            if(sum<=0){
                return ans;
            }
        }
        return ans;
    }
};