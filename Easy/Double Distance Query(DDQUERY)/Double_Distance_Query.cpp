#include <iostream>
#include <cstdio>
#include <cstring>
#define MN 1010000

int f[MN], g[MN];
int a[MN], b[MN], c[MN], d[MN];
int h[MN], nxt[2 * MN], to[2 * MN], K = 0;
int st[MN][20], dep[MN];
int n, q;

void ins(int u, int v) {nxt[++K] = h[u]; h[u] = K; to[K] = v;}

int jump(int u, int k)
{
	for(int i = 19; i >= 0; i--)
		if((k >> i) & 1) u = st[u][i];
	return u;
}

int lca(int u, int v)
{
	if(dep[u] < dep[v]) std::swap(u, v);
	int k = dep[u] - dep[v];
	u = jump(u, k);
	if(u == v) return u;
	for(int i = 19; i >= 0; i--)
		if(st[u][i] != st[v][i])
			u = st[u][i], v = st[v][i];
	return st[u][0];
}

int dist(int a, int b) {return dep[a] + dep[b] - 2 * dep[lca(a, b)];}

int path(int a, int b, int k)
{
	int l = lca(a, b), dis = dep[a] + dep[b] - 2 * dep[l];
	if(dep[a] - dep[l] >= k) return jump(a, k);
	else return jump(b, dis - k);
}

void dfs1(int x, int fa)
{
	a[x] = b[x] = c[x] = x;
	dep[x] = dep[fa] + 1;
	st[x][0] = fa;
	for(int i = 1; i <= 19; i++) st[x][i] = st[st[x][i - 1]][i - 1];
	for(int i = h[x]; i; i = nxt[i])
	{
		if(to[i] == fa) continue;
		dfs1(to[i], x);
		int v = a[to[i]];
		if(dep[v] > dep[a[x]]) std::swap(v, a[x]);
		if(dep[v] > dep[b[x]]) std::swap(v, b[x]);
		if(dep[v] > dep[c[x]]) std::swap(v, c[x]);
		f[x] = std::max(f[x], f[to[i]] + 1);
	}
}

void dfs2(int x, int fa)
{
	if(x != 1)
	{
		if(a[fa] == a[x]) g[x] = dep[b[fa]] - dep[fa] + 1, d[x] = b[fa];
		else g[x] = dep[a[fa]] - dep[fa] + 1, d[x] = a[fa];
		if(g[fa] + 1 > g[x]) g[x] = g[fa] + 1, d[x] = d[fa];
	}
	for(int i = h[x]; i; i = nxt[i]) if(to[i] != fa) dfs2(to[i], x);
}

int main()
{
	int T; scanf("%d", &T);
	while(T--)
	{
		scanf("%d%d", &n, &q);
		for(int i = 1; i < n; i++)
		{
			int u, v; scanf("%d%d", &u, &v);
			ins(u, v); ins(v, u);
		}
		dfs1(1, 0); dfs2(1, 0);
//		for(int i = 1; i <= n; i++) printf("%d %d %d %d %d %d %d %d\n", i, f[i], dep[a[i]] - dep[i], g[i], a[i], b[i], c[i], d[i]);
		for(int i = 1; i <= q; i++)
		{
			int a, da, b, db; scanf("%d%d%d%d", &a, &da, &b, &db);
			if(da > db) std::swap(a, b), std::swap(da, db);
			int dis = dist(a, b), l = lca(a, b);
			if((da + db - dis) & 1) {puts("-1"); continue;}
			int k = (da + db - dis) / 2;
			if(k < 0 || da - k < 0 || da - k > dis) {puts("-1"); continue;}
			int x = path(a, b, da - k);
			if(k == 0) {printf("%d\n", x); continue;}
			if(x == l && g[x] >= k) {printf("%d\n", path(x, d[x], k)); continue;}
			int A = 0, B = 0, o; 
			if(dep[a] > dep[x] && jump(a, dep[a] - dep[x]) == x) A = jump(a, dep[a] - dep[x] - 1);
			if(dep[b] > dep[x] && jump(b, dep[b] - dep[x]) == x) B = jump(b, dep[b] - dep[x] - 1);
			o = jump(::a[x], dep[::a[x]] - dep[x] - 1); 
			if(dep[::a[x]] - dep[x] >= k && o != A && o != B) {printf("%d\n", path(x, ::a[x], k)); continue;}
			o = jump(::b[x], dep[::b[x]] - dep[x] - 1);
			if(dep[::b[x]] - dep[x] >= k && o != A && o != B) {printf("%d\n", path(x, ::b[x], k)); continue;}
			o = jump(::c[x], dep[::c[x]] - dep[x] - 1);
			if(dep[::c[x]] - dep[x] >= k && o != A && o != B) {printf("%d\n", path(x, ::c[x], k)); continue;}
			puts("-1");
		}
		
		for(int i = 1; i <= n; i++) h[i] = 0; K = 0; 
	}
}