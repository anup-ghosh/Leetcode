class Solution {
public:
    int findMaxK(vector<int>& nums) {
        vector<int> min,mx;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                min.push_back(nums[i]);
                mp[abs(nums[i])]++;
            }
            else mx.push_back(nums[i]);
        }
        sort(mx.rbegin(),mx.rend());
        for(int i=0;i<mx.size();i++){
            if(mp[mx[i]]){
                return mx[i];
            }
        }
        return -1;
        
    }
};