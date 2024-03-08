class Solution {
public:
    int findMiddleIndex(vector<int>& v) {
        int n=v.size();
        int sum=0;
        for(int i=0;i<n;i++){
            sum+=v[i];
        }
        int l=0;
        for(int i=0;i<n;i++){
            int r=sum-l-v[i];
            if(l==r)return i;
            l+=v[i];
        }
        return -1;
    }
};