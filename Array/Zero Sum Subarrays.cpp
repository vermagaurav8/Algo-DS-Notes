ll findSubarray(vector<ll> arr, int n ) {
    //code here
    ll pref[n+1];
    pref[0] = 0;
    
    for(int i = 0;i<=n;i++) {
        pref[i] = pref[i-1] + arr[i-1];
    }
    
    map<ll,ll> m;
    
    for(int i = 0;i<=n;i++) {
        m[pref[i]]++;
    }
    
    ll ans = 0;
    
    for(auto it = m.begin(); it != m.end(); it++) {
        ll val = it->second;
        val--;
        ans = ans + (val*(val+1))/2;
    }
    
    return ans;
}
