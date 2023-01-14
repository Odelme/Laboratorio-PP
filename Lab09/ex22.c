#include <stdio.h>
#include <stdlib.h>

void ler(int *arra, int tamanho){
    int i;

    for(i = 0; i<tamanho ; i++){
        printf("Digite o correspondente a vet[%d]: ", i);
        scanf("%d", (arra+i));
    }
}

int soma_array (int *array1, int *array2, int *result, int  tamanho_array1, int  tamanho_array2){
    int i;

    if (tamanho_array1 == tamanho_array2){
        for (i = 0; i< tamanho_array1; i++){
            *(result+i) = *(array1+i) + *(array2+i);
        }

        return 1;
    }
    else{
        return 0;
    }
}

int main(){

    int vet1[6], vet2[5], vetsoma[6];
    int *p1 = vet1, *p2 = vet2, *p3 = vetsoma;
    int i, retorno;

    ler(p1, 6);
    printf("\n");
    ler(p2, 5);

    retorno = soma_array(p1, p2, p3, 6, 5);

    printf("\n");

    if(retorno == 1){
        for (i = 0; i < 6; i++){
            printf("vet1[%d] + vet2[%d] = %d\n", i, i, vetsoma[i]);
        }
    }
    else{
        printf("VETORES DE TAMANHO DIFERENTE!!");
    }

    return 0;

}
