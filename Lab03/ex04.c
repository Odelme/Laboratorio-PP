#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

    float num, raiz, quadrado;

    printf("Digite um numero real: ");
    scanf("%f", &num);

    if (num > 0){
        raiz = sqrt(num);
        quadrado = pow(num, 2);

        printf("Esse numero ao quadrdo eh %f\n", quadrado);
        printf("A raiz quadrada desse numeros eh %f\n", raiz);

    }

    else {
        printf("O numero que digitou eh negativo, nao ha calculos\n");
    }
    return 0;
}
