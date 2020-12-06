#include <bits/stdc++.h>
using namespace std;

bool maior(string s1, string s2) {
  return s1.size() < s2.size();
}

int main() {
  int n;
  cin >> n;
  string s[n];
  string tmp;
  for (int i = 0; i < n; i++)
    cin >> s[i];

  stable_sort(s, s + n, maior);
  list<string> l[n];
  int j;
  j = 0;
  //l[0].push_back(s[0]);
  for (int i = 0; i < n; i++) {
    if (i > 0 && s[i].size() != s[i-1].size())
      j++;
    l[j].push_back(s[i]);
  }

  int maior_lista = 1, tam_lista = 1;
  for (int i = 0; i < n; i++) {
    if (!l[i].empty()) {
      tam_lista++;
      if (l[i].size() > maior_lista)
        maior_lista = l[i].size();
    } 
  }
  for (int i = 0; i < maior_lista; i++) {
    int count = 0;
    for (int j = 0; j < tam_lista; j++) {
      if (!l[j].empty()) {
        count++;
        if (count > 1)
          cout << ", ";
        cout << l[j].front();
        l[j].pop_front();
      }
    }
    cout << '\n';
  }
  return 0;
}

