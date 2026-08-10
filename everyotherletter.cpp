#include <cstdio>

using namespace std;

#define MAX_SIZE 1'000'002

int main() {
  char ans[MAX_SIZE];
  size_t i = 0;
  for (size_t j = 0;; j++) {
    int ch = getchar();
    if (ch == '\n') {
      break;
    }
    if (!(j & 1)) {
      ans[i] = ch;
      i++;
    }
  }
  ans[i] = '\0';
  for (size_t j = 0; j < i; j++) {
    putchar(ans[j]);
  }
  putchar('\n');
  return 0;
}
