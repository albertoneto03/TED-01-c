#include <stdio.h>
#include <stdlib.h>
void main() {
  int a = 0;
  printf("digite o primeiro valor desejado:");
  scanf("%d",&a);

  int b = 0;
  printf("digite o segundo valor desejado:");
  scanf("%d",&b);

  printf("o segundo valor digitado foi:%d", b);
  printf("\no primeiro valor digitado foi:%d",a);
  return 0;
}
