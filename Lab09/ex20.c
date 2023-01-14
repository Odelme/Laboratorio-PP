#include <stdio.h>
#include <stdlib.h>

void ler(float *arra, int tamanho);
int negativo(float *vet, int N);

int main(){

    float vet[5];
    float *p = vet;
    int negativos;

    ler(p, 5);

    negativos = negativo(p, 5);

    printf("\nA quantidade de negaivos nessa array eh %d", negativos);

		return 0;

}

void ler(float *arra, int tamanho){
    int i;

    for(i = 0; i<tamanho ; i++){
        printf("Digite o correspondente a vet[%d]: ", i);
        scanf("%d", (arra+i));
    }
}

int negativo(float *vet, int N){

    int i, positivo = 0, negativo = 0;

    for(i = 0; i < N; i++){
        if(0 < *(vet+i)){
            positivo++;
        }
        else{
            negativo++;
        }
    }

    return negativo;
}
