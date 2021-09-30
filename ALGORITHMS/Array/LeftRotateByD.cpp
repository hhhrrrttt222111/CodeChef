/*
Left rotating an array by d units.
*/
#include <bits/stdc++.h>
#define ll long long
using namespace std;
void rev(vector <ll> &arr,int s,int n)
{
    while(s<n)
    {
        swap(arr[s],arr[n]);
        s++;
        n--;
    }
}
void op(vector <ll> &arr,int d)
{
    int size=arr.size();
    rev(arr,0,d-1);
    rev(arr,d,size-1);
    rev(arr,0,size-1);
}
int main()
{
    vector <ll> arr{1,2,3,4,5,6,7,8,9,10};
    op(arr,3);
    for(ll i=0;i<arr.size();i++)
    {
        cout<<arr.at(i)<<" ";
    }
    cout<<endl;
    return 0;
}