#include <stdio.h>
#include <stdlib.h>

void calc_esfera(float R, float *area, float *volume);

int main(){

    float raio, A, V;

    printf("digite o raio da esfera: ");
    scanf("%f",&raio);

    calc_esfera(raio, &A, &V);

    printf("A area dessa superfcie eh: %.3f\n", A);
    printf("O volume dessa superfcie eh: %.3f\n", V);

    return 0;
}

void calc_esfera(float R, float *area, float *volume){
    *area = 4 * 3.1415 * (R*R);
    *volume = 4/3 * 3.1415 * (R*R*R);
}

