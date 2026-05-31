#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int r, f;
  cin >> r >> f;
  int t = round(f / (double)r);
  if (t % 2 == 0) {
    cout << "up\n";
  } else {
    cout << "down\n";
  }
  return 0;
}
