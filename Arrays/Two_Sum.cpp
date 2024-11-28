
#include <iostream>
int *Two_Sum(int n[], int target, int size) {
  int result[2];
  for (int i = 0; i <= size; i++) {
    for (int j = 0; j <= size; j++) {
      if (n[i] == n[j])
        continue;
      if (n[i] + n[j] == target) {
        result[0] = i;
        result[1] = j;
        break;
      }
    }
  }

  return result;
}

int main() {
  int nums[] = {1, 3, 4, 5, 6};

  int size = sizeof(nums) / sizeof(nums[0]);
  int target = 9;
  int *result = Two_Sum(nums, target, size);

  for (int i = 0; i < 2; i++) {
    std::cout << result[i] << std::endl;
  }
  return 0;
}
