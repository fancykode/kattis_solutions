#include <bits/stdc++.h>

using namespace std;

bool checkIsArithmetic(const vector<int> &seq) {
  int prevDiff = 0;
  for (size_t k = 1; k < seq.size(); k++) {
    int diff = seq[k - 1] - seq[k];
    if (k != 1) {
      if (diff != prevDiff) {
        return false;
      }
    }
    prevDiff = diff;
  }
  return true;
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int m;
    cin >> m;
    vector<int> seq(m, 0);
    for (int j = 0; j < m; j++) {
      cin >> seq[j];
    }
    bool isArithmetic = checkIsArithmetic(seq);
    if (isArithmetic) {
      cout << "arithmetic\n";
    } else {
      sort(seq.begin(), seq.end());
      isArithmetic = checkIsArithmetic(seq);
      if (isArithmetic) {
        cout << "permuted arithmetic\n";
      } else {
        cout << "non-arithmetic\n";
      }
    }
  }
  return 0;
}
