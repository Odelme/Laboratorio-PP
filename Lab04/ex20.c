#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int i, j, soma = 2, raiz, primo;

    for (i = 3; i <= 2000000; i += 2) {

        primo = 1;
        raiz = (int)sqrt(i);
        for (j = 3; j <= raiz; j += 2) {
            if (i % j == 0) {
                primo = 0;
                break;
            }
        }

        if (primo) {
            soma += i;
        }
    }

    printf("A soma dos numeros primos abaixo de 2 milhoes eh de %d", soma);

    return 0;
}
