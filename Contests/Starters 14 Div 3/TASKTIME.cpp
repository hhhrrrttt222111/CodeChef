#pragma GCC optimize("Ofast")
#pragma GCC optimization("unroll-loops, no-stack-protector")
#pragma GCC target("avx,avx2,fma")

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define pll pair<ll, ll>
#define ff first
#define ss second
#define pb push_back
#define endl "\n"
mt19937_64 rnd;

const ll maxn = 1e6 + 10;
const ll mod = 1e9 + 7;
const ll base = 1e18;

/// you will be the best but now you just are trash
/// goal 2/7
vector<ll> adj[maxn];
ll x[maxn];
ll y[maxn];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    if (fopen("t.inp", "r"))
    {
        freopen("test.inp", "r", stdin);
        freopen("test.out", "w", stdout);
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m, k;
        cin >> n >> m >> k;
        for (int i = 1; i <= n; i++)
            cin >> x[i];
        for (int i = 1; i <= n; i++)
            cin >> y[i];
        for (int i = 1; i <= n; i++)
        {
            adj[x[i]].pb(y[i]);
        }
        priority_queue<ll, vector<ll>, greater<ll>> q;
        for (int i = 1; i <= m; i++)
        {
            sort(adj[i].begin(), adj[i].end());
            if (adj[i].size())
            {
                q.push(adj[i][0]);
                for (int j = 1; j + 1 < adj[i].size(); j += 2)
                {
                    q.push(adj[i][j] + adj[i][j + 1]);
                }
            }
            adj[i].clear();
        }
        ll ans = 0;
        while (!q.empty())
        {
            auto p = q.top();
            q.pop();
            if (k < p)
                break;
            k -= p;
            ans++;
        }
        cout << ans << endl;
    }
}
