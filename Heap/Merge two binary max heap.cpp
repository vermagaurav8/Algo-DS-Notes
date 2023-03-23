#include<bits/stdc++.h>
using namespace std;

void heapify(int *res,int n,int i)
{
    int max=i;
    int l=(2*i)+1;
    int r=(2*i)+2;
    
    if(l<n && res[l]>res[i])
        max=l;
    if(r<n && res[r]>res[max])
        max=r;
    if(max!=i){
        int t=res[max];
        res[max]=res[i];
        res[i]=t;
        heapify(res,n,max);
    }
}

void buildheap(int *arr,int n)
{
    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(arr,n,i);
    }
}

int main() {    
    int t;
    cin>>t;
    
    while(t--)
    {
        int n1,n2;
        cin>>n1>>n2;
        
        int a[n1],b[n2],res[n1+n2];
            
        for(int i=0;i<n1;i++){
            cin>>a[i];
            res[i]=a[i];
        }
        
        for(int i=0;i<n2;i++){
            cin>>b[i];
            res[i+n1]=b[i];
        }
        
        buildheap(res,n1+n2);
        
        for(int i=0;i<(n1+n2);i++)
            cout<<res[i]<<" ";
            cout<<endl;
        
    }
    return 0;
    
}