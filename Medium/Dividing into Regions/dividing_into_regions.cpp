#include <bits/stdc++.h>
#pragma comment(linker, "/STACK:16000000")
using namespace std;
 
typedef pair <int, int> ii;
typedef long long ll;
 
const int Maxn = 5000005;
const int mod = 1000000007;
const int mult = 1000000 + 3;
 
int t;
int n;
int A, B, C, D, E;
int w[Maxn];
vector <ii> neigh[Maxn];
int my[Maxn], best[Maxn][3], mx[Maxn][3];
int res1[Maxn], res2[Maxn];
 
void Insert(int dp[], int val)
{
	if (val > dp[0]) { dp[2] = dp[1]; dp[1] = dp[0]; dp[0] = val; }
	else if (val > dp[1]) { dp[2] = dp[1]; dp[1] = val; }
	else if (val > dp[2]) dp[2] = val;
}
 
int Get(int dp[], int val) { return dp[0] == val? dp[1]: dp[0]; }
 
int getSum(int dp[], int val, int tp)
{
	if (dp[0] == val) return dp[1] + max(tp, dp[2]);
	if (dp[1] == val) return dp[0] + max(tp, dp[2]);
	return dp[0] + max(tp, dp[1]);
}
 
void Traverse1(int v, int p)
{
	for (int i = 0; i < 3; i++)
		best[v][i] = mx[v][i] = 0;
	for (int i = 0; i < neigh[v].size(); i++) {
		int u = neigh[v][i].first;
		if (u == p) continue;
		int cost = w[neigh[v][i].second];
		Traverse1(u, v);
		Insert(best[v], my[u]); Insert(mx[v], mx[u][0] + cost);
	}
	my[v] = max(best[v][0], mx[v][0] + mx[v][1]);
}
 
void Traverse2(int v, int p, int topmx, int topbest)
{
	for (int i = 0; i < neigh[v].size(); i++) {
		int u = neigh[v][i].first;
		if (u == p) continue;
		int ind = neigh[v][i].second;
		int cost = w[ind];
		int curmx = max(topmx, Get(mx[v], mx[u][0] + cost));
		int curbest = max(max(topbest, Get(best[v], my[u])), getSum(mx[v], mx[u][0] + cost, topmx));
		res1[ind] = curbest; res2[ind] = my[u];
		Traverse2(u, v, curmx + cost, curbest);
	}
}
 
int main()
{
	scanf("%d", &t);
	while (t--) {
		scanf("%d", &n);
		scanf("%d %d %d %d %d", &A, &B, &C, &D, &E);
		for (int i = 1; i <= n; i++)
			neigh[i].clear();
		for (int i = 1; i < n; i++) {
			int a = i + 1;
			int b = (ll(A) + ll(B) * (i - 1)) % i + 1;
			w[i] = (ll(C) * i + ll(D)) % E;
			neigh[a].push_back(ii(b, i));
			neigh[b].push_back(ii(a, i));
		}
		Traverse1(1, 0);
		Traverse2(1, 0, 0, 0);
		int cur = 1;
		int res = 0;
		for (int i = 1; i < n; i++) {
			if (res1[i] > res2[i]) swap(res1[i], res2[i]);
			res = (res + ll(res1[i]) * cur) % mod; cur = ll(cur) * mult % mod;
			res = (res + ll(res2[i]) * cur) % mod; cur = ll(cur) * mult % mod;
		}
		printf("%d\n", res);
	}
	return 0;
} 