#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long int cat, dog, leg;
        cin >> cat >> dog >> leg;
        long int max_leg = 4 * (cat + dog);
        long int min_leg = 4 * dog;
        if (2 * dog < cat)
        {
            min_leg += (cat - (2 * dog)) * 4;
        }
        if (leg <= max_leg && leg >= min_leg && leg % 4 == 0)
            cout << "yes\n";
        else
            cout << "no\n";
    }
    return 0;
}
