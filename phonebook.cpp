#include <bits/stdc++.h>

using namespace std;

int main() {
  int N;
  int answ = 0;
  int ch;

  scanf("%d", &N);
  getchar();

  char num[20];

  while (N-- > 0) {
    int i = 0;
    while ((ch = getchar()) != '\n') {
      num[i++] = ch;
    }
    if ((i == 12 || i == 13) &&
        (num[0] == '+' && num[1] == '3' && num[2] == '9')) {
      answ++;
    }
  }
  printf("%d\n", answ);

  return 0;
}
