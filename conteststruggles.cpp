#include <cstdio>

using namespace std;

int main() {
  int n, k;
  int d, s;
  scanf("%d %d %d %d", &n, &k, &d, &s);

  int solvedDiffSum = s * k;
  double unsolvedDiffSum = n * d - solvedDiffSum;

  double ans = unsolvedDiffSum / (double)(n - k);
  if (ans > 100.0 || ans < 0.0) {
    printf("impossible\n");
  } else {
    printf("%0.6f\n", ans);
  }

  return 0;
}
