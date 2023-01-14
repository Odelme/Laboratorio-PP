#include <stdio.h>
#include <stdlib.h>

int dobro (int *A, int *B){

    *A = *A * 2;
    *B = *B * 2;

    return (*A + *B);
}

int main (){

   int x,y, soma;

    printf("De o valor da variavel X: ");
    scanf("%d", &x);
    printf("De o valor da variavel Y: ");
    scanf("%d", &y);

    soma = dobro(&x, &y);

    printf("\nA + B = %d\n", soma);

    printf("\nO valor da variavel X agora eh %d\n", x);
    printf("O valor da variavel Y agora eh %d\n", y);

    return 0;

}
