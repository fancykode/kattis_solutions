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
  int N;
  fastscan(N);

  unordered_set<int> seen;
  while (N-- > 0) {
    int id;
    fastscan(id);
    if (seen.count(id)) {
      putchar('0');
    } else {
      putchar('1');
      seen.insert(id);
    }
    putchar(' ');
  }
  putchar('\n');
  return 0;
}
