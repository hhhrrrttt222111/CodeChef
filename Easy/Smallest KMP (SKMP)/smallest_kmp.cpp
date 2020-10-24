#include <iostream>
#include <string>
using namespace std;
#define ull unsigned long long int

int main()
{
    ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        string s, p, n;
        cin >> s >> p;
        int al[26];
        for (int i = 0; i < 26; i++)
            al[i] = 0;

        for (int i = 0; i < s.length(); i++)
        {
            al[s[i] - 97]++;
        }

        for (int i = 0; i < p.length(); i++)
        {
            al[p[i] - 97]--;
        }

        for (int i = 97; i < p[0]; i++)
        {
            while (al[i - 97]-- > 0)
                n += (char)i;
        }
        if (al[p[0] - 97] > 0)
        {
            bool f = true;
            for (int l = 1; l < p.length(); l++)
            {
                if (p[l] < p[0])
                {
                    f = false;
                    break;
                }
                else if (p[l] > p[0])
                {
                    break;
                }
            }
            if (f == true)
            {
                while (al[p[0] - 97]-- > 0)
                    n += p[0];
                n += p;
            }
            else
            {
                n += p;
                while (al[p[0] - 97]-- > 0)
                    n += p[0];
            }
        }
        else
            n += p;
        for (int i = p[0] + 1; i <= 122; i++)
        {
            while (al[i - 97]-- > 0)
                n += (char)i;
        }
        cout << n << "\n";
    }
    return 0;
}
