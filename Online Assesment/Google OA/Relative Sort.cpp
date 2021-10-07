// Google SWE intern Singapore 2020
#include <bits/stdc++.h>
using namespace std;

int minswaps(vector<int> a, vector<int> b)
{
    int size = a.size();
    int max = INT_MAX;
    int dp[size][2];

    dp[0][0] = 0;
    dp[0][1] = 1;

    for (int i = 1; i < size; i++)
    {
        dp[i][0] = dp[i][1] = max;
    }
    for (int i = 1; i < size; i++)
    {
        if (a[i - 1] < a[i] && b[i - 1] < b[i])
        {
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = dp[i - 1][1] + 1;
        }
        if (a[i - 1] < b[i] && b[i - 1] < a[i])
        {
            dp[i][0] = min(dp[i][0], dp[i - 1][1]);
            dp[i][1] = min(dp[i][1], dp[i - 1][0] + 1);
        }
    }

    int ans = min(dp[size - 1][0], dp[size - 1][1]);
    return ans == INT_MAX ? -1 : ans;
}

int main()
{
    vector<int> a = {1, 4, 4, 9};
    vector<int> b = {2, 3, 5, 10};

    cout << "MINIMUM SWAPS: " << minswaps(a, b);

    return 0;
}