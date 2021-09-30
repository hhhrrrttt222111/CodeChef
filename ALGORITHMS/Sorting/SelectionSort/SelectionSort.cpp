#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;
        for (int j = i; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            int temp = arr[min];
        }
    }
}

int main()
{
    int size;
    int *ptr;
    cout << "Enter the size of the array" << endl;
    cin >> size;
    ptr = new int[size];
    cout << "Enter " << size << " integers in RANDOM order : " << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> ptr[i];
    }
    cout << "UNSORTED array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    selectionSort(ptr, size);
    cout << "SORTED array : " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << ptr[i] << " ";
    }
    cout << endl;

    return 0;
}
