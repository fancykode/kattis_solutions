#include <bits/stdc++.h>

using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int R, G, B;
  cin >> R >> G >> B;
  if (R > G && R > B) {
    cout << "raudur\n";
  } else if (G > R && G > B) {
    cout << "graenn\n";
  } else if (B > R && B > G) {
    cout << "blar\n";
  } else if (R == G && B < R && B < G) {
    cout << "gulur\n";
  } else if (R == B && G < R && G < B) {
    cout << "fjolubleikur\n";
  } else if (G == B && R < G && R < B) {
    cout << "blagraenn\n";
  } else if (R == 0 && G == 0 && B == 0) {
    cout << "svartur\n";
  } else if (R == 255 && G == 255 && B == 255) {
    cout << "hvitur\n";
  } else if ((R == G && G == B) && R != 0 && R != 255) {
    cout << "grar\n";
  } else {
    cout << "othekkt\n";
  }
  return 0;
}
