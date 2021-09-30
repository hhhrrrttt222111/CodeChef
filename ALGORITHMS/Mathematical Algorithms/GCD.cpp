#include <bits/stdc++.h>
#define ll long long
using namespace std;
long long gcd(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return gcd(b,a%b);
}
int main()
{
    int n,m;
    cin >> n>>m;
    cout << gcd(n,m) << endl;
    return 0;
}