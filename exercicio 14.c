#include <stdio.h>
#include <stdlib.h>

void main() {
  char a='x', b='y', c='z';
  printf("digite as 3 letras que deseja:");
  scanf(" %c",&a);
  scanf(" %c",&b);
  scanf(" %c",&c);

  printf("as letras que voce digitou foram: \n%c \n%c \n%c",a,b,c);
}
