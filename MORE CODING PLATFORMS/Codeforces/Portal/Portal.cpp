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
vector<ll> Tree;
void make_Tree(vector<ll> &v)
{
    ll i;
    ll N = v.size();
    while (N & (N - 1))
        N++;
    v.resize(N);
    Tree.resize(2 * N);

    for (i = 0; i < N; i++)
    {
        Tree[N + i] = v[i];
    }
    for (i = N - 1; i >= 1; i--)
    {
        Tree[i] = Tree[2 * i] + Tree[2 * i + 1];
    }
}
ll segment(ll node, ll node_left, ll node_right, ll query_left, ll query_right)
{
    if (query_left <= node_left && node_right <= query_right)
    {
        return Tree[node];
    }
    if (query_right < node_left || node_right < query_left)
    {
        return 0;
    }
    ll last_left = (node_left + node_right) / 2;
    return segment(2 * node, node_left, last_left, query_left, query_right) + segment(2 * node + 1, last_left + 1, node_right, query_left, query_right);
}
void update_Tree(ll Index, ll Val)
{
    // 1base indexing
    ll N = Tree.size() / 2;
    ll Diff = Val - Tree[N + Index - 1];
    for (ll i = N + Index - 1; i >= 1; i /= 2)
    {
        Tree[i] += Diff;
    }
}
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
ll gcd(ll n, ll m)
{
    if (!m)
        return n;
    return gcd(m, n % m);
}
ll lcm(ll n, ll m)
{
    return (n / gcd(n, m)) * m;
}
void set_io()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
}
void solve(){
    ll n,m,j,k,l,i;
    cin>>n>>m;
    string s[n];
    fo(i,n)
    {
        cin>>s[i];
    }
    ll res = MOD;
    for(ll i1=0;i1<n-4;i1++)
    {
        vector<ll> dp(m+1,0);
        for(i=i1;i<i1+4;i++)
        {
            for(j=0;j<m;j++)
            if(s[i][j]=='1')dp[j]++;
        }
        for(ll i2=i1+4;i2<n;i2++)
        {
            for(j=0;j<m;j++)
                if(s[i2][j]=='1')dp[j]++; 
            vector<ll> S(m+1),M(m+1),E(m+1);
            for(j=0;j<m;j++)
            {
                S[j] = (i2-i1+1)-dp[j];
                if(s[i2][j]=='0')S[j]-=1;
                if(s[i1][j]=='0')S[j]-=1;
                E[j] = (i2-i1+1)-dp[j];
                if(s[i1][j]=='0')E[j]-=1;
                if(s[i2][j]=='0')E[j]-=1;
                M[j] = dp[j];
                if(s[i1][j]=='1')M[j]-=1;
                else M[j]+=1;
                if(s[i2][j]=='1')M[j]-=1;
                else M[j]+=1;
            }
            ll maxi = -MOD;
            ll s1=0;
            ll s2=M[0]+M[1]+M[2];
            for(j=3;j<m;j++)
            {
                s1+=M[j-3];
                maxi = max(maxi,s1-S[j-3]);
                res = min(res,s2+E[j]-maxi);
                s2+=M[j];
            }
        }
    }

    cout<<res;
    ee;
    return ;
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
