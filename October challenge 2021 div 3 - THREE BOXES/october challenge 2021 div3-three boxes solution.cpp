#include<bits/stdc++.h>
#define ll long long

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b, c, d, ans=0;
        cin>>a>>b>>c>>d;
        int sum=a+b+c;
        if(sum<=d)ans=1;
        else if(a+b>d)ans=3;
        else ans=2;
        
        cout<<ans<<endl;
    }
    return 0;
}


