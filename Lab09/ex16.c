#include <stdio.h>
#include <stdlib.h>

int main(){
    int A, *B, **C, ***D;

    printf("Digite um valor: ");
    scanf("%d", &A);

    B = &A;
    C = &B;
    D = &C;

    printf("\nO dobro de %d eh: %d\n", A, *B * 2);
    printf("O dobro de %d eh: %d\n", A, **C * 3);
    printf("O dobro de %d eh: %d\n", A, ***D * 4 );

    return 0;
}

