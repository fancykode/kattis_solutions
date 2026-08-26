#include <cstdio>

using namespace std;

int main() {
  int ch;
  while ((ch = getchar()) != '\n') {
    if (ch >= 'A' && ch <= 'Z') {
      putchar((ch - 'A') + 'a');
    } else if (ch >= 'a' && ch <= 'z') {
      putchar((ch - 'a') + 'A');
    } else {
      putchar(ch);
    }
  }
  return 0;
}
