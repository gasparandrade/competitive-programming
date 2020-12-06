#include <iostream>
#include <algorithm>

int verifyString(const std::string& s1, const std::string& s2) {
  for (int i = 0; i < s1.size(); i++)
    if (s1.at(i) > s2.at(i))
      return 1;
    else if (s1.at(i) < s2.at(i))
      return -1;

  return 0;
}

void lowerString(std::string& s) {
  auto trans = [s](char& c) { c = ::tolower(c); };
  std::for_each(s.begin(), s.end(), trans);
}

int main() {
  std::string s1, s2;
  std::cin >> s1 >> s2;

  lowerString(s1);
  lowerString(s2);
  int res = verifyString(s1, s2);
  std::cout << res << '\n';
  return 0;
}

