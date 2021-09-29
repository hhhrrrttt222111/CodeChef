#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
void solve()
{
  int n, s;
  cin >> n >> s;
  int sum = n * (n + 1) / 2;
  int low = sum - n;
  int up = sum - 1;
  if (s<low or s>up)
  {
    cout << -1 << endl;
  }
  else
  {
    cout << up - s + 1 << endl;
  }




}
int32_t main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  t = 1;
  cin >> t;
  while (t--)
  {
    solve();
  }


  return 0;
} 
