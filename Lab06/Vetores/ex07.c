#include <stdio.h>

int main()
{
    int valor[6]; //decalarcao de vetor
    int pares = 0, impares = 0; //decalarcao de variaveis
    int i; //decalarcao de variaveis do for

    for (i = 0; i < 6; i++) {
        printf("Digite um valor inteiro que equivale a posicao [%d]: ", i);
        scanf("%d", &valor[i]);

        if (valor[i] % 2 == 0) {
            pares += valor[i];
            printf("valor %d eh par\n", valor[i]);

        }
        else {
            impares += 1;
            printf("valor %d eh impar\n", valor[i]);

        }
    }

    printf("\nA soma dos numeros pares eh %d\n", pares);
    printf("A quantidade de impares eh %d\n", impares);

    return 0;
}
