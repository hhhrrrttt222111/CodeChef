// Write your code here
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
 
const ll MOD = 1e9 + 7;
 
const int MX = 100005 * 4;
using Arr = array<ll, 33>;
Arr sg[MX][2];
 
ll POW[33];
 
int size(Arr a) {
  int res = 0;
  for (int i = 0; i < a.size(); i++) {
    if (a[i]) {
      res++;
    }
  }
  return res;
}
using Arr = array<ll, 33>;
void gauss(Arr &vs, ll a) {
  for (ll &v : vs) {
    if ((v ^ a) < a) {
      a ^= v;
    }
  }
  if (a) {
    for(ll &v : vs){
      if(v == 0){
        v = a;
        break;
      }
    }
  }
}
 
void add(int i, int l, int r, int al, int ar, int v) {
  if (l == al && r == ar) {
    gauss(sg[i][0], v);
    return;
  }
  int m = l + (r - l) / 2;
 
  if (ar <= m) {
    add(i * 2 + 1, l, m, al, ar, v);
  } else if (al > m) {
    add(i * 2 + 2, m + 1, r, al, ar, v);
  } else {
    add(i * 2 + 1, l, m, al, m, v);
    add(i * 2 + 2, m + 1, r, m + 1, ar, v);
  }
}
 
Arr query(int i, int l, int r, int al, int ar) {
  if (l == al && r == ar) {
    return sg[i][0];
  }
  int m = l + (r - l) / 2;
  int n = ar - al + 1;
 
  if (ar <= m) {
    Arr res = query(i * 2 + 1, l, m, al, ar);
    for (auto a : sg[i][0]) {
      if (a > 0) {
        gauss(res, a);
      }
    }
    return res;
 
  } else if (al > m) {
    Arr res = query(i * 2 + 2, m + 1, r, al, ar);
    for (auto a : sg[i][0]) {
      if (a > 0) {
        gauss(res, a);
      }
    }
    return res;
 
  } else {
    return {};
  }
}
 
ll mpow(int a, int n) {
  if (n == 0)
    return 1;
  ll r = mpow(a, n / 2);
  r = r * r;
  r %= MOD;
  if (n % 2)
    r *= a;
  return r % MOD;
}
 
int N, M, L, R, X;
 
int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);
  cout.tie(0);
  for (int i = 0; i < 33; i++) {
    POW[i] = mpow(2, i);
  }
 
  cin >> N >> M;
  for (int i = 0; i < M; i++) {
    cin >> L >> R >> X;
    if (X > 0) {
      add(0, 0, N + 5, L, R, X);
    }
  }
 
  ll res = 1;
  for (int i = 1; i <= N; i++) {
    ll a = size(query(0, 0, N + 5, i, i));
    a = POW[a];
    res *= a;
    res %= MOD;
  }
 
  cout << res << endl;
 
  return 0;
}