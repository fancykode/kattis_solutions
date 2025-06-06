#include <bits/stdc++.h>

using namespace std;

pair<int, int> findDigit(const vector<vector<int>> &ptrn, int digit) {
  for (int i = 0; i < (int)ptrn.size(); i++) {
    for (int j = 0; j < (int)ptrn[i].size(); j++) {
      if (ptrn[i][j] == digit) {
        return {i, j};
      }
    }
  }
  return {0, 0};
}

double calcDist(pair<int, int> p1, pair<int, int> p2) {
  return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  vector<vector<int>> ptrn(3, vector<int>(3, 0));

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> ptrn[i][j];
    }
  }

  double dist = 0.0;
  for (int d = 1; d < 9; d++) {
    dist += calcDist(findDigit(ptrn, d), findDigit(ptrn, d + 1));
  }
  cout.precision(10);
  cout << fixed;
  cout << dist << "\n";

  return 0;
}
