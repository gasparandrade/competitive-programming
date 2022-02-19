#include <bits/stdc++.h>

using namespace std;

#define ll long long 

int main(void) {
  int n, k;
  cin >> n >> k;
  ll arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  ll arr2[k];
  for (int i = 0; i < k; i++)
    cin >> arr2[i];
  int l, r, m, pos, curr;
  for (int i = 0; i < k; i++) {
    pos = 0;
    l = 0;
    r = n - 1;
    while (r >= l) {
      m = l + (r - l) / 2;
      if (arr[m] == arr2[i]) {
        curr = m-1;
        while (arr[curr] == arr2[i]) 
          curr--;
        pos = curr+2;
        break;
      } else if (arr[m] < arr2[i]) {
        if (m+1 == n) {
          pos = m+2;
          break;
        }
        l = m + 1;
      } else {
        if (m - 1 < 0 || arr[m-1] < arr2[i]) {
          pos = m+1;
          break;
        }
        r = m - 1;
      }
    }
    cout << pos << '\n';
  }
  return 0;
}

