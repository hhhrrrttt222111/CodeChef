#include <iostream>
#include <cmath>
#define ll long long int
using namespace std;

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(NULL);
        ll n, x, y, r, w, seq[1000000],T;
        cin >> T;
        for(ll l=1;l<=T;l++)
        {
                int i = 0;
                cin >> n >> x;
                for (ll f = 0; f < n; f++)
                {
                        cin >> seq[f];
                }
                for (ll g = x; g > 0 && i < n - 1; g--)
                {
                        w = 0;
                        ll p = log(seq[i]) / log(2);
                        r = pow(2, p);
                        seq[i] = seq[i] ^ r;
                        for (ll j = i + 1; j < n; j++)
                        {
                                if ((seq[j] ^ r) < seq[j])
                                {
                                        seq[j] = seq[j] ^ r;
                                        w = 1;
                                        break;
                                }
                        }
                        if (w == 0)
                        {
                                seq[n - 1] ^= r;
                        }
                        while (seq[i] <= 0)
                        {
                                i++;
                        }
                                y = g + 1;
                }
                        if (y > 0)
                        {
                                if (n < 3 && y % 2 > 0)
                                {
                                        seq[n - 2] ^= 1;
                                        seq[n - 1] ^= 1;
                                }
                        }
                for (ll u = 0; u < n; u++)
                {
                        cout << seq[u] << " ";
                }
                cout << "\n";
        }
        return 0;
}
