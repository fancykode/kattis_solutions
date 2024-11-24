#include <bits/stdc++.h>

using namespace std;

void fastscan(int &number) {
  bool negative = false;
  int c;
  number = 0;
  c = getchar_unlocked();
  if (c == '-') {
    negative = true;
    c = getchar_unlocked();
  }
  for (; (c > 47 && c < 58); c = getchar_unlocked()) {
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
  int n;
  fastscan(n);
  vector<int> lst;
  lst.reserve(n);
  for (int i = 0; i < n; i++) {
    int v;
    fastscan(v);
    lst.push_back(v);
  }

  sort(lst.begin(), lst.end());

  size_t t1 = n / 3;
  size_t t2 = 2 * t1;

  string sep = "";
  for (size_t i = t1; i < t2; i++) {
    cout << sep << lst[i];
    sep = " ";
  }
  for (size_t i = 0; i < t1; i++) {
    cout << sep << lst[i];
    sep = " ";
  }
  for (size_t i = t2; i < lst.size(); i++) {
    cout << sep << lst[i];
    sep = " ";
  }
  cout << "\n";
  return 0;
}