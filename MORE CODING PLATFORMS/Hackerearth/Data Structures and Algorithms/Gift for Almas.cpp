  
#include<bits/stdc++.h>
     
    #define ll long long int
     
     
     
    using namespace std;
     
     
     
    void solve()
     
    {
     
        ll n;
     
        cin >> n;
     
     
     
        vector<vector<ll>> a(n, vector<ll>(n, 0));
     
        for (ll i = 0; i < n; i++)
     
        {
     
            for (ll j = 0; j < n; j++)
     
            {
     
                cin >> a[i][j];
     
            }
     
        }
     
     
     
        string s;
     
        cin >> s;
     
        
     
        ll count = 0;
     
        for (auto i : s)
     
        {
     
            if (i == 'R') count++;
     
            else count--;
     
        }
     
     
     
        if (count > 0)
     
        {
     
            while (count--)
     
            {
     
                for (ll i = 0; i < n; i++)
     
                {
     
                    for (ll j = 0; j < i; j++)
     
                    {
     
                        swap(a[i][j], a[j][i]);
     
                    }
     
                }
     
                for (ll i = 0; i < n; i++)
     
                {
     
                    for (ll j = 0; j < n / 2; j++)
     
                    {
     
                        swap(a[i][j], a[i][n - 1 - j]);
     
                    }
     
                }
     
            }
     
        }
     
        else
     
        {
     
            while (count++)
     
            {
     
                for (ll i = 0; i < n; i++)
     
                {
     
                    for (ll j = 0; j < i; j++)
     
                    {
     
                        swap(a[i][j], a[j][i]);
     
                    }
     
                }
     
                for (ll j = 0; j < n; j++)
     
                {
     
                    for (ll i = 0; i < n / 2; i++)
     
                    {
     
                        swap(a[i][j], a[n - 1 - i][j]);
     
                    }
     
                }
     
            }
     
        }
     
        
     
        for (ll i = 0; i < n; i++)
     
        {
     
            for (ll j = 0; j < n; j++)
     
            {
     
                cout << a[i][j] << " ";
     
            }
     
            cout << "\n";
     
        }
     
    }
     
     
     
    int main()
     
    {
     
        ios_base::sync_with_stdio(false);
     
        cin.tie(NULL);
     
        solve();
     
    }