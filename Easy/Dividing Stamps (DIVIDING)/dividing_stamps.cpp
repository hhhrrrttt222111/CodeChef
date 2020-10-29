#include <bits/stdc++.h>

using namespace std;


int main() {

  ios::sync_with_stdio(0);
  cin.tie(0);
  int n,e,sum=0;
  cin>>n;
  int a[n];
  for(e=0;e<n;e++)
  {
    cin>>a[e];
    sum+=a[e];
    sum-=(e+1);
  }
  if(sum==0) cout<<"YES"<<'\n';
  else cout<<"NO"<<'\n';
  return 0;
}