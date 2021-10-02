#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ld long double
#define MOD 1000000007
#define PI 3.1415926535897932384626433832795
#define ee cout << "\n"
#define sall(v) sort(v.begin(), v.end())
#define fo(i, n) for (ll i = 0; i < n; i++)
#define vl vector<ll>
#define mpl map<ll, ll>
const ll maxN = 100001;
vector<ll> inF(maxN), F(maxN), isPrime(maxN), Ad[maxN];
mpl Vis;
void dfs(ll node)
{
    if (Vis[node])
        return;
    Vis[node] = 1;
    for (auto child : Ad[node])
    {
        dfs(child);
    }
    return;
}
ll pow1(ll n, ll k)
{
    if (k == 0)
        return 1;
    if (k == 1)
        return n;
    ll X = 1;
    if (k % 2 == 1)
        X = n % MOD;
    ll Y = pow1(n, k / 2) % MOD;
    return (((Y * Y) % MOD) * X) % MOD;
}
void fact_compute()
{
    ll N = maxN - 1;
    F[0] = 1;
    F[1] = 1;
    for (ll i = 2; i <= N; i++)
    {
        F[i] = (F[i - 1] * (i)) % MOD;
    }
    inF[N] = pow1(F[N], MOD - 2) % MOD;
    for (ll i = N - 1; i >= 0; i--)
    {
        inF[i] = (inF[i + 1] * (i + 1)) % MOD;
    }
}
void sieve()
{
    for (ll i = 2; i < maxN; i++)
    {
        isPrime[i] = 1;
    }
    for (ll i = 2; i < maxN; i++)
    {
        for (ll j = 2 * i; j < maxN; j += i)
        {
            isPrime[j] = 0;
        }
    }
}
void set_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
vector<ll> E[maxN];
vector<ll> O[maxN];
void solve()
{
    ll n, m, j, k, l, i;
    cin >> n;
    vl v(n);
    fo(i, n)
    {
        cin >> v[i];
        if (i % 2 == 0)
            E[v[i]].push_back(i);
        else
            O[v[i]].push_back(i);
    }
    mpl M;
    vl a = v;
    sall(a);
    ll gap = 0;
    ll F = 1;
    for (i = 0; i < n; i++)
    {
        ll N = a[i];
        if (i % 2 == 0)
        {
            if (E[N].size() == 0)
            {
                F = -1;
            }
            else
            {
                E[N].pop_back();
            }
        }
        else
        {
            if (O[N].size() == 0)
            {
                F = -1;
            }
            else
            {
                O[N].pop_back();
            }
        }
    }

    if (F == 1)
    {
        cout << "YES";
        ee;
    }
    else
    {
        cout << "NO";
        ee;
    }
    for (i = 0; i < n; i++)
    {
        E[a[i]].clear();
        O[a[i]].clear();
    }
    return;
}

int main()
{
    set_io();
    ll totalTestCase = 1;
    cin >> totalTestCase;
    for (ll testCase = 1; testCase <= totalTestCase; testCase++)
    {
        solve();
    }
    return 0;
}