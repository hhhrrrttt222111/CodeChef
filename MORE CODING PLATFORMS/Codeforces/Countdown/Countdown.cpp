#include<bits/stdc++.h>
#define ll long long int
#define ndl "\n"
#define tt int tc;cin>>tc;while(tc--)
#define fast ios_base::sync_with_stdio(false); cout.tie(0); cin.tie(0);
using namespace std;

int main() {
	fast;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	tt {
		ll n = 0;
		cin >> n;
		string s;
		cin >> s;
		ll it = 0; ll count = 0;
		for (int i = 0; i < n - 1; ++i)
		{
			if (s[i] != '0') {
				count += (s[i] - 48); it++;
			}
		}
		cout << count + it + (s[n - 1] - 48) << ndl;
		// cout << ans << ndl;
	}
// 	cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << "secs" << endl;
	return 0;
}