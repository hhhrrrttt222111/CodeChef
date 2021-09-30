/*
Find the minimum elements to flip tomake all elements either 1 or 0.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    ll n = arr.size();
    for (ll i = 1; i < n; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            if (arr[i] != arr[0])
            {
                cout << "From " << i + 1;
            }
            else
            {
                cout<< " to "<< i<<endl;
            }
        }
    }
}
int main()
{
    vector<ll> arr{1,1,0,0,1,0,0,0,0,0,0,0,1,1,1};
    op(arr);
    return 0;
}