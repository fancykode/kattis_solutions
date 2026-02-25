#include <iostream>
#include <string>

using namespace std;

int main() {
  string line;
  cin >> line;
  int truls = 0, henry = 0;
  for (size_t i = 0; i < line.size(); i++) {
    if (line[i] == 'T') {
      truls++;
    } else {
      henry++;
    }
    if (truls >= 11 && truls > henry && (truls - henry) >= 2) {
      truls = 0;
      henry = 0;
    } else if (henry >= 11 && henry > truls && (henry - truls) >= 2) {
      truls = 0;
      henry = 0;
    }
  }
  cout << truls << "-" << henry << "\n";
  return 0;
}
