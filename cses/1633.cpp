#include <iostream>

int dice(int n) {
  if (n == 1)
    return 1;
  int memo[n];
  memset(memo, 0, sizeof(memo));
  int ret = 0;
}

int main() {
  int n;
  scanf("%d", &n);
  dice(n);
  return 0;
}

