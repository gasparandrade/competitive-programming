#include <iostream>

int main() {
  std::string s;
  std::cin >> s;
  std::string upper = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  std::string lower = "abcdefghijklmnopqrstuvwxyz";

  for (int i = 0; i < lower.size(); i++)
    if (s.at(0) == lower.at(i)) {
      s.at(0) = upper.at(i);
      break;
    }
  std::cout << s << '\n';
  return 0;
}

