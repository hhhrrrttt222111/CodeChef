#include <iostream>
using namespace std;
#include <cmath>
#include <algorithm>
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t, n;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll Weight[n];
        ll Length[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> Weight[i];
        }
        for (ll i = 0; i < n; i++)
        {
            cin >> Length[i];
        }
        if (n == 2)
        {
            if (Weight[0] == 1 || Weight[1] == 2)
            {
                cout << 0 << "\n";
            }
            else
            {
                if (Length[0] == 1)
                {
                    cout << 2 << "\n";
                }
                else
                {
                    cout << 1 << "\n";
                }
            }
        }
        else if (n == 3)
        {
            ll Ans = 0, Avar, Afix, Bvar, Bfix, Cvar, Cfix;

            for (ll i = 0; i < n; i++)
            {
                if (Weight[i] == 1)
                {
                    Avar = i;
                    Afix = i;
                }
                else if (Weight[i] == 2)
                {
                    Bvar = i;
                    Bfix = i;
                }
                else if (Weight[i] == 3)
                {
                    Cvar = i;
                    Cfix = i;
                }
            }
            while (Cvar <= Avar || Bvar <= Avar || Cvar <= Bvar)
            {
                while (Bvar <= Avar)
                {
                    Bvar += Length[Bfix];
                    Ans++;
                }
                while (Cvar <= Bvar || Cvar <= Avar)
                {
                    Cvar += Length[Cfix];
                    Ans++;
                }
            }
            cout << Ans << "\n";
        }
        else if (n == 4)
        {
            ll Ans = 0, Avar, Afix, Bvar, Bfix, Cvar, Cfix, Dvar, Dfix;
            for (ll i = 0; i < n; i++)
            {
                if (Weight[i] == 1)
                {
                    Avar = i;
                    Afix = i;
                }
                else if (Weight[i] == 2)
                {
                    Bvar = i;
                    Bfix = i;
                }
                else if (Weight[i] == 3)
                {
                    Cvar = i;
                    Cfix = i;
                }
                else if (Weight[i] == 4)
                {
                    Dvar = i;
                    Dfix = i;
                }
            }
            while (Cvar <= Avar || Bvar <= Avar || Cvar <= Bvar || Dvar <= Avar || Dvar <= Bvar || Dvar <= Cvar)
            {
                while (Bvar <= Avar)
                {
                    Bvar += Length[Bfix];
                    Ans++;
                }
                while (Cvar <= Bvar || Cvar <= Avar)
                {
                    Cvar += Length[Cfix];
                    Ans++;
                }
                while (Dvar <= Avar || Dvar <= Bvar || Dvar <= Cvar)
                {
                    Dvar += Length[Dfix];
                    Ans++;
                }
            }
            cout << Ans << "\n";
        }
    }
    return 0;
}
