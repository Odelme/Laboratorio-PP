#include <stdio.h>
#include <string.h>

int main()
{
    char palavra[30];

    printf("Digite uma palavra em letras minusculas: ");
    gets(palavra);

    char len = strlen(palavra);

    for (int i = 0; i < len; i++) {
        palavra[i] -= 32;

    }

    printf("em maiusculas eh: [%s]", palavra);

    return 0;
}
