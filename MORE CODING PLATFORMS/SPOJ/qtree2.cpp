#include <bits/stdc++.h>
using namespace std;

const int N = 1e4 + 1;
const int K = 20;

int t,n;
vector<pair<int,int> > adj[N];
int dp[K][N],lv[N],dist[N];

void dfs(int u,int p,int l)
{
    dp[0][u] = p,lv[u] = l;
    for(auto [d,v] : adj[u]) if(v!=p)
    {
        dist[v] = dist[u]+d;
        dfs(v,u,l+1);
    }
}

int lca(int a,int b)
{
    if(lv[a]<lv[b]) swap(a,b);
    for(int i = K-1;i >= 0;i--) if(lv[dp[i][a]]>=lv[b]) a = dp[i][a];
    if(a==b) return a;
    for(int i = K-1;i >= 0;i--) if(dp[i][a]!=dp[i][b]) a = dp[i][a],b = dp[i][b];
    return dp[0][a];
}

int lift(int a,int x)
{
    int l = lv[a]-x;
    for(int i = K-1;i >= 0;i--) if(lv[dp[i][a]]>=l) a = dp[i][a];
    return a;
}

int main()
{
    ios_base::sync_with_stdio(0); cin.tie(0);

    cin >> t;
    while(t--)
    {
        cin >> n;
        for(int i = 1;i <= n;i++) adj[i].clear();
        for(int i = 0;i < n-1;i++)
        {
            int a,b,d;
            cin >> a >> b >> d;
            adj[a].push_back({d,b});
            adj[b].push_back({d,a});
        }
        dfs(1,0,1);
        for(int i = 1;i < K;i++) for(int j = 1;j <= n;j++) dp[i][j] = dp[i-1][dp[i-1][j]];
        while(true)
        {
            string s;
            cin >> s;
            if(s=="DONE") break;
            else if(s=="KTH")
            {
                int a,b,k;
                cin >> a >> b >> k;
                int l = lca(a,b);
                if(lv[a]-lv[l]>=k-1) cout << lift(a,k-1) << '\n';
                else cout << lift(b,lv[a]-lv[l]+lv[b]-lv[l]-k+1) << '\n';
            }
            else
            {
                int a,b;
                cin >> a >> b;
                int l = lca(a,b);
                cout << dist[a]-dist[l]+dist[b]-dist[l] << '\n';
            }
        }
    }
}
