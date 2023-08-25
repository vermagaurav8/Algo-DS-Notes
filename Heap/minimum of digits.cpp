#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	
	int t; cin>>t;
	
	while(t--){
	    int n; cin>>n;
	    
	    int a,t;
	    
	    priority_queue<int, vector<int>,greater<int>>pq;
	   
	    for(int i = 0;i<n;i++){
	        cin>>a;
	        pq.push(a);
	    }
	    
	    int x = 0,y = 0;
	    
	    while(!pq.empty()){
	        t = pq.top();
	        pq.pop();
	        x = x*10+t;
	        
	        if(!pq.empty()){
	            t = pq.top();
	            pq.pop();
	            y = y*10+t;
	        }
	    }
	    
	    cout<<x+y<<endl;
	}
	return 0;
}                                    