#include<bits/stdc++.h>
#define ll long long int
#define fast ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
using namespace std;

int main() {
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    ll t;
    cin >> t;
    while (t--) {
        ll n;
        cin >> n;
        ll x, y;
        if (n == 1)
            cout << "1 " << "0\n";
        else if (n == 2)
            cout << "0 " << "1\n";
        else if (n % 3 == 0)
            cout << n / 3 << " " << n / 3 << "\n";
        else
        {
            int rem;
            x = n / 3;
            rem = n % 3;
            if (rem == 1) {
                x++;
                y = x - 1;
            }
            else if (rem == 2)
                y = x + 1;
            cout << x << " " << y << "\n";
        }
    }
    return 0;
}