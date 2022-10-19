#include <stdio.h>
#include <stdlib.h>

int main() {
    float alt, raio, pi;

    printf("Digite a altura do cilindro: ");
    scanf("%f", &alt);
    printf("Digite o raio do cilindro: ");
    scanf("%f", &raio);
    pi = 3.141592;
    printf ("O volume desse cilindro circular eh %f", pi*(raio*raio)*alt);
    return 0;
}
