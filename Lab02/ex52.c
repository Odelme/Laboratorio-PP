#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    float amg1, amg2, amg3, rarre, premio;
    float pct1, pct2, pct3;

    printf("Valor aposta amigo 1: \n");
    scanf("%f", &amg1);
    printf("Valor aposta amigo 2: \n");
    scanf("%f", &amg2);
    printf("Valor aposta amigo 3: \n");
    scanf("%f", &amg3);
    printf("Qual o valor do premio: \n");
    scanf("%f", &premio);
    rarre = amg1 + amg2 + amg3;

    pct1 = (amg1 * 100)/rarre;
    pct2 = (amg2 * 100)/rarre;
    pct3 = (amg3 * 100)/rarre;

    printf("Amigo 1 recebera: R$%.2f.\n", premio * pct1/100);
    printf("Amigo 2 recebera: R$%.2f.\n", premio * pct2/100);
    printf("Amigo 3 recebera: R$%.2f.\n", premio * pct3/100);
    return 0;
}
