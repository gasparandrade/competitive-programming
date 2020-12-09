/* 1069 Repetitions */
#include <iostream>
#include <string>

int main() {
  std::string s;
  std::cin >> s;
  char temp = ' ';
  int count = 1, max = 0;
  for (auto c : s)
    if (c == temp)
      count++;
    else {
      if (count > max)
        max = count;
      count = 1;
      temp = c;
    }
  if (count > max) max = count;
  printf("%d\n", max);
  return 0;
}

