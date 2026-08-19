#include <iostream>

using namespace std;

void find() {
  int n;
  cin >> n;
  int numCount[7] = {0};
  int numIndx[7] = {0};
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;
    numCount[a]++;
    numIndx[a] = i;
  }
  for (int i = 6; i >= 1; i--) {
    if (numCount[i] == 1) {
      cout << numIndx[i] + 1 << "\n";
      return;
    }
  }
  cout << "none\n";
}

int main() {
  find();
  return 0;
}
