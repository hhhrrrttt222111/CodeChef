#include <bits/stdc++.h>
#define ll long long
using namespace std;
int op(ll arr[], int size)
{
    ll max=size-1;
    for(ll i=size-1;i>=0;i--)
    {
        if(arr[i]>arr[max])
        {
            max=i;
        }
    }
    return max;
}
int main()
{
    ll arr[] = {30,20,101,69,111,200,1111111111,10000011100};
    int size = sizeof(arr)/sizeof(arr[0]);
    int pos=op(arr, size)+1;
    cout<<pos<<endl;
    return 0;
}