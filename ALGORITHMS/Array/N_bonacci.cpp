
//Finding N bonacci numbers

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(ll N,ll n)
{
    vector <ll> ans(n);
    for(ll i=0;i<N-1;i++)
    {
        ans[i]=0;
    }
    ans[N-1]=1;
    ans[N]=1;
    ll sum=2;
    for(ll i=N+1;i<n;i++)
    {
        sum=sum-ans[i-(N+1)];
        ans[i]=sum;
        sum+=ans[i];
    }
    for(ll i=0;i<n;i++)
    {
        cout<<ans[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    op(4,10);
    return 0;
}