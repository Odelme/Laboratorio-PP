#include <stdio.h>
#include <stdlib.h>

int main (){

    int inteiro = 10;
    float real = 1.10;
    char caracter = 'X';

    int *pi, *pf, *pc;

    pi = &inteiro;
    pf = &real;
    pc = &caracter;

    printf("Conteudo apontado por pi: %d\n", *pi);
    printf("Conteudo apontado por pf: %.3f\n", *((float*)pf));
    printf("Conteudo apontado por pc: %c\n", *((char*)pc));


    return 0;

}
