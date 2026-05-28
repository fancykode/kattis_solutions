#include <iostream>

using namespace std;

bool checkDoubles(int n) {
  return (n == 11 || n == 22 || n == 33 || n == 44 || n == 55 || n == 66);
}

int getNum(int a0, int a1) {
  if (a0 > a1) {
    return a0 * 10 + a1;
  } else {
    return a1 * 10 + a0;
  }
}

int main() {
  int s0, s1, r0, r1;
  while (1) {
    cin >> s0 >> s1 >> r0 >> r1;
    if (s0 == 0 && s1 == 0 && r0 == 0 && r1 == 0) {
      break;
    }
    int s = s0 * 10 + s1;
    int r = r0 * 10 + r1;

    if (s == 21 || s == 12) {
      if (r == 21 || r == 12) {
        cout << "Tie.\n";
      } else {
        cout << "Player 1 wins.\n";
      }
    } else if (r == 21 || r == 12) {
      cout << "Player 2 wins.\n";
    } else if (checkDoubles(s)) {
      if (checkDoubles(r)) {
        if (s > r) {
          cout << "Player 1 wins.\n";
        } else if (r > s) {
          cout << "Player 2 wins.\n";
        } else {
          cout << "Tie.\n";
        }
      } else {
        cout << "Player 1 wins.\n";
      }
    } else if (checkDoubles(r)) {
      if (checkDoubles(s)) {
        if (s > r) {
          cout << "Player 1 wins.\n";
        } else if (r > s) {
          cout << "Player 2 wins.\n";
        } else {
          cout << "Tie.\n";
        }
      } else {
        cout << "Player 2 wins.\n";
      }
    } else {
      s = getNum(s0, s1);
      r = getNum(r0, r1);
      if (s > r) {
        cout << "Player 1 wins.\n";
      } else if (r > s) {
        cout << "Player 2 wins.\n";
      } else {
        cout << "Tie.\n";
      }
    }
  }
  return 0;
}
