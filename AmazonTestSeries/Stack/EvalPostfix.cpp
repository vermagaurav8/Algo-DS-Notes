//{ Driver Code Starts
// C++ program to evaluate value of a postfix expression

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        // Your code here
        stack <int> val;
        int res = 0;
        
        for(int i = 0; i < S.size(); i++) {
            if(S[i]=='+' || S[i]=='*' || S[i]=='-' || S[i]=='/'){
                int a=val.top();
                val.pop();
                int b=val.top();
                val.pop();
                if(S[i]=='+'){
                    res=b+a;
                    val.push(res);
                }
                if(S[i]=='-'){
                    res=b-a;
                    val.push(res);
                }
                if(S[i]=='*'){
                    res=b*a;
                    val.push(res);
                }
                if(S[i]=='/'){
                    res=b/a;
                    val.push(res);
                }
            } else {
                val.push(S[i]-'0');
            }
        }
        return res;
    }
};

//{ Driver Code Starts.

// Driver program to test above functions
int main()
{
    int t;
    cin>>t;
    cin.ignore(INT_MAX, '\n');
    while(t--)
    {
        string S;
        cin>>S;
        Solution obj;
    
    cout<<obj.evaluatePostfix(S)<<endl;
    }
    return 0;
}

// } Driver Code Ends