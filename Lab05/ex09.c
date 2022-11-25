#include <stdio.h>

float volume(float altura, float raio)
{
    float pi = 3.141592;
    float volume = ((pi) * (raio * raio)) * altura;

    return volume;

}

int main()
{
    float altura, raio, v;

    printf("Digite o valor da altura em metros do cilindro: ");
    scanf("%f", &altura);
    printf("Digite o valor do raio em metros do cilindro: ");
    scanf("%f", &raio);

    v = volume(altura, raio);

    printf("O volume do cilindro eh %.2fm3", v);

    return 0;
}
