#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int T;
  cin >> T;

  while (T--) {
    int Ng, Nm;
    cin >> Ng >> Nm;

    vector<int> gd;
    vector<int> mgd;
    for (int i = 0; i < Ng; i++) {
      int s;
      cin >> s;
      gd.push_back(s);
    }
    for (int i = 0; i < Nm; i++) {
      int s;
      cin >> s;
      mgd.push_back(s);
    }
    sort(gd.begin(), gd.end());
    sort(mgd.begin(), mgd.end());
    size_t i = 0, j = 0;

    while (1) {
      if (i == gd.size()) {
        cout << "MechaGodzilla\n";
        break;
      }
      if (j == mgd.size()) {
        cout << "Godzilla\n";
        break;
      }
      int gUnit = gd[i];
      int mgUnit = mgd[j];
      if (gUnit < mgUnit) {
        i++;
      } else if (mgUnit <= gUnit) {
        j++;
      }
    }
  }
  return 0;
}
