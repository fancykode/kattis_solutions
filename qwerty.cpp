#include <bits/stdc++.h>

using namespace std;

char convert(char c) {
  switch (c) {
  case 'a':
    return 'q';
  case 'b':
    return 'w';
  case 'c':
    return 'e';
  case 'd':
    return 'r';
  case 'e':
    return 't';
  case 'f':
    return 'y';
  case 'g':
    return 'u';
  case 'h':
    return 'i';
  case 'i':
    return 'o';
  case 'j':
    return 'p';
  case 'k':
    return 'a';
  case 'l':
    return 's';
  case 'm':
    return 'd';
  case 'n':
    return 'f';
  case 'o':
    return 'g';
  case 'p':
    return 'h';
  case 'q':
    return 'j';
  case 'r':
    return 'k';
  case 's':
    return 'l';
  case 't':
    return 'z';
  case 'u':
    return 'x';
  case 'v':
    return 'c';
  case 'w':
    return 'v';
  case 'x':
    return 'b';
  case 'y':
    return 'n';
  case 'z':
    return 'm';
  case ' ':
    return ' ';
  }
  return '0';
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);
  cout.tie(nullptr);

  int N;
  string text;
  cin >> N;
  getline(cin >> ws, text);

  string result;
  for (size_t i = 0; i < text.size(); i++) {
    result += convert(text[i]);
  }
  cout << result << "\n";

  return 0;
}
