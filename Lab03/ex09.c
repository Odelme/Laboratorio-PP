#include <stdio.h>

int main (){

  float salario, prestacao, equivalencia, sal20;

    printf("Qual o valor do salario?\n");
    scanf("%f", &salario);
    printf("Qual o valor do emprestimo?\n");
    scanf("%f", &prestacao);

    sal20 = salario*0.20;

    if (sal20 < prestacao){
      printf("Emprestimo nao concedido");
    }

    else {
      printf("Emprestimo concedido");
    }

    return 0;
}
