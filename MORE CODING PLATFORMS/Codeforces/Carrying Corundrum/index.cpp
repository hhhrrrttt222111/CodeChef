#include <iostream>
#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define pb push_back
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define nrep(i, a, b) for (ll i = a; i >= b; i--)
#define sortv(v) sort(v.begin(), v.end())
#define rev(p) reverse(p.begin(), p.end())
#define v vector
#define IOS                           \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);

void ss(v<ll> &aa, set<v<ll>> &arr)
{
    arr.insert(aa);
    int n = aa.size();
    nrep(i, n - 1, 2)
    {
        int f = 0;
        if (aa[i - 2] > 0 && aa[i] < 9)
        {
            aa[i - 2] -= 1;
            aa[i] += 10;
            ss(aa, arr);
            aa[i - 2] += 1;
            aa[i] -= 10;
        }
    }
}

void solve()
{
    string s1;
    cin >> s1;
    set<v<ll>> arr;
    ll n = s1.size();
    v<ll> aa;
    rep(i, 0, n)
    {
        aa.pb(s1[i] - '0');
    }
    ss(aa, arr);
    ll ans = 0;
    for (auto x : arr)
    {
        int aa = 1;
        for (auto y : x)
        {
            if (y < 10)
            {
                aa *= (y + 1);
            }
            else
            {
                aa *= (19 - y);
            }
        }
        ans += aa;
    }
    ans -= 2;
    cout << ans << "\n";
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