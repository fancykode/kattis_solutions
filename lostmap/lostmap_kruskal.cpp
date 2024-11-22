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

  bool isSame(int v, int u) { return find(v) == find(u); }

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

void fastscan(int &number) {
  bool negative = false;
  int c;
  number = 0;
  c = getchar_unlocked();
  if (c == '-') {
    negative = true;
    c = getchar_unlocked();
  }
  for (; (c > 47 && c < 58); c = getchar_unlocked()) {
    number = number * 10 + c - 48;
  }
  if (negative) {
    number *= -1;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  fastscan(n);
  vector<tuple<int, int, int>> edges;

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int w;
      fastscan(w);
      if (w != 0 && j >= i) {
        edges.push_back(make_tuple(w, i, j));
      }
    }
  }

  sort(edges.begin(), edges.end(),
       [](const auto &e1, const auto &e2) { return get<0>(e1) < get<0>(e2); });

  UnionFind uf(n);

  for (const auto &[w, a, b] : edges) {
    if (uf.find(a) != uf.find(b)) {
      uf.unite(a, b);
      cout << a + 1 << " " << b + 1 << "\n";
    }
  }
}
