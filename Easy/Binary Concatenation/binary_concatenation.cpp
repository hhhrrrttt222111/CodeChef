
#include <bits/stdc++.h>
using namespace std;
long pows[61]= {0};
long conc(long a,long b)
{
    double _l1=log2l(b);
    long l1=ceil(_l1) + (floor(_l1)==ceil(_l1));
    double _l2=log2l(a);
    long l2=ceil(_l2) + (floor(_l2)==ceil(_l2));
    long num1=a*pows[l1] + b;
    long num2=b*pows[l2] + a;
    return num1-num2;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long test;
    cin >> test;
    pows[0]=1;
    for(int i=1; i<=60; i++)
    {
        pows[i]=pows[i-1]*2;
    }
    while(test--)
    {
        long n;
        cin >> n;
        long a[n],temp[n];
        for(long i = 0 ; i < n ; i++)
        {
            cin >> a[i];
            temp[i]=a[i];
        }
        long res=0;
        sort(temp,temp+n,greater<long>());
        for(long i = 0 ; i < min(2L,(long)n) ; i++)
        {
            for(long j = 0 ; j < n ; j++)
            {
                long cur = conc(temp[i],a[j]);
                long cur2 = conc(a[j],temp[i]);
                res=max(res,max(cur2,cur));
            }
        }
        cout << res << '\n';
    }
    return 0;
}
