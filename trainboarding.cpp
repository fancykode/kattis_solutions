#include <algorithm>
#include <climits>
#include <cmath>
#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

int main() {
  int N, L, P;
  cin >> N >> L >> P;
  int half = L / 2;
  vector<int> doors;
  for (int i = 0; i < N; i++) {
    doors.push_back(L * i + half);
  }

  vector<int> distances;
  unordered_map<int, int> carPassengers;
  while (P--) {
    int x;
    cin >> x;
    int minDist = INT_MAX;

    int carNum = 1;
    for (size_t i = 0; i < doors.size(); i++) {
      int dist = abs(doors[i] - x);
      if (dist <= minDist) {
        minDist = dist;
        carNum = i + 1;
      }
    }
    carPassengers[carNum]++;
    distances.push_back(minDist);
  }
  cout << *max_element(distances.begin(), distances.end()) << "\n";

  int maxPassengers = 0;
  for (auto &[carID, num] : carPassengers) {
    maxPassengers = max(maxPassengers, num);
  }
  cout << maxPassengers << "\n";

  return 0;
}
