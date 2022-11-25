#include <stdio.h>

int primos(int num)
{
    if (num <= 1) {
        return 0;
    }

    for (int i = 2; i * i <= num; i++){
        if (num % i == 0) {
            return 0;
        }
    }

    return 1;
}

int contador (int valor)
{
    int contador = 0;

    for (int i = 2; i < valor; i++){
        if (primos(i) == 1) {
            contador++;
        }
    }

    return contador;
}

int main()
{
    int N, quantidade;
    printf("Digite um numero: ");
    scanf("%d", &N);

    printf("A quantidade de numeros primos abaixo de %d eh %d\n", N, contador(N));

    return 0;
}
