#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  string s[n], temp;
  for (int i = 0; i < n; i++)
    cin >> s[i];
  for (int i = 0; i < s[0].size() + 1; i++) {
    for (int j = i; j < s[0].size() + 1; j++) {
      int count = 1;
      for (int k = 1; k < n; k++)
        if (s[k].find(s[0].substr(i, j)) != string::npos)
          count++;
      if (count == n  && s[0].substr(i, j).size() > temp.size())
        temp = s[0].substr(i, j);
    }
  }
  cout << temp << '\n';
  return 0;
}

