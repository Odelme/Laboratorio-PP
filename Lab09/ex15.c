#include <stdio.h>

void ler(int *arra, int choice){
    int i;

    for(i = 0; i<choice ; i++){
        printf("Digite o correspondente a vet[%d]: ", i);
        scanf("%d", (arra+i));
    }
}

void imprimir(int *p, int tamanho){
    for(int i = 0; i<tamanho ; i++){
        printf("Conteudo vet[%d]: %d\n",i , *(p + i));
    }
}

int main(){

    float vet[10];
    float *p = vet;


    ler(p, 10);

    printf("\n");

    imprimir(p, 10);

    return 0;

}
