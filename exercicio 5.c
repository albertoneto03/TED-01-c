#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
void main() {
  setlocale(LC_ALL,"");
  float a = 0;
  printf("digite o valor de a");
  scanf("%d",&a);
  printf("o valor de a é: %d", a);
  return 0
}
