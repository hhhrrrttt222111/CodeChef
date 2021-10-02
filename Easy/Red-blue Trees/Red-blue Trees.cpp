#include <bits/stdc++.h>
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;


#define forr(i,n) for(int i = 0 ; i  < n ; i++)
#define forr1(i,n) for(int i = 1 ; i  <= n ; i++)
#define int long long int
#define pb push_back
#define endl "\n"
vector<vector<int>> graph ;
vector<int> c;
const int N = 2e7 + 5 ;
const int inf = 1e9 + 32;
int n , curr = 0 ;

int dfs(int pre , int no , int z)
{
    int temp = 0  ;
    if ( z != c[no]) temp = 2 * c[no] - 1 ;

    for (auto it : graph[no])
    {
        if (it != pre)
        {
            int t = dfs(no, it , z ^ 1);
            curr += abs(t);
            temp += t;
        }
    }

    return temp ;
}

int solve()
{
    curr = 0 ;
    int x = dfs(0, 1, 0);
    // cout << x << endl;
    if (x == 0) return curr;
    return 1e18;
}
int32_t main()
{

    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);

#ifndef ONLINE_JUDGE
    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
#endif

    int t;
    cin >> t;

    while (t--)
    {

        cin >> n;
        graph.resize(n + 1);
        c.resize(n + 1);
        int x, y ;
        forr(i, n - 1)
        {
            cin >> x >> y;
            graph[x].pb(y);
            graph[y].pb(x);
        }
        string s;
        cin >> s;
        forr1(i, n)
        if (s[i - 1] == '1')c[i] = 1;

        // forr1(i, n)
        // cout << c[i] << " ";
        // cout << "\n";
        int ans = 1e18 ;
        ans = min(ans, solve());

        forr1(i, n)
        c[i] = c[i] ^ 1;
        ans = min(ans, solve());

        if (ans == 1e18) cout << -1;
        else cout << ans;
        cout << "\n";
        graph.clear();
        c.clear();
    }
}