#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;
const int K = 19;

int n,q;
vector<int> adj[N];
int pa[N],sz[N];
bool blocked[N];
int lv[N],dp[K][N];
set<pair<int,int> > s[N];
bool val[N];

void dfs(int u,int p){ sz[u] = 1; for(int v : adj[u]) if(v!=p and !blocked[v]) dfs(v,u),sz[u]+=sz[v]; }

void build(int u,int cp)
{
    dfs(u,0);
    int c = u,p = 0;
    while(true)
    {
        int mx = 0,id;
        for(int v : adj[c]) if(v!=p and !blocked[v]) if(sz[v]>mx) mx = sz[v],id = v;
        if(mx*2>sz[u]) p = c,c = id;
        else break;
    }
    pa[c] = cp;
    blocked[c] = true;
    for(int v : adj[c]) if(!blocked[v]) build(v,c);
}

void dfslca(int u,int p){ lv[u] = lv[p]+1,dp[0][u] = p; for(int v : adj[u]) if(v!=p) dfslca(v,u); }

int lca(int a,int b)
{
    if(lv[a]<lv[b]) swap(a,b);
    for(int i = K-1;i >= 0;i--) if(lv[dp[i][a]]>=lv[b]) a = dp[i][a];
    if(a==b) return a;
    for(int i = K-1;i >= 0;i--) if(dp[i][a]!=dp[i][b]) a = dp[i][a],b = dp[i][b];
    return dp[0][a];
}

int dist(int a,int b)
{
    int l = lca(a,b);
    return lv[a]-lv[l]+lv[b]-lv[l];
}

void update(int u)
{
    val[u]^=1;
    for(int v = u;v;v = pa[v])
    {
        int dis = dist(u,v);
        if(val[u]) 
        {
            auto it = s[v].lower_bound(make_pair(dis,0));
            if(s[v].size() and it->first==dis)
            {
                int am = it->second;
                s[v].erase(make_pair(dis,am));
                s[v].insert(make_pair(dis,am+1));
            }
            else s[v].insert(make_pair(dis,1));
        }
        else
        {
            auto it = s[v].lower_bound(make_pair(dis,0));
            int am = it->second;
            am--;
            s[v].erase(it);
            if(am) s[v].insert(make_pair(dis,am));
        }
    }
}

int query(int u)
{
    int ans = INT_MAX;
    for(int v = u;v;v = pa[v])
    {
        int dis = dist(u,v);
        if(s[v].size()==0) continue;   
        auto it = s[v].begin();
        ans = min(ans,dis+(int)it->first);
    }
    if(ans==INT_MAX) ans = -1;
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n;
    for(int i = 0;i < n-1;i++)
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfslca(1,0);
    build(1,0);
    for(int i = 1;i < K;i++) for(int j = 1;j <= n;j++) dp[i][j] = dp[i-1][dp[i-1][j]];
    cin >> q;
    while(q--)
    {
        int x,y;
        cin >> x >> y;
        if(x==0) update(y);
        else cout << query(y) << '\n';
    }
}
