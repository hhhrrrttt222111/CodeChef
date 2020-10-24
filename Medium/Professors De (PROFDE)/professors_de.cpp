#include <bits/stdc++.h>
using namespace std;
#define fo(i, n) for (i = 0; i < n; i++)
#define ll long long
#define ull unsigned long long
#define endl '\n'
#define si(x) scanf("%d", &x)
#define sl(x) scanf("%lld", &x)
#define ss(s) scanf("%s", s)
#define pi(x) printf("%d\n", x)
#define pl(x) printf("%lld\n", x)
#define ps(s) printf("%s\n", s)
#define deb(x) cout << #x << "=" << x << endl
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define pb push_back
#define mp make_pair
const int mod = 1'000'000'007;
ll a[10000000];
ll mul[1000000], mul1[1000000];
int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int t = 1;
    cin >> t;
    //deb(t);
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        for (int i = 1; i <= n + 1; i++)
        {
            a[i] = mul[i] = mul1[i] = 1;
        }
        ll l, r, x;
        while (m--)
        {
            cin >> l >> r >> x;
            mul[l] *= x;
            mul1[r + 1] *= x;
        }
        for (int i = 1; i <= n; i++)
        {
            a[i] *= mul[i];
            mul[i + 1] = (mul[i + 1] * mul[i]) / mul1[i + 1];
        }
        ll ans = 0;
        for (int i = 1; i <= n; i++)
        {
            ans += a[i] * 10;
        }
        ans /= n;
        cout << ans << '\n';
    }
    return 0;
}
