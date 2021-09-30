/*

In this algorithm I am moving all the zeros in the array to the end.

*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void op(int arr[], int size)
{
    ll cntr=0;
    for(ll i=0;i<size;i++)
    {
        if(arr[i]!=0)
        {
            swap(arr[cntr],arr[i]);
            cntr++;
        }
    }
}
int main()
{
    int arr[] = {10,9,8,0,0,0,0,0,0,0,0,11};
    int size = sizeof(arr) / sizeof(arr[0]);
    op(arr, size);
    for (ll i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}