#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define endl "\n"
#define ii pair<ll,ll>
#define ic pair<char,ll>
#define pb push_back
#define vi vector<ll>
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define F first
#define S second
const int N=1e5+1;
ll M= 1e9+7;
ll v1,v2;

int main()
{
    fast;
    ll tt=1,i,j,num;
    cin>>tt;
    for(num=1;num<=tt;num++)
    {
       ll n;
       cin>>n;
       vector<ll>a(n);
       vector<ii>v;
       for(i=0;i<n;i++)
       {
           cin>>a[i];
           v.pb({a[i],i});
       }
       sort(all(v));
       vector<pair<ll,pair<ll,ll>>>aa;
       if(n<=4)
       {
           cout<<"YES"<<"\n";
           ll a1=0,a2=0;
           aa.pb({v[0].S,{a1,a2}});
           for(i=1;i<v.size();i++)
           {
               ll x1,x2;
               if(i==1){x1=a1+v[i].F;x2=a2+v[i-1].F;}
               if(i==2){x2=a2+v[0].F;x1=a1-v[i].F;}
               if(i==3){x1=a1;x2=v[0].F+v[i].F;}
                aa.pb({v[i].S,{x1,x2}});
           }
           sort(all(aa));
           for(i=0;i<aa.size();i++)
           {
               cout<<aa[i].S.F<<" "<<aa[i].S.S<<"\n";
           }

       }
       else
       {
           cout<<"NO"<<"\n";
       }
    }

}
