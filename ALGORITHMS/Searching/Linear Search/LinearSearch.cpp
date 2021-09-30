#include <iostream>
#include <string>
using namespace std;

void linearSearch(int a[], int n)
{
    int temp = -1;
    for (int i = 0; i < 5; i++)
    {
        if (a[i] == n)
        {
            cout << "Element found at position: " << i + 1 << endl;
            temp = 0;
            break;
        }
    }
    if (temp == -1)
    {
        cout << "No Element found" << endl;
    }
}

int main()
{
    int size;
    int *ptr;
    cout << "Enter number of values you want to store (size of array):" << endl;
    cin >> size;
    ptr = new int[size];
    cout << "Enter values to be stored in the array" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }

    cout << "Please enter an element to search" << endl;
    int num;
    cin >> num;

    linearSearch(ptr, num);

    return 0;
}

