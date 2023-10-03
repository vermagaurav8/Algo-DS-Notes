//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int arr[], int n, int X)
    {
        //Your Code Here
        bool found = false;
        sort(arr, arr+n);
        
        for(int i = 0; i < n; i++) {
            int l = i+1, r = n-1, x = arr[i];
            while( l < r) {
                if((x+arr[l]+arr[r]) == X) {
                    l++, r--;
                    found = true;
                    break;
                } 
                else if((x+arr[l]+arr[r]) < X) 
                    l++;
                else
                    r--;
            }
            if(found)
                break;
        }
        return found;
    }

};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		int n,X;
		cin>>n>>X;
		int i,A[n];
		for(i=0;i<n;i++)
			cin>>A[i];
		Solution ob;
        cout <<  ob.find3Numbers(A, n, X) << endl;
    }
}

// } Driver Code Ends