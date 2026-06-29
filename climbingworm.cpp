#include <iostream>

using namespace std;

int main() {
  int a, b, h;
  cin >> a >> b >> h;
  int ch = 0;
  int times = 0;
  while (1) {
    ch += a;
    times++;
    if (ch >= h) {
      break;
    }
    ch -= b;
  }
  cout << times << "\n";
  return 0;
}
