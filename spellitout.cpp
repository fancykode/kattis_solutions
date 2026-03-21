#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
  unordered_map<int, string> nums = {
      {0, "zero"},     {1, "one"},        {2, "two"},       {3, "three"},
      {4, "four"},     {5, "five"},       {6, "six"},       {7, "seven"},
      {8, "eight"},    {9, "nine"},       {10, "ten"},      {11, "eleven"},
      {12, "twelve"},  {13, "thirteen"},  {14, "fourteen"}, {15, "fifteen"},
      {16, "sixteen"}, {17, "seventeen"}, {18, "eighteen"}, {19, "nineteen"},
      {20, "twenty"},  {30, "thirty"},    {40, "forty"},    {50, "fifty"},
      {60, "sixty"},   {70, "seventy"},   {80, "eighty"},   {90, "ninety"}};
  for (int i = 20; i <= 99; i++) {
    if (i % 10 != 0) {
      int d1 = i % 10;
      int num = (i / 10) * 10;
      nums[i] = nums[num] + "-" + nums[d1];
    }
  }
  int N;
  cin >> N;
  cout << nums[N] << "\n";
  return 0;
}
