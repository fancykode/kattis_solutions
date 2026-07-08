#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *getMonth(int m) {
  switch (m) {
  case 1:
    return "januar";
  case 2:
    return "februar";
  case 3:
    return "marts";
  case 4:
    return "april";
  case 5:
    return "maj";
  case 6:
    return "juni";
  case 7:
    return "juli";
  case 8:
    return "august";
  case 9:
    return "september";
  case 10:
    return "oktober";
  case 11:
    return "november";
  case 12:
    return "december";
  default:
    return "unknown";
  }
}

int main(void) {
  int m, d, y;
  scanf("%d/%d/%d", &m, &d, &y);
  printf("%d. %s %d\n", d, getMonth(m), y);
  return 0;
}
