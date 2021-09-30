#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long zero_factorial(int n)
{
    ll ans = 0,cpy;
    for (ll i = 5; i <= n; i *= 5)
    {
        cpy=n;
        if(cpy/i!=0)
        ans=ans+cpy/i;
        else
        break;
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    cout << zero_factorial(n) << endl;
    return 0;
}