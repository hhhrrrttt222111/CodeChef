// Bubble Sort recursive implementation

#include <bits/stdc++.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    if (n == 1)
        return;
 
    for (int i=0; i<n-1; i++)
        if (arr[i] > arr[i+1])
            swap(arr[i], arr[i+1]);

    bubbleSort(arr, n-1);
}
 
void Display(int arr[], int n)
{
    for (int i=0; i < n; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}
 
int main()
{
    int arr[] = {54, 35, 27, 18, 29, 15, 100};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubbleSort(arr, n);
    cout<<"Sorted array : "<<endl;;
    Display(arr, n);
    return 0;
}