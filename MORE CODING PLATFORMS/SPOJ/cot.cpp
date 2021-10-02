#include <bits/stdc++.h>
using namespace std;

const int N = 1.2e5;
const int K = 20;

int n,q;
pair<int,int> res[N];
int id[N];
vector<int> adj[N];
struct node
{
    int val,left,right;
}tree[N*50];
int dp[K][N],lv[N];
int root[N],cnt;

int clone(int idx){ tree[++cnt] = tree[idx]; return cnt; }

void build(int l,int r,int idx)
{
    cnt = max(cnt,idx);
    if(l==r) return;
    int m = (l+r)/2;
    tree[idx] = {0,idx*2,idx*2+1};
    build(l,m,idx*2),build(m+1,r,idx*2+1);
}

int update(int l,int r,int idx,int x)
{
    int now = clone(idx);
    tree[now].val++;
    if(l==r) return now;
    int m = (l+r)/2;
    if(x<=m) tree[now].left = update(l,m,tree[now].left,x);
    else tree[now].right = update(m+1,r,tree[now].right,x);
    return now;
}

int read(int l,int r,int aidx,int bidx,int pidx,int uidx,int k)
{
    if(l==r) return l;
    int m = (l+r)/2;
    int tmp = tree[tree[aidx].left].val+tree[tree[bidx].left].val-tree[tree[pidx].left].val-tree[tree[uidx].left].val; 
    if(k<=tmp)
        return read(l,m,tree[aidx].left,tree[bidx].left,tree[pidx].left,tree[uidx].left,k);
    else return read(m+1,r,tree[aidx].right,tree[bidx].right,tree[pidx].right,tree[uidx].right,k-tmp);
}

void dfs(int u,int p,int l)
{
    root[u] = update(1,n,root[p],id[u]);
    dp[0][u] = p,lv[u] = l;
    for(int v : adj[u]) if(v!=p) dfs(v,u,l+1);
}

int lca(int a,int b)
{
    if(lv[a]<lv[b]) swap(a,b);
    for(int i = K-1;i >= 0;i--) if(lv[dp[i][a]]>=lv[b]) a = dp[i][a];
    if(a==b) return a;
    for(int i = K-1;i >= 0;i--) if(dp[i][a]!=dp[i][b]) a = dp[i][a],b = dp[i][b];
    return dp[0][a];
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> n >> q;
    for(int i = 1;i <= n;i++) cin >> res[i].first,res[i].second = i;
    for(int i = 0;i < n-1;i++) 
    {
        int a,b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a);
    }   
    sort(res+1,res+n+1);
    for(int i = 1;i <= n;i++) id[res[i].second] =  i;
    build(1,n,1);
    root[0] = 1;
    dfs(1,0,1);
    for(int i = 1;i < K;i++) for(int j = 1;j <= n;j++) dp[i][j] = dp[i-1][dp[i-1][j]];
    while(q--)
    {
        int a,b,k;
        cin >> a >> b >> k;
        int l = lca(a,b);
        int tmp = read(1,n,root[a],root[b],root[l],root[dp[0][l]],k);
        cout << res[tmp].first << '\n';
    }
}
