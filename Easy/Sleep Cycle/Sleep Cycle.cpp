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
int main()
{
    fast;
    ll t = 1;
    std::cin >> t;
    while (t--)
    {
        ll l, h, b;
        std::cin >> l >> h;
        string s;
        cin >> s;
        ll co = 0, p = 0;
        fr(i, 0, l)
        {
            if (s[i] == '0')
                co++;
            else
            {
                if (2 * (h - co) <= h)
                    h = 2 * (h - co);
                co = 0;
            }
            if (h <= 0)
            {
                p = 1;
                break;
            }
        }
        if (p == 1)
        {
            cout << "YES\n";
            continue;
        }
        if (2 * (h - co) <= h)
            h = 2 * (h - co);
        if (h <= 0)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";
    }
}