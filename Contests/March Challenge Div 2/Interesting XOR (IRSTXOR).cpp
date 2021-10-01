// Author - KUMAR AVIJEET

#include<bits/stdc++.h>
using namespace std;

// Macros
#define int             long long int
#define double          long double
#define endl            '\n'
#define pb              push_back
#define mp              make_pair
#define pii             pair<int,int>
#define vi              vector<int>
#define mii             map<int,int>
#define umii            unordered_map<int,int>
#define si              set<int>
#define usi             unordered_set<int>
#define all(x)          x.begin(),x.end()
#define setbits(x)      __builtin_popcountll(x)
#define dig(x,y)        fixed<<setprecision(y)<<x
#define inf             1e18
#define mod             1000000007   // 1e9+7
#define MAX             1000005      // 1e6+5
#define PI              3.14159265
#define FIO             ios_base::sync_with_stdio(false);cin.tie(NULL);

// Function Prototypes
int power(int, int);
int powmod(int, int);
int lcm(int, int);

void solution()
{
    int c,ans,d,p1,p2;
    cin>>c;
    d = floor(log2(c));
    if(c & (c-1) == 0)
    p1 = power(2 , d+1) - 1;
    else
    p1 = power(2 , d) - 1;
    p2 = c ^ p1;
    ans = p1 * p2;
    cout<<ans<<endl;
    ans = 0;
}

signed main() 
{
    FIO         // For fast i/o
	int tc;     // Test cases
	cin>>tc;
	while(tc--)
	 solution();
	return 0;
}

// Functions
int power(int a, int b)
{
int ans=1;
while(b)
{
    if(b & 1)
    {
        ans = ans * a;
    }
    b = b >> 1;
    a = a * a;
}
return ans;
}

int powmod(int a, int b)
{
int ans=1;
while(b)
{
    if(b & 1)
    {
        ans = (ans * a) % mod;
    }
    b = b >> 1;
    a = (a * a) % mod;
}
return (ans % mod);
}

int lcm(int a, int b) 
{
	return a / __gcd(a, b) * b;
}


