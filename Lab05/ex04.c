#include <stdio.h>
#include <math.h>

void quadrado(int num1)
{
    int raiz;

    raiz = sqrt(num1);


    if ((raiz * raiz) == num1) {
        printf("O numero %d eh um quadrado perfeito", num1);

    } else {
        printf("O numero %d nao eh um quadrado perfeito", num1);

    }


}

int main()
{
    int numero;

    printf("Digite um numero inteiro maior que zero: ");
    scanf("%d", &numero);

    quadrado(numero);

    return 0;

}
