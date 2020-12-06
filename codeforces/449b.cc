#include <iostream>

std::string getWord(std::string& s1, std::string& s2) {
  if (s1.size() <= s2.size())
    return s1;

  return s2;
}

void language(std::string a[], std::string b[], std::string target[], int n, int m) {
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      if (target[i] == a[j] || target[i] == b[j]) {
        std::cout << getWord(a[j], b[j]) << " ";
      }
    }
  }
  std::cout << '\n';
}

int main() {
  int n, m;
  std::cin >> n >> m;
  std::string s1[2][m], s2[n];
  for (int i = 0; i < m; i++)
    std::cin >> s1[0][i] >> s1[1][i];
  for (int i = 0; i < n; i++)
    std::cin >> s2[i];
  language(s1[0], s1[1], s2, n, m);
  return 0;
}

