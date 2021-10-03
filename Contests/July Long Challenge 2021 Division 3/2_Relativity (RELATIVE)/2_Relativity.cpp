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
        int g,c;
        cin>>g>>c;
        cout<<(c*c)/(2*g)<<'\n';
    }
    return 0;
}