#include<bits/stdc++.h>
using namespace std;
typedef long long int LL;
LL n,a[105],f[105],memo[105][105];

LL dp(int start,int end)
{
    if(start<1 || end>n || start>end) return 0;
    if(start==end) return f[end];
    if(memo[start][end]!=-1) return memo[start][end];
    
    LL fsum=0;
    for(int i=start;i<=end;i++) fsum+=f[i];
    
    LL sum=1e18;
    for(int i=start;i<=end;i++)
    {
        LL left=0,right=0;
        if(i-1>=start){
            left=dp(start,i-1);
        }
        if(i+1<=end){
            right=dp(i+1,end);
        }
        LL temp_sum=left+right;
        
        sum=min(sum,temp_sum);
    }
    memo[start][end]=sum+fsum;
    return memo[start][end];
}

int main()
{
    int t; cin>>t;
    while(t--)
    {
        cin>>n;
        for(int i=1;i<=n;i++) cin>>a[i];
        for(int i=1;i<=n;i++) cin>>f[i];
        for(int i=0;i<105;i++){
            for(int j=0;j<105;j++){
               memo[i][j]=-1;
            }
        }
        cout<<dp(1,n)<<endl;
    }
	return 0;
}
