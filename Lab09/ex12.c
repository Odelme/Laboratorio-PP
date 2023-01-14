#include <stdio.h>
#include <stdlib.h>

//funcao orrdenar
int ordena(int *p, int tamanho){
    for (int i = 0; i < tamanho; i++)
    {
        for (int j = i; j < tamanho; j++)
        {
            if (*(p + i) > *(p +j))
            {
                int temp = *(p +i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
        }
    }

    //definindo retorno
    if (*p == *(p+1) || *p == *(p+2))
        return 1;
    else
        return 0;
}


//funcao imprimir vetor ordenado
void imprimir(int *p, int tamanho){
    printf("Os numeros em ordem eh: ");

    for(int i = 0; i<tamanho ; i++){
        printf("%d  ", *(p + i));
    }
}

// funcao principal
int main (){

    int i, b;
    int vet[3];
    int *p = vet;

    for(i = 0; i<3 ; i++){
        printf("Digite o %d valor inteiro: ", i);
        scanf("%d", (p+i));
    }

    printf("\n");

    b = ordena(p, 3); // chamando funcao para ordenar

    //mostrando retorno
    printf("Retorno: [1]Os 3 numeros sao iguais\t[0]Numeros diferentes\n");
    printf("Retorno eh: %d\n\n", b);

    imprimir(p, 3); // chamando fucao para imprimir



    return 0;

}
