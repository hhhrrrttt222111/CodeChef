#include <iostream>
using namespace std;

int main()
{
    int testcase, a, b;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b;
        if (a > b)
        {
            cout << "SECOND" << endl;
        }
        else if (a < b)
        {
            cout << "FIRST" << endl;
        }
        else
        {
            cout << "ANY" << endl;
        }
    }
    return 0;
}
