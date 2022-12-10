#include <stdio.h>
#include <string.h>

int main ()
{
    char str[50];
    int i, tamanho;

    printf("Escreva uma palavra: ");
    fgets(str, 50, stdin);

    tamanho = strlen(str);

    printf("Essa palavra de tras pra frente eh: \n");

    for(i = tamanho; i >= 0; i--)
    {
        printf("%c", str[i]);
    }

    return 0;
}
