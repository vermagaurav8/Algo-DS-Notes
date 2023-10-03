//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& nums, int k) {
        // Code here
        
        vector<int> ans;
        unordered_map<int, int> eleCount;
        vector<pair<int, int>> mapVec;
        
        for(int i = 0; i < nums.size(); i++) {
            eleCount[nums[i]]++;
        }
        
        for(auto x: eleCount) {
            mapVec.push_back({x.second, x.first});
        }
        
        sort(mapVec.begin(), mapVec.end());
        int j = mapVec.size()-1;
        while(k--) {
            ans.push_back(mapVec[j].second);
            j--;
        }
        
        return ans;
    }
};



//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends