#include<bits/stdc++.h>
using namespace std;

long long  a[10000005] ={0};

int main()
 {
    int t,n;
    long long x,y;
    
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    for(int i = 1; i <= n ;i++)
	        cin>>a[i];
	        
	    sort(a + 1, a + n + 1);
	    
	    cin>>x>>y;
	    
	    long long sum = 0 ;
	    long long  temp = x ;
	    
	    x = min(temp,y);
	    y = max(y, temp);
	    
	    long long c = 0;
	    
	    a[0] = INT_MIN;
	    
	    for(int i = 1 ; i<=n ; i++)
	    { 
	        if(a[ i ] != a[ i -1 ])
                c++;
	        if( c< y && c > x)
	            sum = (sum + a[i]);
	        if(c==y)
	            break;
	    }
	    
	   cout<<sum<<"\n";
	 }
	return 0;
}