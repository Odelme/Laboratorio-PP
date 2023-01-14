#include <stdio.h>
#include <stdlib.h>

void maior (int *A, int *B){
    int c;

    if (*B > *A){
    c = *B;
    *B = *A;
    *A = c;

    printf("\nHouve troca!!\n");
    }

}

int main (){

   int x,y;

    printf("De o valor da variavel X: ");
    scanf("%d", &x);
    printf("De o valor da variavel Y: ");
    scanf("%d", &y);

    maior (&x, &y);

    printf("\nO valor da variavel X agora eh %d\n", x);
    printf("O valor da variavel Y agora eh %d\n", y);

    return 0;

}
