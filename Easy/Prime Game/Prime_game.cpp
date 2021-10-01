#include <iostream>
#include <bits/stdc++.h>
using namespace std;
#include <cmath>
#include <algorithm>
#include <map>
#include <vector>
#define ll long long int
int count_prime[1000000 + 1];

int SieveOfEratosthenes()
{
    int n = 1000000;
    bool prime[n + 1];
    memset(prime, true, sizeof(prime));
    for (int p = 2; p * p <= n; p++)
    {
        if (prime[p] == true)
        {
            for (int i = p * p; i <= n; i += p)
                prime[i] = false;
        }
    }
    int flag = 0;
    for (int p = 2; p <= n; p++)
        if (prime[p])
        {
            flag++;
            count_prime[p] = flag;
        }
        else
        {
            count_prime[p] = flag;
        }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, check;
    cin >> t;
    SieveOfEratosthenes();
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        if (count_prime[x] <= y)
        {
            cout << "Chef\n";
        }
        else
        {
            cout << "Divyam\n";
        }
    }
    return 0;
}
