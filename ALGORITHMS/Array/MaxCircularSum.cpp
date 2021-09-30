
//Maximum sum of an circular sub array

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    ll n=arr.size();
    ll max_sum=arr.at(0),maxi=arr.at(0);
    for(ll i=1;i<n;i++)
    {
        maxi=max(maxi+arr.at(i),arr.at(i));
        max_sum=max(max_sum,maxi);
    }
    if(max_sum<0)
    cout<<max_sum<<endl;
    return ;
    ll min_sum=arr.at(0),mini=arr.at(0),sum=arr.at(0);
    for(ll i=1;i<n;i++)
    {
        mini=min(mini+arr.at(i),arr.at(i));
        min_sum=min(min_sum,mini);
        sum+=arr.at(i);
    }
    max_sum=max(max_sum,sum-min_sum);
    cout<<max_sum<<endl;
}
int main()
{
    vector<ll> arr{-6,-1,-8};
    op(arr);
    return 0;
}