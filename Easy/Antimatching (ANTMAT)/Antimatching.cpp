#include <iostream>
#include <list>
using namespace std;

int main()
{
  int T;

  cin >> T;

  for (int t = 0; t < T; ++t)
  {
    int n, m;
    int antimatch = 0;
    list<int> adj[10000];

    cin >> n >> m;

    for (int i = 0; i < m; ++i)
    {
      int u,v, size_u, size_v;

      cin >> u >> v;

      u--;
      v--;

      adj[u].push_back(v);
      adj[v].push_back(u);

      size_u = adj[u].size();
      size_v = adj[v].size();

      if (size_u > antimatch)
        antimatch = size_u;
      if (size_v > antimatch)
        antimatch = size_v;
    }

    if (antimatch < 3)
    {
      for (int i = 0; i < n; ++i)
      {
        if (adj[i].size() == 2)
        {
          int j = adj[i].front();
          int k = adj[i].back();
          if (adj[j].size() == 2 &&
              (adj[j].front() == k || adj[j].back() == k))
          {
            antimatch = 3;
          }
        }
      }
    }
    cout << antimatch << endl;
  }

  return 0;
}
