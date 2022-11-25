#include <stdio.h>

void media(float nota1, float nota2, float nota3)
{
    char escolha;

        printf("\nQual media deseja calcular?\n[A] - Media Aritimetica\n[P] - Media ponderada\n");
        printf("Qual sua escolha: ");
        fflush(stdin);
        scanf("%c", &escolha);

    if (escolha == 'A' || escolha == 'a') {

        float media_aritimetica = (nota1 + nota2 + nota3) / 3;
        printf("\n========RESULTADO=========\n");
        printf("A media aritimetica eh %.2f\n", media_aritimetica);

    } else if (escolha == 'P' || escolha == 'p') {

        float media_ponderada = ((nota1 * 5) + (nota2 * 3) + (nota3 * 2)) / 10;
        printf("\n========RESULTADO=========\n");
        printf("A media ponderada eh %.2f\n", media_ponderada);

    }
}

void main()
{
    float n1, n2, n3;

    printf("Digite a primeira nota: ");
    scanf("%f", &n1);
    printf("Digite a segunda nota: ");
    scanf("%f", &n2);
    printf("Digite a terceira nota: ");
    scanf("%f", &n3);

    media(n1, n2, n3);

}
