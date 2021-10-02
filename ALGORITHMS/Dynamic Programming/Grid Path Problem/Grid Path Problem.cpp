# include <bits/stdc++.h>
using namespace std;

# define MOD                1000000007
# define flp(i, n)          for (int i = 0; i < n; i++)


int main() {
    // For Fast I/O.
    ios_base::sync_with_stdio(0); 
    cin.tie(0);
 
    int n;
    cin >> n;
    string arr[n];
 
    flp(i, n) cin >> arr[i];
 
    int dp[n][n];
    memset(dp, 0, sizeof(dp));
    dp[0][0] = 1;
 
    flp(i, n) {
        flp(j, n) {
            if (arr[i][j] == '.') {
                if (i > 0) (dp[i][j] += dp[i - 1][j]) %= MOD;
                if (j > 0) (dp[i][j] += dp[i][j - 1]) %= MOD;
            } else dp[i][j] = 0;
        }
    }
 
    cout << dp[n - 1][n - 1] << endl;
 
    return 0;
}
