#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n;
    cin >> n;
    vector<int> A(n);
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }
    if (n == 0)
    {
        cout << 0 << "\n";
        return;
    }
    vector<vector<int>> dp(n, vector<int>(n, 0));
    vector<int> sum(n, 0);
    sum[0] = A[0];

    for (int i = 1; i < n; i++)
        sum[i] = sum[i - 1] + A[i];

    for (int len = 1; len < n; len++)
    {
        for (int i = 0; i < n - len; i++)
        {
            int j = i + len;
            int add = INT_MAX;
            for (int k = i; k < j; k++)
                add = min(add, dp[i][k] + dp[k + 1][j]);
            dp[i][j] = (sum[j] - ((i == 0) ? 0 : sum[i - 1])) + add;
        }
    }
    cout << dp[0][n - 1] << "\n";
}

int main()
{
    IOS;
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}