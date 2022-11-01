#include <stdio.h>
#include <math.h>

int main (){

    float num, raiz;

    printf("\nDigite um valor: ");
    scanf("%f", &num);

    if (num > 0){
      raiz = sqrt(num);
      printf("A raiz quadrada desse numeros eh %f\n", raiz);
    }

    else{
      printf("O numero eh invalido.\nO numero que digitou eh negativo.\n");
    }

    return 0;
}
