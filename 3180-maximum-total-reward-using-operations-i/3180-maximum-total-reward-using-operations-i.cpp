
class Solution {
public:
    int maxTotalReward(  vector<int>& rewardValues) {
          sort(rewardValues.begin(), rewardValues.end());
          set<int>   ans{0};
        for (int reward : rewardValues) {
            set<int>   parr;
            for (int x :   ans) {
                if (reward > x) {
                      parr.insert(x + reward);
                }
            }

              ans.insert(  parr.begin(),   parr.end());
        }
        return *max_element(  ans.begin(),  ans.end()   );
    }
};
