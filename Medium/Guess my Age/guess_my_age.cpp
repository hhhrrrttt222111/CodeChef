#include "bits/stdc++.h"
using namespace std;
#define int int64_t
using ll = long long;
const int N = 2e5 + 5, MOD = 998244353;
const ll inf = 1e15;
vector<vector<pair<int, int>>> adj[2];
vector<int> dist(int z, int m){
    int n = adj[z].size();
    vector<int> dist(n, inf), in_que(n);
    deque<int> q = {0};
    dist[0] = 0;
    while(!q.empty()){
        --m;
        if(m < 0)
        return {-1};
        int u = q[0];
        q.pop_front();
        in_que[u] = 0;
        for(auto to : adj[z][u]){
                int v = to.first;
                int w = to.second;
                if(dist[u] + w < dist[v]){
                    dist[v] = dist[u] + w;
                    if(!in_que[v]){
                        in_que[v] = true;
                        q.push_back(v);
                    }
                }
        }
    }
    return dist;
}
void solve(){
    int n, m;
    cin >> n >> m;
    adj[0].assign(n, vector<pair<int,int>>());
    adj[1].assign(n, vector<pair<int,int>>());
    for(int i = 0, t, u, v, c; i < m; i++){
        cin >> t >> u >> v >> c;
        --t,--u,--v;
        if(t==0)
            c=-c,swap(u,v);
        else
            --c;
        adj[0][v].push_back({u,c});
        adj[1][u].push_back({v,c});
    }
    auto le = dist(0,m);
    auto re = dist(1,m);
    for(auto & it : re)
        it = -it;
    if(le==re){
        cout << "YES\n";
        for(auto x : le)
        cout << x << " ";
    }   else cout << "NO";
    cout << '\n';
}
signed main(){
    ios_base::sync_with_stdio(0);   cin.tie(0);
    int t;
    cin >> t;
    while(t--)
        solve();
    return 0;
}
