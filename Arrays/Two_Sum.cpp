
#include <iostream>
void Two_Sum(int n[], int target, int size) {
  for (int i = 0; i <= size; i++) {
    for (int j = 0; j <= size; j++) {
      if (n[i] == n[j])
        continue;
      if (n[i] + n[j] == target) {
        std::cout << "[Index = " << i << "]" << std::endl;
        std::cout << "[Index = " << j << "]" << std::endl;
        return;
      }
    }
  }
}

int main() {
  int nums[] = {1, 3, 4, 5, 6};

  int size = sizeof(nums) / sizeof(nums[0]);
  int target = 11;

  Two_Sum(nums, target, size);

  return 0;
}
