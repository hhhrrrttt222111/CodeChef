#include <iostream>
using namespace std;

int main()
{
    int testcase, m, n;
    cin >> testcase;
    while (testcase--)
    {
        cin >> m >> n;
        int sol = m - n;
        cout << abs(sol) << endl;
    }
    return 0;
}
