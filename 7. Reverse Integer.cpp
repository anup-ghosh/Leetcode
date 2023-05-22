class Solution {
public:
    int reverse(int x) {
        int p=0;
        if(x==INT_MAX)
        {
            return 0;
        }
        if(x<0)
        {
            p=1;
        }
        int n=abs(x);
        int ans=0;
        int t=10;
        int r=0;
        
        while(n>0)
        {
            if( r>(INT_MAX/10) || r>( (INT_MAX/10)+n%10) ) 
                return 0;
            r=r*10 + n%10;
            n=n/10;
            
        }
        if(p)r*=-1;
        return r;
    }
};