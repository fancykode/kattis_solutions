#include <cstdio>

using namespace std;

int main() {
  int X, Y, Z;
  scanf("%dd%d+%d", &X, &Y, &Z);
  printf("%f\n", (X + Z + Y * X + Z) / 2.0);
  return 0;
}
