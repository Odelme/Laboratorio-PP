#include <stdio.h>

void notas(float *nota1, float *nota2)
{
    printf("Informe a primeira nota: ");
    scanf("%f", nota1);
    printf("Informe a segunda nota: ");
    scanf("%f", nota2);
}

void medias(float nota1, float nota2, float *media_simples, float *media_ponderada)
{
    *media_simples = (nota1 + nota2) / 2;
    *media_ponderada = (nota1 + (nota2 * 2)) / 3;
}

void main()
{
    float nota1, nota2, media_simples, media_ponderada;

    notas(&nota1, &nota2);
    medias(nota1, nota2, &media_simples, &media_ponderada);

    printf("\nMedia simples: %.2f\n", media_simples);
    printf("Media ponderada: %.2f\n\n", media_ponderada);

}
