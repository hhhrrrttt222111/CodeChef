
//Finding a sub-array with a given sum.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector<ll> &arr)
{
    ll n = arr.size();
    ll gsum=5;
    ll sum=0;
    ll s=0;
    for(ll i=0;i<n;i++)
    {
        sum+=arr[i];
        while(sum>gsum&&s<i)
        {
            sum-=arr[s];
            s++;
        }
        if(sum==gsum)
        {
            cout<<"YUS"<<endl;
            return ;
        }
    }
    cout<<"NAHI"<<endl;
}
int main()
{
    vector<ll> arr{1,4,0,0,3,10,5};
    op(arr);
    return 0;
}