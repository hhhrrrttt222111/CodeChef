#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        ll c=0;
        cin>>n;
        vector <ll> v1(n);
        for(int i=0;i<n;i++) cin>>v1[i];
        vector <ll> v2(n,1);
        for(int i=1;i<n;i++)
        {
            if(v1[i]>=v1[i-1])
            {
                v2[i]=v2[i-1]+1;
                
            }
        }
      
        for(int i=0;i<n;i++) c+=v2[i];
          
        cout<<c<<"\n";
    }
    return 0;
}
