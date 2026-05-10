#include <cmath>
#include <iostream>

using namespace std;

int main() {
  double R, S;
  while (cin >> R >> S) {
    cout << (int)round(sqrt((R * (S + 0.16)) / 0.067)) << "\n";
  }
  return 0;
}
