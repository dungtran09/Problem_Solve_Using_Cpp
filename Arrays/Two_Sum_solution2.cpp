#include <algorithm>
#include <iostream>
#include <iterator>
#include <ostream>
#include <vector>

using namespace std;

void TwoSum(vector<int>, int target);

void TwoSum(vector<int> *nums, int target) {
  int y;
  for (auto x = nums->begin(); x != nums->end(); x++) {
    y = target - *x;
    if (find(nums->begin(), nums->end(), y) != nums->end()) {
      std::cout << y << std::endl;
      std::cout << *x << std::endl;
      return;
    }
  }
}

int main() {
  std::vector<int> nums = {1, 3, 5, 6, 8, 9};
  int target = 9;

  TwoSum(nums, target);

  return 0;
}
