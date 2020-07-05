#include<bits/stdc++.h>
using namespace std;


void sort(int arr1[], int arr2[], int n, int m)
{
    unordered_map<int,int> mp;
    vector<int> vec;
    
    for(int i=0;i<n;i++)
     mp[arr1[i]]++;
    
    for(int i=0; i<m; i++)
    {
        if(mp.find(arr2[i])!=mp.end())
        {
            while(mp[arr2[i]]!=0)
            {
                vec.push_back(arr2[i]);
                mp[arr2[i]]--;
            }
        }
    }
    vector<int> temp;
    for(int i=0; i<n;i++)
    {
        if(mp[arr1[i]]>=1)
        {
             temp.push_back(arr1[i]);
             mp[arr1[i]]--;
        }
    }
    
    sort(temp.begin(),temp.end());
    
    for(int i=0;i<temp.size();i++)
     vec.push_back(temp[i]);
    
    for(int i=0; i<vec.size(); i++)
     cout<<vec[i]<<" ";
}

int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    
	    int arr1[n],arr2[m];
	    
	    for(int i=0; i<n; i++)
	     cin>>arr1[i];
	    for(int i=0; i<m; i++)
	     cin>>arr2[i];
	    
	    sort(arr1,arr2,n,m);
	    cout<<"\n";
	}
	
	return 0;
}