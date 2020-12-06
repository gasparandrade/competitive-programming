#include <iostream>

int main() {
  unsigned x;
  std::cin >> x;
  if (x % 2 || (x % 2) % 2 || x <= 2)
    std::cout << "NO\n";
  else
    std::cout << "YES\n";
  return 0;
}

