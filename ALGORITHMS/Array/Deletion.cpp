
//Deleting and shifting array elements.

#include <bits/stdc++.h>
#define ll long long
using namespace std;
int op(int arr[], int size,int pos)
{
    arr[pos-1]=0;
    ll i;
    for(i=pos-1;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[i]=0;
    return size-1;
}
int main()
{
    int arr[7] = {30,20,10,10,10,10,10};
    int size = 7;
    int del_pos=1;
    int n_size=op(arr, size,del_pos);
    for(ll i=0;i<n_size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}