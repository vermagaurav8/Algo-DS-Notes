//{ Driver Code Starts
//Initial function template for C++

#include<bits/stdc++.h>
using namespace std;




// } Driver Code Ends
//User function template for C++

// points : 2-d vector containing the (x, y) points
// K : number of closest points that we need to find 
// return 2d vector containing the k points in increasing order of distance from origin

class Solution{
  public:
  
    static bool compare(pair<int, pair<int, int>> &a, pair<int, pair<int, int>> &b) {
        if(a.first == b.first) {
            if(a.second.first == b.second.first) {
                return a.second.second < b.second.second;
            }
            return a.second.first < b.second.first;
        }
        return a.first < b.first;
    }
  
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        // code here
        vector<pair<int, pair<int, int>>> DistMap;
        for(auto i: points) {
            int x = i[0];
            int y = i[1];
            int distance = abs(x*x)+abs(y*y);
            DistMap.push_back({distance,{x,y}});
        }
        
        sort(DistMap.begin(), DistMap.end(), compare);
        
        int index = 0;
        vector<vector<int>> result(K);
        for(auto e: DistMap) {
            if(index >= K) break;
            result[index].push_back(e.second.first);
            result[index++].push_back(e.second.second);
        }
        
        return result;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    
    while(t--) {
        int n, k;
        cin >> n >> k;
        
        vector<vector<int>> p, res;
        
        for(int i = 0 ; i < n ; ++ i ) {
            vector<int> vec(2);
            cin >> vec[0] >> vec[1];
            p.push_back(vec);
        }
        Solution obj;
        res = obj.kClosest(p, k);
        
        for(int i = 0 ; i < k ; ++ i ) {
            cout << res[i][0] << " " << res[i][1] << " ";
        }
        
        cout << "\n";
        
    }
}
// } Driver Code Ends