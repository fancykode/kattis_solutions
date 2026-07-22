#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> cities;
  while (N--) {
    int p;
    cin >> p;
    cities.push_back(p);
  }
  sort(cities.begin(), cities.end(), greater<>());
  size_t indx = cities.size() / 2;

  int ans = 0;
  for (size_t i = 0; i < indx; i++) {
    ans += cities[i];
  }
  for (size_t i = indx; i < cities.size(); i++) {
    ans += cities[i] / 2;
  }

  cout << ans << "\n";
  return 0;
}
