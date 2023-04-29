//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*
The structure of the class is as follows
class _stack{
stack<int> s;
int minEle;
public :
    int getMin();
    int pop();
    void push(int);
};
*/

class Solution{
    stack<int>s;
     public:
     int mini;
       int getMin()
       {
           if(s.empty())
           return -1;
           return mini;
       }
       int pop()
       {
           int temp = -1;
          if(s.empty())
          return -1;
          else
          {
              if(s.top()>=mini)
              {
                  temp=s.top();
                  s.pop();
              }
              else if(s.top()<mini)
              {
                  temp=mini;
                  mini=(2*mini)-s.top();
                  s.pop();
                  return temp;
              }
          }
          return temp;
       }
       void push(int x)
       {
           if(s.empty())
           {
               s.push(x);
               mini=x;
           }
           else if(x >=mini)
           {
               s.push(x);
           }
           else if(x<mini)
           {
               s.push(2*x-mini);
               mini=x;
           }
       }
};

//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int q;
        cin>>q;
        Solution ob;
        while(q--){
           int qt;
           cin>>qt;
           if(qt==1)
           {
              //push
              int att;
              cin>>att;
              ob.push(att);
           }
           else if(qt==2)
           {
              //pop
              cout<<ob.pop()<<" ";
           }
           else if(qt==3)
           {
              //getMin
              cout<<ob.getMin()<<" ";
           }
       }
       cout<<endl;
    }
    return 0;
}

// } Driver Code Ends