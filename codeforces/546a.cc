#include <iostream>

int main() {
  int k, n, w;
  std::cin >> k >> n >> w;
  int total = n;
  for (int i = 1; i <= w; i++)
    total -= (i * k);
  std::cout << (total < 0 ? total * -1 : 0) << '\n';
  return 0;
}


