#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 1;

int n,q;
vector<int> adj[N];
int dp[20][N],lv[N];

void dfs(int u,int p,int l)
{
    dp[0][u] = p,lv[u] = l;
    for(int v : adj[u]) if(v!=p) dfs(v,u,l+1);
}

int lca(int a,int b)
{
    if(lv[a]<lv[b]) swap(a,b);
    for(int i = 19;i >= 0;i--) if(lv[dp[i][a]]>=lv[b]) a = dp[i][a];
    if(a==b) return a;
    for(int i = 19;i >= 0;i--) if(dp[i][a]!=dp[i][b]) a = dp[i][a],b = dp[i][b];
    return dp[0][a];
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
    dfs(1,0,1);
    for(int i = 1;i < 20;i++) for(int j = 1;j <= n;j++) dp[i][j] = dp[i-1][dp[i-1][j]];
    cin >> q;
    while(q--)
    {
        int a,b;
        cin >> a >> b;
        if(lv[a]<lv[b]){ cout << "NO\n"; continue; }
        int l = lca(a,b);
        cout << "YES " << l << '\n';
    }
}
