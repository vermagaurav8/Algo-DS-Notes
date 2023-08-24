//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
#define MAX 1000

// } Driver Code Ends
class Solution
{
    public:
    /*You are required to complete this method*/
    int findK(int matrix[MAX][MAX],int n,int m,int k)
    {
 		// Your code goes here.
 		vector<int> a;
        
        int top, down, left,right;
        int direction = 0;
    
        top = 0;
        down = n-1;
        left = 0;
        right = m-1;
        
        while(left<=right && top <= down) {
            if(direction == 0) {
                for(int i = left;i<=right;i++) {
                    a.push_back(matrix[top][i]);
                }
                top++;
            }
            
            else if(direction == 1) {
                for(int i = top; i<=down;i++) {
                    a.push_back(matrix[i][right]);
                }
                right--;
            }
            
            else if(direction == 2) {
                for(int i = right ; i>=left;i--) {
                    a.push_back(matrix[down][i]);
                }
                down--;
            }
            
            else if(direction == 3) {
                for(int i = down; i>=top;i--) {
                    a.push_back(matrix[i][left]);
                }
                left++;
            }
            
            direction = (direction+1)%4;
        }
        
        return a[k-1];

    }
};





//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n,m;
        int k=0;
        //cin>>k;
        cin>>n>>m>>k;
        int a[MAX][MAX];
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>a[i][j];
            }
        }
        Solution ob;
        cout<<ob.findK(a,n,m,k)<<endl;
        
       
    }
}
// } Driver Code Ends