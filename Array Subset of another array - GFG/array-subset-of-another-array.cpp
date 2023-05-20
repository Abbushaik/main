//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

string isSubset(int a1[], int a2[], int n, int m) ;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, m;
        cin >> n >> m;
        int a1[n], a2[m];

        for (int i = 0; i < n; i++) {
            cin >> a1[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> a2[i];
        }

        cout << isSubset(a1, a2, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends

bool binarysearch(int arr[],int l,int h,int key)
{
    while(l<=h)
    {
        int mid = (l + h)/2;
        if(arr[mid]==key)
        {
            arr[mid]=0;
            return true;
            
        }
        else if(arr[mid] > key)
        {
           h=mid-1;   
        }
        else
        {
            l = mid+1;
        }
    }
    return false;
}
string isSubset(int a1[], int a2[], int n, int m) 
{
    sort(a1,a1+n);
    sort(a2,a2+m);
    int cnt=m;
    bool flag=0;
    for(int i=0;i<m;i++)
    {
        flag=binarysearch(a1,0,n,a2[i]);
        if(flag==true)
        {
            --cnt;
        }
    }
    if(cnt==0)
     return "Yes";
    return "No";
}