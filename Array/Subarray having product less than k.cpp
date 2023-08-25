#include <bits/stdc++.h>
using namespace std;
  
  int count(int a[],int n,int k)
  {
    
      vector<int>dp(n,0);
      vector<int>product(n,1);
  
      for(int i=0;i<n;i++)
      {
        if(product[0]*a[i]<k)
        {
         dp[0]++;
         product[0]=product[0]*a[i];
        }
        else break;
      }

      for(int i=1;i<n;i++)
      {
       if(a[i-1]<=product[i-1])
       {
         dp[i]=dp[i-1]-1;
         product[i]=product[i-1]/a[i-1];
       }
       for(int j=i+dp[i];j<n;j++)
       {
        if(product[i]*a[j]<k)
           {
             dp[i]++;
             product[i]=product[i]*a[j];
           }
        else break;
       }
      }
      int c=accumulate(dp.begin(),dp.end(),0);
      return c;
  }
  
  int main()
  {
    int t;
    cin>>t;
    while(t--)
     {
      int n,k;
      cin>>n>>k;
      int a[n];
      for(int i=0;i<n;i++)
        cin>>a[i];
      cout<<count(a,n,k)<<endl;
     }
    return 0;
  }