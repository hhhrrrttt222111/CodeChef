# include<bits/stdc++.h>
using namespace std;
# define ll unsigned long long int
#define ld long double
#define F first
#define S second
#define nl "\n"
#define mem(v, t) memset(v, t, sizeof(v))
#define all(v) v.begin(), v.end()
#define sz(v) (ll)(v.size())
#define srt(v) sort(all(v))
#define rsrt(v) sort(v.rbegin(), v.rend())
#define pb push_back
#define f(a) for (ll i = 0; i < a; i++)
#define rep(i, a, b) for (ll i = a; i < b; i++)
#define rrep(i, a, b) for (ll i = a; i > b; i--)
#define vll vector<ll>
#define pll pair<ll, ll>
#define vpll vector<pair<ll, ll>>
#define mp make_pair
#define PI 3.141592653589793238462643383279502884197169399375
#define INF (ll)(1e18 + 5)
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
const int N=1e6+5;
const ll M=1000000007;
const ll inf=1e18;

ll power(ll x, ll y)
{
ll result=1;
       while(y>0)
	   {
		   if(y%2==1)
		   result=(result*x)%M;

		   x=(x*x)%M;
		   y=y/2;
	   }
	   return result%M;
}

int main()
{
	fast;
	ll a,b1=0;
	string b;  cin>>a>>b;
    
	ll l=b.length();
	f(l)
	{
     b1=((b1*10)+b[i]-'0')% (M-1);
	}
	cout<<power(a,b1)<<nl;
}











