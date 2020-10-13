#include <iostream.h>
#include <math.h>
using namespace std;
int main()
{
    int t ;
    long n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        cout << int(sqrt(n)) << "\n";
    }
    return 0;
}