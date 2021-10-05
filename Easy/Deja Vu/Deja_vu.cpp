#include <iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define endl "\n"
ll mod=1000000007;
ll power(ll a,ll n)
{
    if(n==0)return 1;
    ll temp=power(a,n/2);
    temp=temp*temp%mod;
    if(n%2)temp=a*temp%mod;
    return temp;
    
}
ll inverse(ll a)
{
    return power(a,mod-2);
}
ll gcd(ll a,ll b)
{
    if(b==0)return a;
    return gcd(b,a%b);
}
void dfs(ll u,vector<ll>v[],bool vis[])
{
    vis[u]=true;
    for(ll x:v[u])
    {
        if(vis[x]==false)
        dfs(x,v,vis);
    }
}
int main() {
	// your code goes here
		                             ios::sync_with_stdio(0);
                                     cin.tie(0),cout.tie(0);
	ll t=1;
	cin>>t;
	while(t--)
	{   
	    ll n,i,j,ma=0,k,ans=0,l,ps;
	    cin>>n;
	    vector<pair<ll,ll>>a(n);
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i].first;
	        a[i].second=i;
	    }
	    sort(a.begin(),a.end());
	    j=0;vector<ll>v;
	    for(i=0;i<n-1;i++)
	    {
	        if(a[i].second+1!=a[i+1].second)
	        {
	            v.push_back(i-j+1);
	            ans+=i-j+1;ma=max(ma,i-j+1);
	            j=i+1;
	        }
	    }
	    v.push_back(i-j+1);
	    ans+=i-j+1;ma=max(ma,i-j+1);ans-=ma;
	    
	    n=v.size();
	    vector<vector<ll>>dp(n,vector<ll>(n,INT_MAX));
	    for(i=0;i<n;i++)dp[i][i]=0;
	    for(i=1;i<n;i++)v[i]+=v[i-1];
	    for(k=1;k<n;k++)
	    {
	        for(i=0;i+k<n;i++)
	        {
	            j=i+k;
	            ps=(i>0?v[j]-v[i-1]:v[j]);
	            for(l=i;l<j;l++)
	            dp[i][j]=min(dp[i][j],dp[i][l]+dp[l+1][j]+ps);
	        }
	    }
	    cout<<ans+dp[0][n-1]<<endl;
	}
	return 0;
}
