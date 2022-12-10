#include <stdio.h>
#include <string.h>

int main()
{
    char frase[40];
    int i, j;

    printf("Digite uma frase: ");
    gets(frase);

    char len = strlen(frase);

    for ( i = 0; i < len; i++) {
        if (frase[i] == ' ')
            for ( j = i; j < strlen(frase); j++) {
                frase[j] = frase[j + 1];
            }
    }

    printf("Essa frase com todas as letras juntas eh: \n%s", frase);

}
