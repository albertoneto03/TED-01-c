#include <stdio.h>
#include <stdlib.h>
void main() {
  const c = 10;
  int a,b;
  printf("digite o valor que voce quer mutiplicar por 10:");
  scanf("%d",&a);
  b=a*c;
  printf("o valor que voce digitou vezez 10 eh: %d",b);
  return 0;
}
