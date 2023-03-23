/*
    Using Kadane's Algorithm
    Time complexity : O(N), where N is the size of array
*/
#include <bits/stdc++.h>
using namespace std;
#define ll long long

int kadane_Max(ll a[],ll n)
{
    ll final_max=INT_MIN;
    ll curr_max=0;
    
    for(ll i=0;i<n;i++)
    {
        curr_max+=a[i];
        final_max=max(curr_max,final_max);
        
        if(curr_max<0)
            curr_max=0;
    }
    return final_max;
}

int kadane_Min(ll a[],ll n)
{
    ll final_min=INT_MAX;
    ll curr_min=0;
    
    for(ll i=0;i<n;i++)
    {
        curr_min+=a[i];
        final_min=min(curr_min,final_min);
        
        if(curr_min>0)
            curr_min=0;
    }
    return final_min;
}

int tot(ll a[],ll n)
{
    int s=0;
    for(ll i=0;i<n;i++)
        s+=a[i];
    return s;
}

int main() {
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    ll a[n];
	    for(ll i=0;i<n;i++)
	        cin>>a[i];
        ll sum=tot(a,n);
        ll final_max=kadane_Max(a,n);
        ll final_min=kadane_Min(a,n);
        ll fin_min=sum-final_min;
        ll ans=max(final_max,fin_min);
            
        if(ans==0)
            ans=min(final_max,fin_min);
        cout<<ans<<endl;
        
	}
	return 0;
}