#include <iostream>

bool verify(int arr[], const int& n, int ret) {
  for (int i = 0; i < n; i++)
    if (ret == arr[i])
      return true;

  return false;
}
int smallest(int arr[], const int& n) {
  int ret = 1, count, bigger = 0;

  // search the biggest number in the array
  for (int i = 0; i < n; i++)
    if (bigger < arr[i])
      bigger = arr[i];

  while (true) {
    if (ret > bigger*3) // when ret were bigger than arra'ys biggest element will return -1
      return -1;

    count = 0;

    for (int i = 0; i < n; i++) {
      // case if k is too large return -1
      if (verify(arr, n, ret ^ arr[i]))
        count++;
      else
        break;
    }
    // if verify() was true for every array's members break the loop
    if (count == n)
      break;
    ret++;
  }

  return ret;
}

int main() {
  int t;
  std::cin >> t;
  int n;
  for (int i = 0; i < t; i++) {
    std::cin >> n;
    int arr[n];
    for (int j = 0; j < n; j++)
      std::cin >> arr[j];
    int k = smallest(arr, n);
    std::cout << k << '\n';
  }
  return 0;
}

