#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int d150 = 0, d30 = 0, d15 = 0, d5 = 0, d1 = 0;
  if (N / 150 != 0) {
    d150 = N / 150;
    N %= 150;
  }
  if (N / 30 != 0) {
    d30 = N / 30;
    N %= 30;
  }
  if (N / 15 != 0) {
    d15 = N / 15;
    N %= 15;
  }
  if (N / 5 != 0) {
    d5 = N / 5;
    N %= 5;
  }
  d1 = N;
  cout << d1 << " " << d5 << " " << d15 << " " << d30 << " " << d150 << "\n";
  return 0;
}
