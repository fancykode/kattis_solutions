#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int n;
  cin >> n;
  string prev, want;

  cin >> prev >> want;
  int moves = 0;
  for (size_t i = 0; i < prev.size(); i++) {
    int c1 = (int)(prev[i] - 'A');
    int c2 = (int)(want[i] - 'A');
    int minChar = min(c1, c2);
    int maxChar = max(c1, c2);

    int diff1 = maxChar - minChar;
    int diff2 = 26 - maxChar + minChar;
    moves += min(diff1, diff2);
  }
  cout << moves << "\n";
  return 0;
}
