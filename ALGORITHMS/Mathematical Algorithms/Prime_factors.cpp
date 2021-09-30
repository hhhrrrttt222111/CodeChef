#include <bits/stdc++.h>
#define ll long long
using namespace std;
void prime(int n)
{
    if (n <= 1)
    {
        cout << 1 << endl;
    }
    while (n % 2 == 0)
    {
        cout << 2 << endl;
        n = n / 2;
    }
    while (n % 3 == 0)
    {
        cout << 3 << endl;
        n = n / 3;
    }
    for (ll i = 5; i * i <= n; i += 6)
    {
        while(n%i==0)
        {
            cout<<i<<endl;
            n=n/i;
        }
        while(n%(i+2)==0)
        {
            cout<<i+2<<endl;
            n=n/(i+2);
        }
    }
    if(n>3)
    cout<<n<<endl;
}
int main()
{
    int n;
    cin >> n;
    prime(n);
    return 0;
}