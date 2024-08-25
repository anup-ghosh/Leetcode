class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int m) {
        for(int i=0;i<k;i++){
            int mn = *min_element(nums.begin(),nums.end());
            for(int j=0;j<nums.size();j++){
                if(nums[j]==mn){
                    nums[j] = mn*m;
                    break;
                }
            }
        }
        return nums;
    }
};