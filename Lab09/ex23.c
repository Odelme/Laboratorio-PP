#include <stdio.h>
#include <stdlib.h>

int maior(int *arra, int N){

    int i, maior;

    maior = *arra;

    for (i = 0; i < N; i++){
        if (*(arra+i) > maior){
            maior = *(arra + i);
        }
    }

    return maior;
}

void ler(int *arra, int tamanho){
    int i;

    for(i = 0; i<tamanho ; i++){
        printf("Digite o correspondente a vet[%d]: ", i);
        scanf("%d", (arra+i));
    }
}

int main(){

    int N, k;

    int big, i, j;


    printf("Digite o tamanho do vetor: ");
    scanf("%d", &N);

    int vet[N];
    int *p = vet;

    printf("\n");
    ler(p, N);

    big = maior(p, N);

    printf("\nDigite o valor k, correspondente a quantidade de elementos por linha: ");
    scanf("%d", &k);

    for(i = 0, j =0; i < N; i++){
        if(j == k){
            printf("\n");
            j = 0;
            i--;
        }
        else {
            printf("%d ", *(p+i));
            j++;
        }

    }

    return 0;
}
