#include <stdio.h>
#include <math.h>

int main (){

    float num, raiz, quadrado;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    if (num > 0){
        raiz = sqrt(num);
        printf("A raiz quadrada desse numeros eh: %f\n", raiz);
    }
    if (num < 0){
        quadrado = num*num;
        printf("Esse numero ao quadrdo eh: %f\n", quadrado);
  }

    return 0;
}
