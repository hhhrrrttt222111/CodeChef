#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int testcase, a, b, c, d, e, f;
    cin >> testcase;
    while (testcase--)
    {
        cin >> a >> b >> c >> d >> e >> f;
        if ((a == c || a == d) && (b == c || b == d))
        {
            cout << "1" << endl;
        }
        else if ((a == e || a == f) && (b == e || b == f))
        {
            cout << "2" << endl;
        }
        else
        {
            cout << "0" << endl;
        }
    }
    return 0;
}
