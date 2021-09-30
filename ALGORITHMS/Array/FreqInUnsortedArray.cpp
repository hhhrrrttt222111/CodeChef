
//Frequency in a unsorted array

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    sort(arr.begin(),arr.end());
    ll size = arr.size();
    ll prev = arr.at(0), freq = 1;
    for (ll i = 1; i < size; i++)
    {
        if (arr.at(i) == prev)
            freq++;
        else
        {
            cout << prev << " " << freq << endl;
            freq = 1;
            prev = arr.at(i);
        }
    }
    cout << prev << " " << freq << endl;
    return;
}
int main()
{
    vector<ll> arr{100,40,50,10, 20, 20, 30, 30, 30,40};
    op(arr);
    return 0;
}