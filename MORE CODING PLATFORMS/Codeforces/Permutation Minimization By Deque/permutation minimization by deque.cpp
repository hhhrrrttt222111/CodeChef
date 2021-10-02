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
		deque<ll> dq(n);
		arrin(dq, n);
		deque<ll> d;
		// cout << d.size();
		ll x;
		for (int i = 0; i < n; ++i)
		{
			if (i == 0) {
				d.push_front(dq[i]);
				x = d[i];
			}
			else if (dq[i] <= x) {
				d.push_front(dq[i]);
				x = dq[i];
			}
			else
				d.push_back(dq[i]);
		}
		// cout << n << " " << d.size();
		for (int i = 0; i < d.size(); ++i)
		{
			cout << d[i] << " ";
		}
		cout << ndl;
	}
// cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << "secs" << endl;
	return 0;
}