#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;
void solve1()
{
     ll n , m , k;
	    cin >>n>>m>>k;
	    ll ans = 0 ;
	    for(ll i =1 ; i <=n; i++)
	    {
	        for(ll j =1 ; j<=m; j++)
	        {
	            ans= ans ^(i+j+k);
	        }
	    }
	    cout<<ans<<endl;
}
void solve2()
{
     ll n , m , k;
	    cin >>n>>m>>k;
	  ll ans =0 ;
	  
	   
	  vector<pair<int , int>> v1 ; 
	  for(int i =1 ; i <=m ; i++)
	  {
	      v1.push_back(make_pair(1,i));
	  }
	  for(int i =2; i <=n ; i++ )
	  {
	      v1.push_back(make_pair(i,m));
	  }
	  
	  vector<pair<int , int>> v2 ; 
	  for(int i =1 ; i <=n ; i++)
	  {
	      v2.push_back(make_pair(i,1));
	  }
	  for(int i =2; i <=m ; i++ )
	  {
	      v2.push_back(make_pair(n,i));
	  }
	 
	 for(int i =0 ; i < v1.size() ; i++)
	 {
	     int d = min(abs(v1[i].first - v2[i].first), abs(v1[i].second - v2[i].second))+1 ;
	     
	     if(d%2 != 0)
	     {
	         ans =ans ^(v1[i].first+v1[i].second+ k ) ; 
	        // cout<<v1[i].first << " "<<v1[i].second<<endl ;
	     }
	 }
	 cout<<ans <<endl;
}
int main() {
	// your code goes here
	ll n ;
	cin >> n;
	while(n--)
	{
	  solve2();
	}
	return 0;
}
