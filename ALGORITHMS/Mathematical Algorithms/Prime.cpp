#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long prime(int n)
{
    if(n==1)return 0;
    if(n==2||n==3)return 1;
    if(n%2==0||n%3==0)return 0;

    for(ll i=5;i*i<=n;i+=6)
    {
        if(n%i==0||n%(i+2)==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n,m;
    cin >> n;
    cout << prime(n) << endl;
    return 0;
}