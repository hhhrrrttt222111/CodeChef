#include<bits/stdc++.h>
#define ll long long

using namespace std;

ll countSet(ll n)
{
    ll c=0;
    while(n>0)
    {
        c++;
        n = n>>1;
    }
    return c;
}

int main()
{
    int test;
    cin>>test;
    while(test--)
    {
       ll n;
       cin>>n;
       ll s=countSet(n);
       ll ans1 = n - pow(2, s-1) + 1;
       ll ans2=pow(2, s-1)-pow(2, s-2);
       cout<<max(ans1, ans2)<<endl;
    }
    return 0;
}
