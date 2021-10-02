#include <iostream>
#include <bits/stdc++.h>
#define ll long long int
using namespace std;

void solve()
{
    ll n; cin>>n;
    set<ll> s;
    for(ll i=0;i<n;i++)
    {
        ll x; cin>>x;
        s.insert(x);
    }
    cout<<s.size()<<endl;
}

int main() 
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ll t; cin>>t;
    while(t--)
    {
        solve();
    }
	// your code goes here
	return 0;
}
