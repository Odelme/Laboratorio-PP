#include <stdio.h>
#include <stdlib.h>

int soma (int *num1, int num2){
    *num1 = *num1 + num2;
}

int main (){

    int A, B;

    printf("Digite o numero inteiro A: ");
    scanf("%d", &A);
    printf("Digite o numero inteiro B: ");
    scanf("%d", &B);

    soma(&A, B);

    printf("\nO valor de A agora eh %d\n", A);
    printf("O valor de B agora eh %d\n", B);

    return 0;

}
