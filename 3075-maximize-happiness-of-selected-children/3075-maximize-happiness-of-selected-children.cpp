class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        long long ans = 0;
        sort(happiness.rbegin(), happiness.rend());
        for(int i = 0; i <happiness.size()  && k > 0; i++, k--){
            if(happiness[i] - i > 0) ans += happiness[i] - i;
        } 
        return ans;
    }
};