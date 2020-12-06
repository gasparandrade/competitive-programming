#include <bits/stdc++.h>

using namespace std;

#define long long ll

int main(void) {
  int n, x;
  cin >> n >> x;
  string s;
  cin >> s;
  for (char c : s) {
    if (c == 'o')
      x++;
    else if (c == 'x' && x > 0)
      x--;
  }
  cout << x << '\n';
  return 0;
}
