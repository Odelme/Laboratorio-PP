#include <stdio.h>

float volume(float raios)
{
    float volume,

    pi = 3.141592;

    volume = (4 * pi * (raios * raios * raios))/3;
    return volume;
}

void main()
{
    float raio;

    printf("Digite o raio da esfera: ");
    scanf("%f", &raio);

    printf("O volume desssa esfera eh %.2f", volume(raio));
}
