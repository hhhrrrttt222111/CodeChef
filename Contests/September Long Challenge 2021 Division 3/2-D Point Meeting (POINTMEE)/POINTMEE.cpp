#include <bits/stdc++.h>
using namespace std;
#define ld long double
int check(ld h, ld k, ld arr_x[], ld arr_y[], int n)
{
    int steps = 0;
    for (int j = 0; j < n; j++)
    {
        ld xx = h - arr_x[j];
        ld yy = k - arr_y[j];
        if (xx == 0 && yy == 0)
        {
            steps += 0;
        }
        else if ((xx == 0 && yy != 0) || (xx != 0 && yy == 0))
        {
            steps += 1;
        }
        else if (abs(xx) == abs(yy))
        {
            steps += 1;
        }
        else
            steps += 2;
    }
    return steps;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        ld arr_x[n], arr_y[n];
        ld h, k;
        for (int i = 0; i < n; i++)
        {
            cin >> arr_x[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> arr_y[i];
        }
        int min_steps = INT_MAX;
        for (int i = 0; i < n; i++)
        {
            for (int l = 0; l < n; l++)
            {
                //mean_point
                h = (arr_x[i] + arr_x[l]) / 2;
                k = (arr_y[i] + arr_y[l]) / 2;
                min_steps = min(min_steps, check(h, k, arr_x, arr_y, n));
                //x & y intersection points
                h = arr_x[i];
                k = arr_y[l];
                min_steps = min(min_steps, check(h, k, arr_x, arr_y, n));
                //x+y=c1 and x-y=c2 intersection points
                ld c1 = arr_x[i] + arr_y[i];
                ld c2 = arr_x[l] - arr_y[l];
                h = (c1 + c2) / 2;
                k = (c1 - c2) / 2;
                min_steps = min(min_steps, check(h, k, arr_x, arr_y, n));
                //x+y=c and x intersection
                ld c3 = arr_x[i] + arr_y[i];
                h = arr_x[l];
                k = c3 - h;
                min_steps = min(min_steps, check(h, k, arr_x, arr_y, n));
                //x+y and y intersection
                ld c4 = arr_x[i] + arr_y[i];
                k = arr_y[l];
                h = c4 - k;
                min_steps = min(min_steps, check(h, k, arr_x, arr_y, n));
                //x-y and X
                ld c5 = arr_x[i] - arr_y[i];
                h = arr_x[l];
                k = h - c5;
                min_steps = min(min_steps, check(h, k, arr_x, arr_y, n));
                //x-y and y
                ld c6 = arr_x[i] - arr_y[i];
                k = arr_y[l];
                h = c6 + k;
                min_steps = min(min_steps, check(h, k, arr_x, arr_y, n));
            }
        }
        cout << min_steps << endl;
    }
    return 0;
}
