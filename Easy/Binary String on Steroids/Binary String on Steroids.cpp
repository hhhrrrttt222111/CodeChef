#include <bits/stdc++.h>
typedef long long ll;
typedef long double ld;
#define fr(i, a, b) for (ll i = a; i < b; i++)
#define rf(i, a, b) for (ll i = a; i >= b; i--)
typedef std::vector<long long> vi;
#define F first
#define S second
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
#define PB push_back
#define MP make_pair
#define PI 3.14159265358979323846
#define all(a) a.begin(), a.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
const ll INF = LLONG_MAX / 2;
const ll N = 2e5 + 1;
using namespace std;
void solve()
{
    ll n, i, j = 0, x, q;
    std::cin >> n;
    string s;
    cin >> s;
    ll pre0[n + 1] = {0}, pre1[n + 1] = {0}, k = 0;
    fr(i, 1, n + 1)
    {
        if (s[i - 1] == '1')
            pre1[i]++;
        else
            pre0[i]++;
        pre0[i] += pre0[i - 1];
        pre1[i] += pre1[i - 1];
    }
    ll ans = pre0[n];
    if (pre1[n] != 0)
        ans = min(ans, pre1[n] - 1);
    else
    {
        ans = min(ans, (ll)1);
    }
    vi fact;
    for (ll i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            fact.PB(i);
            if (i * i != n)
                fact.PB(n / i);
        }
    }
    sort(all(fact));
    fr(j, 0, fact.size())
    {
        fr(i, 1, fact[j] + 1)
        {
            ll co = 0, co1 = 0;
            for (ll k = i; k <= n; k += fact[j])
            {
                if (s[k - 1] == '0')
                    co++;
                else
                    co1++;
            }
            // cout<<l
            // cout << pre1[n] - co1 + co << "\n";
            ans = min(pre1[n] - co1 + co, ans);
        }
    }
    cout << ans << "\n";
}
int main()
{
    fast;
    ll _ = 1, counti = 0;
    std::cin >> _;
    while (_--)
    {
        // counti++;
        // cout << "Case #" << counti << ": ";
        solve();
    }
}