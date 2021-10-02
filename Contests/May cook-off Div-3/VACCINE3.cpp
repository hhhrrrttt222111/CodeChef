#include <bits/stdc++.h>
using namespace std;
#define int long long 
int t;
int32_t main()
{
    cin>>t;
    while (t--)
    {
        int g,p,a[10];
        int n = INT_MAX,m=INT_MIN;
        int sum=0;
        cin>>g>>p;
        for (int i = 0; i < 10; i++)
        {
            cin>>a[i];
        }
        for (int i = 9; i!=g-1; i--)
        {
            sum += a[i];
        }
        n = sum/p;
        if (n*p <= sum) n++;
        sum += a[g-1];
        m = sum/p;
        if (m*p < sum) m++;
        cout<<n<<" "<<m<<endl;
    }
    
    return 0;
}
