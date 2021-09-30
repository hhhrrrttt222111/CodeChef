#include <bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        ll n,a,b,k;
        cin>>n>>a>>b>>k;
        long long x,z;
        if(a>b)
            x=(a*b)/__gcd(a,b);
        else
            x=(a*b)/__gcd(b,a);
        z = (n/a) + (n/b) - (2*(n/x));        
        if(z >= k)
            cout<<"Win"<<endl;
        
        else
            cout<<"Lose"<<endl;
    }
}
