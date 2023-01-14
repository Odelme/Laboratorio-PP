#include <stdio.h>

void preencher(int *arra, int choice){
    int i;

    for (i = 0; i < 10; i++){
        *(arra + i) = choice;
    }
}

void imprimir(int *p, int tamanho){
    for(int i = 0; i<tamanho ; i++){
        printf("Conteudo vet[%d]: %d\n",i , *(p + i));
    }
}

int main(){

    int vet[10];
    int escolha;
    int *p = vet;

    printf("Digite o valor que deseja preencher todo o vetor: ");
    scanf("%d", &escolha);

    preencher(p, escolha);

    printf("\n");

    imprimir(p, 10);

    return 0;

}
