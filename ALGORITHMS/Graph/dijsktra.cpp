#include<bits/stdc++.h>
using namespace std;
int n;
template<typename T>
class Graph {
    unordered_map<T, list<pair<T, int> > > m;
public:
    void addEdge(T x, T y, int dist, bool bidr = true) {
        m[x].push_back({y, dist});
        if (bidr) {
            m[y].push_back({x, dist});
        }
    }
    void printAdj() {
        for (auto node_pair : m) {
            T node = node_pair.first;
            cout << node << "-->";
            for (auto nbr : node_pair.second) {
                cout << "(" << nbr.first << "," << nbr.second << ")";
            }
        }
    }
    void Dijkstra(T src) {
        unordered_map<T, int> dist;
        for (auto node_pair : m) {
            T node = node_pair.first;
            dist[node] = INT_MAX;
        }
        set<pair<int, T> > s;
        dist[src] = 0;
        s.insert({0, src});

        vector<int> res(n + 1, 0);
        res[src] = -1;
        while (!s.empty()) {
            auto p = *(s.begin());
            T node = p.second;


            int node_dist = p.first;
            s.erase(s.begin());
            for (auto child : m[node]) {
                if (node_dist + child.second < dist[child.first]) {

                    T dest = child.first;
                    auto f = s.find({dist[child.first], dest});
                    if (f != s.end()) {
                        s.erase(f);
                    }
                    dist[dest] = node_dist + child.second;
                    s.insert({dist[dest], dest});
                    res[child] = node;
                }
            }

        }
        if (dist[n] == INT_MAX)
            cout << -1 << endl;
        int i = n;
        vector<int> path;
        else {
            while (i != -1)
            {
                path.push_back(i);
                i = par[i];
            }
            for (int i = path.size() - 1; i >= 0; i--)
                cout << path[i] << " ";
        }
    }


};
int main() {
    Graph<int> g;
    int e;
    cin >> n >> e;
    while (e--) {
        int x, y, w;
        cin >> x >> y >> w;
        g.addEdge(x, y, w);
    }
    g.Dijkstra(1);



    return 0;
}