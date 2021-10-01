// This is the C++ code for finding Binomial Coefficient.
// Problem Description: For two given parameters n and r, find the Binomial Coefficient C(n, r)

#include <bits/stdc++.h>
using namespace std;

int calcBinomialCoef(int N, int R)
{
    int res = 1;

    if (R > N - R)
    {
        R = N - R; // C(n, r) = C(n, n-r)
    }

    for (int i = 0; i < R; ++i)
    {
        res = res * (N - i);
        res = res / (i + 1);
    }
    return res;
}

int main()
{
    int N;
    cout << "Enter the value of n: ";
    cin >> N; // If value of n is 6
    int R;
    cout << "Enter the value of r: ";
    cin >> R; // If value of r is 2
    // Calculation: C(6,2) = 6!/(4!*2!) = 15
    cout << "The Binomial Coefficient is: ";
    cout << calcBinomialCoef(N, R); //Then output is 15
    cout << endl;
    return 0;
}