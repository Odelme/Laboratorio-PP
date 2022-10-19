#include <stdio.h>
#include <math.h>

int main() {
    float degrau, fim;

    printf("Qual a altura que voce quer alcancar na escada?\n");
    scanf("%f", fim);
    degrau= 2;
    fim= fim/degrau;
    printf("Para alcancar seu objetivo, devera subir %.2f escadas\n", fim);

    return 0;
}
