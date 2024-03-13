class Solution {
public:
    int pivotInteger(int n) {
        int x=0;
        for(int i=n;i>=1;i--)
        {
            x+=i;
            int z=(i)*(i+1);
            z/=2;
            // cout<<z<<" "<<x<<endl;
            if(x==z)
                return i;
        }
        return -1;

    }
};