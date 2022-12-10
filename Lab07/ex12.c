#include <stdio.h>
#include <string.h>

int main()
{
    char frase[100];
    int len, i;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    len = strlen(frase);

    for (i = 0; i < len; i++) {
        if (frase[i] != ' ' && frase[i] != '\n')
            frase[i] -= 29;
    }

    printf("Essa frase em codigo de cesar eh %s", frase);

    return 0;
}
