#include <bits/stdc++.h>
using namespace std;
#define int long long 
int t;
int a,b,c;
int d,p,k;

int32_t main()
{
    cin>>t;
    while (t--)
    {
        cin>>d>>p;
        cin>>a>>b>>c;   
        k = d*p;
        if (k>=42) cout<<c<<endl;
        else if (k>=21) cout<<b<<endl;     
        else if (k>=10) cout<<a<<endl;
        else cout<<0<<endl;
    }
    
    return 0;
}
