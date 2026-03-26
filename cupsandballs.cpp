#include <iostream>
#include <string>

using namespace std;

int main() {
  int G;
  cin >> G;
  int N;
  cin >> N;

  string balls = "123";
  while (N-- > 0) {
    size_t a, b;
    cin >> a >> b;
    char tmp = balls[a - 1];
    balls[a - 1] = balls[b - 1];
    balls[b - 1] = tmp;
  }
  if (balls[G - 1] == '2') {
    size_t i1 = balls.find('1');
    size_t i2 = balls.find('3');
    cout << i1 + 1 << " " << i2 + 1 << "\n";
  } else {
    size_t indx = balls.find('2');
    cout << G << " " << indx + 1 << "\n";
  }
  return 0;
}
