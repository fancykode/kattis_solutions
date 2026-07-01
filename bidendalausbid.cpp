#define _CRT_SECURE_NO_WARNINGS
#include <cstdio>

using namespace std;

int main() {
  int h1, m1;
  int h2, m2;
  scanf("%d:%d", &h1, &m1);
  scanf("%d:%d", &h2, &m2);
  int diff = 0;
  int minutes1 = h1 * 60 + m1;
  int minutes2 = h2 * 60 + m2;
  if (minutes2 >= minutes1) {
    diff = minutes2 - minutes1;
  } else {
    diff = minutes2 + 24 * 60 - minutes1;
  }
  printf("%d\n", diff);
  return 0;
}
