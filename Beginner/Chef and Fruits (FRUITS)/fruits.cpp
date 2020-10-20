
#include<bits\stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	  ll n,m,k,mi=0,ma=0;
	  cin>>n>>m>>k;
	  ma=max(n,m);
	  mi=min(n,m);
	  cout<<ma-min(mi+k,ma)<<endl;
	}
}