#include<bits/stdc++.h>
 
using namespace std;
 
int x[1000010];
int dp[1000010];
int n;
 
int solve(int idx)
{
	dp[n] = dp[n+1] = 0;
	for(int i=n-1;i>=idx;i--)
	{
		dp[i] = max(x[i]+dp[i+2],dp[i+1]);
	}
	return dp[idx];
}
 
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    cin>>n;
    	for(int i=0;i<n;i++) cin>>x[i];
    	fill(dp,dp+n+1,-1);
    	cout<<solve(0)<<'\n';
	}
	return 0;
}
