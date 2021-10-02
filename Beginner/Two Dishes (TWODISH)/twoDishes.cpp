#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
#include <cstdio>
#define FIO ios::sync_with_stdio(false); cin.tie(0), cout.tie(0);
#define int long long
#define pii pair<int,int>
#define vll vector<int>
#define matrix vector<vll>
#define vllp vector<pii>
#define vllb vector<bool>
#define uset unordered_set<int>
#define pb(x) push_back(x)
#define endl '\n'
#define inf 1e18
#define mod 1000000007
#define YES cout<<"YES"<<endl;
#define NO cout<<"NO"<<endl;
#define facebook(t) cout<<"Case #"<<t<<": ";
#define pi 3.1415926536
using namespace std;


void solve(int t) {
	int n, a, b, c;
	cin >> n >> a >> b >> c;
	if ((a + c) >= n && b >= n) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
}

int32_t main() {
	FIO
	int t = 1;
	cin >> t;
	for (int i = 1; i <= t; i++) {
		solve(i);
	}
	return 0;
}
