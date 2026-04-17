#include <iostream>

using namespace std;

int main() {
  int b;
  cin >> b;
  // sqSide = (6 * b) / 14
  // Asq = (36 * b * b) / 196
  // recSide2 = (6/4) * sqSide = (9 * b) / 14
  // recSide1 = sqSide
  // Arec = (54 * b * b) / 196
  cout << (2 * 90 * b * b) / 196 << "\n";
  return 0;
}
