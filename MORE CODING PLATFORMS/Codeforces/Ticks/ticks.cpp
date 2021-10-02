#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pll pair<ll, ll>
#define pb push_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define v vector
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    v<v<char>> a(n, v<char>(m));
    v<v<int>> vis(n, v<int>(m, 0));
    // vis -> Visited Array to store the values of the star encountered.
    // 0 -> Represents a '.' in the array.
    // 1 -> Represents a '*' in the array from which ticks cannot be formed.
    // 2 -> Represents a '*' in the array from which ticks are formed currently.
    // Main Aim of the algorithm written below is to transform all 1's in the array into 2's,
    //      by grid traversal in {-1, -1} and {-1, 1} directions.
    rep(i, 0, n)
    {
        //Initially All the '*'s are to be represented as '1'
        rep(j, 0, m)
        {
            cin >> a[i][j];
            if (a[i][j] == '*')
            {
                vis[i][j] = 1;
            }
        }
    }
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (a[i][j] == '*')
            {
                bool f = 0;
                //Check if the flag of the minimum size (i.e. of size k) can be formed,
                //      if a '*' is found at the a[i][j].
                rep(l, 1, k + 1)
                {
                    if (i - l < 0 || j + l > m - 1 || j - l < 0)
                    {
                        f = 1;
                        break;
                    }
                    if (a[i - l][j - l] == '.' || a[i - l][j + l] == '.')
                    {
                        f = 1;
                        break;
                    }
                }
                // If flag is still zero, that means a larger tick can be formed,
                //      and of the minimum exists at least
                if (f == 0)
                {
                    rep(l, 0, k + 1)
                    {
                        vis[i - l][j - l] = 2;
                        vis[i - l][j + l] = 2;
                    }
                    int l = k + 1;
                    //Check if the flag of size greater k can be formed,
                    //      if a '*' is found at the a[i][j].
                    while (1)
                    {
                        if (i - l < 0 || j + l > m - 1 || j - l < 0)
                        {
                            break;
                        }
                        if (a[i - l][j - l] == '.' || a[i - l][j + l] == '.')
                        {
                            break;
                        }
                        vis[i - l][j - l] = 2, vis[i - l][j + l] = 2;
                        l++;
                    }
                }
            }
        }
    }
    rep(i, 0, n)
    {
        rep(j, 0, m)
        {
            if (vis[i][j] == 1)
            {
                cout << "NO\n";
                return;
            }
        }
    }
    cout << "YES\n";
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