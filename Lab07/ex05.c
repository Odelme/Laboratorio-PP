#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30];

    printf("Digite uma palavra com letras maiusculas: ");
    gets(palavra);

    char len = strlen(palavra);

    for (int i = 0; i < len; i++) {
        palavra[i] += 32;

    }

    printf("Em minusculo: %s", palavra);

    return 0;
}
