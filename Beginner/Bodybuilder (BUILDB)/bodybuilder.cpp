
#include <bits/stdc++.h>
 
#define ll long long
#define sz(x) ((int) (x).size())
#define all(x) (x).begin(), (x).end()
#define vi vector<int>
#define pii pair<int, int>
#define rep(i, a, b) for(int i = (a); i < (b); i++)
using namespace std;
template<typename T>
using minpq = priority_queue<T, vector<T>, greater<T>>;
 
void solve() {
    int n;
    ll r;
    cin >> n >> r;
    vector<ll> a(n + 1);
    rep(i, 1, n + 1) cin >> a[i];
    ll x = 0, ans = 0;
    rep(i, 1, n + 1) {
        ll b;
        cin >> b;
        x = max(0LL, x - r * (a[i] - a[i - 1]));
        x += b;
        ans = max(ans, x);
    }
    cout << ans << '\n';
}
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    int te;
    cin >> te;
    while(te--) solve();
}

