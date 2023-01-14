#include <stdio.h>
#include <stdlib.h>

int main (){

    int i, j;
    int vet[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int *p = &vet[0][0];

    for(i = 0; i<9 ; i++){
        printf("Endereco: %p\tConteudo: %d\n", p + i, *(p + i));
    }

    return 0;

}
