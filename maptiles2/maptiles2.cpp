#include <iostream>

using namespace std;

int main() {
  string quadkey;
  cin >> quadkey;
  int x = 0, y = 0;
  for (int i = 0; i < quadkey.size(); i++) {
    x += x;
    y += y;
    if (quadkey[i] == '1') {
      x++;
    } else if (quadkey[i] == '2') {
      y++;
    } else if (quadkey[i] == '3') {
      x++;
      y++;
    }
  }
  cout << quadkey.size() << " " << x << " " << y << "\n";
  return 0;
}
