#include <stdio.h>
#include <stdlib.h>

int main (){

    int x, y;
    int *p1, *p2;


    printf("De o valor da variavel X: ");
    scanf("%d", &x);
    printf("De o valor da variavel Y: ");
    scanf("%d", &y);

    p1 = &x;
    p2 = &y;

    printf("\nValor da variavel X eh %d e endereco de X eh: %d\n", *p1,p1);
    printf("Valor da variavel Y eh %d e endereco de Y eh: %d\n", *p2,p2);


    if(p1 > p2){
        printf("\nEndereco de meoria X maior que de Y\n");
    } else {
         printf("\nEndereco de meoria Y maior que de X\n");

    }

    return 0;

}

