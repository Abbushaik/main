//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string armstrongNumber(int n)
    {
        int digit;
        int temp=n;
        int s=temp;
        while(temp)
        {
            digit++;
            temp/=10;
        }
        int ans=0;
        while(s)
        {
            int r = s%10;
              ans+=int(pow(r,digit));
              s/=10;
        }
        if(ans==n)
          return "Yes";
         return "No";
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.armstrongNumber(n) << endl;
    }
    return 0;
}

// } Driver Code Ends