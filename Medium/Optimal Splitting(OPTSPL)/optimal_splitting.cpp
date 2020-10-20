#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <queue>
using namespace std;

#ifdef LOCAL
	#define eprintf(...) fprintf(stderr, _VA_ARGS_)
#else
	#define eprintf(...) 42
#endif

typedef long long ll;
typedef pair<int, int> pii;
#define mp make_pair
mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int N = 100200;
int n;
int id[N];
map<int, ll> a[N];
vector<int> g[N];
int ans = N;
ll ans2 = 0;
int sz[N];

void relaxAns(int x, int y, int z, ll cnt) {
	if (x > y) swap(x, y);
	if (y > z) swap(y, z);
	if (x > y) swap(x, y);
	x = z - x;
	if (ans > x) {
		ans = x;
		ans2 = 0;
	}
	if (ans == x)
		ans2 += cnt;
}

void dfs(int v, int par) {
	sz[v] = 1;
	int big = -1;
	for (int u : g[v]) {
		if (u == par) continue;
		dfs(u, v);
		sz[v] += sz[u];
		if (big == -1 || sz[u] > sz[big]) big = u;
		if (sz[u] > 1) {
			auto it = a[id[u]].lower_bound((sz[u] + 1) / 2);
			int x = it->first;
			int y = sz[u] - x;
			if (it != a[id[u]].begin()) {
				it--;
				if (min(x, y) < it->first) {
					x = it->first;
					y = sz[u] - x;
				}
			}
			ll cnt = a[id[u]][x];
			if (x != y && a[id[u]].count(y)) cnt += a[id[u]][y];
			relaxAns(x, y, n - sz[u], cnt);
		}
	}
	if (big == -1) {
		id[v] = v;
	} else {
		id[v] = id[big];
		for (int u : g[v]) {
			if (u == big || u == par) continue;
			for (auto t : a[id[u]]) {
				int z = t.first;
				auto it = a[id[v]].lower_bound((n - z + 1) / 2);
				int x = 0, y = n - z;
				if (it != a[id[v]].end()) {
					if (min(x, y) < it->first) {
						x = it->first;
						y = n - z - x;
					}
				}
				if (it != a[id[v]].begin()) {
					it--;
					if (min(x, y) < it->first) {
						x = it->first;
						y = n - z - x;
					}
				}
				ll cnt = a[id[v]][x];
				if (x != y && a[id[v]].count(y)) cnt += a[id[v]][y];
				relaxAns(x, y, z, cnt * t.second);
			}
			for (auto t : a[id[u]])
				a[id[v]][t.first] += t.second;
		}
	}
	a[id[v]][sz[v]] += 1;
}

int main()
{
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);

	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		int v, u;
		scanf("%d%d", &v, &u);
		v--;u--;
		g[v].push_back(u);
		g[u].push_back(v);
	}
	dfs(0, -1);
	printf("%d %lld\n", 2 * ans, ans2);

	return 0;
}