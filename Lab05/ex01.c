#include <stdio.h>

int dobro(int numero)
{
    return numero * 2;
}

int main()
{
    int num, dupli;

    printf("Digite um valor: ");
    scanf("%d", &num);

    dupli = dobro(num);

    printf("Seu dobro eh %d", dupli);

    return 0;

}

