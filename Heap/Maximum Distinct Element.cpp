#include<bits/stdc++.h>
#define int long long

using namespace std;

int32_t main()
{
    int test;
    cin>>test;
    
    while(test--)
    { 
        priority_queue<int>pq;
        map<int,int>map1;
        
        int n,k;
        cin>>n>>k;

        for(int i=0;i<n;i++){ 
            int t; cin>>t;
            map1[t]++;
        }
        
        for(auto x:map1){
            pq.push(x.second);
        }
        
        int ans=map1.size();
        
        while(k--){
            int t = pq.top();
            pq.pop();
            
            if(t==1){
                ans--;
            }
            else{
                pq.push(t-1);
            }
        }
        
        if(ans<0) ans=0;
        
        cout<<ans<<endl;
        
    }
    
    
    return 0; 
    
}

