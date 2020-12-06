/* Even and Odd 
 * URI JUDGE - 1259
 * Gaspar Andrade
 */
#include <iostream>
#include <algorithm>
#include <stack>
#include <vector>

void sortArray(int *a, const int &n) {
  std::vector<int> v;
  std::stack<int> s;

  for (int i = 0; i < n; i++)
    if (a[i] % 2) {
      s.push(a[i]);
    } else
      v.push_back(a[i]);
  for (int i = 0; i < n; i++)
    if (!v.empty()) {
      a[i] = v.front();
      v.erase(v.begin());
    } else {
      a[i] = s.top();
      s.pop();
    }
}

int main() {
  int n;
  std::cin >> n;
  int a[n];
  for (int i = 0; i < n; i++)
    std::cin >> a[i];
  std::sort(a, a + n);
  sortArray(a, n);
  
  for (int i = 0; i < n; i++)
    std::cout << a[i] << '\n';
  return 0;
}
