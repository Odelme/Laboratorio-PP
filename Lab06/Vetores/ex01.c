#include <stdio.h>

int main ()
{
    int A[6]={1,0,5,-2,-5,7};
    int soma;

    soma = A[0] + A[1] + A[5];
    A[4] = 100;

    printf("A soma das posicoes eh %d\n", soma);

    for (int i = 0; i < 6; i++){
         printf("[%d] ", A[i]);
    }
    return 0;
}
