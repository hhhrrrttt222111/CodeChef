
//Maximum rain that can be trapped between buildings.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    ll size=arr.size();
    vector <ll> lmax(size);
    vector <ll> rmax(size);
    lmax.at(0)=arr.at(0);
    for(ll i=1;i<size;i++)
    {
        lmax[i]=max(arr[i],lmax[i-1]);
    }
    rmax.at(size-1)=arr.at(size-1);
    for(ll i=size-2;i>=0;i--)
    {
        rmax[i]=max(arr[i],lmax[i-1]);
    }
    ll rain=0;
    for(ll i=0;i<size;i++)
    {
        ll temp=min(lmax[i],rmax[i]);
        rain+=temp-arr.at(i);
    }
    cout<<rain<<endl;
}
int main()
{
    vector<ll> arr{3,0,1,2,5};
    op(arr);
    return 0;
}