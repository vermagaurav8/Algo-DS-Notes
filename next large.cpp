// #include<stack>
#include <bits/stdc++.h> 
using namespace std;

// void printer (int *arr, int s,int n, int i){
//     stack<int> stk;
//     for(int i=0; i<n; i++){
//         stk.push(arr[i]);
//     }
//     int counter=n;
//     int num=0;
//     while(counter>=i){
//         int p=stk.top();
//         stk.pop();
//         if(p>num){
//             num=p;
//         }
//         counter--;
//     }
//     if(num>s){
//         cout<<num<<" ";
//     }
//     else
//     cout<<"-1"<<" ";
// }
int main()
 {
	int cases;
	cin>>cases;
	while(cases>0){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0; i<n; i++ ){
	        int s;
	        cin>>s;
	        arr[i]=s;
	    }
	    for(int i=0; i<n; i++){
	        //printer(arr,arr[i],n,i);
	        int num=0;
	        for(int j=i; j<n; j++){
	            if(arr[j]>arr[i]){
	                num=arr[j];
	                break;
	            }
	            
	        }
	        if(num==0){
	            cout<<"-1"<<" ";
	        }
	        else
	        cout<<num<<" ";
	    }
	    cout<<endl;
	    cases--;
	}
	return 0;
}