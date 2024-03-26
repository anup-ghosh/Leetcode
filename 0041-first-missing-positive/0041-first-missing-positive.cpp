class Solution {
public:
    static int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        bool with1=0;
        for(int& x: nums){
            if(x==1) with1=1;
            else if (x<=0 || x>n) x=1;
        }
        if (!with1) return 1;

        unsigned bitMask=(1<<17)-1;//>10^5>=n all bit 0~ bit 16 set
        for (int x: nums){
            int next=(x&bitMask)%n;//mod n
            nums[next]|=(1<<17); // mark as seen by setting bit 17
        }
        
        for (int i=1; i<n; i++)
            if ((nums[i]>>17)==0) return i;//i not seen
        if ((nums[0]>>17)==0) return n; // n is missing
        return n+1;
    }
};


auto init = []() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    return 'c';
}();