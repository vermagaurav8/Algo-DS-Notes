#include<bits/stdc++.h>
using namespace std;

int main()
 {
	//code
	int t; cin>>t;
	
	while(t--) {
	    int num,x;
	    cin>>num>>x;
	    
	    int arr[num];
	    
	    for(int i = 0;i<num;i++) {
	        cin>>arr[i];
	    }
	    
	    int e = 0,l = 0, h = 0;
	    int greatest_smaller = INT_MIN;
	    int smallest_greater = INT_MAX;
	    for(int i = 0;i<num;i++) {
	        if(arr[i] == x)
	            e++;
	       
	        else if(arr[i] < x) {
	            l++;
	            greatest_smaller = max(greatest_smaller, arr[i]);
	        }
	        else{
	            h++;
	            smallest_greater = min(smallest_greater, arr[i]);
	        }
	    }
	    
	    int add = 0;
	    
	    if(num%2 == 0){
	        add = abs(h-l) -e +1;
	        if(e != 1 && greatest_smaller + smallest_greater == 2*x)
	            add--;
	    }
	    
	    else {
	        if(e == 1 || greatest_smaller + smallest_greater == 2*x)
	            add = abs(h-l);
	        else if(greatest_smaller + smallest_greater > 2*x) {
	            if(l<h)
	                add = h-l+1;
	            else
	                add = l-h;
	        }
	        else{
	            if(l<h){
	                add = h-l;
	            } else {
	                add = l-h +1;
	            }
	        }
	    }
	    
	    cout<<add<<endl;
	}

	return 0;
}
