#include <stdio.h>
#include <stdlib.h>

int main() {
  float valor,desconto;

  printf("Digite o valor do produto: ");
  scanf("%f", &valor);
  desconto = valor*0.12;
  printf("O valor com desconto vai ser R$%.2f", valor-desconto);
return 0;
}
