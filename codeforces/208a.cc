#include <iostream>

int main() {
  char c[201];
  std::cin.getline(c, 201);
  bool tmp = false;
  for (int i = 0; c[i] != '\0'; i++) {
    if (c[i] == 'W' && c[i + 1] == 'U' && c[i + 2] == 'B') {
      i += 2;
      if (tmp) {
        std::cout << ' ';
        tmp = false;
      }
    } else {
      std::cout << c[i];
      tmp = true;
    }
  }
  return 0;
}

