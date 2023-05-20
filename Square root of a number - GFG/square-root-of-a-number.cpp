//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

  

// } Driver Code Ends
// Function to find square root
// x: element to find square root
class Solution{
  public:
    long long int floorSqrt(long long int num) 
    {
	   long long int indx=1;
	    while(indx<=num)
     	{
		   if(indx*indx==num|| indx*indx>num)
	 	   {
		     	break;
		   }
		    else
			 indx++;
	     }
	    if(indx*indx==num)
	     	return indx;
	    else
		  return indx-1;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		long long n;
		cin>>n;
		Solution obj;
		cout << obj.floorSqrt(n) << endl;
	}
    return 0;   
}

// } Driver Code Ends