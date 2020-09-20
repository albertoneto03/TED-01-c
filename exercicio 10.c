#include <stdio.h>
#include <stdlib.h>
void main() {
  int dia = 0;
  int mes = 0;
  int ano = 0;

  printf("digite o dia que o dia que deseja:");
  scanf("%d",&dia);

  printf("digite o dia que o mes que deseja:");
  scanf("%d",&mes);

  printf("digite o dia que o ano que deseja:");
  scanf("%d",&ano);

  printf("%02d/%02d/%d",dia,mes,ano);
  return 0;
}

