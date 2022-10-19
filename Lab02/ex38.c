#include <stdio.h>
#include <stdlib.h>

int main() {
  float salario,aumento;

  printf("Digite seu salario atual: ");
  scanf("%f", &salario);
  aumento = salario*0.25;
  printf("Seu salario com aumento vai ser: %.2f", salario+aumento);
return 0;
}
