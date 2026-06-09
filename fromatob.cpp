#include <iostream>

using namespace std;

int main() {
  int a, b;
  cin >> a >> b;
  int op = 0;
  if (a > b) {
    while (1) {
      if (a & 1) {
        a += 1;
        op++;
      }
      a /= 2;
      op++;
      if (a == b) {
        break;
      }
      if (a < b) {
        op += b - a;
        break;
      }
    }
  } else if (a < b) {
    op = b - a;
  }
  cout << op << "\n";
  return 0;
}
