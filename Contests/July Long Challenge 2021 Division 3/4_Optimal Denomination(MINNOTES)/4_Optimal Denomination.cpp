#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,sum=0;
        cin>>n;
        long long v[100001],left[100001],right[100001];
        for(long long i=0; i<n; i++)
            cin>>v[i];
        sort(v,v+n);
        left[0]=v[0]; 
        right[n-1]=v[n-1];
        for(long long i=1; i<n; i++)
            left[i]= __gcd(left[i-1],v[i]);
        for(long long i=n-2; i>=0; i--)
            right[i]= __gcd(right[i+1],v[i]);
        for(long long i=0; i<n; i++)
            sum +=v[i];
        long long mini = LLONG_MAX,ans;
        for(long long i=0; i<n; i++)
        {
            ans = (sum-v[i])/(__gcd(left[i-1],right[i+1])) + 1;
            mini=min(mini,ans);
        }
        cout<<mini<<endl;
    }
return 0;
}