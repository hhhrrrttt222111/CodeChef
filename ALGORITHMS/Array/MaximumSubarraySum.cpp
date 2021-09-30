
//Finding max sum of an subarray.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    ll size=arr.size();
    ll max_sum=arr.at(0);
    ll maxi=arr.at(0);
    for(ll i=1;i<size;i++)
    {
        maxi=max(arr.at(i)+maxi,arr.at(i));
        max_sum=max(maxi,max_sum);
    }
    cout<<max_sum<<endl;
}
int main()
{
    vector<ll> arr{-6,-1,-8};
    op(arr);
    return 0;
}