#include <iostream>
#include <algorithm>

int nCoins(const int a[], const int& n) {
  if (n == 1)
    return 1;
  int sum = 0, ret = 0, tmp = 0;
  for (int i = 0; i < n; i++) {
    sum += a[i];
  }

  sum >>= 1;

  while (sum >= tmp) {
    tmp += a[n - ++ret];
  }
  
  return ret;
}

int main() {
  int n;
  std::cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    std::cin >> a[i];
  std::sort(a, a + n);

  std::cout << nCoins(a, n) << '\n';
  return 0;
}

