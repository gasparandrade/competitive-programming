#include <iostream>
#include <stdlib.h>

void crossover(char a[], char b[], const int &corte, const int& bits) {
  for (int i = corte; i < bits; i++)
    std::swap(a[i], b[i]);
}

double mutacao(char a[], char b[], char c[], const int& bits, const double &p) {
  double pA, pB;
  pA = pB = 1;

  for (int i = 0; i < bits; i++) {
    if (a[i] == c[i])
      pA *= 1 - p;
    else
      pA *= p;

    if (b[i] == c[i])
      pB *= 1 - p;
    else
      pB *= p;
  }

  return (pA + pB) - (pA * pB);
}

int main() {
  int t, n, y; 
  double p;
  std::cin >> t; // quantidade de testes
  while (t--) {
    std::cin >> n; // quantidade de bits de cada individuo
    std::cin >> y >> p; // posicao de corte e probabilidade de ocorrencia da mutacao
    char individuoUm[n], individuoDois[n], individuoComp[n];
    std::cin >> individuoUm >> individuoDois >> individuoComp;

    crossover(individuoUm, individuoDois, y, n);
    double res = mutacao(individuoUm, individuoDois, individuoComp, n, p);
    printf("%.7lf\n", res);
  }
  return 0;
}
