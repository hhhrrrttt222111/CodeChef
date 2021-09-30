//Codechef Starters 11
//Problem: Positive Spewing - POSSPEW
//Problem Difficulty - Easy 
//Author: Anushka Garg
//Codechef Username: anushka2352
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define fast ios_base::sync_with_stdio(0), cin.tie(NULL), cout.tie(NULL)
#define endl "\n"
#define pb push_back
#define vi vector<ll>
#define popb pop_back
#define all(v) (v).begin(), (v).end()
#define F first
#define S second
const int N=1e5+1;
ll M= 1e9+7;
int main()
{
    fast;
    ll testCase=1,i,j,num;
    cin>>testCase;
    while(testCase--)
    {
      long long int n,k,sum=0,cnt=0,pp=0;
      cin>>n>>k;
      vector<long long int>a(n);
      map<long long int,long long int>mp;
      for(i=0;i<n;i++)
      {
          cin>>a[i];
          sum+=a[i];
          if(a[i]>0){cnt++;mp[i]++;}
      }
      if(mp.size()==n){sum+=k*n*2;cout<<sum<<"\n";continue;}
      map<long long int,long long int>mpp;
      mpp=mp;
      vector<long long int>v;
      while(cnt<n)
      {
          long long int count1=cnt;
          if(pp==k){break;}
          pp++;
          for(auto u: mpp)
          {
              if(u.F==0&&mp.find(n-1)==mp.end()){v.pb(n-1);cnt++;mp[n-1]++;}
              if(u.F==0&&mp.find(1)==mp.end()){v.pb(1);cnt++;mp[1]++;}
              if(u.F==(n-1)&&mp.find(0)==mp.end()){v.pb(0);cnt++;mp[0]++;}
              if(u.F==(n-1)&&mp.find(n-2)==mp.end()){v.pb(n-2);cnt++;mp[(n-2)]++;}
              if(u.F!=0&&u.F!=n-1&&mp.find(u.F-1)==mp.end()){v.pb(u.F-1);cnt++;mp[u.F-1]++;}
              if(u.F!=0&&u.F!=n-1&&mp.find(u.F+1)==mp.end()){v.pb(u.F+1);cnt++;mp[u.F+1]++;}
          }
          sum+=count1*2;
          mpp.clear();
          for(i=0;i<v.size();i++)
          {
              mpp[v[i]]++;
          }
          v.clear();
      }
      if(pp<k){sum+=(k-pp)*n*2;}
      cout<<sum<<"\n";

    }

}
