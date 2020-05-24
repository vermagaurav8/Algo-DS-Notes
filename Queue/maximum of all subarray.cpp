#include<bits/stdc++.h>
using namespace std;

void print(vector<int> v, int n, int k){
    
    deque<int> q(k); 
  
    int i;
    
    for (i = 0; i < k; ++i) { 
      
        while ((!q.empty()) && v[i] >= v[q.back()]) 
            q.pop_back(); // Remove from rear 
  
        // Add new element at rear of queue 
        q.push_back(i); 
    } 
  
    
    for (; i < n; ++i) { 
      
        cout << v[q.front()] << " "; 
  
        
        while ((!q.empty()) && q.front() <= i - k) 
            q.pop_front(); 
  
         
        while ((!q.empty()) && v[i] >= v[q.back()]) 
            q.pop_back(); 
  
        q.push_back(i); 
    } 
  
    cout << v[q.front()]; 
    
}

int main()
 {
    int t; cin>>t;
    
    while(t--){
        
        int n; cin>>n;
        int k; cin>>k;
        vector<int> v(n);
        
        for(int i =0;i<n;i++){
            cin>>v[i];
        }
        
        print(v,n,k);
        
        cout<<endl;
    }
	return 0;
}