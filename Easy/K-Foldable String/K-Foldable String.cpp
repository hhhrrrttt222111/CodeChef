#include <bits/stdc++.h>
using namespace std;
#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);
#define ll long long int
#define f(i, a, b) for (ll i = a; i < b; i++)
int main()
{
    fast;
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        ll a = count(s.begin(), s.end(), '0');
        ll b = count(s.begin(), s.end(), '1');
        ll z = a / (n / k), y = b / (n / k);
        if (n % k == 0 && a % (n / k) == 0 && b % (n / k) == 0)
        {
            vector<char> v;
            f(i, 0, z) v.push_back('0');
            f(i, 0, y) v.push_back('1');
            ll h = n / k;
            while (h > 0)
            {
                if (h > 0)
                    f(i, 0, k) cout << v[i];
                h--;
                if (h > 0)
                    for (ll i = k - 1; i >= 0; i--)
                        cout << v[i];
                h--;
            }
            cout << endl;
        }
        else
            cout << "IMPOSSIBLE\n";
    }
}