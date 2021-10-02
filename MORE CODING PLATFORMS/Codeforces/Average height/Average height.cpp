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
const int mod = 1e9 + 7;

int main() {
	fast;
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
	tt {
		ll n;
		cin >> n;
		vector<ll> v;
		ll res = 0;
		vector<ll>vt;
		for (int i = 0; i < n; ++i)
		{
			ll x;
			cin >> x;
			if (x % 2 == 1)
				v.push_back(x);
			else
				vt.push_back(x);
		}
		v.insert(v.end(), all(vt));
		for (auto d : v)
			cout << d << " ";
		cout << ndl;
	}
	cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << "secs" << endl;
	return 0;
}