#include <iostream>

using namespace std;

int main() {
  int n;
  double d;
  cin >> n >> d;
  double maxEfficiency = 0;
  string winner;
  for (int i = 0; i < n; i++) {
    string racer;
    double v, r;
    cin >> racer >> v >> r;
    double time = d / v;
    double rateOfFuel = r / time;
    double efficiency = v / rateOfFuel;
    if (efficiency > maxEfficiency) {
      maxEfficiency = efficiency;
      winner = racer;
    }
  }
  cout << winner << "\n";
  return 0;
}
