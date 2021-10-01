#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#define trace1(x) cerr<<#x<<x<<endl
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>
 
using namespace std;
 
#define all(x) (x).begin(),(x).end()
#define int long long int
#define pb push_back
#define ppb pop_back
#define pf push_front
#define ppf pop_front
#define F first
#define S second
#define inf 1e18
#define vi vector<int>
#define Point complex<int>
#define X real()
#define Y imag()
#define pii pair<int,int>
#define num0Beg(x) __builtin_clz(x) // no. of zero in beginning of bit representation
#define num0end(x) __builtin_ctz(x) // no. of zero in the end
#define numOf1(x) __builtin_popcount(x) // no. of ones in bit rep.
#define parity(x) __builtin_parity(x) // parity of 1
#define FAST ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
 
 
int32_t main()
{
    FAST
    int tt=1;
    cin >> tt;
    while(tt--)
    {         
      int n;
      cin>>n;
      int a[n+1];
      for(int i=1;i<=n;i++)
        cin>>a[i];
      set<pii> s;
      for(int i=1;i<=n;i++)
        if(a[i]!=0)
        s.insert({a[i],i});
      vector<pii> v;
      while(s.size()>1)
      {
        int x=(*s.begin()).F,y=(*s.rbegin()).F,z=(*s.begin()).S,w=(*s.rbegin()).S;
        s.erase(s.begin());
        auto it=s.end();
        it--;
        s.erase(it);
        if(x>0 && y>0)
          v.pb({z,w});
        x--,y--;
        if(x>0)
          s.insert({x,z});
        if(y>0)
          s.insert({y,w}); 
      }        
      cout<<v.size()<<"\n";
      for(auto it: v)
        cout<<it.F<<" "<<it.S<<"\n";
    }
    return 0;
}
