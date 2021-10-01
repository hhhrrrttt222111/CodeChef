#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll int t;
    cin>>t;
    while(t--)
    {
        ll int s;
        cin>>s;
        ll int q[s];
        ll int i=0,x=0,ans=0;
        for(i=0;i<s;i++)
        {
            cin>>q[i];
        }
        while(s--)
        {
            int e;
            cin>>e;
            ll int l[e];
            for(i=0;i<e;i++)
            {
                cin>>l[i];
                if(i==0)
                {
                    ans=ans+l[i];
                }
                else{
                    ans=ans+l[i]-q[x];
                }
            }
            x++;
            
        }
        cout<<ans<<endl;
    }
}
