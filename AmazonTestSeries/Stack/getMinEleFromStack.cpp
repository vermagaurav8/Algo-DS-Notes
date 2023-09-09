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
    int minEle;
    stack<int> s;
    public:
    
       /*returns min element from stack*/
       int getMin(){
           
           //Write your code here
            if(s.size()!= 0)
            {
                return s.top();
            }
            
            return -1;
        }
       
       /*returns poped element from stack*/
       int pop(){
           
           //Write your code here
            if(s.size()!= 0)
            {
                s.pop();
                int topVal = s.top();
                s.pop();
                return topVal;
            }
            return -1;
       }
       
       /*push element x into the stack*/
       void push(int x){
           
           //Write your code here
            if(s.size() == 0 || s.top()>x)
            {   
                s.push(x);
                s.push(x);
            }
            else
            {
                int topVal = s.top();
                s.push(x);
                s.push(topVal);
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