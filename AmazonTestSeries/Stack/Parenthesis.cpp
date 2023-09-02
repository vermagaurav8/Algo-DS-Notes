//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
    //Function to check if brackets are balanced or not.
    bool ispar(string str)
    {
        // Your code here
        stack<char>st;
	    for(int i=0;i<str.size();i++)
	    {
	        if(st.empty()) 
	            st.push(str[i]);
	        else
	        {
	            if(str[i]==')' && st.top()=='(') st.pop();
	            else if(st.top()=='{' && str[i]=='}') st.pop();
	            else if(st.top()=='[' && str[i]==']') st.pop();
	            else st.push(str[i]);
	        }
	    }
	    if(st.empty()) return true;
	    else return false;
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends