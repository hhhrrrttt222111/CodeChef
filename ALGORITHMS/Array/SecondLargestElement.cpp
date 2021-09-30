#include <bits/stdc++.h>
#define ll long long
using namespace std;
int op(ll arr[], int size)
{
    ll max = size - 1;
    ll smax = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > arr[max])
        {
            smax = max;
            max = i;
        }
        else if (arr[i] < arr[max])
        {
            if (smax == -1 || arr[smax] < arr[i])
            {
                smax = i;
            }
        }
    }
    return smax;
}
int main()
{
    ll arr[] = {1, 2, 3, 4, 5, 8, 7,100,99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int pos = op(arr, size) + 1;
    cout << pos << endl;
    return 0;
}