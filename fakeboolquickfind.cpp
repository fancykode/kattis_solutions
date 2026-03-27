#include <iostream>
#include <vector>

using namespace std;

int find(const vector<int> &parent, int v) {
  if (parent[v] == v) {
    return v;
  }
  return find(parent, parent[v]);
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> parent(n, 0);
  for (size_t i = 0; i < parent.size(); i++) {
    parent[i] = i;
  }
  while (m-- > 0) {
    int a, b;
    cin >> a >> b;
    int aa = find(parent, a);
    int bb = find(parent, b);
    if (aa < bb) {
      parent[bb] = aa;
    } else if (bb < aa) {
      parent[aa] = bb;
    }
  }

  string sep = "";
  for (size_t i = 0; i < parent.size(); i++) {
    cout << sep << find(parent, i);
    sep = " ";
  }
  cout << "\n";
  return 0;
}
