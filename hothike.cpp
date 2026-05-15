#include <iostream>
#include <vector>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> tf;
  while (n--) {
    int t;
    cin >> t;
    tf.push_back(t);
  }
  int minTemp = 1000;
  int d;
  for (size_t i = 1; i < tf.size() - 1; i++) {
    int h1 = tf[i - 1];
    int h2 = tf[i + 1];
    int maxHikeTemp = max(h1, h2);
    if (maxHikeTemp < minTemp) {
      minTemp = maxHikeTemp;
      d = i - 1;
    }
  }
  cout << d + 1 << " " << minTemp << "\n";
  return 0;
}
