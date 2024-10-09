#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, c, p;
  scanf("%d %d %d", &n, &c, &p);
  int newRecords = 0;
  for (int i = 0; i < n; i++) {
    int height;
    scanf("%d", &height);
    if (height > c + p) {
      p = c;
      c = height;
      newRecords++;
    }
  }
  printf("%d\n", newRecords);
  return 0;
}