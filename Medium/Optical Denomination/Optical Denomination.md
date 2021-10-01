* IN C++
```c++
#include <iostream>
#include<bits/stdc++.h>
#include<algorithm>
#define int long long
using namespace std;
const int N=1e6;
int ar[N],br[N],cr[N];

    void ggcd(int n)
    {
        int i;
        br[1]=ar[1];  
        cr[n]=ar[n];  
        for(i=2;i<n+1;i++)
        {
            br[i]=__gcd(br[i-1],ar[i]);
        }
        for(i=n-1;i>0;i--)
        {
            cr[i]=__gcd(ar[i],cr[i+1]);
        }
    }
    int32_t main()
    {   ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        int t;
        cin>>t;
        while(t--)
        {
            int n,s=0,ans=0,i;
            cin>>n;
            for(i=1;i<n+1;i++)
            {
                cin>>ar[i];
                s=s+ar[i];
            }
            sort(ar,ar+n+1);
            ggcd(n);
            int x=LLONG_MAX;
            for(i=1;i<n+1;i++)
            {
                ans=(s-ar[i]+__gcd(br[i-1],cr[i+1]))/(__gcd(br[i-1],cr[i+1]));
                if(ans<x)
                x=ans;
            }
            cout<<x<<endl;
        }
        return 0;
    }
    


```
