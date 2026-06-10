#include <iostream>

using namespace std;

int main() {
  int n;
  cin >> n;
  int fnum;
  cin >> fnum;
  int num;
  bool newSeq = false;
  while (cin >> num) {
    if (newSeq) {
      fnum = num;
      newSeq = false;
      continue;
    }
    if (num % fnum == 0) {
      cout << num << "\n";
      newSeq = true;
    }
  }

  return 0;
}
