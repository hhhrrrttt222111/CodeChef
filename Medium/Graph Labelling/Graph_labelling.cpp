#ifdef DEBUG
#define _GLIBCXX_DEBUG
#endif
#include <bits/stdc++.h>
using namespace std;typedef long double ld;typedef long long ll;
const int infinity = 1e9;
class DinitzFlow {private:struct Edge {int src, dst, cap, flow;Edge() {} Edge(int src, int dst, int cap, int flow) : src(src), dst(dst), cap(cap), flow(flow) {}};
    int n, s, t;vector<Edge> edges;vector< vector<int> > g;vector<int> layer;vector<int> ptr;
    inline bool bfs() {layer.assign(n, -1);queue<int> q;layer[s] = 0;q.push(s);while (!q.empty() && layer[t] < 0) {int v = q.front(); q.pop();
            for (int eid: g[v]) {int to = edges[eid].dst;if (edges[eid].cap > edges[eid].flow) {if (layer[to] < 0) {layer[to] = layer[v] + 1;q.push(to);}}}}return layer[t] >= 0;}
    int dfs(int v, int flow = infinity) {if (v == t)return flow;if (flow == 0)return 0;for (; ptr[v] < (int)g[v].size(); ptr[v]++) {int eid = g[v][ptr[v]];int to = edges[eid].dst;
            if (layer[to] == layer[v] + 1) {int can = edges[eid].cap - edges[eid].flow;int pushed = dfs(to, min(flow, can));
                if (pushed > 0) {edges[eid].flow += pushed;edges[eid^1].flow -= pushed;return pushed;}}}return 0;}
public:inline void changeSrcDst(int ns, int nt) {s = ns; t = nt;for (Edge &e : edges)e.flow = 0;}inline const vector<Edge> &getEdges() const {return edges;}   
    inline vector<char> getCut() {vector<char> side(n, 0);
        function<void(int)> dfs = [&](int v) {if (side[v])return;side[v] = 1;for (int eid : g[v]) {if (edges[eid].cap == edges[eid].flow)continue;dfs(edges[eid].dst);}};
        dfs(s);return side;}inline int flow() {int ans = 0;while (bfs()) {ptr.assign(n, 0);int pushed = dfs(s);while (pushed != 0) {ans += pushed;pushed = dfs(s);}}return ans;}
    inline void addEdge(int src, int dst, int cap) {g[src].push_back(edges.size());edges.emplace_back(src, dst, cap, 0);g[dst].push_back(edges.size());edges.emplace_back(dst, src, 0, 0);}
    DinitzFlow(int n, int s, int t) : n(n), s(s), t(t), g(n), layer(n), ptr(n) {}};
struct scc {int n;vector<vector<int>> g,gr;vector<int> order;vector<bool> used;void dfs(int v) {used[v] = true;for (int to : g[v])if (!used[to])dfs(to);order.emplace_back(v);}
    vector < vector < int > > components;void sec_dfs(int v, vector<int>& cmp) {cmp.emplace_back(v);used[v] = true;for (int to : gr[v])if (!used[to])sec_dfs(to, cmp);}
    scc(vector<vector<int>> &edge) {g = edge;n = g.size();gr.resize(n);for (int i = 0; i < n; i++)for (int v : g[i])gr[v].emplace_back(i);                    
        used = vector<bool>(n, false);for (int i = 0; i < n; i++)if (!used[i])dfs(i);reverse(order.begin(), order.end());used.assign(n, false);
        for (int v : order)if (!used[v]) {vector < int > cmp;sec_dfs(v, cmp);components.emplace_back(cmp);}}};

void solve() {
    int n, m, q;
    cin >> n >> m >> q;
    vector<vector<int>> edge(n);
    for (int i = 0; i < m; i++) {
        int u, v;
        cin >> u >> v;
        u--;
        v--;
        edge[u].emplace_back(v);
    }
    int c1, c2;
    cin >> c1 >> c2;
    scc p(edge);
    vector<int> id(n);
    int sz = 0;
    for (auto& it : p.components) {
        for (int v : it) {
            id[v] = sz;
        }
        ++sz;
    }
    vector<int> cnt_out(n), cnt_in(n), scc_out(sz), scc_in(sz);
    for (int i = 0; i < n; i++) {
        for (int& p : edge[i]) {
            cnt_out[i]++;
            scc_out[id[i]]++;
            cnt_in[p]++;
            scc_in[id[p]]++;
        }
    }
    vector<int> l_in(n), r_in(n), l_out(n), r_out(n), r_scc_in(sz), r_scc_out(sz), l_scc_in(sz), l_scc_out(sz);
    for (int i = 0; i < n; i++) {
        r_in[i] = cnt_in[i];
        r_out[i] = cnt_out[i];
    }
    for (int i = 0; i < sz; i++) {
        r_scc_in[i] = scc_in[i];
        r_scc_out[i] = scc_out[i];
    }
    for (int i = 0; i < q; i++) {
        int t, w, x, l, r;
        cin >> t >> w >> x >> l >> r;
        w--;
        if (t == 1) {
            w = id[w];
            if (x == 2) {
                l = scc_out[w] - l;
                r = scc_out[w] - r;
                swap(l, r);
            }
            l_scc_out[w] = max(l_scc_out[w], l);
            r_scc_out[w] = min(r_scc_out[w], r);
        }
        else if (t == 2) {
            w = id[w];
            if (x == 2) {
                l = scc_in[w] - l;
                r = scc_in[w] - r;
                swap(l, r);
            }
            l_scc_in[w] = max(l_scc_in[w], l);
            r_scc_in[w] = min(r_scc_in[w], r);
        }
        else if (t == 3) {
            if (x == 2) {
                l = cnt_out[w] - l;
                r = cnt_out[w] - r;
                swap(l, r);
            }
            l_out[w] = max(l_out[w], l);
            r_out[w] = min(r_out[w], r);
        }
        else if (t == 4) {
            if (x == 2) {
                l = cnt_in[w] - l;
                r = cnt_in[w] - r;
                swap(l, r);
            }
            l_in[w] = max(l_in[w], l);
            r_in[w] = min(r_in[w], r);
        }
        else {
            assert(false);
        }
    }
    for (int i = 0; i < n; i++) {
        if (l_in[i] > r_in[i] || l_out[i] > r_out[i]) {
            cout << -1 << '\n';
            return;
        }
    }
    for (int i = 0; i < sz; i++) {
        if (l_scc_in[i] > r_scc_in[i] || l_scc_out[i] > r_scc_out[i]) {
            cout << -1 << '\n';
            return;
        }
    }

    if (c1 > c2) {
        //хотим найти мин поток
    }
    else {
        for (int i = 0; i < n; i++) {
            l_in[i] = cnt_in[i] - l_in[i];
            r_in[i] = cnt_in[i] - r_in[i];
            swap(l_in[i], r_in[i]);
            l_out[i] = cnt_out[i] - l_out[i];
            r_out[i] = cnt_out[i] - r_out[i];
            swap(l_out[i], r_out[i]);
        }
        for (int i = 0; i < sz; i++) {
            l_scc_in[i] = scc_in[i] - l_scc_in[i];
            r_scc_in[i] = scc_in[i] - r_scc_in[i];
            swap(l_scc_in[i], r_scc_in[i]);
            l_scc_out[i] = scc_out[i] - l_scc_out[i];
            r_scc_out[i] = scc_out[i] - r_scc_out[i];
            swap(l_scc_out[i], r_scc_out[i]);
        }
        swap(c1, c2);
    }
    assert(c1 >= c2);
    int l = -1;
    int r = m + 3;
    while (r - l > 1) {
        int mid = (l + r) / 2;
        int s_old = 2 * n + 2 * sz;
        int t_old = 2 * n + 2 * sz + 1;
        int s_new = 2 * n + 2 * sz + 2;
        int t_new = 2 * n + 2 * sz + 3;
        DinitzFlow ds(2 * n + 2 * sz + 4, s_new, t_new);
        ds.addEdge(t_old, s_old, mid);
        int tot = 0;
        auto add_edge =[&](int from, int to, int l, int r) {
            tot += l;
            if (l == 0) {
                ds.addEdge(from, to, r);
            }
            else {
                ds.addEdge(from, to, r - l);
                ds.addEdge(s_new, to, l);
                ds.addEdge(from, t_new, l);
            }
        };
        for (int i = 0; i < sz; i++) {
            add_edge(s_old, i + 2 * n, l_scc_out[i], r_scc_out[i]);
            add_edge(i + 2 * n + sz, t_old, l_scc_in[i], r_scc_in[i]);
        }
        for (int i = 0; i < n; i++) {
            add_edge(id[i] + 2 * n, i, l_out[i], r_out[i]);
            add_edge(i + n, id[i] + 2 * n + sz, l_in[i], r_in[i]);
            for (int v : edge[i]) {
                add_edge(i, v + n, 0, 1);
            }
        }
        if (ds.flow() == tot) {
            r = mid;
        }
        else {
            l = mid;
        }
    }
    if (r > m) {
        cout << -1 << '\n';
    }
    else {
        cout << (1LL * r * c1 + 1LL * (m - r) * c2) << '\n';
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
//    freopen("input.txt", "r", stdin);
    int tst;
    cin >> tst;
    while (tst--) {
        solve();
    }
    return 0;
}