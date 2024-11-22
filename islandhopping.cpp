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

  int n;
  cin >> n;

  for (int t = 0; t < n; t++) {
    int m;
    cin >> m;

    vector<tuple<int, double, double>> vertices; // (id, y, x)
    vertices.reserve(m);
    int vertexId = 0;
    for (int k = 0; k < m; k++) {
      double h, v;
      cin >> h >> v;
      vertices.push_back(make_tuple(vertexId, h, v));
      vertexId++;
    }

    vector<tuple<double, int, int>> edges;
    for (size_t i = 0; i < vertices.size(); i++) {
      int id1 = get<0>(vertices[i]);
      double y1 = get<1>(vertices[i]);
      double x1 = get<2>(vertices[i]);
      for (size_t j = i + 1; j < vertices.size(); j++) {
        int id2 = get<0>(vertices[j]);
        double y2 = get<1>(vertices[j]);
        double x2 = get<2>(vertices[j]);
        double dx = fabs(x1 - x2);
        double dy = fabs(y1 - y2);
        double dist = sqrt(dx * dx + dy * dy);
        edges.push_back(make_tuple(dist, id1, id2));
      }
    }
    sort(edges.begin(), edges.end(), [](const auto &e1, const auto &e2) {
      return get<0>(e1) < get<0>(e2);
    });

    UnionFind uf(m);
    double sum = 0;
    for (const auto &[w, a, b] : edges) {
      if (uf.find(a) != uf.find(b)) {
        uf.unite(a, b);
        sum += w;
      }
    }
    cout << sum << "\n";
  }
}