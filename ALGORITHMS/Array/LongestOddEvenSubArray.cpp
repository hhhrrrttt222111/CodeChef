
//Longest subarray with odd even elements.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    ll size=arr.size();
    ll maxi=0;ll len=1;
    for(ll i=1;i<size;i++)
    {
        if(arr[i]%2!=arr[i-1]%2)
        {
            len++;
        }
        else
        {
            maxi=max(maxi,len);
            len=1;
        }
    }
    maxi=max(maxi,len);
    cout<<maxi<<endl;
}
int main()
{
    vector<ll> arr{10,12,8,4};
    op(arr);
    return 0;
}