#include <cstdio>
#include <string>
#include <unordered_map>

using namespace std;

int main() {
  int month, day, year;
  scanf("%d/%d/%d", &month, &day, &year);
  unordered_map<int, string> months = {
      {1, "januar"},    {2, "februar"},  {3, "marts"},     {4, "april"},
      {5, "maj"},       {6, "juni"},     {7, "juli"},      {8, "august"},
      {9, "september"}, {10, "oktober"}, {11, "november"}, {12, "december"},
  };
  printf("%d. %s %d\n", day, months[month].c_str(), year);

  return 0;
}
