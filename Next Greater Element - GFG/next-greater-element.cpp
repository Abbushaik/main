//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        vector<long long>ans(arr.size());
        vector<long long>ans1(arr.size());
        stack<int>stk;
        for(int i=0;i<n;i++)
        {
            while(!stk.empty() && arr[i] > arr[stk.top()])
            {
                ans[stk.top()]=i;
                stk.pop();
            }
            stk.push(i);
        }
        for(int i=0;i<ans.size();i++)
        {
            if(ans[i]==0)
            ans1[i]=-1;
            else
            ans1[i]=arr[ans[i]];
        }
        return ans1;
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++)
            cin>>arr[i];
        
        Solution obj;
        vector <long long> res = obj.nextLargerElement(arr, n);
        for (long long i : res) cout << i << " ";
        cout<<endl;
    }
	return 0;
}
// } Driver Code Ends