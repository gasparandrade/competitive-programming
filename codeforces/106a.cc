#include <iostream>
#include <cctype>

bool verifyWinner(const char& c, char arr[][2]) {
  if (arr[0][1] == c && arr[1][1] != c)
    return true;
  if (arr[0][1] == arr[1][1]) {
    if (isdigit(arr[0][0])) {
      if (isdigit(arr[1][0])) {
        return arr[0][0] > arr[1][0] ? true : false;
      } else 
        return false;
    } else {
      if (isdigit(arr[1][0])) return true;
      else {
        if (arr[0][0] == 'J' && (arr[1][0] == 'Q' ||  arr[1][0] == 'K'))
          return !(arr[0][0] < arr[1][0] ? true : false);
        if (arr[1][0] == 'J' && (arr[0][0] == 'Q' || arr[0][0] == 'K'))
          return !(arr[0][0] < arr[1][0] ? true : false);
        return arr[0][0] < arr[1][0] ? true : false;
      }
    }
  }
  return false;
}

int main() {
  char c;
  scanf("%c", &c);
  char arr[2][2];
  for (int i = 0; i < 2; i++)
    std::cin >> arr[i][0] >> arr[i][1];
  std::cout << (verifyWinner(c, arr) ? "YES" : "NO") << '\n';
  return 0;
}


