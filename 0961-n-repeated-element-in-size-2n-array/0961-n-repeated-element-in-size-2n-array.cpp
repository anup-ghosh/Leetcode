class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if( ++mp[nums[i]]>1)
                return nums[i];
        }
        return 0;
    }
};