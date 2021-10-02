#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 1;

int q,n,t;
vector<tuple<int,int,int> > adj[N];
int dp[20][N],lv[N],sz[N];
int in[N],out[N],nxt[N];
struct node
{
    int val;
    friend node operator+(const node &a,const node &b)
    {
        if(a.val>b.val) return a;
        else return b;
    }
}tree[N << 2];
int va[N],vid[N];

void dfs(int u,int p,int l)
{
    sz[u] = 1,dp[0][u] = p,lv[u] = l;
    for(int i = 0;i < adj[u].size();i++) 
    {
        auto [d,v,id] = adj[u][i];
        if(v==p) continue;
        dfs(v,u,l+1);
        sz[u]+=sz[v];
        if(sz[v]>sz[get<1>(adj[u][0])]) swap(adj[u][0],adj[u][i]);
    }
}

void hld(int u,int p)
{
    in[u] = ++t;
    for(auto [d,v,id] : adj[u]) if(v!=p)
    {
        if(v==get<1>(adj[u][0])) nxt[v] = nxt[u];
        else nxt[v] = v;
        hld(v,u);
        va[in[v]] = d,vid[id] = in[v];
    }
    out[u] = t;
}

int lca(int a,int b)
{
    if(lv[a]<lv[b]) swap(a,b);
    for(int i = 19;i >= 0;i--) if(lv[dp[i][a]]>=lv[b]) a = dp[i][a];
    if(a==b) return a;
    for(int i = 19;i >= 0;i--) if(dp[i][a]!=dp[i][b]) a = dp[i][a],b = dp[i][b];
    return dp[0][a];
}

void build(int l,int r,int idx)
{
    if(l==r)
    {
        tree[idx] = {va[l]};
        return;
    }
    int m = (l+r)/2;
    build(l,m,idx*2),build(m+1,r,idx*2+1);
    tree[idx] = tree[idx*2]+tree[idx*2+1];
}

void update(int l,int r,int idx,int x,int y)
{
    if(x<l or x>r) return;
    if(l==r) 
    {
        tree[idx] = {y};
        return;
    }
    int m = (l+r)/2;
    update(l,m,idx*2,x,y),update(m+1,r,idx*2+1,x,y);
    tree[idx] = tree[idx*2]+tree[idx*2+1];
}

node read(int l,int r,int idx,int x,int y)
{
    if(x>r or y<l) return {0};
    if(x<=l and y>=r) return tree[idx];
    int m = (l+r)/2;
    return read(l,m,idx*2,x,y)+read(m+1,r,idx*2+1,x,y);
}

int queryup(int u,int v)
{
    int ans = 0;
    while(true)
    {
        if(nxt[u]==nxt[v])
        {
            ans = max(ans,read(1,n,1,in[v]+1,in[u]).val);
            return ans;
        }
        ans = max(ans,read(1,n,1,in[nxt[u]],in[u]).val);
        u = dp[0][nxt[u]];
    }
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> q;
    while(q--)
    {
        cin >> n;
        for(int i = 1;i <= n;i++) adj[i].clear();
        for(int i = 0;i < n-1;i++)
        {
            int a,b,d;
            cin >> a >> b >> d;
            adj[a].push_back({d,b,i+1});
            adj[b].push_back({d,a,i+1});
        }
        t = 0;
        dfs(1,0,1);
        hld(1,0);
        for(int i = 1;i < 20;i++) for(int j = 1;j <= n;j++) dp[i][j] = dp[i-1][dp[i-1][j]];
        build(1,n,1);
        while(true)
        {
            string s;
            cin >> s;
            if(s[0]=='D') break;
            else if(s[0]=='C')
            {
                int x,y;
                cin >> x >> y;
                update(1,n,1,vid[x],y);
            }
            else
            {
                int x,y;
                cin >> x >> y;
                int l = lca(x,y);
                cout << max(queryup(x,l),queryup(y,l)) << '\n';
            }
        }
    }
}
