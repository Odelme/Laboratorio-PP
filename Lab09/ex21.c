#include <stdio.h>
#include <stdlib.h>

void ler(int *arra, int tamanho){
    int i;

    for(i = 0; i<tamanho ; i++){
        printf("Digite o correspondente a vet[%d]: ", i);
        scanf("%d", (arra+i));
    }
}

int main(){

    int vet[6];
    int *p = vet;
    int i;

    ler(p, 6);

    printf("\n");

    for (i = 0; i < 6; i++){
        printf("A posicao vet[%d] somando mais 1 eh: %d\n", i, *(p+i)+1);
    }

    return 0;

}
