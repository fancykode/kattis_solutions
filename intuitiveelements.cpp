#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  int t;
  cin >> t;
  getchar();
  while (t--) {
    int c;
    unordered_set<char> letters;
    while ((c = getchar()) != '\n') {
      letters.insert(c);
    }
    bool ok = true;
    while ((c = getchar()) != '\n') {
      if (!letters.contains(c)) {
        ok = false;
      }
    }
    if (ok) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
