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

  int l, r, mid;
  for (int i = 0; i < k; i++) {
    l = 0;
    r = n - 1;
    while (r >= l) {
      mid = l + (r-l) / 2;
      if (arr[mid] == arr2[i])
        break;  
      else if (arr[mid] < arr2[i])
        l = mid + 1;
      else
        r = mid - 1;
    }
    cout << (arr[mid] == arr2[i] ? "YES" : "NO" ) << '\n';
  }
  return 0;
}

