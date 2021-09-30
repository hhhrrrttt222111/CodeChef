//find maximum diff between two elements of an array.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector <ll> &arr)
{
    ll size=arr.size();
    ll diff=arr.at(1)-arr.at(0),mine=arr.at(0);
    for(ll i=0;i<size;i++)
    {
        diff=max(diff,(arr.at(i)-mine));
        mine=min(mine,arr.at(i));
    }
    cout<<diff<<endl;
    return ;
}
int main()
{
    vector <ll> arr{7,9,5,6,3,2};
    op(arr);
    return 0;
}