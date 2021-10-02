#include <bits/stdc++.h>
using namespace std;
#define int long long 
const int N = 1e7+10;
int arr[N];

int32_t main()
{
    int n,m;
    cin>>n>>m;
    while (m--)
    {
        int a,b,k;
        cin>>a>>b>>k;
        arr[a] += k;
        if(b!=n) arr[b+1] -=k;
    }
    m=INT_MIN;;
    for (int i = 2; i <= n; i++)
    {
        arr[i] += arr[i-1];
        if(arr[i]>m) m = arr[i];
    }
    cout<<m<<endl;
    return 0;
}
