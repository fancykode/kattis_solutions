#include <iostream>
#include <queue>
#include <tuple>
#include <vector>

using namespace std;

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

  vector<vector<int>> adjMatrix(n, vector<int>(n));
  for (size_t i = 0; i < adjMatrix.size(); i++) {
    for (size_t j = 0; j < adjMatrix[0].size(); j++) {
      fastscan(adjMatrix[i][j]);
    }
  }
  int sum = 0;
  vector<int> visited(n, 0);
  priority_queue<tuple<int, int, int>, vector<tuple<int, int, int>>,
                 greater<tuple<int, int, int>>>
      pq;

  pq.push(make_tuple(0, 0, -1));

  while (!pq.empty()) {

    const auto &it = pq.top();
    int w = get<0>(it);
    int node = get<1>(it);
    int parent = get<2>(it);
    pq.pop();

    if (visited[node] == 1) {
      continue;
    }

    if (parent != -1) {
      sum += w;
      cout << parent + 1 << " " << node + 1 << "\n";
    }

    visited[node] = 1;
    for (size_t j = 0; j < adjMatrix.size(); j++) {
      if (adjMatrix[node][j] != 0 && visited[j] != 1) {
        pq.push(make_tuple(adjMatrix[node][j], j, node));
      }
    }
  }
  return 0;
}