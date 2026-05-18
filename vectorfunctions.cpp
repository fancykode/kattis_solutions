#include "vectorfunctions.h"

void backwards(std::vector<int> &vec) {
  for (size_t i = 0, j = vec.size() - 1; i < j; i++, j--) {
    int tmp = vec[i];
    vec[i] = vec[j];
    vec[j] = tmp;
  }
}

std::vector<int> everyOther(const std::vector<int> &vec) {
  std::vector<int> v;
  v.reserve(vec.size() / 2 + 1);
  for (size_t i = 0; i < vec.size(); i += 2) {
    v.push_back(vec[i]);
  }
  return v;
}

int smallest(const std::vector<int> &vec) {
  int min = vec[0];
  for (size_t i = 0; i < vec.size(); i++) {
    if (vec[i] < min) {
      min = vec[i];
    }
  }
  return min;
}

int sum(const std::vector<int> &vec) {
  int sum = 0;
  for (size_t i = 0; i < vec.size(); i++) {
    sum += vec[i];
  }
  return sum;
}

int veryOdd(const std::vector<int> &suchVector) {
  int num = 0;
  for (size_t i = 1; i < suchVector.size(); i += 2) {
    if (suchVector[i] % 2 != 0) {
      num++;
    }
  }
  return num;
}
