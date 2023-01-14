#include <stdio.h>
#include <stdlib.h>

void frac(float num, int *inteiro, float *frac);

int main(){

    float real,parteFrac;
    int parteInt;

    printf("Digite um nuemro real: ");
    scanf("%f", &real);

    frac(real, &parteInt, &parteFrac);

    printf("A parte inteira eh: %d\n", parteInt);
    printf("A parte fracionada eh: %f\n", parteFrac);

    return 0;
}

void frac(float num, int *inteiro, float *frac){

    *inteiro = (int) num;
    *frac = num - *inteiro;

}
