#include <bits/stdc++.h>

using namespace std;

void calc(size_t n) {
  size_t v = n % 4;
  if (v == 2) {
    cout << "Gunnar\n";
  } else if (v == 3) {
    cout << "Enginn\n";
  } else if (v == 1) {
    cout << "1\n";
  } else {
    cout << n << "\n";
  }
}

int main() {
  size_t N;
  cin >> N;
  calc(N);
  return 0;
}
