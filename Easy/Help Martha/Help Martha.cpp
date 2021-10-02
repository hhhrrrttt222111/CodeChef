// Problem Link: https://www.codechef.com/CENS2020/problems/CENS20G
#include <bits/stdc++.h>
using namespace std;
#define fast ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#define f(i,a,b) for(ll i=a;i<b;i++)
int main()
{
   fast;
   ll t;
   cin>>t;
   while(t--){
       string s;
       cin>>s;
       ll x,y;
       cin>>x>>y;
       ll q;
       cin>>q;
       map<char,ll> mp;
       f(i,0,s.length()){
           mp[s[i]]++;
       }
       f(i,0,q){
           ll u,v;
           cin>>u>>v;
           ll fa=0,fb=0,ans=0;
           if(u-x>0){
               if(mp['R']>=(u-x)){
                   fa=1;
               }
           }else if(u-x<0){
               if(mp['L']>=abs(u-x)){
                   fa=1;
               }
           }else fa=1;
           if(v-y>0){
               if(mp['U']>=(v-y)){
                   fb=1;
               }
           }else if(v-y<0){
               if(mp['D']>=abs(v-y)){
                   fb=1;
               }
           }else fb=1;
           if(fa==1&&fb==1)cout<<"YES"<<" "<<(abs(u-x)+abs(v-y))<<"\n";
           else cout<<"NO"<<"\n";
       }
   }
}
