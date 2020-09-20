#include <stdio.h>
#include <stdlib.h>
void main() {
  char a='a';
  printf("escolha uma letra:");
  scanf("%c",&a);

  int b=0;
  printf("escolha um numero inteiro:");
  scanf("%d",&b);

  float c=0;
  printf("escolha um numero flutuante:");
  scanf("%f",&c);

  printf("escolhidos:%c\n                 %d\n                       %f",a,b,c);
  return 0;
}
