#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  scanf("%d %d", &N, &M);
  vector<int> diceCount = {0, 0, 0, 0, 0, 0, 0};
  for (int i = 0; i < N; i++) {
    int t;
    scanf("%d", &t);
    diceCount[t]++;
  }
  int maxVal = 0;
  for (int i = 1; i < (int)diceCount.size(); i++) {
    maxVal = max(diceCount[i], maxVal);
  }
  if (N <= maxVal + M) {
    printf("Ja\n");
  } else {
    printf("Nej\n");
  }
  return 0;
}