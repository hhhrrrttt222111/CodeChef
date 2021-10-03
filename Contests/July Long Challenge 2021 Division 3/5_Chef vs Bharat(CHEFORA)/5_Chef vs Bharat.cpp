#include<bits/stdc++.h>
using namespace std;

long long power(long long x, long long y, long long p)
{
    long long res = 1; 
    x = x % p;
    while (y > 0) 
    {
        if (y & 1)
            res = (res * x) % p;
        y = y >> 1; 
        x = (x * x) % p;
    }
    return res;
}

long long Palin(long long n)
{
  long long num=n;
  n=n/10;
  while(n!=0)
  {
    num=num*10+(n%10);
    n=n/10;
  }
  return num;
}

int main()
{
    long long v[100001],pre[100001],l,r;
    for(long long i=1;i<=100001;i++)
        v[i]=Palin(i);
    pre[1]=v[1];
    for(long long i=2;i<=100001;i++)
        pre[i]=pre[i-1]+v[i];
    long long q;
    cin>>q;
    while(q--)
    {
        cin>>l>>r;
        cout<<power(v[l],pre[r]-pre[l],1000000007)<<endl;
    }
return 0;
}