class Solution {
public:
    double myPow(double a, int b) 
    {
        double ans=1.0;
        long long nn=b;
        double temp=2;
        if(nn<0)
           nn=-1*nn;
        while(nn)
        {
            if(nn % 2)
            {
                ans = ans * a;
                nn=nn-1;
            }
            else
            {
                a=a*a;
                nn=nn/2;
            }
        }
        if(b<0) 
            return (double)(1.0)/(double)(ans);
        return (double)ans;
    }
};