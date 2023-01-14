#include <stdio.h>
#include <stdlib.h>

void ler(int *arra, int tamanho);
void maio_elemento (int *arra, int *vezes, int *maior, int tam);

int main(){

    int inteiro, vez, maior, N;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vet[N];
    int *p = vet;

    printf("\n");
    ler(p, N);

    maio_elemento(p,&vez,&maior,N);

    printf("\nO numero %d eh o maior e ele ocorreu %d vezes",maior, vez);

    return 0;

}

void ler(int *arra, int tamanho){
    int i;

    for(i = 0; i<tamanho ; i++){
        printf("Digite o correspondente a vet[%d]: ", i);
        scanf("%d", (arra+i));
    }
}

void maio_elemento (int *arra, int *vezes, int *maior, int tam){
    int i,j;

    *maior = *arra;


    for (i = 0; i < tam; i++){
        if (*(arra+i) > *maior){
            *maior = *(arra + i);
        }
    }

    for (i = 0, j = 0; i < tam; i++){
        if (*(arra+i) == *maior){
            j++;
        }
    }

    *vezes = j;
}
