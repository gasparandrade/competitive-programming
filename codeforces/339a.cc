#include <iostream>
#include <string>
#include <cctype>
#include <locale>

int main() {
  std::locale loc;
  std::string s;
  std::cin >> s;
  for (int i = 0; i < s.length(); i++)
    if (isdigit(s[i]))
      for (int j = i; j < s.length(); j++)
        if (isdigit(s[j]) && s[i] > s[j])
            std::swap(s[i], s[j]);

  std::cout << s << std::endl;
  return 0;
}

