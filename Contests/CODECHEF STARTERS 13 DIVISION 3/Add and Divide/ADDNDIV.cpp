# include<bits/stdc++.h>
using namespace std;
# define ll long long int
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
#define inf INT_MAX
#define ninf INT_MIN
#define tc ll t;  cin>>t; while(t--)
#define t0 __builtin_ctz

const ll mod=998244353;



void solve()
{
  ll a,b;  cin>>a>>b;
  bool flag=true;
  while(true)
  {
    ll hcf=__gcd(a,b);
    if(a==1)
    {
      flag=true;
      break;
    }
    if(hcf==1 && a!=1)
    {
      flag=false;
      break;
    }
    a/=hcf;
  }
  if(flag)
  cout<<"YES"<<nl;
  else
  cout<<"NO"<<nl;
  
}
int main()
{
 fast;
   tc
   solve();
  
  return 0;
    
}