#include <iostream>
#include <cmath>
#include <limits>
#include <iomanip>

int main(int argc, char **argv) {
  long double pi = 3.14159, r;
  std::cin >> r;
  long double res = pi*pow(r, 2);
  std::cout << "A=";
  std::cout << std::fixed << std::setprecision(4) << res << std::endl;
  return 0;
}

