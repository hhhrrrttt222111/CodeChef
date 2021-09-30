#include <bits/stdc++.h>

using namespace std;

#define ALL(x) (x).begin(), (x).end()

int main() {
 int T, n;
 for (cin>>T; T--; ) {
  scanf("%d", &n);
  vector<int> a(n), b(n), I(n), vst(n);
  for (int i = 0; i < n; i++) scanf("%d", &a[i]);
  for (int i = 0; i < n; i++) scanf("%d", &b[i]);
  fill(ALL(vst), 0);
  iota(ALL(I), 0);
  sort(ALL(I), [&b](int u, int v) {return b[u] < b[v];});
  int sum = 0, sz = 0;
  multiset<pair<int, int>> s;
  for (int id : I) {
   s.insert(make_pair(a[id], id));
   vst[id] = true;
   if (sum + a[id] > b[id]) {
    auto it = --s.end();
 sum = sum - it -> first + a[id];
    vst[it -> second] = false;
    s.erase(it);
   } else {
    sum = sum + a[id];
    sz ++;
   }
  }

  printf("%d\n", sz);
  sum = 0;
  for (int id : I) if (vst[id]) {
   printf("%d %d %d\n", id + 1, sum, sum + a[id]);
   sum += a[id];
  }
 }
 return 0;
}