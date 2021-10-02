// This is the C++ code to check whether a given number is Armstrong or not.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int tmp, num, S, Q, P, x = 0, total = 0;
    cout << "Enter the number: "; // If the number is 407
    cin >> num;
    tmp = num;
    while (tmp > 0)
    {
        tmp = tmp / 10;
        x++;
    }
    S = num;
    while (S > 0)
    {
        R = S % 10;
        P = R;
        for (int i = 1; i < x; i++)
        {
            P *= R;
        }
        total += P;
        S /= 10;
    }
    if (total == num)
        cout << num << " is an Armstrong Number"; //Then output is 407 is an Armstrong Number
    else
        cout << num << " is not an Armstrong Number";
    return 0;
}