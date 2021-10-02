#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 1;
const int K = 20;

int n,q;
vector<int> adj[N];
int in[N],nxt[N],t;
int dp[K][N],lv[N],sz[N];
struct node
{
    int val;
    friend node operator+(const node &a,const node &b)
    {
        if(a.val) return a;
        else return b;
    }
}tree[N << 2];

void dfs(int u,int p,int l)
{
    dp[0][u] = p,sz[u] = 1,lv[u] = l;
    int szp = sz[p];
    sz[p] = 0;
    for(auto &v : adj[u]) if(v!=p)
    {
        dfs(v,u,l+1);
        sz[u]+=sz[v];
        if(sz[v]>sz[adj[u][0]]) swap(adj[u][0],v);
    }
    sz[p] = szp;
}

void hld(int u,int p)
{
    in[u] = ++t;
    for(auto v : adj[u]) if(v!=p)
    {
        if(v==adj[u][0]) nxt[v] = nxt[u];
        else nxt[v] = v;
        hld(v,u);
    }
}

void update(int l,int r,int idx,int x,int y)
{
    if(x<l or x>r) return;
    if(l==r){ tree[idx].val = y-tree[idx].val; return; }
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

int queryup(int u)
{
    int v = 1,ans = -1;
    while(true)
    {
        if(nxt[u]==nxt[v]) 
        {
            int tmp = read(1,n,1,in[v],in[u]).val;
            if(tmp) ans = tmp;
            break;
        }
        int tmp = read(1,n,1,in[nxt[u]],in[u]).val;
        if(tmp) ans = tmp;
        u = dp[0][nxt[u]];
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> q;
    for(int i = 0;i < n-1;i++) 
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }
    dfs(1,0,1);
    hld(1,0);
    while(q--)
    {
        int t,x;
        cin >> t >> x;
        if(!t) update(1,n,1,in[x],x);
        else cout << queryup(x) << '\n';
    }
}
