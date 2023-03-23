#include <bits/stdc++.h>

using namespace std;


int search(int arr[] , int l,int h , int key){
    
    if(l>h) return -1;
    
    int mid = (l+h)/2;
    
    
    if(arr[mid] == key) return mid;
    
    if (arr[l] <= arr[mid]) { 
        if (key >= arr[l] && key <= arr[mid]) 
            return search(arr, l, mid-1, key); 
        
        return search(arr, mid+1, h, key); 
    } 
  
  
    if (key >= arr[mid] && key <= arr[h]) 
        return search(arr, mid+1, h, key); 
  
    return search(arr, l, mid-1, key);
}

int main()
 {
	//code
	
	int  t; cin >>t;
	
	
	while(t--){
	    
	    int n; cin>>n;
	    
	    int arr[100000];
	    
	    for(int i =0;i<n;i++){
	        cin>> arr[i];
	    }
	    
	    int key; cin>>key;
	    
	    cout<<(search(arr, 0, n-1 ,key))<<endl;
	    
	}
	

	return 0;
}