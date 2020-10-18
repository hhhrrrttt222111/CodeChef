#include<bits/stdc++.h>
#define fi first
#define se second
#define io ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0)
#define ll long long

using namespace std;

const int MAXN = 1e5 + 7;

vector<int> adj[MAXN];
int n, k, g[30], pos[MAXN], dist[30][MAXN];
int pa[20][MAXN], cnt = 0, lca[30][30], h[MAXN] = {};
bool dp[30][MAXN] = {};
pair<int,int> p[30];

void input()
{
//	freopen("test.INP","r",stdin);
	io;
	cin >> n;
	for (int i = 1; i < n; ++i)
	{
		int u, v;
		cin >> u >> v;
		adj[u].push_back(v), adj[v].push_back(u);
	}
	
	cin >> k;
	for (int i = 1; i <= k; ++i) cin >> p[i].se;
}

void dfs(int u, int p)
{
	pos[u] = ++cnt;	
	for (auto v: adj[u])
		if (v != p) pa[0][v] = u, h[v] = h[u] + 1, dfs(v, u);
}

void build_lca()
{
	for (int i = 1; i < 20; ++i)
		for (int u = 1; u <= n; ++u)
			pa[i][u] = pa[i - 1][pa[i - 1][u]];
}

void dfs(int u, int p, int s)
{
	for (auto v: adj[u])
		if (v != p) dist[s][v] = dist[s][u] + 1, dfs(v, u, s);	
}

int find_lca(int u, int v)
{
	if (h[u] < h[v]) swap(u, v);
	for (int i = 19; i >= 0; --i)
		if (h[u] - (1 << i) >= h[v]) u = pa[i][u];
	if (u == v) return u;
	
	for (int i = 19; i >= 0; --i)
		if (pa[i][u] != pa[i][v]) u = pa[i][u], v = pa[i][v];
	return pa[0][u];
}

void solve()
{
	dfs(1, 0);
	for (int i = 1; i <= k; ++i) p[i].fi = pos[p[i].se];
	sort(p + 1, p + 1 + k);
	for (int i = 1; i <= k; ++i) 
	{
		g[i] = p[i].se, dist[i][g[i]] = 0;
		dfs(g[i], 0, i);
	}
	build_lca();
	for (int i = 1; i <= k; ++i)
		for (int j = 1; j <= k; ++j) 
			lca[i][j] = find_lca(g[i], g[j]);
			
	for (int i = 1; i <= k; ++i) 
		dp[i][dist[i][1]] = 1;
	for (int i = 1; i < k; ++i)
		for (int j = 1; j < n; ++j)
			if (dp[i][j])
			{
				for (int t = i + 1; t <= k; ++t)
				{
					int newj = j + dist[t][lca[t][i]];
					dp[t][newj] ^= 1;
				}
			}
	
//	for (int i = 1; i <= k; ++i)
//		for (int j = 1; j < n; ++j)
//			if (dp[i][j]) cout << i << ' ' << j << '\n';
	int ans = n - 1;
	for (int i = 1; i < n - 1; ++i)
	{
		int tot = 0;
		for (int j = 1; j <= k; ++j) tot ^= dp[j][i];
		if (tot) ans ^= (n - 1 - i);
	}
	cout << ans;
}	

int main()
{
	input();
	solve();
	return 0;
}