#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

long long int i;
long long int store[200000];
void store1_200000()
{
    for (i = 1; i <= 200000; i++)
    {
        store[i] = i;
    }
}

int main()
{
    long long t, c, a, b, temp;
    store1_200000();
    cin >> t;
    while (t--)
    {
        cin >> c;
        long long arr[c];
        for (i = 0; i < c; i++)
        {
            cin >> arr[i];
        }
        temp = 0;
        sort(arr, arr + c);
        int flag = 0;
        for (i = 0; i < c; i++)
        {
            if (arr[i] > store[i + 1])
            {
                flag = 1;
            }
            if (flag == 1)
            {
                break;
            }
        }
        if (flag == 1)
        {
            cout << "second\n";
        }
        else
        {
            for (i = 0; i < c; i++)
            {
                temp += abs(arr[i] - store[i + 1]);
            }
            // cout<<"Temp: "<<temp<<"\n";
            if (temp % 2 == 0)
            {
                cout << "second\n";
            }
            else
            {
                cout << "first\n";
            }
        }
    }
    return 0;
}
