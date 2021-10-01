#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#define fastAF ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ld long double
#define pb emplace_back
#define vll vector<ll>
#define pll pair<ll,ll>
#define mapll map<ll,ll>
#define all(v) v.begin(),v.end()
#define mod (int) 1e9+7 
#define pi 3.1415926536
#define deci(x) setprecision(x)
#define rev greater<int>()
#define revll greater<ll int>()
#define endl "\n"
using namespace std; 
using namespace __gnu_pbds;
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
vll divisors;
vll factors_prime;
void Divisors(ll int n){
 for(int i=1;i<=sqrt(n);i++){
  if(n%i==0){
  divisors.pb(i);
  if(n/i!=i&&i>1){
  divisors.pb(n/i);
  }
  }
 }
}
void Sieve(ll int n,bool sieve[]){
 memset(sieve, true, n+1);
 sieve[0]=false;
 sieve[1]=false;
  for(ll int i=2;i*i<=n;i++){
   if(sieve[i]){
    for(ll int j=i*i;j<=n;j+=i){
   sieve[j]=false;
   }
  }
 }
}
bool CheckPrime(ll int n){
 if(n<=1){
 return false;
 }
 for(ll int i=2;i<=sqrt(n);i++){
 if(n%i==0)
 return false;
 }
 return true;
}
void PrimeFactors(ll int n){
 for(int i=2;i<=sqrt(n);i=i+2){
  while(n%i==0){
  factors_prime.pb(i);
  n/=i;
  }
 }
 if(n>1){
 factors_prime.pb(n);
 }
}
 ll int Power(ll int x,ll int y,ll int m){
 ll int res=1;
 x=x%m;
 if(x==0){return 0;}
 while(y>0){
  if(y&1)
  res=(res*x)%m;
  y=y>>1;
  x=(x*x)%m;
  }
 return res;
}
int main(){
fastAF
ll int t; 
cin>>t;
while(t--){
  ll int a,b;
  cin>>a>>b;
  while(b%2==0){
        b=b/2;
        }
  if(b==1){
      cout<<"Yes"<<endl;
  }else{
      cout<<"No"<<endl;
  }
 }
}
bool check_square(ll int n){
 ll int x=sqrt(n);
 x*=x;
 if(x==n){
 return true;
 }
 return false;
}
