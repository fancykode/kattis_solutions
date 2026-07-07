#include <cmath>
#include <cstdio>

using namespace std;

int main() {
  int w, h;
  scanf("%d %d", &w, &h);
  printf("%.9f\n", w + h - sqrt(w * w + h * h));
  return 0;
}
