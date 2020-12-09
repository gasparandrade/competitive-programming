#include <bits/stdc++.h>

int main() {
  long x;
  scanf("%ld", &x);
  printf("%ld ", x);
  while (x != 1) {
    if (x % 2)
      x = (x*3) + 1;
    else
      x /= 2;
    printf("%ld ", x);
  }
  return 0;
}

