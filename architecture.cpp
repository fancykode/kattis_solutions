#include <iostream>
#include <vector>

using namespace std;

int main() {
  int R, C;
  cin >> R >> C;
  vector<int> rows;
  vector<int> cols;

  vector<int> esRows(R, 0);
  vector<int> nsCols(C, 0);
  while (R--) {
    int x;
    cin >> x;
    rows.push_back(x);
  }
  while (C--) {
    int x;
    cin >> x;
    cols.push_back(x);
  }
  for (size_t i = 0; i < rows.size(); i++) {
    int rowMaxHeight = rows[i];
    for (size_t j = 0; j < cols.size(); j++) {
      int colMaxHeight = cols[j];
      int val = min(colMaxHeight, rowMaxHeight);
      esRows[i] = max(val, esRows[i]);
      nsCols[j] = max(val, nsCols[j]);
    }
  }
  bool ok = true;
  for (size_t i = 0; i < rows.size(); i++) {
    if (esRows[i] != rows[i]) {
      ok = false;
      break;
    }
  }
  if (!ok) {
    cout << "impossible\n";
  } else {
    for (size_t i = 0; i < cols.size(); i++) {
      if (nsCols[i] != cols[i]) {
        ok = false;
        break;
      }
    }
    if (!ok) {
      cout << "impossible\n";
    }
  }
  if (ok) {
    cout << "possible\n";
  }
  return 0;
}
