#include <stdio.h>
#include <stdlib.h>

void imprimir(int *p, int tamanho){
    for(int i = 0; i<tamanho ; i++){
        printf("Endereco: %p\tConteudo: %d\n", p + i, *(p + i));
    }
}

int main (){

    int i;
    int vet[5];
    int *p = vet;

    for(i = 0; i<5 ; i++){
        printf("Digite o valor da posicao %d: ", i);
        scanf("%d", (p+i));
    }

    printf("\n");

    imprimir(p, 5);

    printf("\n");

    for(i = 0; i<5 ; i++){
        if ((*(p+i) % 2) == 0){
            printf("O valor eh par, o endereco dessa posicao eh: %p\n", p+i );
        }
    }

    return 0;

}
