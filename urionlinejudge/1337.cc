/* Poker do Rei
 * URI Online Judge - 1337
 * IA (Exercicios Aula 8: 6) - UNIFESP
 * Gaspar Andrade
 */
#include <iostream>
#include <algorithm>

void printSet(int *a, int tipo) {
  if (tipo == 1) // tres cartas da mesma categoria
    if (a[0] == 13) 
      std::cout << "*\n";
    else
      printf("%1$d %1$d %1$d\n", a[0] + 1);
  else if (tipo == 2)
    if (a[2] < 13) // caso duas cartas iguais e a maior delas menor que 13
      printf("%1$d %1$d %2$d\n", a[0], a[2] + 1);
    else
      printf("1 %1$d %1$d\n", a[0] + 1);
  else if (tipo == 3)
    if (a[1] == 13) { // duas cartas 13
      if (a[0] < 12) // caso 10 13 13
        printf("%1$d %2$d %2$d\n", a[0] + 1, a[1]);
      else // caso: 12 13 13
        printf("1 1 1\n"); 
    }
    else // quando nao tem duas cartas 13
      if (a[0] + 1 == a[1]) // fugir do caso 122 para n ocorrer 222 e sim 223
        printf("%1$d %1$d %2$d\n", a[1], a[1] + 1);
      else
        printf("%1$d %2$d %2$d\n", a[0] + 1, a[1]);
  else 
    printf("1 1 2\n");
}

int getSetTipo(int *a) {
  if (a[0] == a[2])
    return 1;
  else if (a[0] == a[1])
    return 2;
  else if (a[1] == a[2])
    return 3;
  else
    return 4;
}

int main() {
  int a[3], tipo;
  while (true) {
    scanf("%d %d %d", &a[0], &a[1], &a[2]);
    if (a[0] == 0 && a[1] == 0 && a[2] == 0) break;
    std::sort(a, a + 3);
    tipo = getSetTipo(a);
    printSet(a, tipo);
  }
  return 0;
}

