#include <bits/stdc++.h>
#define ll long long
#define rep(i, t) for (ll i = 0; i < t; i++)
using namespace std;
void factors(int n)
{
    ll i;
    for (i =  1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << endl;
        }
    }
    for (; i >= 1; i--)
    {
        if (n % i == 0)
            cout << n/i << endl;
    }
}
int main()
{
    factors(12);
    return 0;
}