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
		vector<char>s(n);
		arrin(s, n);
		vector<char>s2(n);
		for (int i = 0; i < n; ++i)
		{
			if (s[i] == 'U')
				s2[i] = 'D';
			else if (s[i] == 'L')
				s2[i] = 'L';
			else if (s[i] == 'R')
				s2[i] = 'R';
			else if (s[i] == 'D')
				s2[i] = 'U';
		}
		for (int i = 0; i < n; ++i)
		{
			cout << s2[i];
		}
		cout << ndl;
	}
// 	cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << "secs" << endl;
	return 0;
}