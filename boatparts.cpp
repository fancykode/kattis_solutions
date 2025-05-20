#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int P, N;
  cin >> P >> N;
  unordered_set<string> parts;
  for (int i = 1; i <= N; i++) {
    string w;
    cin >> w;
    if (!parts.contains(w)) {
      parts.insert(w);
    }
    if (parts.size() == (size_t)P) {
      cout << i << "\n";
      return 0;
    }
  }
  cout << "paradox avoided\n";
  return 0;
}
