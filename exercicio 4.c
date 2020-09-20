#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
  setlocale(LC_ALL,"");
  int a = 0;
  printf("digite o valor de a");
  scanf("%f",&a);
  printf("o valor de a é: %f", a);
  return 0
}
