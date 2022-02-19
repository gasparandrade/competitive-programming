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
  int l, r, m, pos;
  for (int i = 0; i < k; i++) {
    pos = 0;
    l = 0;
    r = n - 1;
    while (r >= l) {
      m = l + (r - l) / 2;
      if (arr[m] == arr2[i]) {
        int curr;
        curr = m+1;
        while (arr[m] == arr[curr]) 
          curr++;
        pos = curr;
        break;
      } else if (arr[m] < arr2[i]) {
        if (m+1 == n || arr2[i] < arr[m+1]) {
          pos = m+1;
          break;
        }
        l = m + 1;
      } else {
        if (m-1 < 0) {
          pos = 0;
          break;
        }
        r = m - 1;
      }
    }
    cout << pos << '\n';
  }
  return 0;
}

