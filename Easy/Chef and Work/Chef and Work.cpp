// link-https://www.codechef.com/COOK121B/problems/CHEFNWRK/
#include<bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
int main(){
    fast;
    ll t;
    cin>>t;
    while(t--){
     ll n,k;
     cin>>n>>k;
      ll a[n];
      f(i,0,n){
          cin>>a[i];
      }
      ll s=0,c=0,i=0;
      while(i<n){
          if(a[i]>k){
              c=-1;
              break;
          }
          if(n==1 && a[0]>k){
              c=-1;
              break;
          }else if(n==1){ c++;break;}
          else if(s+a[i]<=k && i!=n-1){
              s+=a[i];
              i++;
          }else if(i==n-1){
              if(s+a[i]>k)c++;
              c++;
              break;
          }else{
              c++;
              s=0;
          }
      }
      cout<<c<<endl;
    }
}
