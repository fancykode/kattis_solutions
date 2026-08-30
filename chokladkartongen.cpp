#include <iostream>

using namespace std;

int main() {
  int N;
  cin >> N;
  int prev = -1;
  int newBoxes = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (i != 0 && prev < a) {
      newBoxes++;
    }
    prev = a;
  }
  cout << newBoxes << "\n";
  return 0;
}
