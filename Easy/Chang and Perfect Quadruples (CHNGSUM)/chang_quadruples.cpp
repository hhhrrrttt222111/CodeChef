#include <iostream>
#include <vector>

using namespace std;

#define int long long

const int N = 1000 * 1000 + 10;
const int INF = 1500 * 1000 * 1000;
const int MOD = (1000 * 1000 * 1000) + 7;

int n, prv_large[N], prv_small[N], a[N], f[N], g[N], pf[N], dp[N];
vector <pair <int, int> > vec;

int32_t main() {

	ios::sync_with_stdio(false);
	cin.tie(0);

	cin >> n;
	for (int i = 1; i <= n; i++)
		cin >> a[i];


	vec.push_back({INF, 0});
	for (int i = 1; i <= n; i++) {
		while (a[i] >= vec.back().first)
			vec.pop_back();
		prv_large[i] = vec.back().second;
		vec.push_back({a[i], i});
	}

	vec.clear();
	vec.push_back({-INF, 0});
	for (int i = 1; i <= n; i++) {
		while (a[i] <= vec.back().first)
			vec.pop_back();
		prv_small[i] = vec.back().second;
		vec.push_back({a[i], i});
	}

	g[0] = 0;
	for (int i = 1; i <= n; i++) {
		g[i] = (a[i] * (i - (prv_large[i]))) % MOD;
		g[i] = (g[i] + g[prv_large[i]]) % MOD;
	}

	for (int i = 1; i <= n; i++)
		f[i] = (f[i - 1] + g[i]) % MOD;

	for (int i = 1; i <= n; i++)
		pf[i] = (f[i] + pf[i - 1]) % MOD;

	for (int i = 1; i <= n; i++) {
		// cout << i << " " << a[i] << " " << pf[i - 1] << " " << prv_large[i] << " " << pf[prv_large[i]] << " " << dp[prv_large[i]] << endl;
		dp[i] = (a[i] * (pf[i - 1] - pf[prv_small[i] - 1])) % MOD;
		dp[i] = (dp[i] + dp[prv_small[i]]) % MOD;
	}

	// for (int i = 0; i <= n; i++)
	// 	cout << dp[i] << ' ';
	// cout << endl;

	int res = 0;
	for (int i = 1; i <= n; i++)
		res = (res + dp[i]) % MOD;

	cout << res << endl;
}