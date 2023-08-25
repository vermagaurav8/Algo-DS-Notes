#include <bits/stdc++.h>

using namespace std;

bool findPairGivenDifference(int arr[], int n, int L)
{
    unordered_set<int> s;
    
    for(int i = 0; i < n; i++)
    {
        s.insert(arr[i]);
    }
    
    for(int i = 0; i < n; i++)
    {
        if(s.find(L+arr[i]) != s.end())
        {
            return true;
        }
    }
    
    return false;
}

int main()
{
    int T;
    cin >> T;
    
    while(T--)
    {
        int n, L;
        cin >> n >> L;
        
        int arr[n];
        for(int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        
        int res = (findPairGivenDifference(arr, n, L) == true) ? 1 : -1;
        
        cout << res << endl;
    }
    return 0;
}
