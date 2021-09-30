
// Stocks buy and sell problem

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    ll size=arr.size();
    ll profit=0;
    for(ll i=0;i<size-1;i++)
    {
        if(arr.at(i)<arr.at(i+1))
        {
            profit+=arr.at(i+1)-arr.at(i);
        }
    }
    cout<<profit<<endl;
}
int main()
{
    vector<ll> arr{1,5,3,1,2,8};
    op(arr);
    return 0;
}