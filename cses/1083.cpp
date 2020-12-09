/* 1083 Missing Number */
#include <iostream>
#include <cstdlib>
#include <algorithm>

int main() {
  int n;
  scanf("%d", &n);
  int arr[n - 1];
  for (int i = 0; i < n - 1; i++)
    scanf("%d", &arr[i]);
  std::sort(arr, arr + n - 1);
  for (int i = 0; i < n; i++)
    if (arr[i] != i + 1) {
      printf("%d\n", i + 1);
      break;
    }
  return 0;
}

