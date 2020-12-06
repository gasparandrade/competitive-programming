#include <iostream>
#include <cstdlib>
#include <cstring>

int main(void) {
  int n;
  scanf("%d", &n);
  int arr[n][4];
  for (int i = 0; i < n; i++)
    for (int j = 0; j < 4; j++)
      scanf("%d", &arr[i][j]);
  bool canBuy[n];
  memset(canBuy, 1, sizeof(canBuy));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      int count = 0;
      if (i != j) {
        for (int k = 0; k < 3; k++)
          if (arr[i][k] < arr[j][k])
            count++;
      }
      if (count == 3)
        canBuy[i] = false;
    }
  }
  int pos = 0, temp = 0;
  for (int i = 0; i < n; i++) 
    if ((temp == 0 || temp > arr[i][3]) && canBuy[i]) {
      pos = i + 1;
      temp = arr[i][3];
    }
  printf("%d\n", pos);
  return 0;
}

