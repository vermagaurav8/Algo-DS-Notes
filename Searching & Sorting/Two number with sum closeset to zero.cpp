#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;cin>>n;
    while(n--)
    {
    int m; cin>>m;
    
    vector<int>v(m);
    
    for(int i=0;i<m;i++)
        cin>>v[i];
    
    sort(v.begin(),v.end());
    
    int l=0,r=v.size()-1,sum=0;
    int m_sum=v[0]+v[r];
    
    while(l<r)
    {
        sum=v[l]+v[r];
        if(sum>0)
        r--;
        else
        l++;
        m_sum=abs(m_sum)<=abs(sum)?m_sum:sum;
    }
    
    cout<<m_sum<<endl;
        
    }
    
    return 0;
}