//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:	
		
	int print2largest(int arr[], int n) 
	{
	    int fLargest=-1,sLargest=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(arr[i]>fLargest)
	        {
	            sLargest=fLargest;
	            fLargest=arr[i];
	        }
	        else if(arr[i]<fLargest && arr[i]>sLargest)
	        {
	            sLargest=arr[i];
	        }
	    }
	    return sLargest;
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends