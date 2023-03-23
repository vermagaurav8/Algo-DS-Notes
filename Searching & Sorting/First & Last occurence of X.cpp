#include <iostream>
using namespace std;

int main() {
	//code
  int t;
  cin>>t;
  int data;
  int n,k;
  int I;
  int r;
  while(t--)
  {
      I=0;
      cin>>n>>k;
      for(int i=0;i<n;i++)
      {
          cin>>data;
            if(data==k){
               I++;
              r=i;
            if(I==1)
               cout<<i<<" ";
            }
      } 
      if(I==0)
        cout<<"-1"<<endl;
        else    
     cout<<r<<endl; 
  }
	return 0;
}
