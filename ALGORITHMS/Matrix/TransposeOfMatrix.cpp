#include <bits/stdc++.h>
using namespace std;
const int R = 2, C = 2;
void transpose(int arr[R][C])  //in this function we just swap the elements below the diagonal with those above it to get the transpose
{
    for (int i = 0; i < R; i++)
    {
        for (int j = i + 1; j < C; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    //time complexity is O(R*C)
    //space complexity theta(1)
}
void print(int arr[R][C])
{
    for (int i = 0; i < R; i++)
    {
        for (int j = 0; j < C; j++)
            cout << arr[i][j] << " ";

        cout << endl;
    }
}
int main()
{
    int arr[R][C] = {{1, 1}, {2, 2}};

    transpose(arr);  //in place and one traversal
    print(arr);
    return 0;
}