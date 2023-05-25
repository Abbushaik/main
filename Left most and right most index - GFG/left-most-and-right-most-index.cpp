//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    pair<long,long> indexes(vector<long long> arr, long long x)
    {
        pair<int,int>p;
        int l=0,h=arr.size()-1;
        while(arr[l]!=x && l<arr.size())
        {
            l++;
        }
        while(arr[h]!=x && h>=0)
        {
            h--;
        }
        if(arr[l]==x && arr[h]==x)
        {
          p.first=l;
          p.second=h;
          return p;
        }
        return {-1,-1};
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends