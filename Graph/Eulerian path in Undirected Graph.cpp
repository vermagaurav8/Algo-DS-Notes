#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int test; cin>>test;
	
	while(test--) {
	    int n; cin>>n;
	    int adj[n+1][n+1];
	    
	    vector<int>arr[n+1];
	    
	    for(int i = 1; i<=n;i++ ) {
	        for(int j = 1; j<= n; j++) {
	            cin>>adj[i][j];
	            if(adj[i][j] == 1 ) {
	                arr[i].push_back(j);
	            }
	        }
	    }
	    
	    int count = 0;
	    
	    for(int i = 1;i<=n;i++) {
	        if(arr[i].size() & 1){
	            count++;
	        }
	    }
	    count == 2?cout<<"1"<<endl : cout<<"0"<<endl;
	}
	

	return 0;
}
