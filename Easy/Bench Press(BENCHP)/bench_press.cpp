#include<bits/stdc++.h>
#define fastAF ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
#define ll long long
#define ull unsigned ll
#define ld long double
#define pb emplace_back
#define vll vector<ll>
#define pll pair<ll,ll>
#define mapll map<ll,ll>
#define all(v) v.begin(),v.end()
#define deb(x) cout<<x
#define mod (int) 1e9+7 
#define pi 3.1415926536
#define deci(x) setprecision(x)
#define rev greater<int>()
#define vz(v) v.size()
#define endl "\n"
using namespace std;


int main() 
{
   
fastAF
 ll int t;
 cin>>t;
 while(t--){
 ll int n,w,wr;
  cin>>n>>w>>wr;
  bool f=false;
  w-=wr;
  ll int a[n];
  map<ll int,ll int> m;
  for(int i=0;i<n;i++){
      cin>>a[i];
      m[a[i]]++;
  }
  ll int s=0;
  for(auto x:m){
     if(x.second%2==0){
         s+=(x.second*x.first);
     }
  }
  if(w<=0){
      f=true;
  }
  if(s>=w){
      f=true;
  }
  if(f){
      cout<<"YES"<<endl;
  }else{
      cout<<"NO"<<endl;
  }
}
}
