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
ll x[100005], h[100005];
ll n, H;
ll check()
{
    ll curr = H, need = 0;
    fr(i, 0, n)
    {
        if (i == 0)
        {
            if (h[i] < curr - x[i])
            {
                curr = curr - x[i];
                continue;
            }
            ll dist = (h[i] + 1 - curr + x[i]);
            if (dist % 2 == 0)
            {
                need += dist / 2;
                curr = h[i] + 1;
            }
            else
            {
                need += (dist + 1) / 2;
                ll a = (dist + 1) / 2;
                ll b = x[i] - a;
                curr = curr + a - b;
            }
        }
        else
        {
            if (h[i] < curr - (x[i] - x[i - 1]))
            {
                curr = curr - (x[i] - x[i - 1]);
                continue;
            }
            ll dist = (h[i] + 1 - curr + (x[i] - x[i - 1]));
            if (dist % 2 == 0)
            {
                need += dist / 2;
                curr = h[i] + 1;
            }
            else
            {
                need += (dist + 1) / 2;
                ll a = (dist + 1) / 2;
                ll b = (x[i] - x[i - 1]) - a;
                curr = curr + a - b;
            }
        }
    }
    return need;
}
int main()
{
    fast;
    ll t = 1;
    std::cin >> t;
    while (t--)
    {
        std::cin >> n >> H;
        fr(i, 0, n)
                cin >>
            x[i];
        fr(i, 0, n)
                cin >>
            h[i];
        ll curr = H, p = 0;
        fr(i, 0, n)
        {
            if (i == 0)
                curr = curr + x[i] - 0;
            else
                curr = curr + x[i] - x[i - 1];
            if (curr <= h[i])
            {
                p = 1;
                break;
            }
        }
        if (p == 1)
        {
            cout << "-1\n";
            continue;
        }
        ll ans = check();
        cout << ans << "\n";
    }
}