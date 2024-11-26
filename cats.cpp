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

  int T;
  fastscan(T);
  for (int t = 0; t < T; t++) {
    int M, C;
    fastscan(M);
    fastscan(C);
    int edgesNum = (C * (C - 1)) / 2;
    vector<tuple<int, int, int>> edges; // (dist, i, j)
    edges.reserve(edgesNum);
    for (int k = 0; k < edgesNum; k++) {
      int i, j, d;
      fastscan(i);
      fastscan(j);
      fastscan(d);
      edges.push_back(make_tuple(d, i, j));
    }
    sort(edges.begin(), edges.end(), [](const auto &e1, const auto &e2) {
      return get<0>(e1) < get<0>(e2);
    });

    UnionFind uf(C);
    int minDist = 0;
    for (const auto &[dist, i, j] : edges) {
      if (uf.find(i) != uf.find(j)) {
        uf.unite(i, j);
        minDist += dist;
      }
    }
    if (M - minDist - C >= 0) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
  return 0;
}