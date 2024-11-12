#include <bits/stdc++.h>
using namespace std;

void fastscan(int &number) {
  bool negative = false;
  int c;
  number = 0;
  c = getchar();
  if (c == '-') {
    negative = true;
    c = getchar();
  }
  for (; (c > 47 && c < 58); c = getchar()) {
    number = number * 10 + c - 48;
  }
  if (negative) {
    number *= -1;
  }
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  fastscan(N);

  int c1 = 0;
  int c2 = 200'000'000;

  for (int i = 0; i < N; i++) {
    int a, b;
    fastscan(a);
    fastscan(b);
    c1 = max(c1, a);
    c2 = min(c2, b);
  }
  if (c1 > c2) {
    cout << "bad news\n";
  } else {
    cout << (c2 - c1 + 1) << " " << c1 << "\n";
  }
}
