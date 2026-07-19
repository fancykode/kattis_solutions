#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  unordered_map<int, string> pageWord;
  int n;
  cin >> n;
  int maxN = 0;
  while (n-- > 0) {
    string w;
    int p;
    cin >> w >> p;
    pageWord[p] = w;
    maxN = max(maxN, p);
  }
  string sep = "";
  for (int i = 0; i <= maxN; i++) {
    if (pageWord.contains(i)) {
      cout << sep << pageWord[i];
      sep = " ";
    }
  }
  return 0;
}
