
// Using window sliding technique.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr, int k)
{
    ll n = arr.size();
    ll gsum=93;
    ll maxi = 0, sum = 0;
    for (ll i = 0; i < k; i++)
    {
        maxi += arr[i];
    }
    sum = maxi;
    if (sum == gsum)
    {
        cout << 1 << endl;
        return;
    }
    for (ll i = k; i < n; i++)
    {
        sum = sum + arr[i] - arr[i - k];
        if (sum == gsum)
        {
            cout << 1 << endl;
            return;
        }
        maxi = max(sum, maxi);
    }
    cout<<0<<endl;
}
int main()
{
    vector<ll> arr{5, -10, 6, 90, 3};
    op(arr, 2);
    return 0;
}