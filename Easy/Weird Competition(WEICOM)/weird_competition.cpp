//In the name of GOD
//SMani24
#include<bits/stdc++.h>
//#pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math")
//#pragma GCC target("sse,sse2,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
#define int long long
#define fi first
#define se second
#define debug(X) cerr << #X << " = " << (X) << endl
#define endl '\n'
using namespace std;
typedef long long ll;
typedef pair<int, int> pii;

const int N = 1e3 + 10;
const int Inf = 1e9;
const int P = 1e9 + 7;

int t, n, k, nn, ans, cntn;
int cnt[N];
int ansjad[N][N];
set<int> a[N];

int getmin(int x) {
    if(x % 2)
        return (x / 2) * (x / 2) * x;
    else
        return (x / 2) * (x / 2) * (x / 2) + (x / 2 - 1) * (x / 2 - 1) * (x / 2);
}
int getmax(int x) {
    int ret = 0;
    for(int i = 0; i < x; i++)
        ret += i * i;
    return ret;
}
bool check(int x, int y) {
    int mn = getmin(x);
    int mx = getmax(x);
    if(mn % 2 == y % 2 && mn <= y && y <= mx)
        return 1;
    return 0;
}
void khatporkon() {
    if(check(n - 1, k - (n - 1) * (n - 1))) {
        n--;
        k -= n * n;
        for(int i = 0; i < n; i++) {
            ansjad[n][i] = 1;
            ansjad[i][n] = 0;
        }
        khatporkon();
    }
}
void construct_ans() {
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            ansjad[i][j] = 0;
    if(n % 2) {
        for(int i = 0; i < n; i++) {
            cnt[i] = n / 2;
            for(int j = 0; j < n / 2; j++)
                ansjad[i][(i + j + 1) % n] = 1;
        }
    }
    else {
        for(int i = 0; i < n; i++) {
            cnt[i] = 0;
            for(int j = 0; j < n / 2; j++) {
                if(!ansjad[(i + j + 1) % n][i]) {
                    ansjad[i][(i + j + 1) % n] = 1;
                    cnt[i]++;
                }
            }
        }
    }
}
void set_a() {
    cntn = 0;
    for(int i = 0; i < n; i++)
        a[i].clear();
    for(int i = 0; i < n; i++) {
        a[cnt[i]].insert(i);
        cntn += cnt[i] * cnt[i];
    }
}
void change(int deg) {
    auto it = a[deg].begin();
    int u = *it;
    it++;
    int v = *it;
    a[deg].erase(u);
    a[deg].erase(v);
    if(ansjad[u][v])
        swap(u, v);
    ansjad[u][v] = 1;
    ansjad[v][u] = 0;
    cnt[v]--;
    cnt[u]++;
    a[deg + 1].insert(u);
    a[deg - 1].insert(v);
}
bool ch() {
    int f = n - 1;
    while(f >= 0 && a[f].size() < 2)
        f--;
    if(f == -1)
        return 1;
    change(f);
    return 0;
}

void read_input() {
    cin >> nn >> k;
    n = nn;
}
void solve() {
    ans = 0;
    if(!check(n, k))
        return;
    khatporkon();
    construct_ans();
    set_a();
    ans = 1;
    while(cntn != k) {
        ch();
        cntn += 2;
    }
}
void write_output() {
    if(ans) {
        for(int i = 0; i < nn; i++) {
            for(int j = 0; j < nn; j++)
                cout << ansjad[i][j];
            cout << '\n';
        }
    }
    else
        cout << -1 << '\n';
}

int32_t main(){
    ios::sync_with_stdio(false), cin.tie(0), cout.tie(0);
    cin >> t;
    for(int i = 0; i < t; i++)
        read_input(), solve(), write_output();
}
