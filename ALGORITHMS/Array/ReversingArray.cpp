#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(int arr[], int size)
{
    for(ll i=0;i<(size/2);i++)
    {
        swap(arr[i],arr[size-1-i]);
    }
}
int main()
{
    int arr[] = {1,2,3,4,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    op(arr, size);
    for(ll i=0;i<size;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}