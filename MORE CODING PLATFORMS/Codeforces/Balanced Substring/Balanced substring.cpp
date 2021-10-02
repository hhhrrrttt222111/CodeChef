#include<bits/stdc++.h>
#define ll long long int
#define ndl "\n"
#define tt int tc;cin>>tc;while(tc--)
#define arrin(a,n) for(int INPUT=0;INPUT<n;INPUT++)cin>>a[INPUT]
#define fo(i,n) for(int i=0;i<n;i++)
#define all(a) a.begin() , a.end()
#define f first
#define se second
#define fast ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
using namespace std;

int main() {
    fast;
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    tt {
        int n;
        cin >> n;
        string s;
        cin >> s;
        ll a = 0; ll b = 0; bool ok = false;
        for (int i = 0; i < n; i++)
        {
            if (s[i] != s[i + 1] && n != 1 && s[i + 1] != '\0') {
                ok = true;
                a = i + 1; b = i + 2;
                break;
            }
        }
        if (ok && n != 1)
            cout << a << " " << b << ndl;
        if (s.find('a') == -1 || s.find('b') == -1)
            cout << "-1" << " -1" << ndl;
    }
    // cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << "secs" << endl;
    return 0;
}