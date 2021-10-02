#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int d,x,y,z;
        cin>>d>>x>>y>>z;
        cout<<max(x*7,y*d+(7-d)*z)<<'\n';
    }
    return 0;
}