#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int n;
  cin >> n;

  int i;
  string word;
  int maxMBP = 0;
  for (int j = 0; j < n; j++) {
    cin >> i >> word;
    if (word == "nej") {
      maxMBP = max(maxMBP, i);
    }
  }
  cout << maxMBP << "\n";
  return 0;
}
