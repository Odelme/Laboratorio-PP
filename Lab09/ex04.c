#include <stdio.h>
#include <stdlib.h>

void troca (int *A, int *B){
    int *p1,*p2;
    int c;

    c = *A;
    p1 = A;
    p2 = B;

    *A = *p2;
    *B = c;

}

int main (){

   int x,y;

    printf("De o valor da variavel X: ");
    scanf("%d", &x);
    printf("De o valor da variavel Y: ");
    scanf("%d", &y);

    troca (&x, &y);

    printf("\nO valor da variavel X agora eh %d\n", x);
    printf("O valor da variavel Y agora eh %d\n", y);

    return 0;

}
