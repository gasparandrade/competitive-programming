#include <bits/stdc++.h>

int main() {
  long n;
  scanf("%ld", &n);
  long arr[n];
  for (int i = 0; i < n; i++)
    scanf("%ld", &arr[i]);
  std::vector<int> v {arr, arr + n};
  std::sort(v.begin(), v.end());
  v.erase(std::unique(v.begin(), v.end()), v.end());
  printf("%lu\n", v.size());
  return 0;
}

