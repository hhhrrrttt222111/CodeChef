#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n, m, k;
        cin >> n >> m >> k;
        double a[n + 1][m + 1];
        for (long long i = 0; i <= n; i++)
        {
            for (long long j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                    a[i][j] = 0;
                else
                    cin >> a[i][j];
            }
        }
        for (long long i = 0; i <= n; i++)
        {
            double p = 0;
            for (long long j = 0; j <= m; j++)
            {
                a[i][j] += p;
                p = a[i][j];
            }
        }
        for (long long i = 0; i <= m; i++)
        {
            double p = 0;
            for (long long j = 0; j <= n; j++)
            {
                a[j][i] += p;
                p = a[j][i];
            }
        }
        long long minimum = min(m, n);
        long long res = 0;
        for (long long x = 1; x <= minimum; x++)
        {
            for (long long i = x; i <= n; i++)
            {
                for (long long j = x; j <= m; j++)
                {
                    if ((a[i][j] + a[i - x][j - x] - a[i][j - x] - a[i - x][j]) / (x * x) >= k)
                        res++;
                }
            }
        }
        cout << res << endl;
    }
    return 0;
}
