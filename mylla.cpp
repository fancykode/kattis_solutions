#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  int A = 0, H = 0;
  int AroundsWon = 0, HroundsWon = 0;

  for (size_t i = 0; i < S.size(); i++) {
    if (S[i] == 'A') {
      A++;
    } else {
      H++;
    }
    if (A == 3 || H == 3) {
      if (A > H) {
        AroundsWon++;
      } else {
        HroundsWon++;
      }
      A = 0;
      H = 0;
    }
    if (AroundsWon == N || HroundsWon == N) {
      if (AroundsWon > HroundsWon) {
        cout << "Hannes\n";
      } else {
        cout << "Arnar\n";
      }
      break;
    }
  }
  return 0;
}
