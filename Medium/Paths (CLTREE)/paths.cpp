#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 1e5 + 5;

int t, n, x, y, z;
array<int, 3> a;
vector<int> g[MAX_N];
vector<array<int, 3>> cnt[MAX_N];

bool off[MAX_N];
int sz[MAX_N];
int dist_cnt[MAX_N];

int mk[MAX_N][8], cur;
long long dp[MAX_N][8];

void calc_sz(int u, int p) {
    sz[u] = 1;
    for (int v : g[u]) if (v != p && !off[v])
        calc_sz(v, u), sz[u] += sz[v];
}

int get_centroid(int u, int p, int cur_sz) {
    for (int v : g[u]) if (v != p && !off[v])
        if (sz[v] * 2 > cur_sz) return get_centroid(v, u, cur_sz);
    return u;
}

void dfs_upd_dist(int u, int p, int d, int val) {
    dist_cnt[d] += val;
    for (int v : g[u]) if (v != p && !off[v])
        dfs_upd_dist(v, u, d + 1, val);
}

void dfs_upd_cnt(int u, int p, int d) {
    int i = lower_bound(g[u].begin(), g[u].end(), p) - g[u].begin();
    if (x >= d) cnt[u][i][0] += dist_cnt[x - d];
    if (y >= d) cnt[u][i][1] += dist_cnt[y - d];
    if (z >= d) cnt[u][i][2] += dist_cnt[z - d];
    for (int v : g[u]) if (v != p && !off[v])
        dfs_upd_cnt(v, u, d + 1);
}

void centroid_decompose(int u) {
    calc_sz(u, u);
    int cen = get_centroid(u, u, sz[u]);

    for (int i = 0; i < (int)g[cen].size(); i++) {
        int v = g[cen][i];
        if (off[v]) continue;
        dfs_upd_dist(v, cen, 1, +1);
        cnt[cen][i][0] += dist_cnt[x];
        cnt[cen][i][1] += dist_cnt[y];
        cnt[cen][i][2] += dist_cnt[z];
        dfs_upd_dist(v, cen, 1, -1);
    }

    dfs_upd_dist(cen, cen, 0, +1);
    for (int i = 0; i < (int)g[cen].size(); i++) {
        int v = g[cen][i];
        if (off[v]) continue;
        dfs_upd_dist(v, cen, 1, -1);
        dfs_upd_cnt(v, cen, 1);
        dfs_upd_dist(v, cen, 1, +1);
    }
    dfs_upd_dist(cen, cen, 0, -1);

    off[cen] = 1;
    for (int v : g[cen]) if (!off[v])
        centroid_decompose(v);
}

long long recur(int u, int i, int mask) {
    if (i == -1) return !mask;
    if (mk[i][mask] != cur) {
        mk[i][mask] = cur;
        dp[i][mask] = recur(u, i - 1, mask);
        if (mask & 1) dp[i][mask] += recur(u, i - 1, mask ^ 1) * cnt[u][i][0];
        if (mask & 2) dp[i][mask] += recur(u, i - 1, mask ^ 2) * cnt[u][i][1];
        if (mask & 4) dp[i][mask] += recur(u, i - 1, mask ^ 4) * cnt[u][i][2];
    }
    return dp[i][mask];
}

long long solve() {
    sort(a.begin(), a.end());
    int s = a[0] + a[1] + a[2];
    if (s % 2 || a[0] + a[1] < a[2]) return 0;
    s /= 2;
    x = s - a[0], y = s - a[1], z = s - a[2];

    for (int u = 1; u <= n; u++) {
        sort(g[u].begin(), g[u].end());
        cnt[u].resize(g[u].size());
    }

    centroid_decompose(1);

    long long res = 0;
    for (int u = 1; u <= n; u++) {
        cur++;
        res += recur(u, (int)g[u].size() - 1, z ? 7 : 3);
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false); cin.tie(nullptr);

    cin >> t;
    while (t--) {
        cin >> n >> a[0] >> a[1] >> a[2];
        for (int i = 0; i < n - 1; i++) {
            int u, v; cin >> u >> v;
            g[u].push_back(v);
            g[v].push_back(u);
        }

        cout << solve() << "\n";

        fill_n(g + 1, n, vector<int>());
        fill_n(cnt + 1, n, vector<array<int, 3>>());
        fill_n(off + 1, n, 0);
    }

    return 0;
}
