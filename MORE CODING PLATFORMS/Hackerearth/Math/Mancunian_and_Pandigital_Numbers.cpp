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
const ll inf=1e18;



ll check(ll n)
{
	string s=to_string(n);
	ll l=s.length();

	set<char>t;

	f(l)
	{
		if(((s[i]-'0')<=l) && ((s[i]-'0')!=0))
		{
			if(t.find(s[i])!=t.end())
			return 0;
			t.insert(s[i]);
		}
		else return 0;
	}
	return 1;

}
vll a(1e6+1,0);
void precal()
{
rep(i,1,1e6+1)
{
	if(check(i)==1)
	a[i]=a[i-1]+1;
	else
	a[i]=a[i-1];
}
}
int main()
{
	precal();
ll t;  cin>>t;

while(t--)
{
	ll l,r;  cin>>l>>r;
	cout<<a[r]-a[l-1]<<nl;
}
}







