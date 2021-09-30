#include <bits/stdc++.h>
#define ll long long
using namespace std;
void sieve(int n)
{
    vector <ll> isPrime(n+1,true);
    for(ll i=2;i<=n;i++)
    {
        if(isPrime.at(i))
        {
            cout<<i<<endl;
            for(ll j=i*i;j<=n;j=j+i)
            {
                isPrime.at(j)=false;
            }
        }
    }
}
int main()
{
    int n;
    cin >> n;
    sieve(n);
    return 0;
}