#include <algorithm>
#include <iostream>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);
  int T;
  cin >> T;

  while (T--) {
    int Ng, Nm;
    cin >> Ng >> Nm;

    int maxGd = 0;
    for (int i = 0; i < Ng; i++) {
      int s;
      cin >> s;
      maxGd = max(maxGd, s);
    }
    int maxMgd = 0;
    for (int i = 0; i < Nm; i++) {
      int s;
      cin >> s;
      maxMgd = max(maxMgd, s);
    }

    if (maxGd >= maxMgd) {
      cout << "Godzilla\n";
    }
    if (maxMgd > maxGd) {
      cout << "MechaGodzilla\n";
    }
  }
  return 0;
}
