#include <iostream>

using namespace std;

int main() {
  char ch;
  int zeros = 0, ones = 0;
  while ((ch = getchar()) != -1 && ch != '\n') {
    if (ch == '0') {
      zeros++;
    } else {
      ones++;
    }
  }
  cout << zeros << " " << ones << "\n";
  return 0;
}
