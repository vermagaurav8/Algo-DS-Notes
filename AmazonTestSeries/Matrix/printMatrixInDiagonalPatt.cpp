//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
/*You are required to complete this method */

class Solution{
  public:
    vector<int> matrixDiagonally(vector<vector<int>>&mat)
    {
         //Your code here
    vector<int >v;
         bool pen=1;
         int i=0;
         int j=0;
         int c=mat.size()-1;
         while(i<mat.size() && j<mat.size()){
             if(pen==1){                    // pen is true means  moving upwards  
                 while(j<c && i>0){
                     v.push_back(mat[i][j]);
                     j++;
                     i--;
                 }
                 v.push_back(mat[i][j]);
                 if( j==c ){                // increamenting i or j to next diagonal 
                     i++;
                 }
                 else{
                     j++;
                 }
                 pen=0;
             }
             else{                         //  pen is false means  moving downwards  
                   while(i<c && j>0){
                       v.push_back(mat[i][j]);
                     j--;
                     i++;
                 }
                 v.push_back(mat[i][j]);
                 if(j==0 && i<c){         // increamenting i or j to next diagonal 
                     i++;
                 }
                 else{
                 j++;
                 }
                 pen=1;
            }
        }
         
        return v;
    }
};


//{ Driver Code Starts.
int main()
{
    int T;
    cin>>T;
  
    while(T--)
    {
        int n;
        int k=0;
        //cin>>k;
        cin>>n;
        vector<vector<int>>mat(n, vector<int>(n));
        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                cin >> mat[i][j];
            }
        }
        Solution obj;
        vector<int>ans = obj.matrixDiagonally(mat);
        for(auto i: ans)cout << i << " ";
        cout << "\n";
        
       
    }
}
// } Driver Code Ends