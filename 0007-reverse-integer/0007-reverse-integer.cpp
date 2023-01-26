class Solution {
public:
    int reverse(int x) 
    {
        long int rev=0,r;
        long int max=INT_MAX;
        long int min=INT_MIN;
        while(x!=0)
        {
            r=x%10;
            rev=rev*10 + r;
            x/=10;
        }
        return (rev<max)&& (rev>min)? rev:0;
    }
};