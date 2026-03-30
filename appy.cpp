#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
  int n;
  cin >> n;
  unordered_set<string> selected;
  string sep = "";
  while (n-- > 0) {
    int m;
    cin >> m;
    bool found = false;
    while (m-- > 0) {
      string s;
      cin >> s;
      if (!selected.count(s) && !found) {
        cout << sep << s;
        sep = " ";
        selected.insert(s);
        found = true;
      }
    }
  }
  cout << "\n";
  return 0;
}
