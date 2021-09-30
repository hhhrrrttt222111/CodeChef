/*
Finding the leader ( elements greater than neighbouring elements ) in an array.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(vector <ll> &arr)
{
    int size=arr.size();
    int cur_ldr=INT_MIN;
    for(ll i=size-1;i>=0;i--)
    {
        if(arr.at(i)>cur_ldr)
        {
            cout<<arr.at(i)<<" ";
            cur_ldr=arr.at(i);
        }
    }
    cout<<endl;
}
int main()
{
    vector <ll> arr{7,10,4,3,6,5,2};
    op(arr);
    return 0;
}