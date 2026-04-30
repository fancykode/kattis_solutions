#include <iostream>

using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  int diff1 = a - b;
  int diff2 = b - c;
  if ((diff1 < 0 && diff2 > 0) || (diff1 > 0 && diff2 < 0)) {
    cout << "turned\n";
  } else if (diff1 == diff2) {
    cout << "cruised\n";
  } else if (abs(diff2) > abs(diff1)) {
    cout << "accelerated\n";
  } else if (abs(diff2) < abs(diff1)) {
    cout << "braked\n";
  }

  return 0;
}
