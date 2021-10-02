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
		ll n = 0;
		cin >> n;
		string s, temp;
		for (int i = 0; i < 2 * n; ++i)
		{
			if (i < n)
				s.push_back('(');
			else
				s.push_back(')');
		}
		temp = s;

		for (int a = n, b = n - 1; a > 0 && b < 2 * n ; a--, b++) {
			s[a] = ')'; s[b] = '(';
			for (int i = 0; i < 2 * n; ++i)
			{
				cout << s[i];
			}
			cout << ndl;
			s = temp;
		}
		cerr << "time taken: " << (float)clock() / CLOCKS_PER_SEC << "secs" << endl;
	}
	return 0;
}