#include <iostream>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  while (n-- > 0) {
    int k;
    string name;
    cin >> k;

    getline(cin, name); // skip newline char
    getline(cin, name);

    bool soup = false;
    bool pcakes = false;

    while (k-- > 0) {
      string item;
      getline(cin, item);
      if (item == "pea soup") {
        soup = true;
      } else if (item == "pancakes") {
        pcakes = true;
      }
    }
    if (soup && pcakes) {
      cout << name << "\n";
      return 0;
    }
  }
  cout << "Anywhere is fine I guess\n";
  return 0;
}
