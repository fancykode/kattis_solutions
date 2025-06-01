#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int N;
  vector<pair<int, int>> r;
  cin >> N;
  for (int i = 0; i < N; i++) {
    int M, O;
    cin >> M >> O;
    r.push_back(make_pair(M, O));
  }
  sort(r.begin(), r.end());
  int time = -1;
  for (size_t i = 0; i < r.size(); i++) {
    if (r[i].second == 0) {
      time = r[i].first;
      break;
    }
  }
  cout << time << "\n";
  return 0;
}
