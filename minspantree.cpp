#include <bits/stdc++.h>

using namespace std;

class UnionFind {
  vector<int> rank;
  vector<int> parent;

public:
  UnionFind(int n) {
    rank.resize(n, 0);
    parent.resize(n);
    for (size_t i = 0; i < parent.size(); i++) {
      parent[i] = i;
    }
  }

  int find(int v) {
    if (parent[v] == v) {
      return v;
    }
    int tmp = find(parent[v]);
    parent[v] = tmp;
    return parent[v];
  }

  void unite(int vv, int uu) {
    int v = find(vv);
    int u = find(uu);
    if (v == u) {
      return;
    }
    if (rank[u] < rank[v]) {
      parent[u] = v;
    } else if (rank[v] < rank[u]) {
      parent[v] = u;
    } else {
      parent[u] = v;
      rank[v]++;
    }
  }
};

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  while (1) {
    int n, m;
    cin >> n >> m;
    if (n == 0 && m == 0) {
      break;
    }
    vector<tuple<int, int, int>> edges;
    for (int i = 0; i < m; i++) {
      int u, v, w;
      cin >> u >> v >> w;
      edges.push_back(make_tuple(w, u, v));
    }
    sort(edges.begin(), edges.end(), [](const auto &e1, const auto &e2) {
      return get<0>(e1) < get<0>(e2);
    });

    int cost = 0;
    UnionFind uf(n);
    vector<pair<int, int>> mst;
    for (const auto &[w, u, v] : edges) {
      if (uf.find(u) != uf.find(v)) {
        uf.unite(u, v);
        cost += w;
        if (u < v) {
          mst.push_back(make_pair(u, v));
        } else {
          mst.push_back(make_pair(v, u));
        }
      }
    }

    if (mst.size() == (size_t)(n - 1)) {
      cout << cost << "\n";
      sort(mst.begin(), mst.end());
      for (const auto &[u, v] : mst) {
        cout << u << " " << v << "\n";
      }
    } else {
      cout << "Impossible\n";
    }
  }
  return 0;
}