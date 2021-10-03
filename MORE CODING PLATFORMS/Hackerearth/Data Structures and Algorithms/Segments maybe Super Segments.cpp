#include<bits/stdc++.h>
using namespace std;
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#define int long long
#define endl '\n'
#define fastio ios_base::sync_with_stdio(false);cin.tie(NULL);
 
const int maxn = 2e5+100;
bool visited[maxn];
int col[maxn];
int val[maxn];
 
class graph
{
list<pair<int,int>>*l;
int n;
public:
	graph(int n){
		this->n = n;
		l = new list<pair<int,int>>[n+3];
	}
	void addedge(int x,int y,int wt){
		l[x].push_back({y,wt});
		l[y].push_back({x,wt});
	}
	void dfs(int src,int cc){
		col[src] = cc;
		for(auto x:l[src]){
			if(col[x.first]==-1){
				int to = x.first;
				int sum = x.second;
				if(to<src){
					sum*=-1;
				}
				val[to] = val[src] + sum;
				dfs(to,cc);
			}
		}
	}
 
};
 
struct custom_hash {
    static uint64_t splitmix64(uint64_t x) {
        x += 0x9e3779b97f4a7c15;
        x = (x ^ (x >> 30)) * 0xbf58476d1ce4e5b9;
        x = (x ^ (x >> 27)) * 0x94d049bb133111eb;
        return x ^ (x >> 31);
    }
 
    size_t operator()(uint64_t x) const {
        static const uint64_t FIXED_RANDOM = chrono::steady_clock::now().time_since_epoch().count();
        return splitmix64(x + FIXED_RANDOM);
    }
};
 
signed main(void)
{
    fastio;
#ifndef ONLINE_JUDGE
   	freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif    
    int t;
    cin>>t;
    while(t--){
	    int n,m,q;
	    cin>>n>>m>>q;
	    graph g(n);
	    for(int i=0;i<=n;i++){
	    	col[i] = -1;
	    	val[i] = 0;
	    }
	    for(int i=0;i<m;i++){
	    	int u,v,wt;
	    	cin>>u>>v>>wt;
	    	u--;
	    	g.addedge(u,v,wt);
	    }
	    int cc = 1;
	    for(int i=0;i<n;i++){
	    	if(col[i]==-1){
	    		g.dfs(i,cc);
	    		cc++;
	    	}
	    }
	    while(q--){
	    	int u,v;
	    	cin>>u>>v;
	    	u--;
	    	if(col[u]!=col[v]){
	    		cout<<-1<<endl;
	    	}
	    	else{
	    		cout<<val[v] - val[u]<<endl;
	    	}
	    }
	}
}
 
 