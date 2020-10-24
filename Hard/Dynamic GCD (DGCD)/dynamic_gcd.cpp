#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
using namespace std;

template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using dijkstra = priority_queue<T, vector<T>, greater<T>>;

using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define fbo find_by_order  // k th index
#define ook order_of_key   // strictly smaller than k
#define PI acos(-1.0)
#define inf 0x3f3f3f3f
#define max_ull 18446744073709551615
#define max_ll 9223372036854775807
#define lead_zero(x) __builtin_clzll(x)
#define trail_zero(x) __builtin_ctzll(x)
#define total_1s(x) __builtin_popcountll(x)
#define first_1(x) __builtin_ffsll(x)
#define log2_(x) __builtin_clz(1) - __builtin_clz(x)
#define isLeap(x) ((x % 400 == 0) || (x % 100 ? x % 4 == 0 : false))
#define QUERY           \
    int test;           \
    scanf("%d", &test); \
    for (int _T = 1; _T <= test; _T++)
#define FAST ios_base::sync_with_stdio(0), cin.tie(0)
#define all(v) v.begin(), v.end()
#define reunique(v) v.resize(std::unique(all(v)) - v.begin())
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pul pair<ull, ull>
#define ff first
#define ss second
#define MERGE(v1, v2, v) merge(all(v1), all(v2), back_inserter(v))
#define MP make_pair
#define EB emplace_back
#define read freopen("input.txt", "r", stdin)
#define write freopen("output.txt", "w", stdout)
#define in_range(v, r, l) upper_bound(all(v), r) - lower_bound(all(v), l)
#define LCM(a, b) (a / __gcd(a, b)) * b;

ll rdn(int y, int m, int d) {
    /* Rata Die day one is 0001-01-01 */
    if (m < 3)
        y--, m += 12;
    return 365 * y + y / 4 - y / 100 + y / 400 + (153 * m - 457) / 5 + d - 306;
}
/* Direction arrays */
/*int dx[] = {1,-1,0,0}, dy[] = {0,0,1,-1};                             */  // 4Direction
/*int dx[] = {1,-1,0,0,1,1,-1,-1}, dy[] = {0,0,1,-1,1,-1,1,-1};         */  // 8Direction
/* int dx[] = {1,-1,1,-1,2,2,-2,-2} , dy[] = {2,2,-2,-2,1,-1,1,-1};     */  // KnightDirection
/* int dx[] = {2,-2,1,1,-1,-1} , dy[] = {0,0,1,-1,1,-1};                */  // HexagonalDirection
/* int day[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}; */

const int N = 50000 + 9;
vector<int> v[N];
int parent[N], depth[N], heavy[N], head[N], pos[N];
int cur_pos;
int posmap[N];
int ara[N];

int tr[4 * N], lz[4 * N], _tr[4 * N];
//push lazy down and merge lazy
inline void pushdown(int u, int st, int en) {
    tr[u] += lz[u];
    if (st != en) {
        lz[u + u] += lz[u];
        lz[u + u + 1] += lz[u];
    }
    lz[u] = 0;
}
void update_val(int u, int st, int en, int l, int r, ll x) {
    pushdown(u, st, en);
    if (r < st || en < l)
        return;
    else if (st >= l && en <= r) {
        lz[u] += x;
        //merge lazy
        pushdown(u, st, en);
    } else {
        int mid = (st + en) / 2;
        update_val(u + u, st, mid, l, r, x);
        update_val(u + u + 1, mid + 1, en, l, r, x);
        tr[u] = (tr[u + u] + tr[u + u + 1]);
    }
}
void update_gcd(int u, int st, int en, int l, int r, ll x) {
    if (r < st || en < l)
        return;
    else if (st >= l && en <= r) {
        _tr[u] += x;
    } else {
        int mid = (st + en) / 2;
        update_gcd(u + u, st, mid, l, r, x);
        update_gcd(u + u + 1, mid + 1, en, l, r, x);
        _tr[u] = __gcd(_tr[u + u], _tr[u + u + 1]);
    }
}
int query_val(int u, int st, int en, int l, int r) {
    pushdown(u, st, en);
    if (l > r)
        return 0;
    if (r < st || en < l)
        return 0;  //proper null
    else if (st >= l && en <= r) {
        return tr[u];
    } else {
        int mid = (st + en) / 2;
        return (query_val(u + u, st, mid, l, r) + query_val(u + u + 1, mid + 1, en, l, r));
    }
}
int query_gcd(int u, int st, int en, int l, int r) {
    if (l > r)
        return 0;
    if (r < st || en < l)
        return 0;  //proper null
    else if (st >= l && en <= r) {
        return _tr[u];
    } else {
        int mid = (st + en) / 2;
        return __gcd(query_gcd(u + u, st, mid, l, r), query_gcd(u + u + 1, mid + 1, en, l, r));
    }
}

int dfs(int x) {
    int size = 1;
    int max_c_size = 0;
    for (int i : v[x]) {
        if (i != parent[x]) {
            parent[i] = x;
            depth[i] = depth[x] + 1;
            int c_size = dfs(i);
            size += c_size;
            if (c_size > max_c_size) {
                max_c_size = c_size, heavy[x] = i;
            }
        }
    }
    return size;
}
void decompose(int x, int h) {
    head[x] = h, pos[x] = ++cur_pos;
    posmap[cur_pos] = x;
    if (heavy[x] != -1) {
        decompose(heavy[x], h);
    }
    for (int i : v[x]) {
        if (i != parent[x] && i != heavy[x]) {
            decompose(i, i);
        }
    }
}
void build(int node, int st, int en) {
    if (st == en) {
        _tr[node] = ara[posmap[st]] - ara[posmap[st - 1]];
        return;
    }
    int mid = (st + en) / 2;
    int lt = node + node, rg = node + node + 1;
    build(lt, st, mid);
    build(rg, mid + 1, en);
    _tr[node] = __gcd(_tr[lt], _tr[rg]);
}

void init(int n) {
    for (int i = 0; i <= n; i++)
        heavy[i] = -1;
    cur_pos = 0;
    dfs(1);
    decompose(1, 1);
    for (int i = 1; i <= n; i++) {
        update_val(1, 1, cur_pos, pos[i], pos[i], ara[i]);
    }
    build(1, 1, cur_pos);
}

int query(int a, int b) {
    int res = 0, q1, q2, q3;
    for (; head[a] != head[b]; b = parent[head[b]]) {
        if (depth[head[a]] > depth[head[b]]) {
            swap(a, b);
        }
        res = __gcd(res,query_val(1, 1, cur_pos, pos[head[b]], pos[head[b]]));
        res = __gcd(res , query_gcd(1, 1, cur_pos, pos[head[b]] + 1, pos[b]));
    }
    if (depth[a] > depth[b])
        swap(a, b);
    res = __gcd(res, query_val(1, 1, cur_pos, pos[a], pos[a]));
    if(a!=b)
        res = __gcd(res , query_gcd(1, 1, cur_pos, pos[a] + 1, pos[b]));

    if (res < 0)
        res = -res;
    return res;
}
void update_hld(int a, int b, ll val) {
    for (; head[a] != head[b]; b = parent[head[b]]) {
        if (depth[head[a]] > depth[head[b]])
            swap(a, b);
        update_val(1, 1, cur_pos, pos[head[b]], pos[b], val);
        if(heavy[b]!=-1)
            update_gcd(1, 1, cur_pos, pos[b] + 1, pos[b] + 1, -val);
    }
    if (depth[a] > depth[b]) {
        swap(a, b);
    }
    update_val(1, 1, cur_pos, pos[a], pos[b], val);
    if(head[a]!=a)
        update_gcd(1, 1, cur_pos, pos[a], pos[a], val);
    if(heavy[b]!=-1)
        update_gcd(1, 1, cur_pos, pos[b] + 1, pos[b] + 1, -val);
}

int main() {
    int n;
    scanf("%d", &n);
    int a, b;
    for (int i = 1; i < n; i++) {
        scanf("%d %d", &a, &b);
        a++;
        b++;
        v[a].EB(b);
        v[b].EB(a);
    }
    for (int i = 1; i <= n; i++) {
        scanf("%d", &ara[i]);
    }
    init(n);
    int q;
    scanf("%d", &q);
    char cx;
    int c, ans;
    while (q--) {
        getchar();
        scanf("%c %d %d", &cx, &a, &b);
        a++;
        b++;
        if (cx == 'F') {
            ans = query(a, b);
            printf("%d\n", ans);
        } else {
            scanf("%d", &c);
            update_hld(a, b, c);
        }
    }
}
