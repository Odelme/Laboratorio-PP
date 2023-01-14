#include <stdio.h>
#include <stdlib.h>

int main (){

    int i;
    int vet[5];
    int *p = vet;

    for(i = 0; i<5 ; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", (p+i));
    }

    printf("\n");

    for(i = 0; i<5 ; i++){
        printf("O dobro da posicao %d eh: %d\n", i, *(p + i) * 2);
    }

    return 0;

}
