#include <bits/stdc++.h>
#include <chrono> 
using namespace std;
using namespace chrono;

//defining the header files

#define ll long long int
#define vi vector<int>
#define pb push_back
#define pf push_front
#define pob pop_back
#define pof pop_front
#define ff first
#define ss second
#define lb lower_bound
#define ub upper_bound
#define ins insert
#define read(x) for(auto &inps: x) cin>>inps
#define all(v) v.begin(),v.end()
#define mod 1000000007
#define smod 100006


void __print(int x) {cerr << x;}
void __print(long x) {cerr << x;}
void __print(long long x) {cerr << x;}
void __print(unsigned x) {cerr << x;}
void __print(unsigned long x) {cerr << x;}
void __print(unsigned long long x) {cerr << x;}
void __print(float x) {cerr << x;}
void __print(double x) {cerr << x;}
void __print(long double x) {cerr << x;}
void __print(char x) {cerr << '\'' << x << '\'';}


void __print(const char *x) {cerr << '\"' << x << '\"';}
void __print(const string &x) {cerr << '\"' << x << '\"';}
void __print(bool x) {cerr << (x ? "true" : "false");}

template<typename T, typename V>
void __print(const pair<T, V> &x) {cerr << '{'; __print(x.first); cerr << ','; __print(x.second); cerr << '}';}
template<typename T>

void __print(const T &x) {int f = 0; cerr << '{'; for (auto &i: x) cerr << (f++ ? "," : ""), __print(i); cerr << "}";}
void _print() {cerr << "]\n";}
template <typename T, typename... V>
void _print(T t, V... v) {__print(t); if (sizeof...(v)) cerr << ", "; _print(v...);}

#ifndef ONLINE_JUDGE
#define debug(x...) cerr << "[" << #x << "] = ["; _print(x)
#else
#define debug(x...)
#endif

bool isPowerOfTwo(ll n) {return!(n&&(n&(n-1)));}
int setBits(ll n){ll ans = 0; while(n>0){n = (n&(n-1)); ans++; } return ans; }

void init_code(){
  #ifndef ONLINE_JUDGE
  freopen("input.txt","r", stdin);
  freopen("output.txt","w", stdout);
  #endif
}

void solve()
{
  int t; cin >> t;
  for(int tt = 1; tt <=t; tt++){
    ll n; cin >> n;
    
    //mapping
    
    map<ll,ll> m;
    for(ll i = 0; i<n; i++){
      ll a; cin >> a;
      m[a]++;
    }

    ll ans = 0;
    for(auto i:m){
      ans += i.ss*(n-i.ss);
    }
    cout << ans << endl;
  }
}
int main()
{
  //let us now start the whole conditon in the main function
  
  init_code();
  auto start = high_resolution_clock::now();
  ios_base::sync_with_stdio(false);
  cin.tie(0); cout.tie(0);
  solve();
  auto stop = high_resolution_clock::now();
  
  auto duration = duration_cast<microseconds>(stop - start);
  float timeCount = duration.count();
  timeCount /= 1000000;
  debug("Time Taken",timeCount);
  return 0;
}
