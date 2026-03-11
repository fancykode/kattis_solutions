#include <cstdio>

using namespace std;

int main() {
  int N;
  scanf("%d", &N);
  long long t = 0, prevT = 0;
  double v = 0, prevV = 0;
  double area = 0;
  for (int i = 0; i < N; i++) {
    scanf("%lld %lf", &t, &v);
    if (i != 0) {
      double a = (t - prevT) * ((prevV + v) * 0.5);
      area += a;
    }
    prevV = v;
    prevT = t;
  }
  printf("%.6f\n", area / 1000.0);
  return 0;
}
