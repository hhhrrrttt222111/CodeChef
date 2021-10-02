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

ll mu(ll a, ll n)
{
    if (n == 0)
        return 1;
    ll t = mu(a, n / 2);
    if (n % 2 == 0)
        return (t * t) % mod;
    return ((t * t) % mod * a) % mod;
}
ll p[maxn];
ll getphi(ll x)
{
    ll ans = 1;
    while (x != 1)
    {
        auto h = p[x];

        while (x % h == 0)
        {
            ans = ans * h;
            x /= h;
        }
        ans = ans / h * (h - 1);
    }
    return ans;
}
ll sl[maxn];

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
    for (int i = 2; i < maxn; i++)
    {
        if (p[i])
            continue;
        for (int j = i; j < maxn; j += i)
            p[j] = i;
    }
    ll cnt = 0;
    for (int i = 1; i <= 1000000; i++)
    {
        sl[i] = getphi(i);
    }
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll ans = 0;
        for (ll i = 2; i <= n; i++)
        {
            ans = ans + (n / i) * sl[i] * (n / i) * 2;
        }
        cout << ans + n * n << endl;
    }
}
