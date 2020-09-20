#include <stdio.h>
#include <stdlib.h>
#define CONSTANTE 3,14;
void main() {
  int a,b;

  printf("digite o valor que voce quer mutiplicar por pi:");
  scanf("%d",&a);

  b=a*CONSTANTE;
  printf("o valor que voce digitou vezes pi eh: %d",b);
  return 0;
}
