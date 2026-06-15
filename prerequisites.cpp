#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  while (1) {
    int k, m;
    cin >> k;
    if (k == 0)
      break;
    cin >> m;
    unordered_set<string> chosen;
    while (k--) {
      string course;
      cin >> course;
      chosen.insert(course);
    }
    bool meets = true;
    while (m--) {
      int c;
      cin >> c;
      int r;
      cin >> r;
      int count = 0;
      while (c--) {
        string course;
        cin >> course;
        if (chosen.contains(course)) {
          count++;
        }
      }
      if (count < r) {
        meets = false;
      }
    }
    if (meets) {
      cout << "yes\n";
    } else {
      cout << "no\n";
    }
  }
  return 0;
}
