#include<bits/stdc++.h>
using namespace std;
const int N = 2005;
int a[N],sz[N],n,k;
long long dp[N][N];
vector<int> adj[N];
void dfs(int node){
    sz[node] = 1;
    dp[node][1] = 0;
    for(int child : adj[node]){
        dfs(child);
        for(int curr = sz[node]; curr >=1; curr--){
            for(int took = 1; took <= sz[child]; took++){
                dp[node][curr+took] = min(dp[node][curr+took],dp[node][curr] + dp[child][took]);
            }
            dp[node][curr] = dp[node][curr] + dp[child][0];
        }
        sz[node] += sz[child];
    }
    dp[node][0] = a[node];
}
int main(){
    int test, p;
    scanf("%d", &test);
    while(test--){
        scanf("%d %d", &n, &k);
        for(int i = 1; i <= n; i++){
            adj[i].clear();
            for(int j = 0; j <= n ; j++){
                dp[i][j] = 1e18;
            }
            sz[i] = 0;
        }
        for(int i = 2; i <= n; i++){
            scanf("%d %d", &p, &a[i]);
            adj[p].push_back(i);
        }
        dfs(1);
        cout<<dp[1][k]<<endl;
    }
    return 0;
}