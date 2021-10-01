//Problem Link: https://www.codechef.com/problems/RISK
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
bool safe(ll i,ll j,ll n,ll m){
    if(i>=0&&i<n&&j>=0&&j<m)return true;
    return false;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    ll t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<string> a(n);
        ll vis[n][m];
        memset(vis,0,sizeof(vis));
        f(i,0,n){
            cin>>a[i];
        }
        priority_queue<ll> pq;
        f(i,0,n){
            f(j,0,m){
                if(a[i][j]=='1'&&vis[i][j]==0){
                    ll c=1;
                    queue<pair<ll,ll>> q;
                    q.push({i,j});
                    vis[i][j]=1;
                    while(!q.empty()){
                        pair<ll,ll> p=q.front();
                        q.pop();
                        if(safe(p.first+1,p.second,n,m)&&vis[p.first+1][p.second]==0&&a[p.first+1][p.second]=='1'){
                            c++;
                            q.push({p.first+1,p.second});
                            vis[p.first+1][p.second]=1;
                        }
                        if(safe(p.first-1,p.second,n,m)&&vis[p.first-1][p.second]==0&&a[p.first-1][p.second]=='1'){
                            c++;
                            q.push({p.first-1,p.second});
                            vis[p.first-1][p.second]=1;
                        }
                        if(safe(p.first,p.second+1,n,m)&&vis[p.first][p.second+1]==0&&a[p.first][p.second+1]=='1'){
                            c++;
                            q.push({p.first,p.second+1});
                            vis[p.first][p.second+1]=1;
                        }
                        if(safe(p.first,p.second-1,n,m)&&vis[p.first][p.second-1]==0&&a[p.first][p.second-1]=='1'){
                            c++;
                            q.push({p.first,p.second-1});
                            vis[p.first][p.second-1]=1;
                        }
                    }
                    pq.push(c);
                }
            }
        }
        ll ans=0;
        while(!pq.empty()){
            pq.pop();
            if(!pq.empty()){
                ans+=pq.top();
                pq.pop();
            }
        }
        cout<<ans<<endl;
    }
}
