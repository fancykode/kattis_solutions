#include <iostream>

using namespace std;

#define SIZE 26

int main() {
  int ch;
  int abc[SIZE] = {0};
  while ((ch = getchar()) != '\n') {
    abc[ch - 'a']++;
  }
  int oddFreqChars = 0;
  for (int i = 0; i < SIZE; i++) {
    if (abc[i] & 1) {
      oddFreqChars++;
    }
  }
  if (oddFreqChars > 1) {
    cout << oddFreqChars - 1 << "\n";
  } else {
    cout << "0\n";
  }

  return 0;
}
