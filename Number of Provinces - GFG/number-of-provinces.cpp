//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
  void dfs(int u,vector<vector<int>>& arr,vector<int>&v)
{
    v[u]=1;
    int n=arr.size();
    for(int i=0;i<n;i++)
    {
        if(arr[u][i]==1 &&  v[i]==0)
        {
           dfs(i,arr,v);
        }
    }
}
    int numProvinces(vector<vector<int>> adj, int V)
    {
         int n = V;  
        int cnt=0;
        vector<int>vis(n,0);
        for(int i=0;i<n;i++)
        {
           if(!vis[i])
           {
              cnt++;
              dfs(i,adj,vis);
           }
        }
        return cnt;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int V,x;
        cin>>V;
        
        vector<vector<int>> adj;
        
        for(int i=0; i<V; i++)
        {
            vector<int> temp;
            for(int j=0; j<V; j++)
            {
                cin>>x;
                temp.push_back(x);
            }
            adj.push_back(temp);
        }
        

        Solution ob;
        cout << ob.numProvinces(adj,V) << endl;
    }
    return 0;
}
// } Driver Code Ends